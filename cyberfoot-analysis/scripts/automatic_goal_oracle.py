"""0061c5c0 with original scorer; event recording/presentation captured as adapters."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1100000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
P=0x1100000;M=0x1400000;G=0x1500100
u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66b3b8),p32(M));u.mem_write(0x6d491c,p32(G))
records=[];shown=[];returns=[]
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x60cfa8:
  records.append([uc.reg_read(UC_X86_REG_EAX),uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX),struct.unpack('<i',u.mem_read(sp+4,4))[0],read32(sp+8)])
  uc.reg_write(UC_X86_REG_EAX,returns[len(records)-1]&0xffffffff);pop=12
 else:shown.append(uc.reg_read(UC_X86_REG_EDX))
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x60cfa8,0x61b828]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(6166);cases=[]
for i in range(1000):
 teams=[];players={};records=[];shown=[];tick=r.randrange(1,191);seed=r.getrandbits(32)
 for team in range(2):
  ids=list(range(team*11+1,team*11+12));positions=[r.randrange(1,26) for _ in ids];teams.append({'players':ids,'positions':positions})
  b=bytearray(248);struct.pack_into('<11i',b,0,*ids);struct.pack_into('<11i',b,0x5c,*positions);u.mem_write(0x1000000+team*248,bytes(b))
  for id in ids:
   active=r.randrange(4)!=0;players[id]={'active':active};u.mem_write(P+id*304+0x86,bytes([active]))
 plan=[{'fixtureId':r.choice([1,1,2]),'side':r.choice([1,2]),'tick':r.choice([tick,tick,tick+1])} for _ in range(r.randrange(0,8))];returns=[r.choice([-1,0,1,7]) for _ in plan]
 u.mem_write(G-4,p32(len(plan)))
 for j,e in enumerate(plan):u.mem_write(G+j*12,struct.pack('<3i',e['fixtureId'],e['side'],e['tick']))
 u.mem_write(M+444,bytes(444));u.mem_write(M+444+0x10,struct.pack('<2i',0,1))
 out=run(0x61c5c0,[0,tick,1],seed)
 counters={str(off):read32(M+444+off) for off in [0x48,0x4c,0x90,0x94]}
 cases.append({'teams':teams,'players':players,'plan':plan,'tick':tick,'seed':seed,'returns':returns,'expected':{'records':records,'shown':shown,'counters':counters,'seed':out['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/automatic-goal-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original automatic goal delivery:1000 cases')
