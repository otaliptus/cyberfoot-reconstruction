from native_oracle import *
u.mem_map(0x1300000,0x20000);C=0x1300100;P=0x1310000;career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P))
r=random.Random(618310);cases=[]
for kind,address in [('senior',0x61ad68),('older',0x618310),('youth',0x61b518),('round',0x61ab38)]:
 for i in range(1000):
  n=8 if kind=='round' else 1;players=bytearray(r.randbytes(n*304));clubs=bytearray(r.randbytes(4*760));mode=r.choice([0,2,4]);option=r.randrange(2);competition=r.choice([0,1,2,3,4,6]);counts=[r.randrange(1,4),0]
  for j in range(4):
   clubs[j*760+0x39]=r.randrange(2);struct.pack_into('<i',clubs,j*760+0x7c,r.randrange(0,6));struct.pack_into('<i',clubs,j*760+0x98,r.choice([10,11,14,15,18,19,20,21,22]))
  for j in range(n):
   struct.pack_into('<i',players,j*304+0x20,r.randrange(-1,4) if kind=='round' else r.randrange(4))
   for off,value in [(0x18,r.randrange(14,75)),(0x28,r.choice([0,1,10,25,30,35,40,50,51,60,70,71,80,90,95,99,100,101])),(0x30,r.randrange(0,12)),(0xe4,r.randrange(0,5)),(0x128,r.choice([0,1,49,50,79,80,99,100,101]))]:struct.pack_into('<i',players,j*304+off,value)
   players[j*304+0x7c]=r.randrange(2);players[j*304+0x120]=r.randrange(2)
   for off in [0x80,0x12c]:struct.pack_into('<f',players,j*304+off,r.choice([0.0,0.01,0.5,0.95,1.0,1.5,3.0,r.random()]))
  u.mem_write(C,bytes(clubs));u.mem_write(C-4,p32(4));u.mem_write(P,bytes(players));u.mem_write(P-4,p32(n));u.mem_write(career+0x168,p32(mode));u.mem_write(career+0x170,bytes([option]));u.mem_write(career+0x88,p32(competition));u.mem_write(career+0x3c,p32(counts[0])+p32(counts[1]));run(address,[0,0],0)
  cases.append({'kind':kind,'mode':mode,'option':option,'competition':competition,'counts':counts,'players':players.hex(),'clubs':clubs.hex(),'expected':bytes(u.mem_read(P,len(players))).hex()})
(R.parent/'cyberfoot-web/native-port/tests/player-development-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('4000 whole original development helper/round executions')
