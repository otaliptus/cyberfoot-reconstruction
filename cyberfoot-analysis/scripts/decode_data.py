from pathlib import Path
import struct,json,collections
R=Path(__file__).resolve().parents[1];O=R/'decoded-data';O.mkdir(exist_ok=True)
def short(b,o,maxlen):
 n=b[o]; assert n<=maxlen,(o,n,maxlen);return b[o+1:o+1+n].decode('cp1252',errors='replace')
clubs=[]
for p in sorted((R/'payload/teams').glob('*.b15')):
 b=p.read_bytes();assert len(b)==2008
 c=dict(file=p.name,header_u32=struct.unpack_from('<I',b)[0],header_bytes=list(b[4:8]),name=short(b,8,25),full_name=short(b,34,25),stadium=short(b,60,30),asset1=short(b,91,25),asset2=short(b,117,25),manager=short(b,143,30),header_tail_hex=b[174:208].hex(),players=[])
 for i in range(40):c['players'].append(dict(slot=i,name=short(b,208+36*i,35),attribute_bytes=[b[1648+40*j+i] for j in range(9)]))
 clubs.append(c)
(O/'clubs.json').write_text(json.dumps(clubs,ensure_ascii=False,indent=2))
p=R/'payload/confign1.nam';b=p.read_bytes();n=struct.unpack_from('<I',b)[0];assert len(b)==4+21*n
names=[short(b,4+21*i,20) for i in range(n)]
(O/'name-pool.json').write_text(json.dumps(names,ensure_ascii=False,indent=2))
langs=[]
for p in sorted((R/'payload/languages').glob('*.cft')):
 b=p.read_bytes();n=struct.unpack_from('<I',b)[0];i=4;entries=[]
 for k in range(n):
  meta,l=struct.unpack_from('<II',b,i);i+=8;v=b[i:i+2*l].decode('utf-16le');i+=2*l;entries.append(dict(index=k,metadata=meta,text=v))
 assert i==len(b),(p,i,len(b))
 (O/(p.stem+'-language.json')).write_text(json.dumps(entries,ensure_ascii=False,indent=2));langs.append(dict(file=p.name,count=n,name=entries[0]['text']))
(O/'languages.json').write_text(json.dumps(langs,ensure_ascii=False,indent=2))
print('Decoded:',len(clubs),'clubs;',sum(len(c['players']) for c in clubs),'player slots;',len(names),'name-pool records;',langs)
