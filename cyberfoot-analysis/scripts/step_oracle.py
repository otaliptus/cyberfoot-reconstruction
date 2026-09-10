"""Fixture-step integration with an explicit event-recorder test double.
This proves step/counter behavior, not the unported career-statistics recorder.
"""
import incident_oracle as io
from native_oracle import u,p32,read32,run,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
calls=[]
def recorder(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP)
 vals=[uc.reg_read(UC_X86_REG_EAX),uc.reg_read(UC_X86_REG_EDX),read32(sp+4),read32(sp+8)]
 vals=[v if v<0x80000000 else v-0x100000000 for v in vals];calls.append(vals)
 uc.reg_write(UC_X86_REG_EAX,len(calls)-1);uc.reg_write(UC_X86_REG_ESP,sp+12);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,recorder,begin=0x60cfa8,end=0x60cfa8)
r=random.Random(6092015);cases=[]
original=json.loads((R.parent/'cyberfoot-web/native-port/tests/event-vectors.json').read_text())
for c in original[:2000]:
 s=c['state'];teams=c['teams'];f=c['fixture'];f.update(zone=c['args'][0],side=c['args'][1],previousEvent=c['args'][2],endTick=0,counters={})
 for j,p in s['players'].items():p.update(age=r.randint(18,45),veteranFlag=bool(r.getrandbits(1)))
 io.setstate(s,teams[0],f)
 for j,p in s['players'].items():u.mem_write(0x1100000+int(j)*304+0x18,p32(p['age']));u.mem_write(0x1100000+int(j)*304+0x15,bytes([int(p['veteranFlag'])]))
 for sid,l in enumerate(teams):
  b=bytearray(248)
  for off,key in [(0,'players'),(0x40,'bench'),(0x5c,'positions'),(0x88,'attack'),(0xb8,'defence')]:v=l[key];struct.pack_into('<'+str(len(v))+'i',b,off,*v)
  struct.pack_into('<i',b,0xe8,l['keeper']);b[0xf4]=int(l['warning']);u.mem_write(0x1000000+248*sid,bytes(b))
  u.mem_write(0x1200000+760*sid+0x39,bytes([int(s['clubs'][sid]['human'])]));u.mem_write(0x1200000+760*sid+0xa8,p32(s['clubs'][sid]['setPiecePlayer']));u.mem_write(0x1200000+760*sid+0x60,p32(sid))
 for base in [0x44,0x84,0x8c,0x94,0x9c,0xa4,0x15c,0x164,0x194,0x19c,0x1a4]:
  for side in [1,2]:off=base+side*4;v=r.randint(0,12);f['counters'][str(off)]=v;u.mem_write(0x1300000+off,p32(v))
 for off,v in [(12,1),(0x188,f['zone']),(0x18c,f['side']),(0x190,f['previousEvent'])]:u.mem_write(0x1300000+off,p32(v))
 u.mem_write(read32(0x66af9c),b'\0');calls=[]
 e=run(0x609bc8,[0],c['initialSeed'],[],c['clockStride']);e['calls']=calls
 b=u.mem_read(0x1300000,444)
 after={key:struct.unpack_from('<i',b,off)[0] for key,off in [('zone',0x188),('side',0x18c),('previousEvent',0x190),('tick',0x194),('endTick',0x184)]}
 after['counters']={off:struct.unpack_from('<i',b,int(off))[0] for off in f['counters']};after['substitutions']=[read32(0x1300000+24),read32(0x1300000+28)]
 e['fixture']=after;e['condition']=[read32(0x1100000+j*304+0x78) for j in range(37)];e['active']=[bool(u.mem_read(0x1100000+j*304+0x86,1)[0]) for j in range(37)]
 cases.append({'fixture':f,'teams':teams,'state':s,'initialSeed':c['initialSeed'],'clockStride':c['clockStride'],'expected':e})
p=R.parent/'cyberfoot-web/native-port/tests/step-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original-code fixture-step cases with recorder test double:',len(cases))
