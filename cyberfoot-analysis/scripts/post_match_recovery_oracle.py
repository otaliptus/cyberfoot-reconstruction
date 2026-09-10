from native_oracle import *
u.mem_map(0x1300000,0x10000);P=0x1300100;C=0x1305000;M=0x1306000
for ptr,base in [(0x66b5b8,P),(0x66af70,C),(0x66b3b8,M)]:u.mem_write(read32(ptr),p32(base))
r=random.Random(62148);cases=[]
for i in range(1200):
 count=r.randrange(1,20);players=[];clubs=bytearray(760*3)
 for j in range(3):clubs[j*760+0x39]=r.randrange(2)
 for j in range(count):
  b=bytearray(r.randbytes(304));b[0x7c]=r.randrange(2);b[0x15]=r.randrange(2)
  for o,n in [(0x18,r.choice([-1,0,25,26,27,33,34,35,36,45,46,55,56,70,71,170,171])),(0x24,r.randrange(5)),(0x20,r.randrange(-1,3)),(0x78,r.choice([-100,-1,0,20,30,90,100,2147483640]))]:struct.pack_into('<i',b,o,n)
  players.append(b)
 raw=b''.join(players);u.mem_write(P-4,p32(count));u.mem_write(P,raw);u.mem_write(C,bytes(clubs));competition=r.randrange(11);u.mem_write(read32(0x66ac78)+0x88,p32(competition));home,away=r.sample(range(3),2);u.mem_write(M+444+8,p32(home)+p32(away));seed=r.getrandbits(32);result=run(0x621e48,[0,1],seed)
 cases.append({'players':raw.hex(),'clubs':clubs.hex(),'competition':competition,'fixtureClubs':[home,away],'seed':seed,'expected':{'players':bytes(u.mem_read(P,count*304)).hex(),'seed':result['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/post-match-recovery-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original fixture player recovery:1200 cases')
