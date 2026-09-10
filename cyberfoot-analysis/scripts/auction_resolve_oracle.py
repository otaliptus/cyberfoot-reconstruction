"""Whole005a3d1c auction resolution/tick; UI and finalization5a4354 stubbed,
RNG and club search native. Stops before the epilogue finalizer."""
import gzip,struct
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x30000)
C=0x1401000;P=0x1409000;FB=0x141f000
career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66b610),p32(30))
for off,val in [(0x37c,0x37c),(0x378,0x378),(0x39c,0x39c),(0x3a0,0x3a0),(0x3a4,0x3a4)]:u.mem_write(FB+off,p32(val))
ui={0x43bf7c:'page',0x43aa68:'hide',0x642c50:'language',0x4e1414:'caption',0x43b234:'timer'};records=[]
def stub(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX)
 if address==0x5a4354:
  records.append(['finalize',eax,edx,ecx,read32(sp+4),read32(sp+8)]);uc.reg_write(UC_X86_REG_ESP,sp+12)
 else:
  records.append([ui[address],eax] if address in (0x642c50,0x4e1414) else [ui[address],eax,edx]);uc.reg_write(UC_X86_REG_ESP,sp+4)
 uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [*ui,0x5a4354]:u.hook_add(UC_HOOK_CODE,stub,begin=a,end=a)
def stop(uc,a,s,d):uc.reg_write(UC_X86_REG_EIP,STOP)
u.hook_add(UC_HOOK_CODE,stop,begin=0x5a42c2,end=0x5a42c2)
r=random.Random(0x5a3d1c);cases=[]
for i in range(600):
 clubCount=r.randrange(2,15);playerCount=r.randrange(1,17);pid=r.randrange(playerCount)
 car=bytearray(1888);struct.pack_into('<i',car,0x3c,clubCount);struct.pack_into('<i',car,0x40,0)
 clubs=bytearray()
 for cid in range(clubCount):
  b=bytearray(r.randbytes(760));b[0x39]=r.randrange(2);struct.pack_into('<i',b,0x7c,r.randrange(2));struct.pack_into('<i',b,0x98,r.randrange(10,30));struct.pack_into('<i',b,0xa0,r.randrange(0,40));struct.pack_into('<i',b,0x3c,r.randrange(4));clubs+=b
 players=bytearray()
 for j in range(playerCount):
  b=bytearray(r.randbytes(304));struct.pack_into('<i',b,0x28,r.choice([20,24,25,30]));struct.pack_into('<i',b,0x20,r.choice([-1,0,clubCount-1]));struct.pack_into('<q',b,0x40,r.randrange(0,100001)*10000);players+=b
 d0=r.choice([0,1000,r.randrange(0,2500000)]);d4=r.randrange(clubCount);e4=r.randrange(2);base=r.choice([0,1,r.randrange(1,2500001)]);ec=r.randrange(clubCount);e0=r.randrange(clubCount)
 ticks=r.randrange(0,10);valuation=r.choice([0.0,0.12,0.25,0.5]);gate=r.randrange(2);timerGate=r.randrange(2)
 u.mem_write(career,bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(P,bytes(players));u.mem_write(P-4,p32(playerCount));u.mem_write(read32(0x66ad44),p32(pid))
 u.mem_write(0x6d24d0,p32(d0));u.mem_write(0x6d24d4,p32(d4));u.mem_write(0x6d24b4,p32(base));u.mem_write(0x6d24ec,p32(ec));u.mem_write(0x6d24e0,p32(e0));u.mem_write(0x6d24e4,bytes([e4]))
 u.mem_write(read32(0x66b2e0),p32(ticks));u.mem_write(read32(0x66b6fc),struct.pack('<f',valuation));u.mem_write(read32(0x66b668),bytes([gate]));u.mem_write(read32(0x66af24),bytes([timerGate]))
 seed=r.getrandbits(32);records.clear()
 run(0x5a3d1c,[FB],seed,instruction_limit=2000000)
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'players':bytes(players).hex(),'pid':pid,'d0':d0,'d4':d4,'e4':e4,'base':base,'ec':ec,'e0':e0,'ticks':ticks,'valuation':valuation,'gate':gate,'timerGate':timerGate,'seed':seed,'expected':{'records':[list(x) for x in records],'seed':read32(SEED),'e4':u.mem_read(0x6d24e4,1)[0],'base':read32(0x6d24b4),'d0':read32(0x6d24d0),'ticks':read32(read32(0x66b2e0)),'valuation':u.mem_read(read32(0x66b6fc),4).hex()}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/auction-resolve-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('600 whole original auction resolution comparisons generated (UI/finalization stubs only).')
