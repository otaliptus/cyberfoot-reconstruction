from native_oracle import *
u.mem_map(0,0x1000)
FIXTURE=0x1002000;CLUBS=0x1003000;FRAME=0x800c000
u.mem_write(read32(0x66b3b8),p32(FIXTURE));u.mem_write(read32(0x66af70),p32(CLUBS));u.mem_write(read32(0x66ad84),p32(0))
def signed(a):return struct.unpack('<i',u.mem_read(a,4))[0]
def hook(uc,a,size,data):
 if a==0x603beb:uc.reg_write(UC_X86_REG_EBP,FRAME)
 else:uc.reg_write(UC_X86_REG_EIP,STOP)
u.hook_add(UC_HOOK_CODE,hook,begin=0x603beb,end=0x603beb);u.hook_add(UC_HOOK_CODE,hook,begin=0x603dfe,end=0x603dfe)
r=random.Random(603);cases=[]
for i in range(1200):
 u.mem_write(FIXTURE,bytes(444));u.mem_write(FIXTURE+8,struct.pack('<ii',0,1))
 counters={str(off):r.randrange(0,200) for off in range(0x88,0xb0,4)}
 counters['72']=r.randrange(0,8);counters['76']=r.randrange(0,8)
 if i<100:counters['136']=i//10;counters['140']=i%10
 styles=[r.randrange(3),r.randrange(3)]
 for off,value in counters.items():u.mem_write(FIXTURE+int(off),p32(value))
 for j,value in enumerate(styles):u.mem_write(CLUBS+j*760+0x220,p32(value))
 run(0x603beb,[],1);p=signed(FRAME-8)
 expected={'possession':[p,100-p],'shots':[signed(FRAME-0x20),signed(FRAME-0x1c)],'tackles':[signed(FRAME-0x28),signed(FRAME-0x24)],'wrongPasses':[signed(FRAME-0x18),signed(FRAME-0x14)],'fouls':[signed(FRAME-0x30),signed(FRAME-0x2c)]}
 cases.append({'counters':counters,'styles':styles,'expected':expected})
(R.parent/'cyberfoot-web/native-port/tests/match-statistics-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('1200 original match statistics calculations including x87 adjustments and zero-possession initialization')
