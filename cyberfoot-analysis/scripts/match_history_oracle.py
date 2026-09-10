"""Full61efa4 with player-history delivery adapters; verify600-byte record and round."""
from native_oracle import *
from datetime import datetime,timedelta
u.mem_map(0,0x1000)
for a in [0x1300000,0x1400000,0x1500000,0x1600000]:u.mem_map(a,0x10000)
C=0x1300000;M=0x1400000;F=0x1500100;H=0x1600100;E=0x1001000;D=0x1003000;CUP=0x1505000;META=0x1506000;TEMP=0x1507000;A=0x1508000
for ptr,base in [(0x66af70,C),(0x66b3b8,M),(0x66afa0,F),(0x66b154,H),(0x66ac7c,E),(0x66aca0,CUP),(0x66b6ac,META),(0x66b160,A)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66b574,p32(D));u.mem_write(E-4,p32(0));u.mem_write(CUP-4,p32(0));u.mem_write(read32(0x66aea4),p32(1))
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX)
 if a==0x4060a8:
  base,sz={read32(0x66b154):(H,600),read32(0x66aed4):(TEMP,28),read32(0x66b160):(A,24)}[eax];n=read32(sp+4);old=read32(base-4);u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*sz,bytes((n-old)*sz))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x65867c,0x6588a4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61154);cases=[]
for i in range(600):
 competition=r.randrange(11);season=r.randrange(1,6);day=r.randrange(1,367);career=bytearray(1888)
 for off,n in [(0x88,competition),(0xc0,season),(0x16c,day),(0x168,r.choice([0,2,4])),(0x4c,r.randrange(30)),(0x50,r.randrange(1,3)),(0x114,r.randrange(10)),(0x190,r.randrange(1,3)),(0x194,r.randrange(10)),(0x19c,r.randrange(1,3)),(0x1a0,r.randrange(10)),(0x62c,r.randrange(10))]:struct.pack_into('<i',career,off,n)
 u.mem_write(read32(0x66ac78),bytes(career));date=(datetime(season+2014,1,1)+timedelta(days=day-1)-datetime(1899,12,30)).days;u.mem_write(D+(day-1)*24+8,struct.pack('<d',date))
 group=r.randrange(27);subgroup=r.randrange(3);u.mem_write(read32(0x66b09c),p32(group));u.mem_write(read32(0x66b484),p32(subgroup))
 raw=bytearray(r.randbytes(444));struct.pack_into('<i',raw,0,competition);struct.pack_into('<2i',raw,8,0,1);struct.pack_into('<i',raw,0x17c,0);u.mem_write(M+444,bytes(raw))
 clubs=[r.randbytes(760),r.randbytes(760)]
 for j,b in enumerate(clubs):u.mem_write(C+j*760,b)
 saved=bytearray(r.randbytes(72));round3=r.randrange(20);struct.pack_into('<i',saved,0x1c,round3);u.mem_write(F,bytes(saved));u.mem_write(H-4,p32(0));u.mem_write(TEMP-4,p32(0));u.mem_write(A-4,p32(0));run(0x61efa4,[0],0,instruction_limit=500000)
 cases.append({'career':career.hex(),'clubs':[b.hex() for b in clubs],'raw':raw.hex(),'saved':saved.hex(),'group':group,'subgroup':subgroup,'expected':bytes(u.mem_read(H,600)).hex()})
p=R.parent/'cyberfoot-web/native-port/tests/match-history-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original detailed history record/round cases:600')
