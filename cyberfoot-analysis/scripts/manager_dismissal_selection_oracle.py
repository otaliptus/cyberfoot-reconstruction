from native_oracle import *
import gzip
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x20000)
M=0x1400100;C=0x1404000;pool=0x1410000;career=read32(0x66ac78)
u.mem_write(read32(0x66b718),p32(M));u.mem_write(read32(0x66af70),p32(C))
def text_at(ptr):return bytes(u.mem_read(ptr,300)).split(b'\0')[0] if ptr else b''
def alloc(b):
 global pool
 ptr=pool+8;pool+=len(b)+24;u.mem_write(ptr-4,p32(len(b)));u.mem_write(ptr,b+b'\0');return ptr
def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX);sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x4060a8:
  old=read32(M-4);count=read32(sp+4);assert count==old+1;u.mem_write(M+old*128,bytes(128));u.mem_write(M-4,p32(count));u.mem_write(eax,p32(M))
 elif a in [0x40496c,0x404928]:u.mem_write(eax,p32(edx))
 elif a==0x404c64:
  b=b''.join(text_at(read32(sp+4+j*4)) for j in reversed(range(edx)));u.mem_write(eax,p32(alloc(b)));pop+=edx*4
 elif a==0x404b80:
  b=text_at(edx)[:ecx];u.mem_write(eax,bytes([len(b)])+b)
 elif a==0x4048d4:u.mem_write(eax,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x40496c,0x404928,0x404c64,0x404b80,0x4048d4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(65612);cases=[];created=0
for i in range(1200):
 pool=0x1410000;count=r.choice([0,1,40]);managers=bytearray(r.randbytes(count*128));clubs=bytearray(r.randbytes(27*760));domestic=r.choice([0,1,20,27]);target=r.randrange(27)
 for j in range(count):
  off=j*128;managers[off+0x31]=r.choice([0,0,1,255]);managers[off+0x40]=1 if i%3==0 else r.choice([0,0,1,2]);struct.pack_into('<i',managers,off+0x3c,r.choice([0,1,29]));struct.pack_into('<i',managers,off+0x24,r.randrange(1,5))
 for j in range(27):
  off=j*760;clubs[off+0x39]=r.choice([0,0,1,255]);struct.pack_into('<i',clubs,off+0x3c,r.choice([0,1,29]));struct.pack_into('<i',clubs,off+0x7c,r.randrange(1 if i%3==0 else 0,5));struct.pack_into('<i',clubs,off+0x44,r.randrange(-1,40))
 u.mem_write(M-4,p32(count));u.mem_write(M,bytes(managers));u.mem_write(C,bytes(clubs));u.mem_write(career+0x3c,p32(domestic));u.mem_write(read32(0x66b48c),p32(target));seed=r.getrandbits(32)
 result=run(0x65612c,[],seed);n=read32(M-4);created+=int(n>count);assert bytes(u.mem_read(C,len(clubs)))==clubs
 cases.append(dict(managers=managers.hex(),clubs=clubs.hex(),domestic=domestic,target=target,seed=seed,expected=dict(managers=bytes(u.mem_read(M,n*128)).hex(),result=result['result'],seed=result['seed'])))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/manager-dismissal-selection-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print(f'1200 whole dismissal replacement selections; {created} newly generated managers; allocation and Delphi string adapters only')
