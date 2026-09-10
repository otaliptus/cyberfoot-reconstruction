from native_oracle import *
u.mem_map(0x1300000,0x10000)
CLUBS=0x1300000;GROUP=0x1302000
u.mem_write(read32(0x66af70),p32(CLUBS))
u.mem_write(0x66ae98,p32(GROUP))
u.mem_write(read32(0x66b09c),p32(0))
career=read32(0x66ac78);r=random.Random(61933);cases=[]
for i in range(3000):
 competition=r.choice([2,3,4,6]);round=r.randrange(10);tie=r.choice([False,True]);ranks=[r.randrange(-10,30),r.randrange(-10,30)]
 scores=[r.randrange(9) for _ in range(4)]
 if i%3==0:scores[2:]=scores[:2]
 if i%7==0:scores=[r.choice([-2147483648,2147483647,-1,0,1]) for _ in range(4)]
 for offset,value in [(0x88,competition),(0x194,round)]:u.mem_write(career+offset,p32(value))
 u.mem_write(GROUP+0x564,p32(int(tie)))
 for j,n in enumerate(ranks):u.mem_write(CLUBS+j*760+0x1b0,p32(n))
 expected=run(0x61edd0,[0,scores[0],scores[1]],0,[1,0,scores[2],scores[3]])['result']
 cases.append({'firstLeg':scores[:2],'secondLeg':scores[2:],'competition':competition,'round':round,'rankingTieBreak':tie,'clubRanks':ranks,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/knockout-result-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original two-leg decision:3000 cases')
