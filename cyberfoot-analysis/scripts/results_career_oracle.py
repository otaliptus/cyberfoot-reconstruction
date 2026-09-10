from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000)
P=0x1300100;A=0x1310100;B=0x1311100;E=0x1312100
career=read32(0x66ac78);calendar=read32(0x66b574)
u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66b0d4),p32(E));u.mem_write(E-4,p32(0))
addresses={0x64fdf0:'dateEffects',0x5f3890:'continentalPostRound',0x5f343c:'nationalPostRound',0x634498:'competitionFiveEligible',0x5f92d8:'selectHumanParticipation',0x5f9e54:'restoreNationalAssignments',0x64cae0:'refreshReferees',0x5f3380:'nationalSetup',0x652134:'playerValue',0x5f96dc:'seasonEnd',0x5fa020:'leagueNext',0x5f9efc:'cupNext',0x5f9dc8:'nationalNext',0x5f9f14:'otherNext',0x5f9800:'managerOffers',0x5f9f2c:'unemployedOffers',0x656410:'managerChanges',0x653268:'aiTransfer',0x5f99c4:'humanNext',0x5f9bcc:'automaticNext'}
kind='career';calls=[];values=[];eligible=True;human=True

def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if a==0x5f925c:
  calls.append(['resetPlayers']);return
 if a==0x4060a8:
  assert read32(sp+4)==0;u.mem_write(eax,p32(0));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp));return
 if a==0x5fa020 and kind=='league':return
 name=addresses[a];args=[];pop=4
 if name=='dateEffects':args=[struct.unpack('<d',u.mem_read(sp+4,8))[0]];pop=12
 elif name in ['continentalPostRound','nationalPostRound']:args=[edx]
 elif name=='playerValue':args=[eax];uc.reg_write(UC_X86_REG_EAX,values[eax]&0xffffffff)
 elif name=='aiTransfer':args=[eax if eax<2**31 else eax-2**32]
 elif name=='competitionFiveEligible':uc.reg_write(UC_X86_REG_EAX,int(eligible))
 elif name=='selectHumanParticipation':u.mem_write(0x6d3f40,bytes([int(human)]))
 calls.append([name,*args]);uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [*addresses,0x5f925c,0x4060a8]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(59388);cases=[]
for i in range(1200):
 kind='career';calls=[];eligible=bool(r.randrange(2));human=bool(r.randrange(2));count=r.randrange(9);day=r.randrange(1,364)
 car=bytearray(1888)
 for off,n in [(0x16c,day),(0x88,r.randrange(-1,12)),(0x1a8,r.randrange(3)),(0x700,r.randrange(2)),(0x704,r.randrange(2)),(0x4c,r.choice([1,1,4])),(0x50,r.choice([1,2,2]))]:struct.pack_into('<i',car,off,n)
 data=bytearray(r.randbytes(count*304));values=[r.randrange(-2147483648,2147483648) for _ in range(count)]
 for j in range(count):struct.pack_into('<i',data,j*304+0x20,r.randrange(-2,4))
 first=r.choice([-1,1,2,3,4,5,6,7,8,9,10,1000,1001,1002]);second=r.choice([-1,1,2,3,4,5,6,7,8,9,10]);cal=[{'dayIndex':d+1,'date':42000+d,'competition':-1} for d in range(366)]
 cal[day]['competition']=first
 if first>=1000:cal[day+1]['competition']=second
 raw=b''.join(bytes(8)+struct.pack('<di',row['date'],row['competition'])+bytes(4) for row in cal)
 u.mem_write(calendar,raw);u.mem_write(career,bytes(car));u.mem_write(P-4,p32(count));u.mem_write(P,bytes(data));u.mem_write(read32(0x66b238),p32(A));u.mem_write(read32(0x66b3b8),p32(B));u.mem_write(A-4,p32(2));u.mem_write(B-4,p32(3));finished=bool(r.randrange(2));u.mem_write(read32(0x66acd0),bytes([int(finished)]))
 run(0x5f9388,[0],0)
 cases.append({'kind':kind,'career':car.hex(),'players':data.hex(),'first':first,'second':second,'values':values,'eligible':eligible,'human':human,'nationalAssignmentsActive':finished,'expected':{'career':bytes(u.mem_read(career,1888)).hex(),'players':bytes(u.mem_read(P,count*304)).hex(),'nextCompetition':struct.unpack('<i',u.mem_read(0x6d3f3c,4))[0],'humanParticipation':bool(u.mem_read(0x6d3f40,1)[0]),'calls':calls,'lineups':read32(read32(0x66b238)),'matchTeams':read32(read32(0x66b3b8))}})
for i in range(1200):
 kind='league';calls=[];human=bool(r.randrange(2));car=bytearray(1888)
 for off,n in [(0x16c,r.choice([59,60,62,63,92,93,101,102,119,120,135,136,r.randrange(367)])),(0x168,r.choice([0,2,4,7])),(0xc0,r.randrange(9))]:struct.pack_into('<i',car,off,n)
 car[0x6c8]=r.randrange(2);u.mem_write(career,bytes(car));seed=r.getrandbits(32);result=run(0x5fa020,[0],seed)
 cases.append({'kind':kind,'career':car.hex(),'seed':seed,'human':human,'expected':{'calls':calls,'seed':result['seed']}})
(R.parent/'cyberfoot-web/native-port/tests/results-career-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('1200 original results-career and1200 league-next controllers; subcontroller call adapters; native player reset')
