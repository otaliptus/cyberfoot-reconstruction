"""Whole005f9bcc automatic next screen: state block executed, UI boundaries
recorded as adapters. Regions are original records."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x20000)
G=0x1401000;SN=0x140f000;SF=0x140f100
u.mem_write(0x66ae98,p32(G));u.mem_write(0x66b09c,p32(SN));u.mem_write(0x66b484,p32(SF))
ui={0x4e1a98:'advance',0x5f4074:'clearProgress',0x483bc4:'commitProgress',0x483d6c:'showGeneric',0x618ac8:'showSeasonReview'}
calls=[]
def adapter(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP)
 calls.append(ui[address])
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in ui:u.hook_add(UC_HOOK_CODE,adapter,begin=address,end=address)
r=random.Random(0x5f9bcc);cases=[]
for i in range(600):
 competition=r.choice([3,3,3,4,4,6,6,1,2,5,7,10])
 regions=bytearray(27*1384);shape=r.randrange(6)
 for rec in range(27):
  base=rec*1384
  if shape==0:regions[base+0x52c]=r.randrange(2);regions[base+0x52d]=r.randrange(2);regions[base+0x52f]=r.randrange(2)
  elif shape==1 and rec in [0,10,18,25]:regions[base+0x52d]=1
  elif shape==2 and rec in [10,18]:regions[base+0x52d]=1
  elif shape==3 and rec==25:regions[base+0x52f]=0
  elif shape==4 and rec==0:struct.pack_into('<i',regions,base+0x510,r.randrange(3));regions[base+0x52f]=1
  else:regions[base+0x52d]=r.choice([0,1]);regions[base+0x52f]=r.choice([0,0,1])
 car=bytearray(1888);struct.pack_into('<i',car,0x88,competition)
 for offset in [0x175,0x176,0x177,0x178]:car[offset]=r.randrange(2)
 u.mem_write(read32(0x66ac78),bytes(car));u.mem_write(G,bytes(regions));u.mem_write(SN,p32(0));u.mem_write(SF,p32(0))
 calls.clear();run(0x5f9bcc,[r.randrange(-2,5)],1,instruction_limit=400000)
 cases.append({'career':bytes(car).hex(),'regions':bytes(regions).hex(),'expected':{'flag':read32(SF),'region':read32(SN),'calls':list(calls),'regions':bytes(u.mem_read(G,len(regions))).hex()}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/automatic-next-state-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('600 whole original automatic-next state comparisons generated (UI boundary adapters only).')
