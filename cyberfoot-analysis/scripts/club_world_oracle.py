"""Whole00634498 with native children00633528/0065b4bc/0065208c and native
standings/history lookups; Delphi storage adapters only. The original reinstall
dialog call is observed, not executed."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x40000)
C=0x1402000;L=0x1406000;H=0x1408000;M=0x1409000;AG=0x140a000;TMP=0x140c000;BF=0x140d000
career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66aca0),p32(L));u.mem_write(read32(0x66b058),p32(H));u.mem_write(0x66af90,p32(AG));u.mem_write(read32(0x66b6ac),p32(M))
slotB=read32(0x66b1f0);u.mem_write(slotB,p32(BF))
buffers={slotB:BF,0x6d5330:TMP};sizes={slotB:0x2c,0x6d5330:0xc}
bump=[0x1410000];allocated={};errors=[]
def adapter(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX)
 if address==0x4060a8:
  n=read32(sp+4);base=buffers.get(eax)
  if base is None:
   base=allocated.get(eax)
   if base is None:base=bump[0];bump[0]+=0x4000;allocated[eax]=base
   buffers[eax]=base
  step=sizes.get(eax,4);old=read32(base-4)
  u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*step,bytes((n-old)*step))
 elif address==0x40595c:u.mem_write(eax,bytes(u.mem_read(uc.reg_read(UC_X86_REG_EDX),12)))
 elif address==0x404f30:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(uc.reg_read(UC_X86_REG_EDX)))
 elif address==0x4049c4:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX))))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(eax))
 elif address==0x4048d4:u.mem_write(eax,p32(0))
 elif address==0x4061c8:u.mem_write(eax,p32(0))
 elif address==0x437fe8:errors.append(eax)
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in [0x4060a8,0x40595c,0x404f30,0x4049c4,0x404db0,0x4048d4,0x4061c8,0x437fe8]:u.hook_add(UC_HOOK_CODE,adapter,begin=address,end=address)
r=random.Random(0x634498);cases=[]
tableCountries=[107,9,43,49,57,129,1,190,51,38,68,14,143,131,157,59,148,39]
for i in range(400):
 season=r.randrange(0,6);domestic=r.randrange(6,14);foreign=r.randrange(0,3);limit=domestic+foreign
 car=bytearray(1888)
 for offset,value in [(0xc0,season),(0x3c,domestic),(0x40,foreign)]:struct.pack_into('<i',car,offset,value)
 rows=[bytearray(r.randbytes(760)) for cid in range(limit)]
 for b in rows:
  country=r.choice(tableCountries) if r.random()<0.9 else r.randrange(0,10)
  struct.pack_into('<i',b,0x3c,country);struct.pack_into('<i',b,0x98,r.randrange(0,28))
 special=bool(r.randrange(2));specialClub=r.randrange(limit) if special else None
 leagueCount=r.randrange(0,4);leagues=bytearray();leagueCountries=set()
 for j in range(leagueCount):
  country=r.choice([0,1,3,9,29,49,131,107]);leagueCountries.add(country)
  b=bytearray(r.randbytes(660));struct.pack_into('<i',b,0x140,country)
  for k in range(10):struct.pack_into('<i',b,0x14c+(k+1)*4,r.randrange(limit))
  leagues+=b
 metadata=bytearray(12);ids={}
 for country in range(8):
  ids[(2,country,-1)]=len(metadata)//12;metadata+=struct.pack('<3i',2,country,-1)
 for group in range(6):
  ids[(4,-1,group)]=len(metadata)//12;metadata+=struct.pack('<3i',4,-1,group)
 for j in range(r.randrange(0,4)):metadata+=struct.pack('<3i',r.randrange(1,11),r.randrange(-1,8),r.randrange(-1,6))
 history=bytearray()
 for key,row in ids.items():
  if key[0]==4 or (key[0]==2 and key[1] in leagueCountries):
   chosen=specialClub if key==(4,-1,1) and specialClub is not None else r.randrange(limit)
   if chosen==specialClub and specialClub is not None:struct.pack_into('<i',rows[chosen],0x3c,0x83)
   history+=struct.pack('<5i',season,row,chosen,1,0)
 for j in range(r.randrange(0,3)):history+=struct.pack('<5i',r.randrange(0,6),r.randrange(0,len(metadata)//12),r.randrange(limit),r.randrange(1,3),0)
 clubs=b''.join(rows)
 initial=r.randbytes(288)
 u.mem_write(career,bytes(car));u.mem_write(C-0x400,bytes(0x400));u.mem_write(C,bytes(clubs));u.mem_write(L,bytes(leagues));u.mem_write(H,bytes(history));u.mem_write(M,bytes(metadata));u.mem_write(AG,initial)
 u.mem_write(L-4,p32(leagueCount));u.mem_write(H-4,p32(len(history)//20));u.mem_write(M-4,p32(len(metadata)//12))
 u.mem_write(slotB,p32(BF));u.mem_write(BF-4,p32(0));u.mem_write(0x6d5330,p32(TMP));u.mem_write(TMP-4,p32(0))
 seed=r.getrandbits(32);errors.clear()
 result=run(0x634498,[0],seed,instruction_limit=4000000)
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'leagues':bytes(leagues).hex(),'history':bytes(history).hex(),'metadata':bytes(metadata).hex(),'initialAf90':bytes(initial).hex(),'seed':seed,'error':bool(errors),'expected':{'clubs':bytes(u.mem_read(C,len(clubs))).hex(),'af90':bytes(u.mem_read(AG,288)).hex(),'result':result['result'],'seed':read32(SEED)}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/club-world-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('400 whole original club-world comparisons generated (storage adapters only).')
