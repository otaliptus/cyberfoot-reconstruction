"""Differential vectors for player selection and set pieces, using original instructions."""
import native_oracle as o
from native_oracle import u,p32,read32,run,OUT,R
from unicorn.x86_const import UC_X86_REG_EBX,UC_X86_REG_ESI,UC_X86_REG_EDI
import random,json,struct
u.mem_map(0,0x1000)
u.mem_map(0x1100000,0x10000);u.mem_map(0x1200000,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1100000));u.mem_write(read32(0x66af70),p32(0x1200000))
r=random.Random(6082015);cases=[]
for i in range(4000):
 lineup={'players':list(range(1,12)),'positions':[r.randint(1,25) for _ in range(11)]}
 players={j:{'clubId':r.choice([0,0,0,1]),'skill':r.randint(0,30),'active':bool(r.getrandbits(1))} for j in range(1,12)}
 clubs=[{'setPiecePlayer':r.randint(-1,11)},{'setPiecePlayer':r.randint(-1,11)}]
 state={'players':players,'clubs':clubs}
 b=bytearray(248);struct.pack_into('<11i',b,0,*lineup['players']);struct.pack_into('<11i',b,0x5c,*lineup['positions']);u.mem_write(0x1000000,bytes(b))
 for j,p in players.items():
  b=bytearray(304);struct.pack_into('<i',b,0x20,p['clubId']);struct.pack_into('<i',b,0x28,p['skill']);b[0x86]=int(p['active']);u.mem_write(0x1100000+j*304,bytes(b))
 seed=r.getrandbits(32);zone=r.randint(1,12);keeper=r.randint(0,30)
 for name,address,args,stack in [('playerAtPosition',0x60a38c,[0,r.randint(1,25)],[]),('selectScorer',0x60a404,[0,zone,r.choice([-1,-2])],[]),('selectIncidentPlayer',0x60a6bc,[0,r.choice([-1,zone]),-1],[]),('freeKick',0x607b10,[0,keeper,zone],[OUT]),('penalty',0x607ca0,[0,keeper,r.choice([-1,-1,r.randint(1,11)])],[OUT])]:
  for j,c in enumerate(clubs):u.mem_write(0x1200000+j*760+0xa8,p32(c['setPiecePlayer']))
  u.reg_write(UC_X86_REG_EBX,0);u.reg_write(UC_X86_REG_ESI,0);u.reg_write(UC_X86_REG_EDI,0)
  expected=run(address,args,seed,stack)
  if stack:expected['result']=list(struct.unpack('<ii',u.mem_read(OUT,8)))
  expected['nominees']=[struct.unpack('<i',u.mem_read(0x1200000+j*760+0xa8,4))[0] for j in range(2)]
  cases.append({'name':name,'args':args,'initialSeed':seed,'lineup':lineup,'state':state,'expected':expected})
path=R.parent/'cyberfoot-web/native-port/tests/player-vectors.json';path.write_text(json.dumps(cases,separators=(',',':')));print('Original-code player cases:',len(cases))
