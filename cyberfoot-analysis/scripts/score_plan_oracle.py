from native_oracle import *
u.mem_map(0x1300000,0x10000);u.mem_write(read32(0x66af70),p32(0x1300000))
r=random.Random(610174);cases=[]
for difference in range(-30,31):
 for neutral in [False,True]:
  for alternate in [False,True]:
   run(0x60cc6c if neutral else 0x60cb40,[difference,OUT] if neutral else [difference,alternate,OUT],0)
   cases.append({'kind':'probabilities','difference':difference,'neutral':neutral,'alternate':alternate,'expected':list(struct.unpack('<3i',u.mem_read(OUT,12)))})
for i in range(4000):
 difference=r.randint(-30,30);neutral=r.choice([False,True]);alternate=r.choice([False,True]);seed=r.getrandbits(32)
 out=run(0x60c85c,[difference,neutral,alternate],seed,[OUT]);out['result']=list(struct.unpack('<3i',u.mem_read(OUT,12)))
 cases.append({'kind':'score','difference':difference,'neutral':neutral,'alternate':alternate,'seed':seed,'expected':out})
for i in range(2000):
 teams=[{'attackTotal':r.randint(0,2000)} for _ in range(2)];clubs=[{'field58':r.randint(-10,30),'country':r.randint(0,210)} for _ in range(2)];neutral=r.choice([False,True])
 for j in range(2):
  u.mem_write(0x1000000+j*248+0xec,p32(teams[j]['attackTotal']));u.mem_write(0x1300000+j*760+0x58,p32(clubs[j]['field58']));u.mem_write(0x1300000+j*760+0x3c,p32(clubs[j]['country']))
 out=run(0x60cd60,[0,1,0],0,[neutral,1])
 cases.append({'kind':'difference','teams':teams,'clubs':clubs,'neutral':neutral,'expected':out['result']})
for full in [False,True]:
 u.mem_write(read32(0x66ac78)+0xdd,bytes([full]))
 for tick in range(0,241):cases.append({'kind':'minute','tick':tick,'full':full,'expected':run(0x651e70,[tick],0)['result']})
p=R.parent/'cyberfoot-web/native-port/tests/score-plan-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original score probability, planning, strength difference and clock cases:',len(cases))
