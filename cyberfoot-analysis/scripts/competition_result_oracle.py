"""Full61cdb4 with manager statistic/notification delivery captured."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
C=0x1300100;GROUP=0x1400100;TABLE=0x1500100
u.mem_write(read32(0x66af70),p32(C));u.mem_write(0x66ae98,p32(GROUP));u.mem_write(0x66b40c,p32(TABLE));u.mem_write(read32(0x66b09c),p32(0));u.mem_write(GROUP+0x530,p32(1));u.mem_write(read32(0x66b080),p32(1))
calls=[];notifications=[]
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);args=[uc.reg_read(reg) for reg in [UC_X86_REG_EAX,UC_X86_REG_EDX,UC_X86_REG_ECX]];args=[x if x<2**31 else x-2**32 for x in args]
 if a==0x6494f8:
  ptr=read32(sp+4);kind=bytes(u.mem_read(ptr,10)).split(b'\0')[0].decode('ascii');calls.append(args+[kind]);pop=8
 else:notifications.append(args+[read32(sp+4),read32(sp+8),read32(sp+12)]);pop=16
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x6494f8,0x64cbf0]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61_434);cases=[]
for i in range(2500):
 competition=r.randrange(11);score=[r.randrange(11),r.randrange(11)];phase4=r.randrange(7);phase6=r.randrange(7);phaseInternational=r.randrange(7);table=r.choice([-1,0,1,4]);original=[];calls=[];notifications=[]
 for j in range(2):
  b=bytearray(r.randbytes(760));b[0x39]=r.randrange(2)
  for o,val in [(0x44,r.choice([-1,0,1,2])),(0x7c,r.randrange(0,6)),(0x80,r.randrange(0,6))]:struct.pack_into('<i',b,o,val)
  u.mem_write(C+j*760,bytes(b));original.append(b.hex())
 career=read32(0x66ac78)
 for off,val in [(0x88,competition),(0x194,phase4),(0x1a0,phase6),(0x62c,phaseInternational)]:u.mem_write(career+off,p32(val))
 u.mem_write(TABLE,p32(table));run(0x61cdb4,[0,competition,0],0,[score[1],score[0],1],instruction_limit=500000)
 cases.append({'competition':competition,'score':score,'phase4':phase4,'phase6':phase6,'phaseInternational':phaseInternational,'table':table,'original':original,'expected':{'clubs':[bytes(u.mem_read(C+j*760,760)).hex() for j in range(2)],'calls':calls,'notifications':notifications}})
p=R.parent/'cyberfoot-web/native-port/tests/competition-result-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original full competition result routine:2500 cases')
