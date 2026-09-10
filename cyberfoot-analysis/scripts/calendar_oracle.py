"""Original base calendar/date generation; competition scheduling is isolated."""
from native_oracle import u,run,read32,p32,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_write(0x66b574,p32(0x1300000))
def skip(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x405658,0x405050,0x405744,0x653a40]:u.hook_add(UC_HOOK_CODE,skip,begin=a,end=a)
r=random.Random(6562015);cases=[]
for season in [-2013,-414,-114,-14,0,1,2,86,386,7985]+[r.randint(-2013,7985) for _ in range(200)]:
 u.mem_write(read32(0x66ac78)+0xc0,p32(season));u.mem_write(0x1300000,bytes(366*24));run(0x656abc,[],1)
 for day in [1,59,60,61,123,365,366]:
  p=0x1300000+(day-1)*24;cases.append({'season':season,'day':day,'expected':{'dayIndex':read32(p),'date':struct.unpack('<d',u.mem_read(p+8,8))[0],'competition':struct.unpack('<i',u.mem_read(p+16,4))[0]}})
p=R.parent/'cyberfoot-web/native-port/tests/calendar-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original base calendar cases:',len(cases))
