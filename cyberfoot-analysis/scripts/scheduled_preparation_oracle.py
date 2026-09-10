from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x30000);C=0x1300100;F=0x1303000;D=0x1304000;META=0x1305000;M=0x1308000;FRAME=0x800b000;FORM=0x1310000;PRICES=0x1311000;LEAGUES=0x1312000;STRINGS=0x1314000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66b6ac,META),(0x66b3b8,M)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66b574,p32(D));u.mem_write(D+32,struct.pack('<d',42001));u.mem_write(read32(0x66ac78)+0x16c,p32(2));u.mem_write(read32(0x66b6c8),b'\1');competition=1

u.mem_write(0x66b608,p32(PRICES));u.mem_write(read32(0x66aca0),p32(LEAGUES));u.mem_write(LEAGUES-4,p32(0));u.mem_write(FORM+0x300,p32(123));u.mem_write(0x6d4918,p32(456));timers={};strings=0

def hook(uc,a,size,data):
 global strings
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if a==0x43b244:timers[eax]=edx
 if a==0x43b234:timers['enabled']=bool(edx&255)
 if a==0x404b48:
  length=u.mem_read(edx,1)[0];dest=STRINGS+strings*128;strings+=1;u.mem_write(dest-4,p32(length));u.mem_write(dest,bytes(u.mem_read(edx+1,length))+b'\0');u.mem_write(eax,p32(dest))
 if a==0x4e1400:u.mem_write(edx,p32(0))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x43b244,0x43b234,0x404b48,0x4e1400,0x545088,0x4048d4,0x404ff0,0x4048f8,0x405008]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61040);cases=[]
for i in range(600):
 competition=r.choice([1,2,4,6]);subgroup=r.randrange(3);clubs=[]
 for j in range(4):
  b=bytearray(760);b[0x39]=r.randrange(2);name=('Stadium '+str(j)).encode();b[0x1d0:0x1d1+len(name)]=bytes([len(name)])+name
  for k in range(4):struct.pack_into('<i',b,0x204+k*4,r.randrange(100000));struct.pack_into('<i',b,0x1f4+k*4,r.randrange(100))
  b[0x214]=r.randrange(2);b[0x217]=r.randrange(2);b[0x218]=r.randrange(2);struct.pack_into('<i',b,0x54,r.randrange(120))
  for o,n in [(0x3c,r.randrange(5)),(0x40,r.randrange(4)),(0x60,r.randrange(10)),(0x7c,r.randrange(1,5)),(0x80,r.randrange(4))]:struct.pack_into('<i',b,o,n)
  clubs.append(b);u.mem_write(C+j*760,bytes(b))
 metadata=[[0,0,0]]+[[comp,country,division] for comp in [1,2,4,6] for country in [-1,0,1,2,3,4] for division in [-1,0,1,2,3,4]]
 u.mem_write(META-4,p32(len(metadata)));u.mem_write(META,b''.join(p32(n) for row in metadata for n in row))
 fixtures=[]
 for j in range(r.randrange(11)):
  b=bytearray(72);struct.pack_into('<2i',b,0,*r.sample(range(4),2));struct.pack_into('<i',b,0x18,r.choice([competition,competition,1,2,4,6]));struct.pack_into('<i',b,0x38,r.choice([subgroup,subgroup,0,1,2]));struct.pack_into('<i',b,0x1c,r.randrange(9));struct.pack_into('<d',b,0x30,r.choice([42001,42001,42002]));b[0x2c]=r.randrange(2);fixtures.append(b)
 raw=b''.join(fixtures);u.mem_write(F-4,p32(len(fixtures)));u.mem_write(F,raw);u.mem_write(M,bytes(41*444));u.mem_write(0x6d4794,p32(0));u.mem_write(0x6d4494,bytes(40));u.mem_write(read32(0x66b484),p32(subgroup))
 career=bytearray(1888);humans=[r.randrange(-1,4) for _ in range(r.randrange(5))]
 for offset,n in [(0x16c,2),(0x13c,len(humans)),(0x110,r.randrange(6)),(0x168,r.choice([2,4])),(0x194,r.randrange(8)),(0x1a0,r.randrange(8)),(0xc8,100),(0xcc,5)]:struct.pack_into('<i',career,offset,n)
 for j,n in enumerate(humans):struct.pack_into('<i',career,0x140+j*4,n)
 leagues=[]
 for j in range(r.randrange(6)):
  b=bytearray(660);struct.pack_into('<i',b,0x140,j);leagues.append(b)
 u.mem_write(LEAGUES-4,p32(len(leagues)));u.mem_write(LEAGUES,b''.join(leagues))
 reference=[[r.randrange(40) for _ in range(4)] for _ in range(5)];u.mem_write(PRICES,b''.join(p32(n) for row in reference for n in row));u.mem_write(read32(0x66ac78),bytes(career));seed=r.getrandbits(32);timers={};strings=0
 result=run(0x612a00,[FORM,competition],seed,instruction_limit=500000)
 count=read32(read32(0x66aea4));humansCount=read32(0x6d4794);raw=bytearray(u.mem_read(M+444,count*444));stadiums=[]
 for j in range(count):
  ptr=struct.unpack_from('<I',raw,j*444+0x3c)[0];stadiums.append(bytes(u.mem_read(ptr,read32(ptr-4))).decode('cp1252'));struct.pack_into('<i',raw,j*444+0x3c,0)
 cases.append({'competitionType':competition,'subgroup':subgroup,'currentDate':42001,'clubs':b''.join(clubs).hex(),'fixtures':b''.join(fixtures).hex(),'metadata':metadata,'career':career.hex(),'leagues':b''.join(leagues).hex(),'reference':reference,'seed':seed,'expected':{'fixtures':raw.hex(),'stadiums':stadiums,'humanFixtureIds':list(struct.unpack('<'+str(humansCount)+'i',u.mem_read(0x6d4494,humansCount*4))) if humansCount else [],'alternateRound':read32(0x6d4920),'timers':[timers[123],timers[456]],'seed':result['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/scheduled-preparation-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original full silent match preparation: 600 cases, presentation/string adapters')
