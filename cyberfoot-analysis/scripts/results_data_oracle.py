from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x100000)
H=0x1300100;FORM=0x1330000;BP=0x800d000;pool=0x1340000;career=read32(0x66ac78);calendar=read32(0x66b574)
u.mem_write(read32(0x66b154),p32(H));u.mem_write(career+0x16c,p32(1))
language=json.loads((R.parent/'cyberfoot-web/native-port/language.json').read_text());output={}
fields={0x384:'Label3',0x380:'Label4',0x32c:'Label5',0x3c0:'Label1',0x3a4:'Label10',0x3a0:'Label11',0x39c:'Label16',0x398:'Label17',0x394:'Label22',0x390:'Label23',0x38c:'Label24',0x388:'Label25',0x330:'Label12',0x334:'Label33',0x338:'Label13',0x33c:'Label34',0x340:'Label32',0x344:'Label35'}
for offset in fields:u.mem_write(FORM+offset,p32(offset))
def text_at(ptr,wide):
 if not ptr:return ''
 width=2 if wide else 1;b=bytearray()
 while True:
  c=bytes(u.mem_read(ptr+len(b),width))
  if c==bytes(width):break
  b.extend(c)
 return b.decode('utf-16le' if wide else 'cp1252')
def alloc(text,wide):
 global pool
 b=text.encode('utf-16le' if wide else 'cp1252');ptr=pool+8;pool+=len(b)+32;u.mem_write(ptr-4,p32(len(b)));u.mem_write(ptr,b+bytes(2 if wide else 1));return ptr
def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x409dd8:u.mem_write(edx,p32(alloc(str(eax if eax<2**31 else eax-2**32),False)))
 elif a==0x404bac:u.mem_write(eax,p32(alloc(text_at(read32(eax),False)+text_at(edx,False),False)))
 elif a==0x4051d4:u.mem_write(eax,p32(alloc(text_at(edx,False),True)))
 elif a==0x404c64:
  text=''.join(text_at(read32(sp+4+j*4),False) for j in reversed(range(edx)));u.mem_write(eax,p32(alloc(text,False)));pop+=edx*4
 elif a==0x642c50:u.mem_write(edx,p32(alloc(language[eax]['text'],True)))
 elif a in [0x4e1414,0x466238]:output[fields[eax]]=text_at(edx,a==0x4e1414)
 elif a==0x5f8a14:lineup_calls.append([edx,uc.reg_read(UC_X86_REG_ECX)])
 elif a==0x4060a8:u.mem_write(eax,p32(0x1320000))
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x409dd8,0x404bac,0x4051d4,0x404c64,0x642c50,0x4e1414,0x466238,0x4060a8,0x5f8a14]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
def execute(start,end):
 u.mem_write(BP-0x200,bytes(0x200));u.mem_write(BP-4,p32(FORM));u.reg_write(UC_X86_REG_EBP,BP);u.reg_write(UC_X86_REG_ESP,SP);u.reg_write(UC_X86_REG_FPCW,0x1332);u.reg_write(UC_X86_REG_FPTAG,0xffff);u.emu_start(start,end,count=100000);assert u.reg_read(UC_X86_REG_EIP)==end
r=random.Random(567);cases=[]
for i in range(1000):
 pool=0x1340000;data=bytearray(r.randbytes(600));output={}
 for off in [8,12,0x4c,0x50,0x210,0x228,0x214,0x22c,0x218,0x230,0x21c,0x234]:struct.pack_into('<i',data,off,r.randrange(-5,250))
 for off in [0x20c,0x224]:struct.pack_into('<i',data,off,r.randrange(1,21474800))
 for off in [0x23c,0x240,0x244,0x248,0x24c,0x250]:struct.pack_into('<i',data,off,r.randrange(-1,4))
 data[0x48]=r.randrange(2);u.mem_write(H,bytes(data));execute(0x5f7f45,0x5f85e6)
 cases.append({'kind':'detail','bytes':data.hex(),'expected':output})
for i in range(600):
 kind=r.randrange(11);subgroup=r.randrange(4);national=r.randrange(4);group=national if kind==3 else subgroup if kind in [1,2,4,6] else 0;date=42000.5;rows=[]
 for j in range(r.randrange(30)):
  data=bytearray(600);struct.pack_into('<i',data,0x30,r.choice([kind,r.randrange(11)]));struct.pack_into('<i',data,0x3c,r.choice([group,r.randrange(4)]));struct.pack_into('<d',data,0x40,r.choice([date,date+1,date-1]));rows.append(data)
 u.mem_write(H-4,p32(len(rows)));u.mem_write(H,b''.join(rows));u.mem_write(career+0x88,p32(kind));u.mem_write(calendar+8,struct.pack('<d',date));u.mem_write(BP-0x200,bytes(0x200));u.mem_write(BP-8,p32(group));u.reg_write(UC_X86_REG_EBP,BP);u.reg_write(UC_X86_REG_ESP,SP);u.reg_write(UC_X86_REG_FPCW,0x1332);u.reg_write(UC_X86_REG_FPTAG,0xffff);u.emu_start(0x5f619a,0x5f6228,count=100000)
 count=u.reg_read(UC_X86_REG_EDI);ids=list(struct.unpack('<'+'i'*count,u.mem_read(0x1320000,count*4))) if count else []
 cases.append({'kind':'selection','competition':kind,'subgroup':subgroup,'nationalGroup':national,'currentDate':date,'bytes':b''.join(rows).hex(),'expected':ids})
for i in range(600):
 rows=[];history=r.randrange(3);clubs=[r.randrange(3),r.randrange(3)]
 for j in range(r.randrange(60)):
  row=[r.choice([history,r.randrange(4)]),j,r.randrange(0,28),0,r.randrange(2),r.randrange(3),r.randrange(4),r.randrange(3)];rows.append(row)
 u.mem_write(read32(0x66b128),p32(H));u.mem_write(H-4,p32(len(rows)));u.mem_write(H,b''.join(p32(n) for row in rows for n in row));u.mem_write(BP-0x200,bytes(0x200));u.mem_write(BP-8,p32(history));u.mem_write(BP-0x20,p32(clubs[0])+p32(clubs[1]));u.reg_write(UC_X86_REG_EBP,BP);u.reg_write(UC_X86_REG_ESP,SP);lineup_calls=[];u.emu_start(0x5f8632,0x5f8747,count=100000);assert u.reg_read(UC_X86_REG_EIP)==0x5f8747
 cases.append({'kind':'lineups','historyId':history,'clubs':clubs,'rows':rows,'expected':lineup_calls})
(R.parent/'cyberfoot-web/native-port/tests/results-data-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('1000 result-label,600 history-selection,600 archived-lineup original blocks')
