from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000)
C=0x1300100;F=0x1303000;H=0x1305000;G=0x1306000;D=0x1307000;T=0x130a000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66b114,H)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66ae98,p32(G));u.mem_write(0x66b574,p32(D));u.mem_write(read32(0x66b09c),p32(0));calls=[]
sizes={read32(0x66afa0):(F,72),read32(0x66b114):(H,20)}
def adapter(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX)
 if a==0x4060a8:
  base,size=sizes.get(eax,(T,8));old=read32(base-4);n=read32(sp+4);u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*size,bytes((n-old)*size))
 elif a==0x61eb40:
  fixture=uc.reg_read(UC_X86_REG_EDX);calls.append(['decide',fixture]);uc.reg_write(UC_X86_REG_EAX,1+fixture%2)
 elif a==0x6243c8:calls.append(['champion',uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX)])
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x4061c8,0x61eb40,0x6243c8]:u.hook_add(UC_HOOK_CODE,adapter,begin=a,end=a)
r=random.Random(61496);cases=[]
for i in range(600):
 phase=r.choice([11,12,21,22,41,42]);legs=phase%10;pairs=4 if phase>=40 else 2 if phase>=20 else 1;round=401 if pairs==4 else 201 if pairs==2 else 101;nextlegs=r.choice([1,2]);ordinal=r.randrange(20);season=r.randrange(20)
 group=bytearray(r.randbytes(1384));struct.pack_into('<i',group,0x530,1);struct.pack_into('<i',group,0x564,r.randrange(2));u.mem_write(G,bytes(group));u.mem_write(read32(0x66b50c)+32,p32(nextlegs));u.mem_write(read32(0x66b50c)+36,p32(nextlegs));u.mem_write(read32(0x66b080),p32(ordinal));u.mem_write(read32(0x66ac78)+0x88,p32(3));u.mem_write(read32(0x66ac78)+0xc0,p32(season))
 clubs=[r.randbytes(760) for _ in range(pairs*2)]
 for j,b in enumerate(clubs):u.mem_write(C+j*760,b)
 for j in range(366):u.mem_write(D+j*24+8,struct.pack('<d',42000+j));u.mem_write(D+j*24+16,p32(3))
 fixtures=[]
 for j in range(pairs):
  scores=[r.randrange(6) for _ in range(4)]
  if j%2==0:scores=[1,1,1,1]
  for leg in range(legs):
   b=bytearray(r.randbytes(72));struct.pack_into('<2i',b,0,*([j*2,j*2+1] if leg==0 else [j*2+1,j*2]));struct.pack_into('<2i',b,8,*scores[leg*2:leg*2+2]);struct.pack_into('<2i',b,0x18,3,round+leg);struct.pack_into('<i',b,0x38,0);fixtures.append(b)
 raw=b''.join(fixtures);u.mem_write(F,raw);u.mem_write(F-4,p32(len(fixtures)));u.mem_write(H-4,p32(0));u.mem_write(T-4,p32(0));calls.clear();run(0x61e4fc,[0,phase],0,instruction_limit=500000)
 cases.append({'phase':phase,'nextLegCount':nextlegs,'calendarOrdinal':ordinal,'season':season,'group':group.hex(),'clubs':[b.hex() for b in clubs],'fixtures':raw.hex(),'expected':{'clubs':bytes(u.mem_read(C,len(clubs)*760)).hex(),'fixtures':bytes(u.mem_read(F,read32(F-4)*72)).hex(),'history':bytes(u.mem_read(H,read32(H-4)*20)).hex(),'group':bytes(u.mem_read(G,1384)).hex(),'calls':list(calls)}})
p=R.parent/'cyberfoot-web/native-port/tests/national-knockout-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original national knockout advancement:600 cases')
