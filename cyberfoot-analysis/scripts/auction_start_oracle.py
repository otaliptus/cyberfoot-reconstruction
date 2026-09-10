"""Whole005a3ac8 auction start scan; UI stubbed, 5a3d1c recorded, x87 native."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x20000)
C=0x1401000;P=0x1409000;PA=0x1416000;FB=0x1417000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(0x66ad44,p32(PA));u.mem_write(read32(0x66b610),p32(30));u.mem_write(FB+0x38c,p32(0x38c))
records=[]
def stub(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if address==0x5a3d1c:records.append(['resolve',eax])
 elif address==0x642c50:records.append(['language',eax])
 elif address==0x6468f4:records.append(['money',eax])
 elif address==0x4e1414:records.append(['caption',eax])
 else:records.append(['ui',address])
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x5a3d1c,0x4030d4,0x4030a4,0x405194,0x642c50,0x6468f4,0x405330,0x4e1414]:u.hook_add(UC_HOOK_CODE,stub,begin=a,end=a)
def stop(uc,a,s,d):uc.reg_write(UC_X86_REG_EIP,STOP)
u.hook_add(UC_HOOK_CODE,stop,begin=0x5a3cd9,end=0x5a3cd9)
r=random.Random(0x5a3ac8);cases=[]
for i in range(400):
 count=r.randrange(0,9);playerCount=r.randrange(1,8);pid=r.randrange(playerCount)
 car=bytearray(1888);struct.pack_into('<i',car,0x13c,count)
 ids=[r.choice([-1,r.randrange(10)]) for _ in range(count)]
 for j,id in enumerate(ids):struct.pack_into('<i',car,0x140+j*4,id)
 clubs=bytearray()
 for cid in range(10):
  b=bytearray(r.randbytes(760));struct.pack_into('<q',b,0x48,r.choice([0,1,9999999,10000000,10**12,10**17]));struct.pack_into('<i',b,0x64,r.choice([20,28,30,31]));clubs+=b
 players=bytearray()
 for j in range(playerCount):
  b=bytearray(r.randbytes(304));struct.pack_into('<i',b,0x20,r.choice([-1,0,1,2,3]));players+=b
 base=r.choice([0,1,1000,999999,1000000]);u.mem_write(read32(0x66ac78),bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(P,bytes(players));u.mem_write(P-4,p32(playerCount));u.mem_write(PA,p32(pid))
 u.mem_write(0x6d24b4,p32(base));u.mem_write(0x6d24e4,b'\x01');u.mem_write(0x6d24e0,p32(0));u.mem_write(0x6d24dc,p32(0))
 records.clear();run(0x5a3ac8,[FB],1,instruction_limit=500000)
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'players':bytes(players).hex(),'pid':pid,'base':base,'expected':{'records':[list(x) for x in records],'flag':u.mem_read(0x6d24e4,1)[0],'e0':read32(0x6d24e0),'dc':read32(0x6d24dc)}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/auction-start-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('400 whole original auction start comparisons generated (UI stubs only).')
