from native_oracle import *
u.mem_map(0x1400000,0x10000);P=0x1400100;C=0x1402000;A=0x1405000;career=read32(0x66ac78)
for glob,base in [(0x66b5b8,P),(0x66af70,C),(0x66b544,A)]:u.mem_write(read32(glob),p32(base))
def resize(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);assert read32(sp+4)==0;uc.mem_write(uc.reg_read(UC_X86_REG_EAX),p32(0));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
r=random.Random(59);cases=[]
for i in range(600):
 players=r.randbytes(12*304);clubs=r.randbytes(10*760);rows=[[r.randrange(12),r.randrange(-1,10)] for _ in range(r.randrange(20))];ids=[r.randrange(-1,10) for _ in range(10)];count=r.randrange(-1,11);u.mem_write(P,players);u.mem_write(C,clubs);u.mem_write(read32(0x66b544),p32(A));u.mem_write(A-4,p32(len(rows)));u.mem_write(A,b''.join(p32(n) for row in rows for n in row));u.mem_write(career+0x604,b''.join(p32(n) for n in ids));u.mem_write(read32(0x66b57c),p32(count));u.mem_write(read32(0x66acd0),b'\x01');run(0x5f9e54,[],0)
 cases.append({'players':players.hex(),'clubs':clubs.hex(),'rows':rows,'ids':ids,'count':count,'expected':{'players':bytes(u.mem_read(P,len(players))).hex(),'clubs':bytes(u.mem_read(C,len(clubs))).hex(),'assignmentsPointer':read32(read32(0x66b544)),'active':bool(u.mem_read(read32(0x66acd0),1)[0])}})
(R.parent/'cyberfoot-web/native-port/tests/national-assignment-reset-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('600 whole national assignment restores; array-clear adapter only')
