from native_oracle import *
u.mem_map(0x1300000,0x10000);P=0x1300000;L=0x1302000;C=0x1303000
for ptr,base in [(0x66b5b8,P),(0x66b238,L),(0x66af70,C)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(read32(0x66adc8),p32(0));u.mem_write(C+0x60,p32(0))
def hook(uc,a,size,data):
 if a==0x5fe608:uc.reg_write(UC_X86_REG_EBP,SP-256)
 else:uc.reg_write(UC_X86_REG_EAX,read32(0x6d4114));uc.reg_write(UC_X86_REG_EIP,STOP)
u.hook_add(UC_HOOK_CODE,hook,begin=0x5fe608,end=0x5fe608);u.hook_add(UC_HOOK_CODE,hook,begin=0x5fe76a,end=0x5fe76a)
r=random.Random(59341);cases=[]
for i in range(300):
 players=[{'active':bool(r.randrange(2)) if i%4 else False,'role':r.randrange(5)} for _ in range(13)]
 lineup={'players':[r.randrange(13) for _ in range(11)]};previous=r.choice([-1,0,1,12])
 for j,p in enumerate(players):u.mem_write(P+j*304+0x24,p32(p['role']));u.mem_write(P+j*304+0x86,bytes([p['active']]))
 u.mem_write(L,b''.join(p32(n) for n in lineup['players']));u.mem_write(0x6d4114,p32(previous))
 o=run(0x5fe608,[],1)
 cases.append({'players':players,'lineup':lineup,'previous':previous,'expected':o['result']})
(R.parent/'cyberfoot-web/native-port/tests/human-penalty-keeper-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('300 original Form34 goalkeeper-selection block executions')
