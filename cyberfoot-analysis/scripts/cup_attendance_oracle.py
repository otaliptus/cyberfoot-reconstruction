from native_oracle import *
u.mem_map(0x1300000,0x10000);C=0x1300100;P=0x1301000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(0x66b608,p32(P))
r=random.Random(616628);cases=[]
for kind,address in [(2,0x616628),(4,0x61794c),(6,0x617e08)]:
 for i in range(1200):
  clubs=[]
  for j in range(2):
   b=bytearray(760);b[0x39]=r.randrange(2)
   division=(i//(6 if j==0 else 24))%4+1 if kind==2 else r.choice([-1,0,1,2,3,4,5])
   for offset,value in [(0x3c,r.choice([0,1,29])),(0x54,r.choice([-100,0,50,51,80,81,150])),(0x7c,division)]:struct.pack_into('<i',b,offset,value)
   for k in range(4):
    struct.pack_into('<i',b,0x204+k*4,r.choice([-100,-1,0,9,49,50,99,100,150,500,1000,r.randrange(200000)]))
    struct.pack_into('<i',b,0x1f4+k*4,r.randrange(-5,100))
   clubs.append(b);u.mem_write(C+j*760,bytes(b))
  reference=[[r.randrange(40) for _ in range(4)] for _ in range(5)];u.mem_write(P,b''.join(p32(n) for row in reference for n in row))
  stage=i%6;mode=2 if (i//96)%2==0 else 4;round=r.choice([-1,0,1,3,4,5,6,7,8,100,101]);subgroup=i%3
  career=read32(0x66ac78)
  for offset,value in [(0x110,stage),(0x168,mode),(0x194,round),(0x1a0,round)]:u.mem_write(career+offset,p32(value))
  u.mem_write(read32(0x66b484),p32(subgroup));seed=r.getrandbits(32);result=run(address,[0,0,1],seed,[OUT])
  attendance=list(struct.unpack('<4i',u.mem_read(OUT,16)))
  cases.append({'kind':kind,'clubs':b''.join(clubs).hex(),'reference':reference,'stage':stage,'mode':mode,'round':round,'subgroup':subgroup,'seed':seed,'expected':{'attendance':attendance,'seed':result['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/cup-attendance-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original cup and continental attendance: 3600 cases')
