"""Form28 original loan mutations with UI/text adapters (not visual parity)."""
from native_oracle import u,p32,read32,run,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000)
for a in [0x1100000,0x1200000,0x1800000]:u.mem_map(a,0x10000)
u.mem_write(read32(0x66afec),p32(0x1100000));u.mem_write(read32(0x66af70),p32(0x1200000));u.mem_write(read32(0x66ac78)+8,p32(0));u.mem_write(read32(0x66b054),p32(0x1805000));u.mem_write(0x1805420,p32(0x1806000))
fields=json.loads((R.parent/'cyberfoot-web/native-port/form-fields.json').read_text())['TForm28'];names={};enabled={}
for i,(name,value) in enumerate(fields.items()):
 ptr=0x1801000+i*0x100;u.mem_write(0x1800000+value['offset'],p32(ptr));u.mem_write(ptr,p32(0x1804000));names[ptr]=name
u.mem_write(0x1804064,p32(0x1807000))
def hook(uc,a,size,data):
 if a==0x1807000:enabled[names[uc.reg_read(UC_X86_REG_EAX)]]=bool(uc.reg_read(UC_X86_REG_EDX)&255)
 sp=uc.reg_read(UC_X86_REG_ESP);pop=uc.reg_read(UC_X86_REG_EDX)*4 if a==0x405330 else 12 if a==0x40bdc0 else 0
 uc.reg_write(UC_X86_REG_ESP,sp+4+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x1807000,0x642c50,0x6468f4,0x4e1414,0x545088,0x54dcb8,0x4052cc,0x405330,0x40bdc0,0x409ff8,0x404b6c,0x466238]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(50282015);cases=[]
for i in range(2000):
 category=i%5;debt=r.choice([0,500000,1500000,2000000,3000000,5000000,r.randint(-10000000,10000000)]);cash=r.choice([-(1<<63),(1<<63)-1,r.randint(-10000000000000000,10000000000000000)])
 u.mem_write(0x1100020,p32(debt));u.mem_write(0x120007c,p32(category));u.mem_write(0x1200048,struct.pack('<q',cash));enabled={'bt1':True,'bt2':True}
 run(0x5a4dd8,[0x1800000],1);initial=dict(enabled)
 action='borrow' if i%2==0 else 'repay';run(0x5a51f4 if action=='borrow' else 0x5a5520,[0x1800000],1)
 cases.append({'category':category,'debt':debt,'cash':str(cash),'action':action,'initialEnabled':initial,'expected':{'debt':struct.unpack('<i',u.mem_read(0x1100020,4))[0],'cash':str(struct.unpack('<q',u.mem_read(0x1200048,8))[0]),'enabled':dict(enabled)}})
p=R.parent/'cyberfoot-web/native-port/tests/loan-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original loan action cases:',len(cases))
