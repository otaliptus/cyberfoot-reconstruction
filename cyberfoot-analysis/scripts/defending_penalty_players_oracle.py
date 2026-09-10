from native_oracle import *
u.mem_map(0x1300000,0x10000);P=0x1300000;L=0x1303000;C=0x1304000
for ptr,base in [(0x66b5b8,P),(0x66b238,L),(0x66af70,C)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(read32(0x66ae04),p32(0));u.mem_write(read32(0x66adc8),p32(1));u.mem_write(C+0x60,p32(0));u.mem_write(C+760+0x60,p32(1))
def hook(uc,a,size,data):
 if a==0x5fd646:uc.reg_write(UC_X86_REG_EBX,0)
 elif a==0x5fd6d8:uc.reg_write(UC_X86_REG_EIP,0x5fd734)
 else:uc.reg_write(UC_X86_REG_EIP,STOP)
for a in [0x5fd646,0x5fd6d8,0x5fd81d]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(5954);cases=[]
for i in range(500):
 players=[{'active':bool(r.randrange(2)) if i%5 else False,'role':r.randrange(5)} for _ in range(25)]
 own={'players':[r.randrange(25) for _ in range(11)]};opponent={'players':[r.randrange(25) for _ in range(11)]};opponent['players'][10]=r.choice([0,0,0,r.randrange(1,25)])
 nominee=r.randrange(25)
 for j,p in enumerate(players):u.mem_write(P+j*304+0x24,p32(p['role']));u.mem_write(P+j*304+0x86,bytes([p['active']]))
 for j,l in enumerate([own,opponent]):u.mem_write(L+j*248,b''.join(p32(n) for n in l['players']))
 u.mem_write(C+0xa8,p32(nominee));u.mem_write(0x6d4104,p32(0));u.mem_write(0x6d4108,p32(0));run(0x5fd646,[],1)
 cases.append({'players':players,'own':own,'opponent':opponent,'nominee':nominee,'expected':{'playerId':read32(0x6d4104),'keeperId':read32(0x6d4108)}})
(R.parent/'cyberfoot-web/native-port/tests/defending-penalty-players-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('500 original Form54 selection blocks; intervening label formatting skipped')
