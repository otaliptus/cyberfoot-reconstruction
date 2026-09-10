"""Original 5e9a30, adapting only NextGrid status presentation and Variant cleanup."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_write(0x6d34f0,p32(0x1002000))
def presentation(uc,address,size,data):
 if address in [0x5e9cc2,0x5e9d13]:uc.reg_write(UC_X86_REG_EIP,0x5e9d63)
 else:
  sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x5e9cc2,0x5e9d13,0x405744]:u.hook_add(UC_HOOK_CODE,presentation,begin=a,end=a)
r=random.Random(59930);cases=[]
for i in range(3000):
 rows=[{'id':j,'role':r.randrange(5),'field2c':r.randrange(3),'specialty':r.randrange(3),'selected':r.choice([0,0,0,1,2])} for j in range(r.randrange(41))];r.shuffle(rows)
 priority=[r.randrange(5),r.choice([-1,0,1,2]),r.choice([-1,0,1,2,12])];position=r.randrange(-1,27)
 u.mem_write(0x1001ffc,p32(len(rows)));u.mem_write(0x1009000,b''.join(p32(v) for v in priority))
 for j,c in enumerate(rows):
  data=bytearray(36);struct.pack_into('<ii',data,0,c['id'],j);struct.pack_into('<iiii',data,20,c['field2c'],c['role'],c['specialty'],c['selected']);u.mem_write(0x1002000+j*36,bytes(data))
 result=run(0x5e9a30,[0x100a000,0x1009000,position],1)['result'];selected=[read32(0x1002000+j*36+32) for j in range(len(rows))]
 cases.append({'candidates':rows,'priority':priority,'position':position,'expected':{'result':result,'selected':selected}})
p=R.parent/'cyberfoot-web/native-port/tests/human-selection-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original human selection: 3000')
