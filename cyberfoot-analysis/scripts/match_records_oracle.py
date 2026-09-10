"""Original fixture persistence61ef04, archive61de24 and manager stats6494f8."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000);u.mem_map(0x1600000,0x10000)
F=0x1300100;M=0x1400100;H=0x1500100;P=0x1600100;E=0x1001000;A=0x1002000
for pointer,base in [(0x66afa0,F),(0x66b3b8,M),(0x66b474,H),(0x66b718,P),(0x66ac7c,E),(0x66b160,A)]:u.mem_write(read32(pointer),p32(base))
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX)
 if a==0x4060a8:
  base,sz=(H,32) if eax==read32(0x66b474) else (A,24);n=read32(sp+4);old=read32(base-4);u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*sz,bytes((n-old)*sz))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x404d94,0x4048d4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(619494);cases=[]
for i in range(500):
 original=bytes(r.randrange(256) for _ in range(72));attendance=[r.randint(-100,100000) for _ in range(4)];income=r.randint(-10000000,10000000);score=[r.randint(0,10),r.randint(0,10)];u.mem_write(F,original);u.mem_write(M+444+0x48,struct.pack('<2i',*score));u.mem_write(M+444+0x24,p32(income));u.mem_write(M+444+0x2c,struct.pack('<4i',*attendance));run(0x61ef04,[0,0,1],0)
 cases.append({'kind':'fixture','original':original.hex(),'attendance':attendance,'income':income,'score':score,'expected':bytes(u.mem_read(F,72)).hex()})
for i in range(500):
 events=[[r.randint(-2,200) for _ in range(5)]+[r.randrange(1,4)] for _ in range(r.randrange(20))];history=[[r.randint(-2,200) for _ in range(6)] for _ in range(r.randrange(8))];fixture=r.randrange(1,4);historyId=r.randrange(1,1000)
 for base,rows in [(E,events),(A,history)]:
  u.mem_write(base-4,p32(len(rows)))
  for j,row in enumerate(rows):u.mem_write(base+j*24,struct.pack('<6i',*row))
 run(0x61de24,[0,historyId,fixture],0)
 expected=[list(struct.unpack('<6i',u.mem_read(A+j*24,24))) for j in range(read32(A-4))];cases.append({'kind':'events','events':events,'history':history,'fixtureId':fixture,'historyId':historyId,'expected':expected})
strings={'j':0x649788,'v':0x649794,'d':0x6497a0,'pr':0x6497ac,'tit':0x6497b8,'t':0x6497c4,'?':0x1009000};u.mem_write(0x1008ffc,p32(1));u.mem_write(0x1009000,b'?\0')
for i in range(1500):
 manager=r.choice([-1,0,1,2]);club=r.randrange(4);season=r.randrange(1,5);competition=r.randrange(11);amount=r.randint(-10,100);kind=r.choice(list(strings));history=[]
 for j in range(r.randrange(10)):
  history.append([r.randrange(3),*[r.randrange(100) for _ in range(5)],r.randrange(4),r.randrange(1,5)])
 if i%2==0:history.append([manager,*[r.randrange(100) for _ in range(5)],club,season])
 prestige=[[r.randrange(1000),r.randrange(1000)] for _ in range(3)];u.mem_write(H-4,p32(len(history)))
 for j,row in enumerate(history):u.mem_write(H+j*32,struct.pack('<8i',*row))
 for j,row in enumerate(prestige):u.mem_write(P+j*128+0x28,struct.pack('<2i',*row))
 u.mem_write(read32(0x66ac78)+0xc0,p32(season));u.mem_write(read32(0x66ac78)+0x88,p32(competition));run(0x6494f8,[manager,club,amount],0,[strings[kind]])
 expected={'history':[list(struct.unpack('<8i',u.mem_read(H+j*32,32))) for j in range(read32(H-4))],'prestige':[list(struct.unpack('<2i',u.mem_read(P+j*128+0x28,8))) for j in range(3)]}
 cases.append({'kind':'manager','managerId':manager,'clubId':club,'season':season,'competition':competition,'amount':amount,'statistic':kind,'history':history,'prestige':prestige,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/match-records-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original match persistence and manager statistics:2500 cases')
