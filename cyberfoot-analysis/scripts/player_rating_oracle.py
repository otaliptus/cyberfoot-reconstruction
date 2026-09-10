"""Complete original657b68rating and event counters657978/657ac8."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000)
P=0x1300000;M=0x1400000;E=0x1001000;TRAMP=0x100a000
u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66b3b8),p32(M));u.mem_write(read32(0x66ac7c),p32(E));u.mem_write(TRAMP,b'\xd9\x1d'+p32(OUT)+b'\x68'+p32(STOP)+b'\xc3')
def enter(uc,a,size,data):u.mem_write(uc.reg_read(UC_X86_REG_ESP),p32(TRAMP))
u.hook_add(UC_HOOK_CODE,enter,begin=0x657b68,end=0x657b68)
r=random.Random(65768);cases=[]
for i in range(5000):
 id=r.randrange(1,9);p={'role':r.randrange(5),'skill':r.randint(-1,102),'specialty':r.randrange(3),'careerGoals':r.choice([0,r.randrange(10),r.randrange(100)])};club=r.choice([11,4]);position=r.choice([-1]+list(range(1,26)));seed=r.getrandbits(32);events=[]
 for _ in range(r.randrange(20)):events.append([r.choice([4,8,13,14,15,16,18,19,20]),r.choice([11,4]),r.randrange(1,9),r.randrange(-1,9),r.randrange(1,191),r.randrange(1,4)])
 u.mem_write(E-4,p32(len(events)))
 for j,row in enumerate(events):u.mem_write(E+j*24,struct.pack('<6i',*row))
 for k,o in [('role',0x24),('skill',0x28),('specialty',0x58),('careerGoals',0x118)]:u.mem_write(P+id*304+o,p32(p[k]))
 counters={off:r.randint(-2,30) for off in [0x48,0x4c,0x88,0x8c,0x90,0x94,0x98,0x9c]};u.mem_write(M+444+8,struct.pack('<2i',11,4))
 for off,n in counters.items():u.mem_write(M+444+off,p32(n))
 if i<1000:
  for kind,address,length in [('events',0x657978,6),('incidents',0x657ac8,5)]:
   run(address,[id,OUT],seed);cases.append({'kind':kind,'id':id,'events':events,'expected':list(struct.unpack('<'+'i'*length,u.mem_read(OUT,length*4)))})
 out=run(0x657b68,[id,1,club],seed,[position],instruction_limit=500000)
 cases.append({'kind':'rating','id':id,'player':p,'events':events,'club':club,'position':position,'seed':seed,'counters':counters,'expected':{'rating':struct.unpack('<f',u.mem_read(OUT,4))[0],'seed':out['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/player-rating-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original player rating and event counter cases:',len(cases))
