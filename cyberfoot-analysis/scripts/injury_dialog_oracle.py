from native_oracle import *
u.mem_map(0x1300000,0x10000);P=0x1300000;L=0x1303000;C=0x1304000;F=0x1305000
for ptr,base in [(0x66b5b8,P),(0x66b238,L),(0x66af70,C),(0x66b3b8,F)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(read32(0x66b138),p32(1));u.mem_write(read32(0x66ae7c),p32(0));u.mem_write(read32(0x66ad84),p32(1));u.mem_write(C+0x60,p32(0));output={}
def hook(uc,a,size,data):
 if a==0x5ff872:uc.reg_write(UC_X86_REG_EBP,SP-256)
 elif a in [0x5ff989,0x5ffd04]:
  slot=uc.reg_read(UC_X86_REG_EBX);output['rows'].append(read32(L+0x3c+slot*4));uc.reg_write(UC_X86_REG_EIP,0x5ffc62 if a==0x5ff989 else 0x5ffffb)
 elif a==0x600012:uc.reg_write(UC_X86_REG_EAX,len(output['rows']));uc.reg_write(UC_X86_REG_EIP,0x600020)
 elif a==0x600028:output['canContinueEmpty']=True;uc.reg_write(UC_X86_REG_EIP,0x600045)
 elif a==0x6000c6:output['improvise']=True;uc.reg_write(UC_X86_REG_EIP,0x6000d6)
 elif a==0x6000d6:output['sounds']=['contusao'];uc.reg_write(UC_X86_REG_EIP,0x6000e0)
 elif a==0x5ff8ff:output['keeperOnly']=True
 else:uc.reg_write(UC_X86_REG_EIP,STOP)
for a in [0x5ff872,0x5ff989,0x5ffd04,0x600012,0x600028,0x6000c6,0x6000d6,0x5ff8ff,0x6000e0]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(5953);cases=[]
for i in range(700):
 players=[{'active':bool(r.randrange(2)),'role':r.randrange(6)} for _ in range(16)];players[1]['role']=r.choice([0,0,1,2,3,4])
 bench=[r.choice([-1,0,r.randrange(2,16)]) for _ in range(7)];clubs=r.choice([[0,1],[1,0],[0,0]]);side=clubs.index(0)+1;subs=[r.randrange(4),r.randrange(4)]
 for j,p in enumerate(players):u.mem_write(P+j*304+0x24,p32(p['role']));u.mem_write(P+j*304+0x86,bytes([p['active']]))
 u.mem_write(L+0x40,b''.join(p32(n) for n in bench));u.mem_write(F+444+8,b''.join(p32(n) for n in clubs));u.mem_write(F+444+0x18,b''.join(p32(n) for n in subs));output={'rows':[],'keeperOnly':False,'improvise':False,'canContinueEmpty':False,'sounds':[]}
 run(0x5ff872,[],1);expected={**output,'substitutions':[read32(F+444+0x18),read32(F+444+0x1c)]}
 cases.append({'players':players,'bench':bench,'clubs':clubs,'side':side,'substitutions':subs,'expected':expected})
(R.parent/'cyberfoot-web/native-port/tests/injury-dialog-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('700 original Form53 candidate/business block executions; row formatting adapted')
