"""Original full 4e24d0 including sorting, availability, assignments and strengths.
Only Delphi dynamic-array/string storage is adapted to fixed isolated memory.
"""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
playersBase=0x1300100;clubsBase=0x1400100;lineupBase=0x1000100;candidatesBase=0x1500100
u.mem_write(read32(0x66b5b8),p32(playersBase));u.mem_write(read32(0x66af70),p32(clubsBase));u.mem_write(0x66b574,p32(0x1006000))
def storage(uc,address,size,data):
 a=uc.reg_read(UC_X86_REG_EAX);b=uc.reg_read(UC_X86_REG_EDX);c=uc.reg_read(UC_X86_REG_ECX);sp=uc.reg_read(UC_X86_REG_ESP)
 if address==0x4060a8:
  n=read32(sp+4);base,size=(candidatesBase,32) if a==0x67aeec else (lineupBase,248)
  old=read32(base-4);u.mem_write(a,p32(base));u.mem_write(base-8,p32(1)+p32(n))
  if n>old:u.mem_write(base+old*size,bytes((n-old)*size))
 elif address==0x404f30:u.mem_write(a,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(b))
 elif address==0x4049c4:u.mem_write(a,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(b,c)))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(a))
 elif address==0x4048d4:u.mem_write(a,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,storage,begin=a,end=a)
r=random.Random(4242015);cases=[]
for i in range(500):
 competition=r.randrange(11);date=42127;clubId=r.randrange(2);seed=r.getrandbits(32)
 players=[]
 for j in range(r.randint(1,50)):
  p={'clubId':r.choice([-1,0,1]) if i%3 else clubId,'role':r.randrange(5),'skill':r.randint(1,40),'field2c':r.randrange(2),'trait1':r.randrange(14),'trait2':r.randrange(14),'specialty':r.randrange(3),'condition':r.randint(0,100),'active':bool(r.getrandbits(1)),'selectedFlag':bool(r.getrandbits(1)),'eligibilityFlag':r.choice([0,0,0,1,2]),'injuryUntil':r.choice([0,date,date+1]),'yellowCounts':[0]*11,'suspensions':[0]*11}
  p['yellowCounts'][competition]=r.choice([0,0,0,2,3]);p['suspensions'][competition]=r.choice([0,0,0,1]);players.append(p)
  b=bytearray(304)
  for name,off in [('clubId',0x20),('role',0x24),('skill',0x28),('field2c',0x2c),('specialty',0x58),('trait1',0x5c),('trait2',0x60),('condition',0x78)]:struct.pack_into('<i',b,off,p[name])
  struct.pack_into('<d',b,0x68,p['injuryUntil']);b[0x7c]=p['selectedFlag'];b[0x86]=p['active'];b[0x120]=p['eligibilityFlag'];struct.pack_into('<11i',b,0x8c,*p['yellowCounts']);struct.pack_into('<11i',b,0xb8,*p['suspensions']);u.mem_write(playersBase+j*304,bytes(b))
 u.mem_write(playersBase-4,p32(len(players)));u.mem_write(clubsBase,bytes(760*2));u.mem_write(0x67aee4,p32(0));u.mem_write(lineupBase-4,p32(0));u.mem_write(candidatesBase-4,p32(0))
 u.mem_write(read32(0x66ac78)+0x88,p32(competition));u.mem_write(read32(0x66ac78)+0x16c,p32(1));u.mem_write(0x1006008,struct.pack('<d',date))
 result=run(0x4e24d0,[clubId],seed,instruction_limit=2000000)
 b=bytes(u.mem_read(lineupBase,248));ints=lambda off,n:list(struct.unpack_from('<'+'i'*n,b,off))
 lineup={'players':ints(0,11),'scratch':ints(0x2c,5),'bench':ints(0x40,7),'positions':ints(0x5c,11),'attack':ints(0x88,12),'defence':ints(0xb8,12),'keeper':ints(0xe8,1)[0],'attackTotal':ints(0xec,1)[0],'defenceTotal':ints(0xf0,1)[0],'warning':bool(b[0xf4])}
 mutations=[{'specialty':read32(playersBase+j*304+0x58),'condition':read32(playersBase+j*304+0x78),'active':bool(u.mem_read(playersBase+j*304+0x86,1)[0]),'selectedFlag':bool(u.mem_read(playersBase+j*304+0x7c,1)[0])} for j in range(len(players))]
 cases.append({'players':players,'competitionType':competition,'currentDate':date,'clubId':clubId,'seed':seed,'expected':{'lineup':lineup,'mutations':mutations,'seed':result['seed'],'availableCount':read32(clubsBase+clubId*760+0xa0),'availableRoleCounts':list(struct.unpack('<6i',u.mem_read(read32(0x66ad8c),24)))}})
p=R.parent/'cyberfoot-web/native-port/tests/ai-lineup-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original full AI lineup: 500 cases')
