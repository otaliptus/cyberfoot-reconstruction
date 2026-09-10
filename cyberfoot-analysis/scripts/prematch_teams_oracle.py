from native_oracle import *
u.mem_map(0x1300000,0x20000)
C=0x1300100;P=0x1310000;career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P))
u.mem_write(lineup_pointer,p32(0x1000100))
calls=[]
def hook(uc,a,size,data):
 calls.append(['lineup' if a==0x4e24d0 else 'tactics',uc.reg_read(UC_X86_REG_EAX)])
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4e24d0,0x4e2a64]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(4198);cases=[]
for i in range(400):
 n=r.randrange(0,20);count=r.randrange(1,25);competition=1+i%2;initial=r.randrange(0,20)
 clubs=bytearray(r.randbytes(n*760));players=bytearray(r.randbytes(count*304))
 for j in range(n):
  clubs[j*760+0x39]=r.randrange(2);clubs[j*760+0x214]=r.randrange(2);struct.pack_into('<i',clubs,j*760+0x7c,r.randrange(-1,5))
 for j in range(count):
  struct.pack_into('<i',players,j*304+0x20,r.randrange(-2,4))
  struct.pack_into('<i',players,j*304+0x18,r.choice([-1,15,16,70,71,100]))
  struct.pack_into('<i',players,j*304+0x28,r.choice([-1,0,1,100,101]))
  for base in [0x8c,0xb8]:struct.pack_into('<i',players,j*304+base+competition*4,r.randrange(-1,5))
 u.mem_write(C-4,p32(n));u.mem_write(C,bytes(clubs));u.mem_write(P-4,p32(count));u.mem_write(P,bytes(players));u.mem_write(0x1000100-4,p32(initial))
 u.mem_write(career+0x3c,p32(n));u.mem_write(career+0x88,p32(competition));calls=[]
 run(0x4e1a98,[],0)
 cases.append({'competition':competition,'initial':initial,'clubs':clubs.hex(),'players':players.hex(),'expected':{'calls':calls,'initial':read32(0x67aee4),'players':bytes(u.mem_read(P,len(players))).hex()}})
(R.parent/'cyberfoot-web/native-port/tests/prematch-teams-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('400 original domestic prematch dispatch cases, real player cleanup and discipline updates')
