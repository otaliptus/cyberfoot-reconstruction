"""Whole005f343c; Delphi array/string storage adapters, native sorting/comparator."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x10000)
C=0x1400100;B=0x1404000;A=0x1405000;T=0x1406000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(0x66ad60,p32(B))
def adapter(uc,address,size,data):
 a=uc.reg_read(UC_X86_REG_EAX);b=uc.reg_read(UC_X86_REG_EDX);c=uc.reg_read(UC_X86_REG_ECX);sp=uc.reg_read(UC_X86_REG_ESP)
 if address==0x4060a8:
  base={0x6d3f88:A,0x6d3f8c:T}[a];n=read32(sp+4);old=read32(base-4)
  u.mem_write(a,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*40,bytes((n-old)*40))
 elif address==0x40595c:u.mem_write(a,bytes(u.mem_read(b,40)))
 elif address==0x404f30:u.mem_write(a,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(b))
 elif address==0x4049c4:u.mem_write(a,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(b,c)))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(a))
 elif address==0x4048d4:u.mem_write(a,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in [0x4060a8,0x40595c,0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,adapter,begin=address,end=address)
r=random.Random(0x5f343c);cases=[]
for i in range(800):
 competition=8+i%2;round=r.choice([0,1,2,3,4,4,4,4,5,6]);career=bytearray(1888);struct.pack_into('<i',career,0x62c,round)
 ids=list(range(16));r.shuffle(ids)
 for j,id in enumerate(ids):struct.pack_into('<i',career,0x4bc+j*4,id)
 clubs=bytearray(r.randbytes(760*16));bracket=r.randbytes(48*16)
 for id in range(16):
  for offset in [0xb4,0xdc,0x104,0x12c,0x154,0x17c]:
   value=0 if i%7==0 else r.choice([-2147483648,2147483647,-1,0,1,3,8]) if i%5==0 else r.randrange(20)
   struct.pack_into('<i',clubs,id*760+offset+competition*4,value)
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(C,bytes(clubs));u.mem_write(B,bracket)
 u.mem_write(A-4,p32(0));u.mem_write(T-4,p32(0));u.mem_write(0x6d3f88,p32(A));u.mem_write(0x6d3f8c,p32(T))
 result=run(0x5f343c,[0,competition],123,instruction_limit=500000)
 assert result['seed']==123
 cases.append(dict(competition=competition,career=career.hex(),clubs=clubs.hex(),bracket=bracket.hex(),expected=dict(clubs=bytes(u.mem_read(C,len(clubs))).hex(),bracket=bytes(u.mem_read(B,len(bracket))).hex())))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/national-post-round-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('800 whole original international post-round cases generated, storage adapters only.')
