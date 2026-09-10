from native_oracle import u,run,read32,p32,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000);u.mem_map(0x1100000,0x10000);u.mem_map(0x1300000,0x10000);u.mem_write(read32(0x66b770),p32(0x1100100));u.mem_write(0x66b574,p32(0x1300000));u.mem_write(read32(0x66ac78)+0x16c,p32(1))
def resize(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);count=read32(sp+4);old=read32(0x11000fc);uc.mem_write(0x1100100+old*48,bytes((count-old)*48));uc.mem_write(0x11000fc,p32(count));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
r=random.Random(64770);cases=[]
for i in range(3000):
 args=[r.randint(0,300),i%18,r.randint(0,21)];stack=[r.randint(-1,100),r.randint(-1,100),r.randint(-1,100)];date=42000+r.randint(0,365);seed=r.getrandbits(32);u.mem_write(0x1300008,struct.pack('<d',date));u.mem_write(0x11000f8,p32(1)+p32(0));out=run(0x64cbf0,args,seed,stack);rows=[list(u.mem_read(0x1100100+j*48,48)) for j in range(read32(0x11000fc))];cases.append({'args':args,'stack':stack,'date':date,'seed':seed,'expected':{'rows':rows,'seed':out['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/notification-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original notification cases:',len(cases))
