"""Whole005a4648 auction bid; UI text/labels stubbed, x87 math native.
Stops at the resolution call, the panel update or the epilogue."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x30000)
C=0x1401000;P=0x1409000;TB=0x141c000;PA=0x141d000;FB=0x141e000
career=read32(0x66ac78)
u.mem_write(FB+0x388,p32(0x388));u.mem_write(FB+0x390,p32(0x390));u.mem_write(FB+0x394,p32(0x394));u.mem_write(FB+0x398,p32(0x398));u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(0x66ad44,p32(PA));u.mem_write(read32(0x66b610),p32(30))
text=b'';vis=[]
def parse(s):
 t=s.decode('latin1')
 if t=='':return (0,0)
 neg=False
 if t[0] in '+-':neg=t[0]=='-';t=t[1:]
 if not t.isdigit():return (0,1)
 n=int(t)
 if n>2147483647:return (0,1)
 return ((-n if neg else n)&0xffffffff,0)
def stub(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if address==0x466208:u.mem_write(edx,p32(TB if text else 0))
 elif address==0x40343c:
  value,err=parse(bytes(u.mem_read(eax,16)).split(b'\0')[0]);u.mem_write(edx,p32(err));uc.reg_write(UC_X86_REG_EAX,value)
 elif address==0x409ff8:
  value,_=parse(bytes(u.mem_read(eax,16)).split(b'\0')[0]);uc.reg_write(UC_X86_REG_EAX,value)
 elif address==0x466128:vis.append([hex(eax),uc.reg_read(UC_X86_REG_EDX)&0xff])
 elif address==0x4e1414:vis.append([hex(eax),'caption',edx])
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x466128,0x466208,0x40343c,0x409ff8,0x4e1414]:u.hook_add(UC_HOOK_CODE,stub,begin=a,end=a)
stops=[]
def stop(uc,a,s,d):stops.append(a);uc.reg_write(UC_X86_REG_EIP,STOP)
for a in [0x5a47c5,0x5a4848,0x5a4959]:u.hook_add(UC_HOOK_CODE,stop,begin=a,end=a)
r=random.Random(0x5a4648);cases=[]
for i in range(600):
 clubCount=r.randrange(1,9);playerCount=r.randrange(0,12);clubIds=[r.randrange(12) for _ in range(clubCount)]
 car=bytearray(1888);struct.pack_into('<i',car,0x13c,clubCount)
 for j,id in enumerate(clubIds):struct.pack_into('<i',car,0x140+j*4,id)
 clubs=bytearray()
 for cid in range(12):
  b=bytearray(r.randbytes(760));struct.pack_into('<i',b,0x64,r.choice([0,10,28,29,35]));struct.pack_into('<q',b,0x48,r.choice([-5,0,1,10000000,10**15,9223372036854775807]));clubs+=b
 players=bytearray()
 for j in range(playerCount):
  b=bytearray(r.randbytes(304));struct.pack_into('<i',b,0x20,r.choice([-1,0,1,2,3]));players+=b
 dc=r.randrange(clubCount);current=clubIds[dc];d0=r.choice([-1000,0,500,1000000,2147483647]);d4=r.choice([-1,0,5]);b4=r.randrange(0,120);pid=r.choice([-1,r.randrange(playerCount)]) if playerCount else -1
 text=r.choice([b'',b'0',b'1',b'25',b'999',b'123456789',b'12x',b'50000',b'-3']);u.mem_write(TB,text+b'\0')
 u.mem_write(career,bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(P,bytes(players));u.mem_write(P-4,p32(playerCount));u.mem_write(PA,p32(pid));u.mem_write(0x6d24e0,p32(current));u.mem_write(0x6d24dc,p32(dc));u.mem_write(0x6d24d0,p32(d0));u.mem_write(0x6d24d4,p32(d4));u.mem_write(0x6d24b4,p32(b4))
 vis.clear();stops.clear()
 run(0x5a4648,[FB],1,instruction_limit=1000000)
 cases.append({'career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'players':bytes(players).hex(),'text':text.decode(),'current':current,'dc':dc,'d0':d0,'d4':d4,'base':b4,'player':pid,'expected':{'stop':stops[0] if stops else 0,'d0':read32(0x6d24d0),'d4':read32(0x6d24d4),'dc':read32(0x6d24dc),'e0':read32(0x6d24e0),'vis':[list(x) for x in vis]}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/auction-bid-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('600 whole original auction bid comparisons generated (UI stubs only).')
