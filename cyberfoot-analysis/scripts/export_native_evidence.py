"""Extract UI and numeric evidence; never execute or patch the game."""
from pathlib import Path
import json, struct, hashlib, io, runpy
from PIL import Image
import pefile
R=Path(__file__).resolve().parents[1]
OUT=R.parent/'cyberfoot-web'/'native-port'
OUT.mkdir(exist_ok=True)
namespace=runpy.run_path(str(R/'scripts/decode_forms.py'))
Base=namespace['DFM']
class Resources(Base):
 def value(self):
  if self.b[self.i]==10:
   self.i+=1
   n=self.num('I');b=self.take(n)
   return {'binary_bytes':n,'raw_hex':b.hex()}
  return super().value()
assets=OUT/'assets';assets.mkdir(exist_ok=True)
forms=[];manifest=[]
def extract(node,form):
 for key,v in node['properties'].items():
  if not isinstance(v,dict) or 'raw_hex' not in v:continue
  raw=bytes.fromhex(v.pop('raw_hex'));stem=f'{form}-{node["name"]}-{key.replace(".","-")}'
  entry={'form':form,'control':node['name'],'property':key,'sha256':hashlib.sha256(raw).hexdigest(),'size':len(raw)}
  image=None
  # TPicture serializes a Delphi class-name prefix followed by the image.
  for signature in [b'\xff\xd8\xff',b'\x89PNG\r\n\x1a\n',b'BM',b'GIF8']:
   pos=raw.find(signature)
   if pos<0:continue
   try:
    image=Image.open(io.BytesIO(raw[pos:]));image.load();break
   except Exception:pass
  if image is not None:
   image.convert('RGBA').save(assets/(stem+'.png'))
   entry.update(path='assets/'+stem+'.png',width=image.width,height=image.height)
   v['asset']=entry['path']
  else:
   (assets/(stem+'.bin')).write_bytes(raw);entry['raw_path']='assets/'+stem+'.bin'
  manifest.append(entry)
 for child in node['children']:extract(child,form)
for path in sorted((R/'resources').glob('cf2015_10_TFORM*.bin')):
 d=Resources(path.read_bytes());form=d.obj();assert d.i==len(d.b)
 extract(form,form['name']);forms.append(form)
(OUT/'forms.json').write_text(json.dumps(forms,ensure_ascii=False,indent=2))
(OUT/'asset-manifest.json').write_text(json.dumps(manifest,indent=2))
pe=pefile.PE(str(R/'payload/cf2015.exe'))
tables={}
for address,count,label in [(0x66a404,12,'shot'),(0x66a434,12,'pass'),(0x66a464,12,'mirror'),(0x66a494,12,'duel'),(0x66a4c4,12,'foul'),(0x66a4f4,12,'foulAfterDuel'),(0x66a524,12,'moveA'),(0x66a554,12,'moveB'),(0x66a584,12,'moveC'),(0x66a5b4,12,'moveD'),(0x66a768,6,'restartZones')]:
 # The code indexes zones 1..12 against a base immediately before the table.
 first=address if label=='restartZones' else address+4
 data=pe.get_data(first-pe.OPTIONAL_HEADER.ImageBase,count*4)
 tables[label]={'address':hex(first),'values':list(struct.unpack('<'+'i'*count,data))}
(OUT/'match-tables.json').write_text(json.dumps(tables,indent=2))
print(json.dumps({'forms':len(forms),'images':sum('path' in x for x in manifest),'binary_resources':len(manifest),'tables':tables},indent=2))
