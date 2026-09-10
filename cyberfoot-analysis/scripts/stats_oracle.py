"""Original player-statistics tests; allocation and notification delivery are host adapters."""
from native_oracle import u,p32,read32,run,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import random,json,struct
u.mem_map(0,0x1000)
for a in [0x1100000,0x1200000,0x1500000,0x1600000,0x1700000]:u.mem_map(a,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1100000));u.mem_write(read32(0x66af70),p32(0x1200000))
arrays={read32(ptr):(base+0x100,size,key) for ptr,base,size,key in [(0x66b6b4,0x1500000,16,'scorers'),(0x66ae58,0x1600000,16,'appearances'),(0x66b604,0x1700000,32,'playerSeasonStats')]}
notifications=[]
def resize(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);count=read32(sp+4);ptr=uc.reg_read(UC_X86_REG_EAX);base,record,_=arrays[ptr];old=read32(base-4)
 if count>old:uc.mem_write(base+old*record,bytes((count-old)*record))
 uc.mem_write(base-4,p32(count));uc.mem_write(ptr,p32(base));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
def notify(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);vals=[uc.reg_read(UC_X86_REG_EAX),uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX),read32(sp+4),read32(sp+8),read32(sp+12)]
 notifications.append(vals);uc.reg_write(UC_X86_REG_ESP,sp+16);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8);u.hook_add(UC_HOOK_CODE,notify,begin=0x64cbf0,end=0x64cbf0)
fields={'age':0x18,'clubId':0x20,'skill':0x28,'trait1':0x5c,'trait2':0x60,'condition':0x78,'seasonGoals':0x104,'seasonCards':0x108,'seasonAppearances':0x10c,'careerGoals':0x118}
events={'gol':0x650e90,'j':0x650e9c,'ca':0x650ea8,'cv':0x650eb4,'ct':0x650ec0}
r=random.Random(6502015);cases=[]
for i in range(2500):
 p={key:r.randint(0,30) for key in fields};p.update(age=r.choice([r.randint(16,90),26,31,36,41,51,61]),clubId=0,trait1=r.choice([0,12]),trait2=r.choice([0,12]),skill=r.randint(1,99),condition=r.randint(0,100),injuryUntil=0,yellowCounts=[r.randint(0,5) for _ in range(11)],suspensions=[r.randint(0,5) for _ in range(11)])
 s={'players':{1:p},'clubs':[{'human':bool(r.getrandbits(1))}],'season':2015,'competitionType':r.randint(0,10),'currentDate':42000,'notifications':[],'scorers':[],'appearances':[],'playerSeasonStats':[]}
 if i%2:s['scorers']=[[1,3,4,0]];s['appearances']=[[1,8,4,0]];s['playerSeasonStats']=[[1,3,1,0,8,0,2015,0]]
 b=bytearray(304)
 for key,off in fields.items():struct.pack_into('<i',b,off,p[key])
 struct.pack_into('<11i',b,0x8c,*p['yellowCounts']);struct.pack_into('<11i',b,0xb8,*p['suspensions']);u.mem_write(0x1100000+304,bytes(b));u.mem_write(0x1200000+0x39,bytes([int(s['clubs'][0]['human'])]))
 career=read32(0x66ac78);u.mem_write(career+0x88,p32(s['competitionType']));u.mem_write(career+0xc0,p32(2015));u.mem_write(career+0x16c,p32(1));calendar=read32(0x66b574);u.mem_write(calendar+8,struct.pack('<d',42000))
 for ptr,(base,size,key) in arrays.items():
  rows=s[key];u.mem_write(ptr,p32(base));u.mem_write(base-8,p32(1)+p32(len(rows)));u.mem_write(base,b''.join(struct.pack('<'+str(size//4)+'i',*row) for row in rows)+bytes(256))
 event=list(events)[i%5];seed=r.getrandbits(32);notifications=[];e=run(0x650548,[1,0,4],seed,[events[event]])
 del e['result'];b=u.mem_read(0x1100000+304,304)
 after={key:struct.unpack_from('<i',b,off)[0] for key,off in fields.items()};after.update(injuryUntil=struct.unpack_from('<d',b,0x68)[0],yellowCounts=list(struct.unpack_from('<11i',b,0x8c)),suspensions=list(struct.unpack_from('<11i',b,0xb8)))
 e['player']=after;e['notifications']=notifications
 for ptr,(base,size,key) in arrays.items():e[key]=[list(struct.unpack('<'+str(size//4)+'i',u.mem_read(base+j*size,size))) for j in range(read32(base-4))]
 cases.append({'event':event,'initialSeed':seed,'state':s,'expected':e})
p=R.parent/'cyberfoot-web/native-port/tests/stats-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original-code player-statistics cases:',len(cases))
