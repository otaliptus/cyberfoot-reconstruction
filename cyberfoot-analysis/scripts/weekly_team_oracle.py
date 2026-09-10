"""Complete658cbc with original sort/comparator; only allocation adapted."""
from native_oracle import *
u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
P=0x1300000;A=0x1400100;L=0x1500100;W=0x1502000
u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(0x6d5320,p32(A));u.mem_write(read32(0x66aca0),p32(L));u.mem_write(read32(0x66b578),p32(W))
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);n=read32(sp+4);old=read32(W-4);u.mem_write(uc.reg_read(UC_X86_REG_EAX),p32(W));u.mem_write(W-4,p32(n))
 if n>old:u.mem_write(W+old*100,bytes((n-old)*100))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,hook,begin=0x4060a8,end=0x4060a8)
r=random.Random(65812)

u.mem_map(0,0x1000)
def strings(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX)
 if a==0x404f30:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(edx))
 elif a==0x4049c4:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(edx,ecx)))
 elif a==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(eax))
 elif a==0x4048d4:u.mem_write(eax,p32(0))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,strings,begin=a,end=a)
cases=[]
for i in range(1000):
 divisions=r.randrange(0,5);season=r.randrange(1,5);mode=r.choice([2,4]);leg=r.randrange(1,3);round=r.randrange(1,21);players={j:{'clubId':r.randrange(20)} for j in range(1,61)}
 for id,p in players.items():u.mem_write(P+id*304+0x20,p32(p['clubId']))
 candidates=[]
 for j in range(r.randrange(0,101)):
  rating=r.choice([0,5,7,8,9,10,r.randrange(1,20)/2]);bits=struct.unpack('<i',struct.pack('<f',rating))[0];candidates.append([r.randrange(1,61),bits,r.randrange(1,5),r.randrange(11),r.randrange(1,26),r.randrange(0,5),r.choice([0,0,0,1])])
 u.mem_write(A-4,p32(len(candidates)))
 for j,row in enumerate(candidates):u.mem_write(A+j*28,struct.pack('<7i',*row))
 u.mem_write(L+0x144,p32(divisions));u.mem_write(W-4,p32(0));career=read32(0x66ac78)
 for o,n in [(0xc0,season),(0x168,mode),(0x50,leg),(0x4c,round)]:u.mem_write(career+o,p32(n))
 run(0x658cbc,[0],0,instruction_limit=2000000)
 expected={'candidates':[list(struct.unpack('<7i',u.mem_read(A+j*28,28))) for j in range(len(candidates))],'records':bytes(u.mem_read(W,read32(W-4)*100)).hex()}
 cases.append({'divisions':divisions,'season':season,'mode':mode,'leg':leg,'round':round,'players':players,'candidates':candidates,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/weekly-team-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original complete weekly team selection:1000 cases')
