"""Whole005a42e0 auction turn reset; UI and5a3014 stubbed."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x20000)
FB=0x1417000;PA=0x1416000
u.mem_write(0x66ad44,p32(PA));u.mem_write(FB+0x398,p32(0x398));u.mem_write(FB+0x378,p32(0x378))
records=[]
def stub(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if address==0x5a3014:records.append(['select',eax])
 elif address==0x466238:records.append(['clearEdit',eax])
 elif address==0x43aa68:records.append(['hide',eax,edx])
 else:records.append(['ui',address])
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x5a3014,0x466238,0x43aa68]:u.hook_add(UC_HOOK_CODE,stub,begin=a,end=a)
r=random.Random(0x5a42e0);cases=[]
for i in range(200):
 pid=r.choice([-1,0,5,100]);d0=r.choice([0,500,10**9]);d4=r.choice([0,3,-1])
 u.mem_write(PA,p32(pid));u.mem_write(0x6d24d0,p32(d0));u.mem_write(0x6d24d4,p32(d4))
 records.clear();run(0x5a42e0,[FB],1,instruction_limit=200000)
 cases.append({'pid':pid,'d0':d0,'d4':d4,'expected':{'records':[list(x) for x in records],'player':read32(PA),'d0':read32(0x6d24d0),'d4':read32(0x6d24d4)}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/auction-turn-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('200 whole original auction turn comparisons generated (stubs only).')
