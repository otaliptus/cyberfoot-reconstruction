"""Whole per-fixture61f604 block, including original standings/finance routines.
Adapters: dynamic storage, manager/notification delivery, outer stack and UI boundary.
"""
from native_oracle import *
from datetime import datetime,timedelta
u.mem_map(0,0x1000)
for base in [0x1300000,0x1400000,0x1500000,0x1600000]:u.mem_map(base,0x10000)
C=0x1300100;M=0x1400100;L=0x1500100;F=0x1600100;H=0x1602000;G=0x1604000;T=0x1605000;D=0x1002000
for ptr,base in [(0x66af70,C),(0x66b3b8,M),(0x66afec,L),(0x66afa0,F),(0x66ae84,H)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66ae98,p32(G));u.mem_write(G+0x530,p32(1));u.mem_write(0x66b40c,p32(T));u.mem_write(read32(0x66b09c),p32(0));u.mem_write(read32(0x66b080),p32(1));u.mem_write(0x66b574,p32(D))
calls=[];notifications=[]
def hook(uc,a,size,data):
 if a==0x61f691:uc.reg_write(UC_X86_REG_EBP,SP-0x200);u.mem_write(SP-0x210,p32(1));return
 if a==0x6204af:uc.reg_write(UC_X86_REG_EIP,STOP);return
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);pop=4
 if a==0x4060a8:
  n=read32(sp+4);old=read32(H-4);u.mem_write(eax,p32(H));u.mem_write(H-4,p32(n))
  if n>old:u.mem_write(H+old*24,bytes((n-old)*24))
 else:
  args=[uc.reg_read(reg) for reg in [UC_X86_REG_EAX,UC_X86_REG_EDX,UC_X86_REG_ECX]];args=[n if n<2**31 else n-2**32 for n in args]
  if a==0x6494f8:calls.append(args+[bytes(u.mem_read(read32(sp+4),10)).split(b'\0')[0].decode('ascii')]);pop=8
  else:notifications.append(args+[read32(sp+4),read32(sp+8),read32(sp+12)]);pop=16
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x61f691,0x6204af,0x4060a8,0x6494f8,0x64cbf0]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(619691);cases=[]
for i in range(500):
 calls=[];notifications=[];competition=r.randrange(11);day=r.randrange(1,365);season=r.randrange(1,6);date=(datetime(season+2014,1,1)+timedelta(days=day-1)-datetime(1899,12,30)).days
 career=bytearray(1888)
 for o,n in [(0x88,competition),(0xc0,season),(0x16c,day),(0x194,r.randrange(7)),(0x1a0,r.randrange(7)),(0x62c,r.randrange(7))]:struct.pack_into('<i',career,o,n)
 table=r.choice([-1,0,1]);u.mem_write(T,p32(table));u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(D+(day-1)*24+8,struct.pack('<d',date))
 clubs=[];ledgers=[];benches=[]
 for j in range(2):
  b=bytearray(r.randbytes(760));b[0x39]=r.randrange(2)
  for o,n in [(0x44,r.choice([-1,0,1])),(0x60,j),(0x7c,r.randrange(1,5)),(0x80,r.randrange(1,5)),(0x220,r.randrange(3))]:struct.pack_into('<i',b,o,n)
  struct.pack_into('<q',b,0x48,r.randint(-10**12,10**12));u.mem_write(C+j*760,bytes(b));clubs.append(b.hex())
  l=bytearray(r.randbytes(56))
  for o,n in [(4,r.choice([0,-100,r.randrange(1000000)])),(0x20,r.randrange(5000000))]:struct.pack_into('<i',l,o,n)
  u.mem_write(L+j*56,bytes(l));ledgers.append(l.hex());bench=[r.randrange(100) for _ in range(7)];benches.append(bench);u.mem_write(0x1000000+j*248+0x40,struct.pack('<7i',*bench))
 raw=bytearray(444);struct.pack_into('<2i',raw,8,0,1);struct.pack_into('<i',raw,0x24,r.randint(-100000,1000000));struct.pack_into('<4i',raw,0x2c,*[r.randrange(20000) for _ in range(4)]);struct.pack_into('<2i',raw,0x48,r.randrange(11),r.randrange(11))
 for o in [0x88,0x8c,0x90,0x94]:struct.pack_into('<i',raw,o,r.randrange(-10,1000))
 u.mem_write(M+444,bytes(raw));saved=r.randbytes(72);u.mem_write(F,saved);u.mem_write(H-4,p32(0));run(0x61f691,[],0,instruction_limit=500000)
 expected={'clubs':[bytes(u.mem_read(C+j*760,760)).hex() for j in range(2)],'ledgers':[bytes(u.mem_read(L+j*56,56)).hex() for j in range(2)],'saved':bytes(u.mem_read(F,72)).hex(),'history':bytes(u.mem_read(H,read32(H-4)*24)).hex(),'benches':[list(struct.unpack('<7i',u.mem_read(0x1000000+j*248+0x40,28))) for j in range(2)],'counters':{str(o):struct.unpack('<i',u.mem_read(M+444+o,4))[0] for o in [0x48,0x4c,0x88,0x8c,0x90,0x94]},'calls':calls,'notifications':notifications}
 cases.append({'career':career.hex(),'clubs':clubs,'ledgers':ledgers,'fixture':raw.hex(),'saved':saved.hex(),'benches':benches,'table':table,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/finished-fixture-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original whole per-fixture settlement block:500 cases')
