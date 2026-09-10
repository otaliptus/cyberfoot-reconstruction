"""Execute original specialty and candidate selection without replacing callees."""
from native_oracle import u,run,read32,p32,R
import random,json,struct
r=random.Random(4212015);cases=[]
u.mem_write(read32(0x66b5b8),p32(0x1001000))
for role in range(5):
 for a in range(16):
  for b in range(16):
   u.mem_write(0x1001024,p32(role));u.mem_write(0x100105c,p32(a)+p32(b))
   cases.append({'role':role,'trait1':a,'trait2':b,'expected':run(0x65173c,[0],1)['result']})
out={'specialty':cases,'selection':[]}
u.mem_write(0x67aeec,p32(0x1002000))
for i in range(4000):
 candidates=[{'id':j,'role':r.randrange(5),'field2c':r.randrange(3),'specialty':r.randrange(3),'selected':bool(r.randrange(4)==0)} for j in range(r.randrange(41))]
 r.shuffle(candidates);priority=[r.randrange(5),r.choice([-1,0,1,2]),r.choice([-1,0,1,2,12])];position=r.randrange(-1,27)
 u.mem_write(0x1001ffc,p32(len(candidates)));u.mem_write(0x1009000,b''.join(p32(v) for v in priority))
 for j,c in enumerate(candidates):
  data=bytearray(32);struct.pack_into('<i',data,0,c['id']);data[16]=c['selected'];struct.pack_into('<iii',data,20,c['field2c'],c['specialty'],c['role']);u.mem_write(0x1002000+j*32,bytes(data))
 result=run(0x4e21e4,[0x1009000,position],1)['result']
 selected=[bool(u.mem_read(0x1002000+j*32+16,1)[0]) for j in range(len(candidates))]
 out['selection'].append({'candidates':candidates,'priority':priority,'position':position,'expected':{'result':result,'selected':selected}})
p=R.parent/'cyberfoot-web/native-port/tests/ai-selection-vectors.json';p.write_text(json.dumps(out,separators=(',',':')));print('Original specialty: 1280; candidate selection: 4000')
