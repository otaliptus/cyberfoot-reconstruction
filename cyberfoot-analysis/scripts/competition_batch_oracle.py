from native_oracle import *
u.mem_map(0x1300000,0x10000);L=0x1300100;F=0x1302000;D=0x1304000
for ptr,base in [(0x66aca0,L),(0x66afa0,F)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66b574,p32(D));u.mem_write(D+32,struct.pack('<d',42001))
effects={0x622e5c:'reset',0x621ee0:'simulate',0x612a00:'competitionUI',0x610b38:'fixtureUI',0x43b244:'timerInterval',0x618d28:'start',0x61ab38:'results',0x60ee88:'close'}
pointers={'subgroup':(read32(0x66b484),4),'showMatch':(0x6d4924,1),'eventCursor':(0x6d4794,4),'previousChampion':(0x6d48f0,4),'silent':(read32(0x66b6c8),1),'counterB594':(read32(0x66b594),4),'counterAF54':(read32(0x66af54),4),'activeMatch':(read32(0x66b2cc),4),'alternateCompetition':(read32(0x66b6a0),1),'leagueFinished':(read32(0x66ace0),1)}
calls=[];selected={}
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP)
 if a in effects:
  row=[effects[a]]
  if a in [0x612a00,0x43b244]:row.append(uc.reg_read(UC_X86_REG_EDX))
  calls.append(row)
 else:
  result=selected[{0x656dc8:'cup',0x656fb0:'league',0x645280:'champion',0x6574c4:'human'}[a]]
  if a==0x6574c4:result=result[uc.reg_read(UC_X86_REG_EAX)]
  uc.reg_write(UC_X86_REG_EAX,int(result)&0xffffffff)
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in list(effects)+[0x656dc8,0x656fb0,0x645280,0x6574c4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(62258);cases=[]
for i in range(1500):
 comp=r.choice([1,2,4,6]);career=bytearray(1888)
 for o,n in [(0x88,comp),(0x110,r.randrange(7)),(0x118,r.randrange(1,3)),(0x168,r.choice([2,4])),(0x4c,r.choice([1,8,9,18,19])),(0x50,r.randrange(1,3)),(0x194,r.randrange(1,9)),(0x198,r.randrange(1,3)),(0x190,r.randrange(1,3)),(0x1a0,r.randrange(1,9)),(0x1a4,r.randrange(1,3)),(0x19c,r.randrange(1,3)),(0x16c,2)]:struct.pack_into('<i',career,o,n)
 for o in [0x175,0x176,0x177,0x178,0x6c8]:career[o]=r.randrange(2)
 leagues=[]
 for j in range(3):
  b=bytearray(660);struct.pack_into('<i',b,0x140,r.choice([0,1,29]));b[0x14c]=r.randrange(2);b[0x290]=r.randrange(2);leagues.append(b)
 fixtures=[]
 for j in range(12):
  b=bytearray(72);struct.pack_into('<i',b,0x18,r.choice([2,6]));struct.pack_into('<i',b,0x1c,r.randrange(2));struct.pack_into('<i',b,0x38,r.randrange(3));struct.pack_into('<d',b,0x30,r.choice([42001,42002]));b[0x2c]=r.randrange(2);fixtures.append(b)
 runtime={name:(bool(r.randrange(2)) if width==1 else r.randrange(10)) for name,(a,width) in pointers.items()};runtime['subgroup']=r.randrange(7);runtime['humanFixtures']=[r.randrange(10) for _ in range(10)];runtime['preferredLeague']=0;runtime['currentDate']=42001
 for name,(a,width) in pointers.items():u.mem_write(a,bytes([runtime[name]]) if width==1 else p32(runtime[name]))
 u.mem_write(0x6d4494,b''.join(p32(n) for n in runtime['humanFixtures']));u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(L,b''.join(leagues)+bytes(660*5));u.mem_write(L-4,p32(3));u.mem_write(F,b''.join(fixtures));u.mem_write(F-4,p32(len(fixtures)))
 selected={'cup':r.randrange(-1,3),'league':r.randrange(-1,3),'champion':r.randrange(-1,20),'human':[bool(r.randrange(2)) for _ in range(4)]};calls.clear();run(0x621ed0 if i%2 else 0x6225c8,[0],0,instruction_limit=500000)
 result={name:(bool(u.mem_read(a,1)[0]) if width==1 else struct.unpack('<i',u.mem_read(a,4))[0]) for name,(a,width) in pointers.items()};result['humanFixtures']=list(struct.unpack('<10i',u.mem_read(0x6d4494,40)))
 cases.append({'advance':bool(i%2),'career':career.hex(),'leagues':b''.join(leagues).hex(),'fixtures':b''.join(fixtures).hex(),'runtime':runtime,'selectors':selected,'expected':{'career':bytes(u.mem_read(read32(0x66ac78),1888)).hex(),'runtime':result,'effects':list(calls)}})
p=R.parent/'cyberfoot-web/native-port/tests/competition-batch-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original competition batch routing with selector/effect adapters:1500 cases')
