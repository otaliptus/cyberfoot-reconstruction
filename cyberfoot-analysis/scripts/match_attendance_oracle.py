from native_oracle import *
u.mem_map(0x1300000,0x10000);C=0x1300100;P=0x1301000;M=0x1302000;FRAME=0x800b000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(0x66b608,p32(P));u.mem_write(read32(0x66b3b8),p32(M))
def income_hook(uc,a,size,data):
 if a==0x613d57:
  uc.reg_write(UC_X86_REG_EBP,FRAME);uc.reg_write(UC_X86_REG_ESI,111);uc.reg_write(UC_X86_REG_EBX,1)
 else:uc.reg_write(UC_X86_REG_EIP,STOP)
for a in [0x613d57,0x613e53]:u.hook_add(UC_HOOK_CODE,income_hook,begin=a,end=a)
r=random.Random(616014);cases=[]
for i in range(2000):
 clubs=[]
 for j in range(2):
  b=bytearray(760);b[0x39]=r.randrange(2)
  for offset,value in [(0x3c,r.choice([0,1,29,29])),(0x40,r.randrange(5)),(0x54,r.choice([-100,0,1,50,100,150])),(0x7c,r.randrange(1,5)),(0x98,r.randrange(100))]:struct.pack_into('<i',b,offset,value)
  for k in range(4):
   struct.pack_into('<i',b,0x204+k*4,r.choice([-1,0,9,49,50,99,100,150,500,1000,3000,4000,15000,35000,70000,r.randrange(200000)]))
   struct.pack_into('<i',b,0x1f4+k*4,r.randrange(-5,100))
  clubs.append(b);u.mem_write(C+j*760,bytes(b))
 reference=[[r.randrange(40) for _ in range(4)] for _ in range(5)];u.mem_write(P,b''.join(p32(n) for row in reference for n in row))
 phase=r.choice([1,2]);leg=r.choice([1,2]);u.mem_write(read32(0x66ac78)+0x4c,p32(phase)+p32(leg));seed=r.getrandbits(32)
 result=run(0x616014,[0,0,1],seed,[OUT]);attendance=list(struct.unpack('<4i',u.mem_read(OUT,16)))
 u.mem_write(M+444,bytes(444));u.mem_write(M+444+0x2c,b''.join(p32(n) for n in attendance));run(0x613d57,[],0)
 income=struct.unpack('<i',u.mem_read(M+444+0x24,4))[0]
 cases.append({'clubs':b''.join(clubs).hex(),'reference':reference,'phase':phase,'leg':leg,'seed':seed,'expected':{'attendance':attendance,'seed':result['seed'],'income':income}})
# Separate income cases include signed multiplication overflow.
incomes=[]
for i in range(500):
 attendance=[r.randrange(-2147483648,2147483648) for _ in range(4)];prices=[r.randrange(-2147483648,2147483648) for _ in range(4)]
 u.mem_write(C+0x1f4,b''.join(p32(n) for n in prices));u.mem_write(M+444+0x2c,b''.join(p32(n) for n in attendance));run(0x613d57,[],0)
 incomes.append({'attendance':attendance,'prices':prices,'expected':struct.unpack('<i',u.mem_read(M+444+0x24,4))[0]})
p=R.parent/'cyberfoot-web/native-port/tests/match-attendance-vectors.json';p.write_text(json.dumps({'cases':cases,'incomes':incomes},separators=(',',':')));print('Original league attendance: 2000 cases; ticket income: 500 overflow cases')
