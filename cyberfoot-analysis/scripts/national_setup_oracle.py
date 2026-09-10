"""Whole005f3380 with native eligibility0064d890 and selection005fad94 children.
Delphi storage adapters only; original sort, comparator and random instructions
execute natively."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x200000)
C=0x1401000;P=0x1408000;AS=0x141a000;A=0x1434000
career=read32(0x66ac78);calendar=read32(0x66b574);pslot=read32(0x66b5b8);slot=read32(0x66b544)
u.mem_write(read32(0x66af70),p32(C))
u.mem_write(0x6d3f88,p32(A))
sizes={0x6d3f88:40,slot:8}
bump=[0x1440000];allocated={};buffers={0x6d3f88:A,slot:AS}
def adapter(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);a=uc.reg_read(UC_X86_REG_EDX)
 if address==0x4060a8:
  n=read32(sp+4);base=buffers.get(eax)
  if base is None:
   base=allocated.get(eax)
   if base is None:base=bump[0];bump[0]+=0x4000;allocated[eax]=base
   buffers[eax]=base
  step=sizes.get(eax,4);old=read32(base-4)
  u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*step,bytes((n-old)*step))
 elif address==0x40595c:u.mem_write(eax,bytes(u.mem_read(a,40)))
 elif address==0x404f30:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(a))
 elif address==0x4049c4:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(a,uc.reg_read(UC_X86_REG_ECX))))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(eax))
 elif address==0x4048d4:u.mem_write(eax,p32(0))
 elif address==0x4061c8:u.mem_write(eax,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in [0x4060a8,0x40595c,0x404f30,0x4049c4,0x404db0,0x4048d4,0x4061c8]:u.hook_add(UC_HOOK_CODE,adapter,begin=address,end=address)
r=random.Random(0x5f3380);cases=[]
for i in range(600):
 comp=r.choice([6,7,7,7,8,8,9,9,10]);groups={7:8,8:3,9:4}.get(comp,0)
 domestic=r.randrange(4,12);foreign=r.randrange(0,4);clubCount=domestic+foreign;primary=r.randrange(4)
 car=bytearray(1888)
 for offset,value in [(0x88,comp),(0x3c,domestic),(0x40,foreign),(0x16c,r.randrange(1,367)),(0x700,r.randrange(2))]:struct.pack_into('<i',car,offset,value)
 for j in range(groups*4):struct.pack_into('<i',car,0x4bc+j*4,r.randrange(clubCount))
 clubs=bytearray()
 for cid in range(clubCount):
  b=bytearray(r.randbytes(760));struct.pack_into('<i',b,0x3c,cid%4);b[0x39]=r.randrange(2);clubs+=b
 count=r.randrange(0,241);data=bytearray(r.randbytes(count*304));day=struct.unpack_from('<i',car,0x16c)[0]
 for j in range(count):
  nationality=primary if r.random()<0.6 else r.randrange(4)
  struct.pack_into('<i',data,j*304+0x1c,nationality)
  club=r.randrange(clubCount) if nationality==primary and r.random()<0.7 else r.randrange(-2,clubCount+2)
  struct.pack_into('<i',data,j*304+0x20,club)
  struct.pack_into('<i',data,j*304+0x24,j%5 if j<20 else r.randrange(5))
  struct.pack_into('<i',data,j*304+0x28,r.choice([-2,-1,0,0,1,1,2,3]))
  struct.pack_into('<i',data,j*304+0x104,r.choice([-1,0,0,1,1,2]))
  data[j*304+0x15]=r.randrange(2)
  struct.pack_into('<d',data,j*304+0x68,42000+day-1+r.randrange(-200,201))
 cal=b''.join(bytes(8)+struct.pack('<di',42000+d,-1)+bytes(4) for d in range(366))
 seed=r.getrandbits(32);date=42000+day-1
 initial=bytes(r.randbytes(r.randrange(0,4)*8))
 u.mem_write(career,bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(calendar,cal)
 u.mem_write(pslot,p32(P));u.mem_write(P-4,p32(count));u.mem_write(P,bytes(data))
 u.mem_write(slot,p32(AS));u.mem_write(AS-4,p32(len(initial)//8));u.mem_write(AS,initial)
 run(0x5f3380,[0],seed,instruction_limit=4000000)
 rows=read32(AS-4)
 expected={'career':bytes(u.mem_read(career,1888)).hex(),'clubs':bytes(u.mem_read(C,len(clubs))).hex(),'players':bytes(u.mem_read(P,count*304)).hex(),'assignments':bytes(u.mem_read(AS,rows*8)).hex(),'seed':read32(SEED)}
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'players':bytes(data).hex(),'initialAssignments':initial.hex(),'seed':seed,'date':date,'expected':expected})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/national-setup-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('600 whole original national-setup comparisons generated (storage adapters only).')
