from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000)
C=0x1300100;P=0x1301000;L=0x1304000;M=0x1305000;S=0x1306000;A=0x1307000;T=0x1308000;H=0x1309000
for ptr,base in [(0x66af70,C),(0x66b5b8,P),(0x66afec,L),(0x66b6ac,M),(0x66b6b4,S),(0x66ae58,A),(0x66b560,H)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x6d531c,p32(T));sizes={0x6d531c:(T,16),read32(0x66b560):(H,28)}
def allocation(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);base,size=sizes[uc.reg_read(UC_X86_REG_EAX)];old=read32(base-4);n=read32(sp+4);u.mem_write(base-4,p32(n))
 if n>old:u.mem_write(base+old*size,bytes((n-old)*size))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,allocation,begin=0x4060a8,end=0x4060a8)
def strings(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX)
 if a==0x404f30:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(edx))
 elif a==0x4049c4:u.mem_write(eax,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(edx,ecx)))
 elif a==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(eax))
 elif a==0x4048d4:u.mem_write(eax,p32(0))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,strings,begin=a,end=a)
r=random.Random(65764);cases=[]
for i in range(1000):
 comp=r.randrange(1,11);season=r.randrange(20);metadata=[[0,0,0],[comp,-1,0 if comp in [4,6,10] else -1]];u.mem_write(M-4,p32(2));u.mem_write(M,b''.join(p32(n) for row in metadata for n in row));u.mem_write(read32(0x66ac78)+0xc0,p32(season))
 stats=[[r.randrange(12),r.randrange(30),r.randrange(3),r.randrange(-1,3)] for _ in range(r.randrange(31))];apps=[[r.randrange(12),r.randrange(30),r.randrange(3),0] for _ in range(30)]
 clubs=r.randbytes(760*3);players=r.randbytes(304*12);ledger=r.randbytes(56*3)
 for base,rows in [(S,stats),(A,apps)]:u.mem_write(base-4,p32(len(rows)));u.mem_write(base,b''.join(p32(n) for row in rows for n in row))
 for base,b in [(C,clubs),(P,players),(L,ledger)]:u.mem_write(base,b)
 for base in [T,H]:u.mem_write(base-4,p32(0))
 run(0x657674,[comp,-1,-1],0,[-1,-1],instruction_limit=500000)
 cases.append({'competition':comp,'season':season,'metadata':metadata,'stats':stats,'appearances':apps,'clubs':clubs.hex(),'players':players.hex(),'ledger':ledger.hex(),'expected':{'clubs':bytes(u.mem_read(C,len(clubs))).hex(),'players':bytes(u.mem_read(P,len(players))).hex(),'ledger':bytes(u.mem_read(L,len(ledger))).hex(),'awards':bytes(u.mem_read(H,read32(H-4)*28)).hex(),'candidates':[list(struct.unpack('<4i',u.mem_read(T+j*16,16))) for j in range(read32(T-4))]}})
p=R.parent/'cyberfoot-web/native-port/tests/player-awards-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original player awards selection and prizes:1000 cases')
