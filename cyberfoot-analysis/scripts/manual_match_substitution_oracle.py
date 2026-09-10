"""Original Form88 bench/pitch branch; rendering/event/calculation calls adapted."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000)
PLAYERS=0x1300000;FIXTURE=0x1310000;FRAME=0x800c000
u.mem_write(read32(0x66b5b8),p32(PLAYERS));u.mem_write(read32(0x66b3b8),p32(FIXTURE))
def signed(a):return struct.unpack('<i',u.mem_read(a,4))[0]
def snapshot():
 return {'players':[{'active':bool(u.mem_read(PLAYERS+i*304+0x86,1)[0]),'field88':signed(PLAYERS+i*304+0x88),'careerGoals':signed(PLAYERS+i*304+0x118),'selectedFlag':bool(u.mem_read(PLAYERS+i*304+0x7c,1)[0])} for i in range(20)],'pitch':[signed(0x1000000+i*4) for i in range(11)],'bench':[signed(0x1000040+i*4) for i in range(7)],'substitutions':[signed(FIXTURE+0x18),signed(FIXTURE+0x1c)],'counters':{str(off):signed(FIXTURE+off) for off in range(0x30,0x88,4)}}
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP)
 if a==0x601970:uc.reg_write(UC_X86_REG_EBP,FRAME);return
 if a==0x601b24:uc.reg_write(UC_X86_REG_EIP,0x601c2b);return
 if a==0x601dbc:uc.reg_write(UC_X86_REG_EIP,STOP);return
 if a==0x642c50:output['languageId']=uc.reg_read(UC_X86_REG_EAX)
 elif a==0x6427a8:
  output['event']=[uc.reg_read(UC_X86_REG_EAX),uc.reg_read(UC_X86_REG_EDX),read32(sp+4),read32(sp+8)]
  uc.reg_write(UC_X86_REG_EAX,77);uc.reg_write(UC_X86_REG_ESP,sp+12);uc.reg_write(UC_X86_REG_EIP,read32(sp));return
 elif a==0x61b828:output['presented']=snapshot();output['recordIndex']=uc.reg_read(UC_X86_REG_EDX)
 elif a==0x605e40:output['refreshed']=True
 elif a==0x642c6c:output['recalculated']=True
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x601970,0x601b24,0x601dbc,0x642c50,0x545088,0x6427a8,0x61b828,0x605e40,0x642c6c]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(601970);cases=[]
for i in range(600):
 u.mem_write(FIXTURE,bytes(444));u.mem_write(PLAYERS,bytes(20*304));u.mem_write(FRAME-0x700,bytes(0x704))
 source=r.randrange(1,19);target=r.randrange(1,19);side=r.choice([1,2]);period=r.choice([1,2,3]);minute=r.randrange(0,49)
 for global_addr,value in [(0x66ad84,0),(0x66b5ec,side),(0x66b2cc,period),(0x66b594,minute)]:u.mem_write(read32(global_addr),p32(value))
 for off,value in [(0x2c,source),(0x30,target),(0x38,0)]:u.mem_write(FRAME-off,p32(value))
 for j in range(11):u.mem_write(0x1000000+j*4,p32(j+1))
 for j in range(7):u.mem_write(0x1000040+j*4,p32(r.choice([-1,0,j+12])))
 for j in range(20):
  base=PLAYERS+j*304;u.mem_write(base+0x86,bytes([int(j<12)]));u.mem_write(base+0x88,p32(r.randrange(100)));u.mem_write(base+0x118,p32(r.randrange(100)));u.mem_write(base+0x7c,bytes([r.randrange(2)]))
 for off in [0x18,0x1c]:u.mem_write(FIXTURE+off,p32(r.randrange(0,4)))
 for off in [0x80,0x84]:u.mem_write(FIXTURE+off,p32(r.randrange(0,6)))
 before=snapshot();output={};run(0x601970,[],1)
 cases.append({'sourceSlot':source,'targetSlot':target,'side':side,'period':period,'minute':minute,'before':before,'expected':{'after':snapshot(),**output}})
(R.parent/'cyberfoot-web/native-port/tests/manual-match-substitution-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('600 original manual substitution branch cases, presentation snapshots and callback ordering recorded')
