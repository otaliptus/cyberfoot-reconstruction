from native_oracle import *
u.mem_map(0x1400000,0x10000);career=read32(0x66ac78);C=0x1400100;L=0x1409000;M=0x140b000;obj=0x140d000;vmt=0x140d100;show=0x140d300
for glob,base in [(0x66af70,C),(0x66aca0,L),(0x66b718,M)]:u.mem_write(read32(glob),p32(base))
u.mem_write(obj,p32(vmt));u.mem_write(vmt+0xec,p32(show));events=[]
def hook(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP)
 if a==0x487474:u.mem_write(uc.reg_read(UC_X86_REG_ECX),p32(obj))
 else:
  id=read32(career+0x10);events.append([id,list(struct.unpack('<4i',u.mem_read(read32(0x66adf4),16))),u.mem_read(M+id*128+0x30,1)[0]])
 uc.reg_write(UC_X86_REG_EIP,read32(sp));uc.reg_write(UC_X86_REG_ESP,sp+4)
for a in [0x487474,show]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
source=json.loads((R.parent/'cyberfoot-web/native-port/tests/unemployed-job-offer-vectors.json').read_text())[:1200];r=random.Random(0x5f9800);cases=[]
for i,t in enumerate(source):
 kind='employed' if i<600 else 'unemployed';car=bytearray(1888);cb=bytearray(40*760);mb=bytearray(3*128);lb=bytearray(3*660)
 for j in range(40):
  cb[j*760+0x39]=int(j==39);cb[j*760+0x216]=t['clubs'][j][1]
  for off,n in [(0x3c,[0,1,29][j%3]),(0x7c,r.randrange(1,5)),(0x50,r.choice([80,81,100])),(0x1a8,r.randrange(5)),(0x1ac,r.randrange(4)),(0x1b0,r.randrange(5))]:struct.pack_into('<i',cb,j*760+off,n)
 for j,row in enumerate(t['managers']):
  for off,n in [(0x20,row[0]),(0x24,row[1]),(0x7c,row[2]),(0x1c,r.choice([-1,j])),(0x3c,[0,1,29][j])]:struct.pack_into('<i',mb,j*128+off,n)
  mb[j*128+0x30]=r.randrange(256)
 for j,league in enumerate(t['leagues']):
  for division,row in enumerate(league['rows'],1):
   for pos,n in enumerate(row,1):struct.pack_into('<i',lb,j*660+division*80+0xfc+pos*4,n)
  struct.pack_into('<ii',lb,j*660+0x140,league['country'],league['divisions'])
 for off,n in [(8,r.randrange(40)),(0x10,r.randrange(3)),(0xc0,r.choice([1,2,5])),(0x4c,r.choice([3,4,5,6,16,17])),(0x50,r.choice([1,2,3])),(0x88,t['competition']),(0x168,t['mode'])]:struct.pack_into('<i',car,off,n)
 for j in range(10):struct.pack_into('<i',car,0x14+j*4,r.choice([-1,-1,0,1,2]))
 car[0x6c8]=r.randrange(2);car[0x170]=t['regional'];car[0x75c]=t['extra'];offers=[r.randrange(-1,40) for _ in range(4)];seed=r.getrandbits(32)
 for base,b,size in [(C,cb,760),(L,lb,660),(M,mb,128)]:u.mem_write(base-4,p32(len(b)//size));u.mem_write(base,bytes(b))
 u.mem_write(career,bytes(car));u.mem_write(read32(0x66adf4),b''.join(p32(n) for n in offers));events=[];result=run(0x5f9800 if kind=='employed' else 0x5f9f2c,[],seed,instruction_limit=1000000)
 assert bytes(u.mem_read(C,len(cb)))==cb and bytes(u.mem_read(L,len(lb)))==lb
 cases.append(dict(kind=kind,career=car.hex(),clubs=cb.hex(),leagues=lb.hex(),managers=mb.hex(),offers=offers,seed=seed,expected=dict(career=bytes(u.mem_read(career,1888)).hex(),managers=bytes(u.mem_read(M,len(mb))).hex(),offers=list(struct.unpack('<4i',u.mem_read(read32(0x66adf4),16))),events=events,seed=result['seed'])))
import gzip
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/manager-offer-timing-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('1200 original offer-timing controllers; selection children native, modal adapter only')
