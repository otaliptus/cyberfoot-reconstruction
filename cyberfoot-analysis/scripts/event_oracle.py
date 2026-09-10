"""Original dispatcher integration tests with automatic interactions (no UI)."""
import incident_oracle as io
from native_oracle import u,p32,read32,run,OUT,R
import random,json,struct
r=random.Random(60842015)
cases=[]
for i in range(5000):
 teams=[];players={0:{'clubId':-1,'skill':0,'role':0,'specialty':0,'condition':0,'active':False}}
 for side in range(2):
  start=side*18+1
  l={'players':list(range(start,start+11)),'bench':list(range(start+11,start+18)),'positions':[r.randint(1,25) for _ in range(10)]+[1],'attack':[r.randint(0,150) for _ in range(12)],'defence':[r.randint(0,150) for _ in range(12)],'keeper':r.randint(0,30),'attackTotal':0,'defenceTotal':0,'warning':False}
  teams.append(l)
  for j in range(start,start+18):players[j]={'clubId':side,'skill':r.randint(1,40),'role':r.randint(0,4),'specialty':r.randint(-1,2),'condition':r.randint(0,100),'active':bool(r.getrandbits(1))}
 s={'players':players,'clubs':[{'human':bool(r.getrandbits(1)),'setPiecePlayer':r.randint(1,11)},{'human':bool(r.getrandbits(1)),'setPiecePlayer':r.randint(19,29)}],'yellowCards':r.sample(list(range(1,37)),r.randint(0,25)),'automaticInteractions':True}
 f={'clubs':[0,1],'substitutions':[r.randint(0,3),r.randint(0,3)],'tick':r.randint(0,200)}
 io.setstate(s,teams[0],f)
 for sid,l in enumerate(teams):
  b=bytearray(248)
  for off,key in [(0,'players'),(0x40,'bench'),(0x5c,'positions'),(0x88,'attack'),(0xb8,'defence')]:v=l[key];struct.pack_into('<'+str(len(v))+'i',b,off,*v)
  struct.pack_into('<i',b,0xe8,l['keeper']);u.mem_write(0x1000000+248*sid,bytes(b))
  u.mem_write(0x1200000+760*sid+0x39,bytes([int(s['clubs'][sid]['human'])]));u.mem_write(0x1200000+760*sid+0xa8,p32(s['clubs'][sid]['setPiecePlayer']))
 u.mem_write(0x1300000+12,p32(1));u.mem_write(read32(0x66af9c),b'\0')
 args=[r.randint(1,12),r.choice([1,2]),r.choice([-1,1,2,3,5,7,8,9,10,11,12,17])];seed=r.getrandbits(32);stride=r.choice([0,100,7919])
 e=run(0x608da4,args,seed,[OUT,0,1,0],stride);e['result']=list(struct.unpack('<8i',u.mem_read(OUT,32)))
 after=[]
 for sid in range(2):
  b=u.mem_read(0x1000000+248*sid,248);l={}
  for k,off,n in [('players',0,11),('bench',0x40,7),('positions',0x5c,11),('attack',0x88,12),('defence',0xb8,12)]:l[k]=list(struct.unpack_from('<'+str(n)+'i',b,off))
  for k,off in [('keeper',0xe8),('attackTotal',0xec),('defenceTotal',0xf0)]:l[k]=struct.unpack_from('<i',b,off)[0]
  l['warning']=bool(b[0xf4]);after.append(l)
 e['mutations']={'teams':after,'active':[bool(u.mem_read(0x1100000+j*304+0x86,1)[0]) for j in range(37)],'yellowCards':[read32(io.YELLOW+j*4) for j in range(read32(io.YELLOW-4))],'substitutions':[read32(0x1300000+24),read32(0x1300000+28)],'nominees':[read32(0x1200000+760*sid+0xa8) for sid in range(2)]}
 cases.append({'args':args,'initialSeed':seed,'clockStride':stride,'teams':teams,'state':s,'fixture':f,'expected':e})
path=R.parent/'cyberfoot-web/native-port/tests/event-vectors.json';path.write_text(json.dumps(cases,separators=(',',':')));print('Original-code dispatcher cases:',len(cases))
