"""Original contract decision; adapters only for form text and decision endpoints."""
from native_oracle import u,run,read32,p32,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000)
for a in [0x1100000,0x1200000,0x1300000,0x1800000]:u.mem_map(a,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1100000));u.mem_write(read32(0x66af70),p32(0x1200000));u.mem_write(0x66b574,p32(0x1300000));u.mem_write(read32(0x66ac78)+8,p32(0));u.mem_write(read32(0x66ac78)+0x16c,p32(1));u.mem_write(0x6d2494,p32(0))
current={};out={}
def hook(uc,a,size,data):
 global out
 if a==0x409ff8:uc.reg_write(UC_X86_REG_EAX,current['offer'])
 elif a==0x54c0f0:uc.reg_write(UC_X86_REG_EAX,current['durationIndex'])
 elif a in [0x5a1e54,0x5a1aa8,0x437fe8]:
  required=uc.reg_read(UC_X86_REG_EBX);out={'decision':{0x5a1e54:'accept',0x5a1aa8:'reject',0x437fe8:'excessive'}[a],'required':required if required<0x80000000 else required-0x100000000}
 sp=uc.reg_read(UC_X86_REG_ESP);pop=uc.reg_read(UC_X86_REG_EDX)*4 if a==0x405330 else 0;uc.reg_write(UC_X86_REG_ESP,sp+4+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x466208,0x409ff8,0x54c0f0,0x5a1e54,0x5a1aa8,0x437fe8,0x642c50,0x651ebc,0x405330,0x404b6c]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(5242015);cases=[];wages=json.loads((R.parent/'cyberfoot-web/native-port/tests/wage-vectors.json').read_text())
for i,w in enumerate(wages):
 p=w['player'];c=w['club'];current={'offer':r.choice([r.randint(0,300000),w['expected'],100000,100001]),'durationIndex':i%6,'rating':r.randint(0,15),'currentDate':42000,'contractEnd':42000+r.choice([-1,0,29,30,31,60,365]),'salary':str(r.choice([w['expected']*10000,w['expected']*20000,r.randint(0,10000000000)]))};out={}
 for off,key in [(0x20,'clubId'),(0x28,'skill'),(0x18,'age'),(0x24,'role')]:u.mem_write(0x1100000+off,p32(p[key]))
 u.mem_write(0x1100015,bytes([p['veteranFlag']]));u.mem_write(0x120003c,p32(c['countryId']));u.mem_write(0x120007c,p32(c['category']));u.mem_write(0x1200098,p32(c['field98']));u.mem_write(0x1200048,struct.pack('<q',int(c['cash'])));u.mem_write(0x12001a8,p32(current['rating']));u.mem_write(0x1100038,struct.pack('<q',int(current['salary'])));u.mem_write(0x1100070,struct.pack('<d',current['contractEnd']));u.mem_write(0x1300008,struct.pack('<d',current['currentDate']))
 run(0x5a1ad0,[0x1800000],1);cases.append({**current,'baseWage':w['expected'],'expected':out})
p=R.parent/'cyberfoot-web/native-port/tests/negotiation-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original contract decisions:',len(cases))
