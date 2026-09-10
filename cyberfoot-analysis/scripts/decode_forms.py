from pathlib import Path
import struct,json
R=Path(__file__).resolve().parents[1]
class DFM:
 def __init__(self,b):self.b=b;self.i=4
 def take(self,n):v=self.b[self.i:self.i+n];assert len(v)==n;self.i+=n;return v
 def num(self,f):return struct.unpack('<'+f,self.take(struct.calcsize('<'+f)))[0]
 def short(self):return self.take(self.num('B')).decode('cp1252',errors='replace')
 def value(self):
  t=self.num('B')
  if t==0:return None
  if t==1:
   a=[]
   while self.b[self.i]:a.append(self.value())
   self.i+=1;return a
  if t in [2,3,4,15,16,19]:return self.num({2:'b',3:'h',4:'i',15:'f',16:'q',19:'q'}[t])
  if t in [5,17]:return {'numeric_raw':self.take(10 if t==5 else 8).hex()}
  if t in [6,7]:return self.short()
  if t in [8,9]:return t==9
  if t==10:
   n=self.num('I');self.take(n);return {'binary_bytes':n}
  if t==11:
   a=[]
   while True:
    s=self.short()
    if not s:return a
    a.append(s)
  if t in [12,18,20]:
   n=self.num('I');return self.take(n*(2 if t==18 else 1)).decode({12:'cp1252',18:'utf-16le',20:'utf-8'}[t],errors='replace')
  if t==13:return None
  if t==14:
   a=[]
   while self.b[self.i]:
    tag=self.num('B');assert tag==1,tag;a.append(self.props())
   self.i+=1;return a
  raise ValueError((t,self.i))
 def props(self):
  a={}
  while True:
   k=self.short()
   if not k:return a
   a[k]=self.value()
 def obj(self):
  flags=0
  if self.b[self.i]&0xf0==0xf0:
   flags=self.num('B')&15
   if flags&2:self.value()
  c=self.short();name=self.short();props=self.props();children=[]
  while self.b[self.i]:children.append(self.obj())
  self.i+=1;return dict(class_name=c,name=name,properties=props,children=children)
forms=[];errors=[]
for p in sorted((R/'resources').glob('cf2015_10_TFORM*.bin')):
 try:
  d=DFM(p.read_bytes());o=d.obj();assert d.i==len(d.b),(d.i,len(d.b));forms.append(o)
 except Exception as e:errors.append((p.name,str(e)))
(R/'reports/forms.json').write_text(json.dumps(forms,ensure_ascii=False,indent=2))
(R/'reports/form-errors.json').write_text(json.dumps(errors,indent=2))
def flatten(o):
 yield o
 for ch in o['children']:yield from flatten(ch)
with (R/'reports/forms-summary.tsv').open('w') as f:
 for o in forms:
  nodes=list(flatten(o));caps=[str(n['properties'].get('Caption','')) for n in nodes];events=[n['name']+'.'+k+'='+str(v) for n in nodes for k,v in n['properties'].items() if k.startswith('On')]
  f.write('\t'.join([o['class_name'],str(len(nodes)),' | '.join(c for c in caps if c)[:1400],' | '.join(events)])+'\n')
print('Decoded forms:',len(forms),'errors:',errors)
