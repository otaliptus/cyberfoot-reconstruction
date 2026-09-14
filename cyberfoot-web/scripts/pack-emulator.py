"""Build smaller, content-addressed emulator downloads without dropping files."""
from pathlib import Path
import zipfile,io,hashlib,json,gzip,posixpath,stat,struct,copy
root=Path(__file__).resolve().parents[1]/'public/emulator'
out=root/'packages';out.mkdir(exist_ok=True)
manifest={}
def publish(name,data,**extra):
 digest=hashlib.sha256(data).hexdigest()[:16];parts=[]
 for i,start in enumerate(range(0,len(data),3_000_000)):
  path=f'packages/{name}-{digest}.{i}';(root/path).write_bytes(data[start:start+3_000_000]);parts.append(path)
 manifest[name]={'parts':parts,'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),**extra}
raw=b''.join((root/f'wine.part{i}').read_bytes() for i in range(17));original=zipfile.ZipFile(io.BytesIO(raw));target=io.BytesIO();seen={};aliases={}
# Preserve original compressed streams; recompressing DLLs makes them larger.
central=[];cursor=original.start_dir
for source in original.infolist():
 entry=copy.copy(source);data=original.read(source);digest=hashlib.sha256(data).hexdigest()
 central_size=46+sum(struct.unpack_from('<HHH',raw,cursor+28));record=bytearray(raw[cursor:cursor+central_size]);cursor+=central_size
 assert source.flag_bits==0
 local_size=30+sum(struct.unpack_from('<HH',raw,source.header_offset+26))+source.compress_size
 local=raw[source.header_offset:source.header_offset+local_size]
 if entry.filename.endswith('.nls') and digest in seen:
  aliases[entry.filename]=seen[digest];continue
 elif entry.filename.endswith('.nls'):seen[digest]=entry.filename
 struct.pack_into('<I',record,42,target.tell());target.write(local);central.append(record)
start=target.tell()
for record in central:target.write(record)
length=target.tell()-start;target.write(struct.pack('<IHHHHIIH',0x06054b50,0,0,len(central),len(central),length,start,0))
packed=target.getvalue();check=zipfile.ZipFile(io.BytesIO(packed))
for entry in original.infolist():
 resolved=aliases.get(entry.filename,entry.filename)
 assert check.read(resolved)==original.read(entry),entry.filename
publish('boxedwine.zip',packed,originalBytes=len(raw),deduplicatedFiles=len(aliases),restoreAliases=aliases)
raw=b''.join((root/f'cyberfoot.part{i}').read_bytes() for i in range(3));original=zipfile.ZipFile(io.BytesIO(raw));target=io.BytesIO()
with zipfile.ZipFile(target,'w') as z:
 for entry in original.infolist():
  entry=copy.copy(entry)
  if entry.filename=='cf2015.exe':entry.compress_type=zipfile.ZIP_STORED
  z.writestr(entry,original.read(entry.filename))
packed=target.getvalue();check=zipfile.ZipFile(io.BytesIO(packed))
for entry in original.infolist():assert check.read(entry.filename)==original.read(entry)
# PE file offsets are verified from the original image; runtime modifies only
# Randomize's first instruction and initial RandSeed, never registration code.
exe=check.getinfo('cf2015.exe');offset=exe.header_offset+30+len(exe.filename.encode())+len(exe.extra)
pe=check.read(exe);assert hashlib.sha256(pe).hexdigest()=='bb5132cfcf9c7f17733c6d8c73ff0cebb5b4b19e34dff34c614919beedc308d0'
peoff=struct.unpack_from('<I',pe,0x3c)[0];n=struct.unpack_from('<H',pe,peoff+6)[0];opts=struct.unpack_from('<H',pe,peoff+20)[0]
def file_offset(rva):
 for i in range(n):
  _,size,va,rawsize,rawptr=struct.unpack_from('<8sIIII',pe,peoff+24+opts+i*40)
  if va<=rva<va+rawsize:return rawptr+rva-va
 raise ValueError(rva)
patch={'offset':offset,'size':exe.file_size,'randomize':file_offset(0x2b90),'seed':file_offset(0x262008),'header':exe.header_offset,'crc':exe.CRC}
assert pe[patch['randomize']]==0x83
publish('cyberfoot.zip',gzip.compress(packed,compresslevel=9,mtime=0),encoding='gzip',patch=patch,originalBytes=len(raw))
(root/'packages.json').write_text(json.dumps(manifest,indent=2)+'\n')
print(json.dumps({k:{x:v[x] for x in ['bytes','originalBytes']} for k,v in manifest.items()},indent=2))
