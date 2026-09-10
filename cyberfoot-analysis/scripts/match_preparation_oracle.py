from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000);C=0x1300100;F=0x1303000;D=0x1304000;META=0x1305000;M=0x1308000;FRAME=0x800b000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66b6ac,META),(0x66b3b8,M)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66b574,p32(D));u.mem_write(D+32,struct.pack('<d',42001));u.mem_write(read32(0x66ac78)+0x16c,p32(2));u.mem_write(read32(0x66b6c8),b'\1');competition=1

def hook(uc,a,size,data):
 if a==0x6133b1:uc.reg_write(UC_X86_REG_EBP,FRAME);uc.reg_write(UC_X86_REG_EDI,read32(0x66afa0));u.mem_write(FRAME-8,p32(competition));u.mem_write(FRAME-4,p32(0));return
 if a==0x6135a9:uc.reg_write(UC_X86_REG_EIP,STOP);return
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x6133b1,0x6135a9,0x4048d4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61040);cases=[]
for i in range(1000):
 competition=r.choice([1,2,4,6]);subgroup=r.randrange(3);clubs=[]
 for j in range(4):
  b=bytearray(760);b[0x39]=r.randrange(2)
  for o,n in [(0x3c,r.randrange(5)),(0x40,r.randrange(4)),(0x60,r.randrange(10)),(0x7c,r.randrange(1,5)),(0x80,r.randrange(4))]:struct.pack_into('<i',b,o,n)
  clubs.append(b);u.mem_write(C+j*760,bytes(b))
 metadata=[[0,0,0]]+[[comp,country,division] for comp in [1,2,4,6] for country in [-1,0,1,2,3,4] for division in [-1,0,1,2,3,4]]
 u.mem_write(META-4,p32(len(metadata)));u.mem_write(META,b''.join(p32(n) for row in metadata for n in row))
 fixtures=[]
 for j in range(r.randrange(11)):
  b=bytearray(72);struct.pack_into('<2i',b,0,*r.sample(range(4),2));struct.pack_into('<i',b,0x18,r.choice([competition,competition,1,2,4,6]));struct.pack_into('<i',b,0x38,r.choice([subgroup,subgroup,0,1,2]));struct.pack_into('<i',b,0x1c,r.randrange(9));struct.pack_into('<d',b,0x30,r.choice([42001,42001,42002]));b[0x2c]=r.randrange(2);fixtures.append(b)
 raw=b''.join(fixtures);u.mem_write(F-4,p32(len(fixtures)));u.mem_write(F,raw);u.mem_write(M,bytes(41*444));u.mem_write(0x6d4794,p32(0));u.mem_write(0x6d4494,bytes(40));u.mem_write(read32(0x66b484),p32(subgroup));run(0x6133b1,[],0,instruction_limit=500000)
 count=read32(read32(0x66aea4));humans=read32(0x6d4794);cases.append({'competitionType':competition,'subgroup':subgroup,'currentDate':42001,'clubs':b''.join(clubs).hex(),'fixtures':raw.hex(),'metadata':metadata,'expected':{'fixtures':bytes(u.mem_read(M+444,count*444)).hex(),'humanFixtureIds':list(struct.unpack('<'+str(humans)+'i',u.mem_read(0x6d4494,humans*4))) if humans else [],'alternateRound':read32(0x6d4920)}})
p=R.parent/'cyberfoot-web/native-port/tests/match-preparation-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original schedule selection and fixture metadata:1000 cases')
