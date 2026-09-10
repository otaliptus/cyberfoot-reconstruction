"""Original formation-strength vectors, covering state changes and formation penalties."""
import native_oracle as o
from native_oracle import u,p32,read32,run,R
import random,json,struct
u.mem_map(0x1100000,0x10000);u.mem_map(0x1200000,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1100000));u.mem_write(read32(0x66af70),p32(0x1200000))
r=random.Random(6422015);cases=[]
for i in range(6000):
 lineup={'players':list(range(1,12)),'positions':[r.randint(1,25) for _ in range(11)],'warning':bool(r.getrandbits(1))}
 if i%3==0:lineup['positions']=[3,6,8,11,12,13,14,19,21,23,1]
 if i%7==0:lineup['positions']=[r.randint(18,25) for _ in range(11)]
 players={j:{'clubId':0,'skill':r.randint(1,99),'role':r.randint(0,4),'condition':r.randint(0,100),'active':bool(r.getrandbits(1))} for j in range(1,12)}
 clubs=[{'human':bool(r.getrandbits(1))}];state={'players':players,'clubs':clubs}
 b=bytearray(248);struct.pack_into('<11i',b,0,*lineup['players']);struct.pack_into('<11i',b,0x5c,*lineup['positions']);b[0xf4]=int(lineup['warning']);u.mem_write(0x1000000,bytes(b))
 for j,p in players.items():
  b=bytearray(304)
  for k,v in [(0x20,p['clubId']),(0x24,p['role']),(0x28,p['skill']),(0x78,p['condition'])]:struct.pack_into('<i',b,k,v)
  b[0x86]=int(p['active']);u.mem_write(0x1100000+j*304,bytes(b))
 u.mem_write(0x1200000+0x39,bytes([int(clubs[0]['human'])]));run(0x642c6c,[0],1)
 b=u.mem_read(0x1000000,248)
 expected={'attack':list(struct.unpack_from('<12i',b,0x88)),'defence':list(struct.unpack_from('<12i',b,0xb8)),'keeper':struct.unpack_from('<i',b,0xe8)[0],'attackTotal':struct.unpack_from('<i',b,0xec)[0],'defenceTotal':struct.unpack_from('<i',b,0xf0)[0],'warning':bool(b[0xf4])}
 cases.append({'lineup':lineup,'state':state,'expected':expected})
path=R.parent/'cyberfoot-web/native-port/tests/lineup-vectors.json';path.write_text(json.dumps(cases,separators=(',',':')));print('Original-code lineup cases:',len(cases))
