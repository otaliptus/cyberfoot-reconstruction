"""Whole005f3890 with native children00646a38/006490a8/0065a250 and native
performance children; Delphi storage adapters only."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x40000)
C=0x1401000;L=0x141a000;F=0x141b000;H=0x1424000;CAND=0x1423000;D=0x1425000
career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66aca0),p32(L));u.mem_write(read32(0x66afa0),p32(F));u.mem_write(read32(0x66b114),p32(H));u.mem_write(0x66b574,p32(D))
u.mem_write(0x6d3f88,p32(CAND))
slotH=read32(0x66b114)
buffers={0x6d3f88:CAND,slotH:H};sizes={0x6d3f88:0x28,slotH:0x14}
bump=[0x1430000];allocated={}
def adapter(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX)
 if address==0x4060a8:
  n=read32(sp+4);base=buffers.get(eax)
  if base is None:
   base=allocated.get(eax)
   if base is None:base=bump[0];bump[0]+=0x4000;allocated[eax]=base
   buffers[eax]=base
  step=sizes.get(eax,4);old=read32(base-4)
  u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*step,bytes((n-old)*step))
 elif address==0x40595c:u.mem_write(eax,bytes(u.mem_read(uc.reg_read(UC_X86_REG_EDX),40)))
 elif address==0x404f30:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(uc.reg_read(UC_X86_REG_EDX)))
 elif address==0x4049c4:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX))))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(eax))
 elif address==0x4048d4:u.mem_write(eax,p32(0))
 elif address==0x4061c8:u.mem_write(eax,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in [0x4060a8,0x40595c,0x404f30,0x4049c4,0x404db0,0x4048d4,0x4061c8]:u.hook_add(UC_HOOK_CODE,adapter,begin=address,end=address)
r=random.Random(0x5f3890);cases=[]
for i in range(200):
 competition=r.choice([4,6]);round=r.choice([1,2,3,4,4,4,5]);leg=r.choice([0,1,2]);count=128 if competition==4 else 32
 car=bytearray(1888)
 for offset,value in [(0x194 if competition==4 else 0x1a0,round),(0x198 if competition==4 else 0x1a4,leg),(0xc0,r.randrange(6)),(0x88,r.choice([4,6])),(0x168,r.choice([2,4,0])),(0x3c,r.randrange(16,count))]:struct.pack_into('<i',car,offset,value)
 bases=[0,0x80,0x200,0x280] if competition==4 else [0x180]
 for subgroup,base in enumerate(bases):
  for j in range(32):struct.pack_into('<i',car,0x1ac+base+j*4,(subgroup*32+j)%count)
 day=r.randrange(1,367);date=42000+day-1
 cal=b''.join(bytes(8)+struct.pack('<di',42000+d,-1)+bytes(4) for d in range(366))
 clubs=bytearray()
 for cid in range(count):
  b=bytearray(r.randbytes(760))
  for offset,value in [(0x50,r.randrange(101)),(0x54,r.randrange(101)),(0x98,r.randrange(40)),(0x1a4+competition*4,r.randrange(-2,25)),(0x1b0,r.randrange(-2,9)),(0x3c,r.choice([29,29,29,1])),(0x2f0,r.choice([46,44,52,45,999])),(0x48,r.randrange(1000000))]:struct.pack_into('<i',b,offset,value)
  b[0x39]=r.randrange(2);clubs+=b
 blocks=64 if competition==4 else 16;fixtures=bytearray()
 for j in range(blocks):
  f=bytearray(r.randbytes(72));struct.pack_into('<2i',f,0,r.randrange(count),r.randrange(count));struct.pack_into('<2i',f,8,r.randrange(6),r.randrange(6));struct.pack_into('<i',f,0x18,competition);struct.pack_into('<i',f,0x1c,4);struct.pack_into('<d',f,0x30,42000+r.randrange(-2,368));struct.pack_into('<i',f,0x38,j//16+1 if competition==4 else 2);fixtures+=f
 for j in range(3):
  f=bytearray(r.randbytes(72));struct.pack_into('<2i',f,0,r.randrange(count),r.randrange(count));struct.pack_into('<2i',f,8,r.randrange(6),r.randrange(6));struct.pack_into('<i',f,0x18,r.choice([competition,0,2]));struct.pack_into('<i',f,0x1c,r.randrange(1,4));struct.pack_into('<d',f,0x30,r.choice([date,date,date+1,date-1]));struct.pack_into('<i',f,0x38,r.randrange(1,5));fixtures+=f
 history=bytes(r.randbytes(r.randrange(0,5)*20));league=bytearray(r.randbytes(660));struct.pack_into('<i',league,0x140,29)
 u.mem_write(career,bytes(car));u.mem_write(D,cal);u.mem_write(C,bytes(clubs));u.mem_write(L,bytes(league));u.mem_write(F,bytes(fixtures));u.mem_write(H,history)
 u.mem_write(CAND-4,p32(0));u.mem_write(H-4,p32(len(history)//20));u.mem_write(L-4,p32(1));u.mem_write(F-4,p32(len(fixtures)//72));u.mem_write(read32(0x66adac),p32(day))
 seed=r.getrandbits(32)
 result=run(0x5f3890,[date,competition],seed,instruction_limit=4000000)
 rows=read32(H-4)
 cases.append({'competition':competition,'date':date,'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'fixtures':bytes(fixtures).hex(),'history':history.hex(),'league':bytes(league).hex(),'seed':seed,'expected':{'career':bytes(u.mem_read(career,1888)).hex(),'clubs':bytes(u.mem_read(C,len(clubs))).hex(),'fixtures':bytes(u.mem_read(F,len(fixtures))).hex(),'history':bytes(u.mem_read(H,rows*20)).hex(),'seed':read32(SEED)}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/continental-post-round-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('200 whole original continental post-round comparisons generated (storage adapters only).')
