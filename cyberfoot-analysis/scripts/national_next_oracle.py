"""Whole005f9dc8 national next screen and the005f9efc/005f9f14 dispatchers.
Subcontroller calls are adapters; regional bytes, call order and dispatch choice
are original."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x10000)
G=0x1401000
u.mem_write(0x66ae98,p32(G))
childNames={0x5f9f2c:'unemployedOffers',0x656410:'managerChanges',0x5f92d8:'selectHumanParticipation',0x5f99c4:'humanNext',0x5f9bcc:'automaticNext'}
calls=[];participation=0
def adapter(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP)
 calls.append(childNames[address])
 if address==0x5f92d8:u.mem_write(0x6d3f40,bytes([participation]))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in childNames:u.hook_add(UC_HOOK_CODE,adapter,begin=address,end=address)
r=random.Random(0x5f9dc8);cases=[]
for i in range(300):
 regions=bytearray(27*1384)
 for rec in range(27):
  base=rec*1384
  for offset in [0x52c,0x52d,0x52e,0x52f]:regions[base+offset]=r.randrange(256)
  if r.random()<0.5:struct.pack_into('<i',regions,base+0x510,r.randrange(3))
 ordinal=r.randrange(12);participation=r.randrange(2);param=r.randrange(-2,5)
 u.mem_write(G,bytes(regions));u.mem_write(read32(0x66b080),p32(ordinal));u.mem_write(0x6d3f40,bytes([participation]))
 calls.clear();run(0x5f9dc8,[param],1,instruction_limit=200000)
 nationalCalls=list(calls)
 cupParticipation=r.randrange(2);u.mem_write(0x6d3f40,bytes([cupParticipation]));calls.clear();run(0x5f9efc,[param],1,instruction_limit=200000);cupCalls=list(calls)
 otherParticipation=r.randrange(2);u.mem_write(0x6d3f40,bytes([otherParticipation]));calls.clear();run(0x5f9f14,[param],1,instruction_limit=200000);otherCalls=list(calls)
 cases.append({'regions':bytes(regions).hex(),'ordinal':ordinal,'param':param,'participation':participation,'cupParticipation':cupParticipation,'otherParticipation':otherParticipation,'expected':{'regions':bytes(u.mem_read(G,len(regions))).hex(),'nationalCalls':nationalCalls,'cupCalls':cupCalls,'otherCalls':otherCalls}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/national-next-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('300 original national-next and cup/other dispatch comparisons generated (subcontroller adapters).')
