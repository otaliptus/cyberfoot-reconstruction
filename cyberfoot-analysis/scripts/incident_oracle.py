"""Original card, replacement, injury and substitution tests.
Only Delphi array allocation is a host adapter; gameplay routines execute unchanged.
"""
from native_oracle import u,p32,read32,run,OUT,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import random,json,struct,copy
u.mem_map(0,0x1000)
for a in [0x1100000,0x1200000,0x1300000,0x1400000]:u.mem_map(a,0x10000)
for ptr,a in [(0x66b5b8,0x1100000),(0x66af70,0x1200000),(0x66b3b8,0x1300000)]:u.mem_write(read32(ptr),p32(a))
YELLOW=0x1400100
# Fixed ample storage supplies dynamic-array allocation without any game logic.
def resize(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);count=read32(sp+4)
 assert count<100
 uc.mem_write(YELLOW-4,p32(count));uc.mem_write(uc.reg_read(UC_X86_REG_EAX),p32(YELLOW))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
def setstate(s,l,f):
 b=bytearray(248)
 for off,values in [(0,l['players']),(0x40,l['bench']),(0x5c,l['positions']),(0x88,l['attack']),(0xb8,l['defence'])]:struct.pack_into('<'+str(len(values))+'i',b,off,*values)
 for off,key in [(0xe8,'keeper'),(0xec,'attackTotal'),(0xf0,'defenceTotal')]:struct.pack_into('<i',b,off,l[key])
 b[0xf4]=int(l['warning']);u.mem_write(0x1000000,bytes(b))
 for j,p in s['players'].items():
  b=bytearray(304)
  for k,v in [(0x20,p['clubId']),(0x24,p['role']),(0x28,p['skill']),(0x58,p['specialty']),(0x78,p['condition'])]:struct.pack_into('<i',b,k,v)
  b[0x86]=int(p['active']);u.mem_write(0x1100000+int(j)*304,bytes(b))
 u.mem_write(0x1200000+0x39,bytes([int(s['clubs'][0]['human'])]));u.mem_write(read32(0x66b6c8),b'\1')
 b=bytearray(444)
 for off,value in [(8,0),(12,0),(16,0),(20,1),(24,f['substitutions'][0]),(28,f['substitutions'][1]),(0x194,f['tick'])]:struct.pack_into('<i',b,off,value)
 u.mem_write(0x1300000,bytes(b))
 u.mem_write(0x6d4298,p32(YELLOW));u.mem_write(YELLOW-8,p32(1)+p32(len(s['yellowCards'])))
 u.mem_write(YELLOW,b''.join(p32(j) for j in s['yellowCards'])+bytes(100))
 u.mem_write(OUT,p32(-1)*8)
def snapshot():
 b=u.mem_read(0x1000000,248);l={}
 for k,off,n in [('players',0,11),('bench',0x40,7),('positions',0x5c,11),('attack',0x88,12),('defence',0xb8,12)]:l[k]=list(struct.unpack_from('<'+str(n)+'i',b,off))
 for k,off in [('keeper',0xe8),('attackTotal',0xec),('defenceTotal',0xf0)]:l[k]=struct.unpack_from('<i',b,off)[0]
 l['warning']=bool(b[0xf4])
 return {'lineup':l,'active':[bool(u.mem_read(0x1100000+j*304+0x86,1)[0]) for j in range(19)],'yellowCards':[read32(YELLOW+j*4) for j in range(read32(YELLOW-4))],'substitutions':[read32(0x1300000+24),read32(0x1300000+28)]}
if __name__ == "__main__":
 r=random.Random(60832015);cases=[]
 for i in range(2000):
  l={'players':list(range(1,12)),'bench':list(range(12,19)),'positions':[r.randint(1,25) for _ in range(10)]+[1],'attack':[0]*12,'defence':[0]*12,'keeper':0,'attackTotal':0,'defenceTotal':0,'warning':False}
  s={'players':{j:{'clubId':0,'skill':r.randint(1,40),'role':r.randint(0,4),'specialty':r.randint(-1,2),'condition':r.randint(0,100),'active':j>0 and bool(r.getrandbits(1))} for j in range(19)},'clubs':[{'human':bool(r.getrandbits(1))}],'yellowCards':r.sample(list(range(1,19)),r.randint(0,15)),'automaticInteractions':True}
  f={'clubs':[0,0],'substitutions':[r.randint(0,3),r.randint(0,3)],'tick':r.randint(0,200)}
  zone=r.randint(1,12);seed=r.getrandbits(32)
  tasks=[('card',0x60797c,[0,-1,-1],[OUT,f['tick']]),('injuryReplacement',0x60855c,[0,r.randint(1,11)],[]),('chooseSubstitution',0x60876c,[0,r.randint(1,11),-1],[OUT,-1,-1]),('chooseSubstitution',0x60876c,[0,-1,-1],[OUT,1,r.choice([1,3])]),('automaticSubstitution',0x608a20,[0,0,1],[OUT]),('injury',0x6082b8,[0,zone,0],[OUT])]
  for name,address,args,stack in tasks:
   setstate(s,l,f);e=run(address,args,seed,stack)
   if stack:e['result']=list(struct.unpack('<ii',u.mem_read(OUT,8)))
   e['mutations']=snapshot();cases.append({'name':name,'args':args,'stack':stack,'lineup':l,'state':s,'fixture':f,'initialSeed':seed,'expected':e})
 path=R.parent/'cyberfoot-web/native-port/tests/incident-vectors.json';path.write_text(json.dumps(cases,separators=(',',':')));print('Original-code incident cases:',len(cases))
