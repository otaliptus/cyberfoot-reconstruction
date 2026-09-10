"""Original Form22 calculations; text output adapters capture labels and money inputs."""
from native_oracle import u,p32,read32,run,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000)
for a in [0x1100000,0x1200000,0x1800000]:u.mem_map(a,0x10000)
u.mem_write(read32(0x66afec),p32(0x1100000));u.mem_write(read32(0x66af70),p32(0x1200000));u.mem_write(read32(0x66ac78)+8,p32(0))
fields=json.loads((R.parent/'cyberfoot-web/native-port/form-fields.json').read_text())['TForm22'];names={v['offset']:k for k,v in fields.items()}
for off in names:u.mem_write(0x1800000+off,p32(off))
current=None;captured={}
def ret(uc,pop=0):
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
def hook(uc,address,size,data):
 global current
 if address==0x642c50:current=['language',uc.reg_read(UC_X86_REG_EAX)]
 elif address==0x651ebc:
  n=uc.reg_read(UC_X86_REG_EAX);current=['amount',n if n<0x80000000 else n-0x100000000]
 elif address in [0x4e1414,0x545088]:captured[names[uc.reg_read(UC_X86_REG_EAX)]]=current
 ret(uc,uc.reg_read(UC_X86_REG_EDX)*4 if address==0x405330 else 0)
for a in [0x642c50,0x651ebc,0x4e1414,0x545088,0x4052cc,0x405330]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(50222015);cases=[]
for i in range(1000):
 ledger=[r.randint(-2000000000,2000000000) for _ in range(14)];cash=r.randint(-10000000000000000,10000000000000000)
 u.mem_write(0x1100000,struct.pack('<14i',*ledger));u.mem_write(0x1200000+0x48,struct.pack('<q',cash));captured={};current=None
 run(0x5a06d4,[0x1800000],1)
 cases.append({'ledger':ledger,'cash':str(cash),'expected':{k:v[1] for k,v in captured.items() if v[0]=='amount'},'language':{k:v[1] for k,v in captured.items() if v[0]=='language'}})
p=R.parent/'cyberfoot-web/native-port/tests/finance-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original finance calculations:',len(cases))
