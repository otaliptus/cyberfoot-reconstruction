"""Original65867c/6588a4 with actual ratings/counters/aggregate; stats delivery captured."""
from native_oracle import *
u.mem_map(0,0x1000)
for a in [0x1300000,0x1400000,0x1500000,0x1600000]:u.mem_map(a,0x10000)
P=0x1300000;M=0x1400000;E=0x1001000;SUB=0x1500100;FINAL=0x1504000;CAND=0x1600100;AGG=0x1604000
for ptr,base in [(0x66b5b8,P),(0x66b3b8,M),(0x66ac7c,E),(0x66ae14,SUB),(0x66b128,FINAL),(0x66b1b8,AGG)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x6d5320,p32(CAND));calls=[]
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);pop=4
 if a==0x4060a8:
  base,sz={read32(0x66ae14):(SUB,32),read32(0x66b128):(FINAL,32),read32(0x66b1b8):(AGG,24),0x6d5320:(CAND,28)}[eax];n=read32(sp+4);old=read32(base-4);u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*sz,bytes((n-old)*sz))
 else:calls.append([eax,uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX),'j']);pop=8
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x650548]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(65884);cases=[]
for i in range(500):
 players={};teams=[];events=[];calls=[]
 for id in range(1,29):
  p={'role':r.randrange(5),'skill':r.randrange(1,101),'specialty':r.randrange(3),'careerGoals':r.randrange(5),'field2c':r.randrange(3),'clubId':11 if id<15 else 4,'active':bool(r.randrange(2))};players[id]=p;b=bytearray(304)
  for k,o in [('role',0x24),('skill',0x28),('specialty',0x58),('careerGoals',0x118),('field2c',0x2c),('clubId',0x20)]:struct.pack_into('<i',b,o,p[k])
  b[0x86]=p['active'];u.mem_write(P+id*304,bytes(b))
 for side in range(2):
  ids=[r.choice([-1]+list(range(1+side*14,15+side*14))) for _ in range(11)];positions=[r.randrange(1,26) for _ in ids];teams.append({'players':ids,'positions':positions});b=bytearray(248);struct.pack_into('<11i',b,0,*ids);struct.pack_into('<11i',b,0x5c,*positions);u.mem_write(0x1000000+side*248,bytes(b))
 for _ in range(r.randrange(20)):
  id=r.randrange(1,29);events.append([r.choice([4,13,18,19,20]),players[id]['clubId'],id,r.randrange(-1,29),r.randrange(1,191),r.choice([1,1,2])])
 u.mem_write(E-4,p32(len(events)))
 for j,row in enumerate(events):u.mem_write(E+j*24,struct.pack('<6i',*row))
 competition=r.randrange(11);field4=r.randrange(5);counters={off:r.randrange(0,25) for off in [0x48,0x4c,0x88,0x8c,0x90,0x94,0x98,0x9c]};u.mem_write(M+444,bytes(444));u.mem_write(M+444,struct.pack('<6i',competition,field4,11,4,0,1))
 for off,n in counters.items():u.mem_write(M+444+off,p32(n))
 for base in [SUB,FINAL,CAND,AGG]:u.mem_write(base-4,p32(0))
 seed=r.getrandbits(32);history=r.randrange(1000);out=run(0x65867c,[history,1],seed,instruction_limit=2000000);out=run(0x6588a4,[history,1],out['seed'],instruction_limit=2000000)
 expected={key:bytes(u.mem_read(base,read32(base-4)*size)).hex() for key,base,size in [('sub',SUB,32),('final',FINAL,32),('candidates',CAND,28),('aggregates',AGG,24)]};expected['calls']=calls;expected['seed']=out['seed']
 cases.append({'players':players,'teams':teams,'events':events,'competition':competition,'field4':field4,'counters':counters,'seed':seed,'historyId':history,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/player-history-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original complete player history routines:500 cases')
