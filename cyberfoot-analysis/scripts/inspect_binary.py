from pathlib import Path
import pefile, hashlib, json, re, collections, struct
ROOT=Path(__file__).resolve().parents[1]; OUT=ROOT/'reports'; RES=ROOT/'resources'; RES.mkdir(exist_ok=True)
manifest=[]; binaries=[]
for base in ['extracted','payload']:
 for p in sorted((ROOT/base).rglob('*')):
  if not p.is_file(): continue
  b=p.read_bytes(); manifest.append(dict(path=str(p.relative_to(ROOT)),size=len(b),sha256=hashlib.sha256(b).hexdigest()))
  if b[:2]!=b'MZ':continue
  pe=pefile.PE(data=b); item=dict(path=str(p.relative_to(ROOT)),machine=hex(pe.FILE_HEADER.Machine),timestamp=pe.FILE_HEADER.TimeDateStamp,image_base=hex(pe.OPTIONAL_HEADER.ImageBase),entry=hex(pe.OPTIONAL_HEADER.ImageBase+pe.OPTIONAL_HEADER.AddressOfEntryPoint),signature_bytes=pe.OPTIONAL_HEADER.DATA_DIRECTORY[4].Size,sections=[],imports={},resources=[])
  for s in pe.sections: item['sections'].append(dict(name=s.Name.decode().rstrip('\0'),rva=hex(s.VirtualAddress),size=s.SizeOfRawData,entropy=round(s.get_entropy(),3),flags=hex(s.Characteristics)))
  for imp in getattr(pe,'DIRECTORY_ENTRY_IMPORT',[]):item['imports'].setdefault(imp.dll.decode(),[]).extend([dict(name=(x.name.decode() if x.name else '#'+str(x.ordinal)),address=hex(x.address)) for x in imp.imports])
  def walk(d,parts=[]):
   for e in d.entries:
    path=parts+[str(e.name or e.id)]
    if hasattr(e,'directory'):walk(e.directory,path)
    else:
     r=e.data.struct; raw=pe.get_data(r.OffsetToData,r.Size); name=p.stem+'_'+'_'.join(path)+'.bin'; (RES/name).write_bytes(raw); item['resources'].append(dict(path='/'.join(path),file=name,size=r.Size,dfm=raw[:4]==b'TPF0'))
  if hasattr(pe,'DIRECTORY_ENTRY_RESOURCE'):walk(pe.DIRECTORY_ENTRY_RESOURCE)
  strings=[]
  for m in re.finditer(rb'[\x20-\x7e\xa0-\xff]{5,}',b):
   try: va=hex(pe.OPTIONAL_HEADER.ImageBase+pe.get_rva_from_offset(m.start()))
   except:va='overlay'
   strings.append(dict(offset=hex(m.start()),va=va,text=m.group().decode('cp1252',errors='replace')))
  (OUT/(p.stem+'-strings.json')).write_text(json.dumps(strings,ensure_ascii=False,indent=2))
  binaries.append(item)
(OUT/'manifest.json').write_text(json.dumps(manifest,indent=2)); (OUT/'pe-analysis.json').write_text(json.dumps(binaries,indent=2))
for x in binaries: print(x['path'], 'entry',x['entry'],'signature',x['signature_bytes'],'sections',[(s['name'],s['entropy']) for s in x['sections']], 'DLLs',list(x['imports']), 'forms',sum(r['dfm'] for r in x['resources']))
print('File types:',collections.Counter(Path(x['path']).suffix for x in manifest))
