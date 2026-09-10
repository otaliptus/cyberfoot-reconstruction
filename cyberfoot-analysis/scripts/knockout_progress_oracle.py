from native_oracle import *
u.mem_map(0x1300000,0x10000)
C=0x1300100;F=0x1302000;H=0x1304000;L=0x1306000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66b114,H),(0x66aca0,L)]:u.mem_write(read32(ptr),p32(base))
def allocation(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);n=read32(sp+4);u.mem_write(H-4,p32(n));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,allocation,begin=0x4060a8,end=0x4060a8)
r=random.Random(62268);cases=[]
for i in range(1500):
 competition=r.choice([0,2,3,4,6]);round=r.randrange(10);season=r.randrange(30);winner=r.randrange(3);career=bytearray(1888)
 for o,n in [(0x88,competition),(0xc0,season),(0x110,round),(0x194,round),(0x1a0,round)]:struct.pack_into('<i',career,o,n)
 u.mem_write(read32(0x66ac78),bytes(career));clubs=[bytearray(r.randbytes(760)) for _ in range(2)];countries=r.sample(range(8),r.randrange(9));u.mem_write(L-4,p32(len(countries)))
 for j,n in enumerate(countries):u.mem_write(L+j*660+0x140,p32(n))
 for j,b in enumerate(clubs):
  struct.pack_into('<i',b,0x3c,r.randrange(8))
  if i%3:
   for o in [0x50,0x54]:struct.pack_into('<i',b,o,r.randrange(-10,120))
  u.mem_write(C+j*760,bytes(b))
 saved=bytearray(r.randbytes(72));struct.pack_into('<2i',saved,0,0,1);u.mem_write(F,bytes(saved));u.mem_write(F-4,p32(1));u.mem_write(H-4,p32(0))
 run(0x622ec8,[0,competition,round],0,[1,0]);run(0x61dec8,[0,winner],0)
 n=read32(H-4);cases.append({'career':career.hex(),'clubs':[b.hex() for b in clubs],'saved':saved.hex(),'countries':countries,'winner':winner,'competition':competition,'round':round,'expected':{'clubs':[bytes(u.mem_read(C+j*760,760)).hex() for j in range(2)],'history':bytes(u.mem_read(H,n*20)).hex()}})
p=R.parent/'cyberfoot-web/native-port/tests/knockout-progress-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original knockout outcome/elimination:1500 cases')
