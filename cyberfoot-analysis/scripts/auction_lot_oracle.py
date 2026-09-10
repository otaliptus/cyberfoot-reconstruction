"""Whole005a3014 auction-lot selection, stopped at the panel branch (5a32b8).
UI calls before the branch are stubs; Random/Length/High are native."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x30000)
C=0x1401000;P=0x1409000;L=0x1415000;PRE=0x141a000
career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66aca0),p32(L));u.mem_write(read32(0x66b610),p32(30));u.mem_write(0x66ad44,p32(PRE));u.mem_write(C-0x400,bytes(0x400))
ui={0x405658:'a',0x642c50:'b',0x405050:'c',0x43bf7c:'d'}
calls=[]
def stub(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);calls.append(ui[address]);uc.reg_write(UC_X86_REG_EAX,0)
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in ui:u.hook_add(UC_HOOK_CODE,stub,begin=address,end=address)
def stop(uc,address,size,data):uc.reg_write(UC_X86_REG_EIP,STOP)
u.hook_add(UC_HOOK_CODE,stop,begin=0x5a32b8,end=0x5a32b8)
r=random.Random(0x5a3014);cases=[]
for i in range(600):
 clubCount=r.randrange(1,18);playerCount=r.randrange(0,40);leagueCount=r.randrange(1,4)
 car=bytearray(1888);struct.pack_into('<i',car,0x3c,clubCount);struct.pack_into('<i',car,0x40,0)
 clubs=bytearray()
 for cid in range(clubCount):
  b=bytearray(r.randbytes(760));b[0x39]=r.randrange(2);struct.pack_into('<i',b,0x64,r.randrange(20,40));struct.pack_into('<i',b,0xa0,r.choice([0,10,12,16,20]));struct.pack_into('<i',b,0x3c,r.randrange(3));struct.pack_into('<i',b,0x68+r.choice([0,1,2,3,4])*4,r.randrange(0,5));clubs+=b
 leagues=bytearray()
 for j in range(leagueCount):
  b=bytearray(r.randbytes(660));struct.pack_into('<i',b,0x140,r.randrange(3));leagues+=b
 players=bytearray()
 for j in range(playerCount):
  b=bytearray(r.randbytes(304));struct.pack_into('<i',b,0x20,r.choice([-1,r.randrange(clubCount)]));struct.pack_into('<i',b,0x24,r.randrange(5));b[0x7d]=r.randrange(2);players+=b
 prev=r.choice([-1,r.randrange(clubCount)]);preset=r.choice([-1,-1,r.randrange(playerCount)]) if playerCount else -1
 u.mem_write(career,bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(P,bytes(players));u.mem_write(P-4,p32(playerCount));u.mem_write(L,bytes(leagues));u.mem_write(L-4,p32(leagueCount));u.mem_write(0x6d24f0,p32(prev));u.mem_write(PRE,p32(preset))
 seed=r.getrandbits(32);calls.clear()
 result=run(0x5a3014,[r.randrange(100)],seed,instruction_limit=2000000)
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'players':bytes(players).hex(),'leagues':bytes(leagues).hex(),'previous':prev,'preset':preset,'seed':seed,'expected':{'player':read32(PRE),'seller':read32(0x6d24d8),'second':read32(0x6d24e8),'start':read32(0x6d24ec),'seed':read32(SEED),'calls':list(calls)}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/auction-lot-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('600 whole original auction-lot selection comparisons generated (UI stubs only).')
