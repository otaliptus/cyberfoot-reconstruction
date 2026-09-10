from native_oracle import *
u.mem_map(0x1300000,0x20000)
C=0x1300100;F=0x1309000;H=0x130c000;L=0x130e000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66b114,H),(0x66aca0,L)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(L-4,p32(1));u.mem_write(L+0x140,p32(0));calls=[]
def adapter(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP)
 if a==0x4060a8:u.mem_write(H-4,p32(read32(sp+4)))
 if a==0x61eb40:
  fixture=uc.reg_read(UC_X86_REG_EDX);calls.append(['decide',fixture]);uc.reg_write(UC_X86_REG_EAX,1+fixture%2)
 if a==0x623ee0:calls.append(['champion',uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX)])
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x61eb40,0x623ee0]:u.hook_add(UC_HOOK_CODE,adapter,begin=a,end=a)
r=random.Random(61984);cases=[]
for i in range(300):
 competition=r.choice([2,4,6]);round=r.randrange(2,6) if competition==2 else r.randrange(4,8);subgroup=r.choice([1,2]) if competition==6 else 2
 paircount=2**((5 if competition==2 else 7)-round);nextpairs=paircount//2;career=bytearray(1888)
 for o,n in [(0x88,competition),(0xc0,r.randrange(20)),(0x110,round),(0x194,round),(0x1a0,round)]:struct.pack_into('<i',career,o,n)
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(read32(0x66b484),p32(subgroup));u.mem_write(0x6d4920,p32(round));clubs=[bytearray(r.randbytes(760)) for _ in range(paircount*2)]
 for j,b in enumerate(clubs):
  struct.pack_into('<i',b,0x3c,0)
  for o in [0x50,0x54]:struct.pack_into('<i',b,o,r.randrange(101))
  u.mem_write(C+j*760,bytes(b))
 fixtures=[]
 for j in range(paircount):
  scores=[r.randrange(6) for _ in range(4)]
  if j%3==0:scores=[1,1,1,1]
  for leg in range(2):
   b=bytearray(r.randbytes(72));struct.pack_into('<2i',b,0,*( [j*2,j*2+1] if leg==0 else [j*2+1,j*2]));struct.pack_into('<2i',b,8,*scores[leg*2:leg*2+2]);struct.pack_into('<2i',b,0x18,competition,round);struct.pack_into('<i',b,0x38,subgroup);fixtures.append(b)
 for j in range(max(2,nextpairs*2)):
  b=bytearray(r.randbytes(72));struct.pack_into('<2i',b,0,-1,-1);struct.pack_into('<2i',b,0x18,competition,round+1);struct.pack_into('<i',b,0x38,subgroup);fixtures.append(b)
 raw=b''.join(fixtures);u.mem_write(F,raw);u.mem_write(F-4,p32(len(fixtures)));u.mem_write(H-4,p32(0));calls.clear();run(0x61dfe4,[0],0,instruction_limit=500000)
 cases.append({'career':career.hex(),'clubs':[b.hex() for b in clubs],'fixtures':raw.hex(),'subgroup':subgroup,'alternateRound':round,'expected':{'clubs':bytes(u.mem_read(C,len(clubs)*760)).hex(),'fixtures':bytes(u.mem_read(F,len(raw))).hex(),'history':bytes(u.mem_read(H,read32(H-4)*20)).hex(),'calls':list(calls)}})
p=R.parent/'cyberfoot-web/native-port/tests/knockout-round-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original complete two-leg advancement with decider/champion adapters:300 cases')
