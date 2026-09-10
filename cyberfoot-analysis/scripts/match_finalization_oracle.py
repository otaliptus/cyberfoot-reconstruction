from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000);FORM=0x1300100;G=0x1301000;TABLE=0x1302000;calls=[]
u.mem_write(0x66ae98,p32(G));u.mem_write(0x66b3b0,p32(TABLE));u.mem_write(read32(0x66b080),p32(1));u.mem_write(read32(0x66b09c),p32(0));u.mem_write(G+0x530,p32(1))
names={0x61dfe4:'knockout',0x61e4fc:'national',0x61efa4:'history',0x621ec8:'friendly',0x621ed0:'batch',0x622bd4:'nationalNext',0x62341c:'competition5',0x620858:'competition7',0x620fa4:'competition89',0x623898:'competition10'}
def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if a==0x61f691:
  calls.append(['settle',read32(uc.reg_read(UC_X86_REG_EBP)-0x10)]);uc.reg_write(UC_X86_REG_EIP,0x6204af);return
 if a==0x621e48:calls.append(['recover',edx&255])
 if a==0x43b234:calls.append(['timer',edx&255])
 if a==0x4e1400:u.mem_write(edx,p32(0))
 if a==0x4e1414:calls.append(['finishing'])
 if a==0x55d080:calls.append(['sound'])
 if a in names:calls.append([names[a],edx] if a==0x61e4fc else [names[a]])
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x61f691,0x621e48,0x43b234,0x4e1400,0x40502c,0x642c50,0x4e1414,0x55d080,0x404ff0,*names]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61_604);cases=[]
for i in range(800):
 career=bytearray(1888);kind=r.randrange(12);count=r.randrange(5);phase=r.choice([0,1,10,11,12,21,22,41,42]);subgroup=r.randrange(5);silent=r.randrange(2);career[0xdc]=r.randrange(2)
 for o,n in [(0x88,kind),(0x118,r.randrange(1,3)),(0x194,r.randrange(8)),(0x198,r.randrange(1,3)),(0x1a0,r.randrange(8)),(0x1a4,r.randrange(1,3))]:struct.pack_into('<i',career,o,n)
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(read32(0x66aea4),p32(count));u.mem_write(read32(0x66b484),p32(subgroup));u.mem_write(read32(0x66b6c8),bytes([silent]));u.mem_write(TABLE,p32(phase));calls=[];run(0x61f604,[FORM],0)
 cases.append({'career':career.hex(),'count':count,'subgroup':subgroup,'phase':phase,'silent':bool(silent),'expected':calls})
p=R.parent/'cyberfoot-web/native-port/tests/match-finalization-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original full match finalization ordering:800 cases with operation adapters')
