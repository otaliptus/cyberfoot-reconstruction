"""Whole006552ec season-end manager move; native Random and league lookup.
The original reads an uninitialized stack word as the Random bound in one
branch; the harness writes a known value at that slot and records it."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x20000)
C=0x1401000;L=0x1409000;DA=0x140f000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66aca0),p32(L));u.mem_write(0x66adf4,p32(DA))
r=random.Random(0x6552ec);cases=[]
for i in range(800):
 clubCount=r.randrange(6,40);clubId=r.randrange(clubCount);leagueCount=r.randrange(1,4)
 car=bytearray(1888);car[0x170]=r.randrange(2)
 leagues=bytearray()
 for j in range(leagueCount):
  b=bytearray(r.randbytes(660));struct.pack_into('<i',b,0x140,r.randrange(0,3) if j else 1)
  struct.pack_into('<i',b,0x144,r.choice([4,4,1,9]))
  for k in range(1,21):struct.pack_into('<i',b,0x14c+k*4,r.choice([-1,r.randrange(clubCount)]))
  for k in range(4,15):struct.pack_into('<i',b,0x23c+k*4,r.choice([-1,r.randrange(clubCount)]))
  leagues+=b
 clubs=bytearray()
 for cid in range(clubCount):
  b=bytearray(r.randbytes(760));b[0x39]=r.randrange(2)
  struct.pack_into('<i',b,0x7c,r.choice([0,1]));struct.pack_into('<i',b,0x50,r.choice([0,50,80,81,120]));struct.pack_into('<i',b,0x80,r.choice([-1,0,1,5]));struct.pack_into('<i',b,0x1a8,r.choice([0,1,2,3,4,5,10,11]));struct.pack_into('<i',b,0x1ac,r.choice([0,2]));struct.pack_into('<i',b,0x1b0,r.choice([0,2,3,4]));struct.pack_into('<i',b,0x3c,r.choice([29,29,1,2]));clubs+=b
 bound=r.choice([0,r.randrange(0,40),-1])
 u.mem_write(read32(0x66ac78),bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(L,bytes(leagues));u.mem_write(L-4,p32(leagueCount));u.mem_write(DA,bytes(32));u.mem_write(SP-24,p32(bound))
 seed=r.getrandbits(32);result=run(0x6552ec,[clubId],seed,instruction_limit=400000)
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'leagues':bytes(leagues).hex(),'clubId':clubId,'bound':bound,'seed':seed,'expected':{'destinations':bytes(u.mem_read(DA,32)).hex(),'seed':read32(SEED)}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/season-move-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('800 whole original season-end manager move comparisons generated (stack slot controlled).')
