from pathlib import Path
import re,struct,json,pefile
R=Path(__file__).resolve().parents[1]; b=(R/'payload/cf2015.exe').read_bytes(); pe=pefile.PE(data=b); base=pe.OPTIONAL_HEADER.ImageBase
u32=lambda off:struct.unpack_from('<I',b,off)[0]
def off(va):return pe.get_offset_from_rva(va-base)
classes=[]
for m in re.finditer(rb'TForm[0-9]{1,2}(?![0-9])',b):
 n=m.group(); start=m.start()-1
 if b[start]!=len(n):continue
 nameva=base+pe.get_rva_from_offset(start)
 for ptr in re.finditer(re.escape(struct.pack('<I',nameva)),b):
  p=ptr.start(); vmt=base+pe.get_rva_from_offset(p)+44
  try:
   if u32(off(vmt-76))!=vmt:continue
   mt=u32(off(vmt-52)); methods=[]
   if mt:
    q=off(mt); count=struct.unpack_from('<H',b,q)[0]; q+=2
    for _ in range(count):
     sz,addr=struct.unpack_from('<HI',b,q); l=b[q+6]; name=b[q+7:q+7+l].decode('cp1252'); methods.append(dict(name=name,address=hex(addr)));q+=sz
   classes.append(dict(name=n.decode(),vmt=hex(vmt),methods=methods))
  except Exception:pass
(R/'reports/delphi-methods.json').write_text(json.dumps(classes,indent=2))
with (R/'reports/delphi-symbols.tsv').open('w') as f:
 for c in classes:
  for m in c['methods']:f.write(f"{m['address']}\t{c['name']}_{m['name']}\n")
print(len(classes),'classes',sum(len(c['methods']) for c in classes),'named methods')
for c in classes:print(c['name'], ', '.join(m['name'] for m in c['methods'])[:250])
