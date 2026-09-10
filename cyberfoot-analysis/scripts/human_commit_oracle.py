"""Original5ebb84; UI storage/text, notification delivery and next-screen dispatch adapted.
All lineup/player/calculation routines run as original instructions.
"""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
P=0x1300100;C=0x1400100;L=0x1000100;S=0x1500100;F=0x1004000;G=0x1005000;V=0x1006000
u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b238),p32(L));u.mem_write(read32(0x66b754),p32(S));u.mem_write(0x66b574,p32(0x1003000));u.mem_write(F+0x304,p32(G));u.mem_write(G,p32(V));u.mem_write(V+0x11c,p32(0x100a000));u.mem_write(V+0x100,p32(0x100a010));u.mem_write(0x6d34e8,p32(F))
rows=[];cell=0;notifications=[];dispatched=False;message=None
def hook(uc,a,size,data):
 global cell,dispatched,message
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX);pop=4
 if a==0x100a000:uc.reg_write(UC_X86_REG_EAX,len(rows))
 elif a==0x100a010:cell=rows[ecx];u.mem_write(read32(sp+4),p32(0));pop=8
 elif a==0x409ff8:uc.reg_write(UC_X86_REG_EAX,cell)
 elif a==0x4060a8:
  base,size=(S,120) if eax==read32(0x66b754) else (L,248);n=read32(sp+4);old=read32(base-4);u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*size,bytes((n-old)*size))
 elif a==0x64cbf0:notifications.append([eax,edx,ecx,read32(sp+4),read32(sp+8),read32(sp+12)]);pop=16
 elif a==0x642c50:message=eax
 elif a in [0x636068,0x5d0b34]:dispatched=True
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x100a000,0x100a010,0x409ff8,0x4060a8,0x64cbf0,0x642c50,0x4e1414,0x466128,0x404b6c,0x404ff0,0x4048d4,0x50e4dc,0x50a804,0x483d64,0x636068,0x5d0b34]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(5884);cases=[]
fields={'clubId':0x20,'role':0x24,'skill':0x28,'specialty':0x58,'trait1':0x5c,'condition':0x78,'morale':0xe4,'field50':0x50}
flags={'active':0x86,'selectedFlag':0x7c,'unavailableFlag':0x85,'fatigueComplaint':0xf5,'eligibilityFlag':0x120}
for i in range(300):
 competition=r.randrange(11);date=42127;alternate=bool(i%2);remember=bool(i%3);players=[];notifications=[];dispatched=False;message=None
 for j in range(24):
  p={'clubId':0,'role':r.randrange(5),'skill':r.randrange(1,30),'specialty':r.randrange(3),'trait1':r.randrange(14),'condition':r.randrange(0,30),'morale':r.randrange(4),'field50':r.randrange(4),'contractEnd':date+r.randint(-2,2),'injuryUntil':r.choice([0,date+1]),'yellowCounts':[0]*11,'suspensions':[0]*11,'active':bool(r.getrandbits(1)),'selectedFlag':bool(r.getrandbits(1)),'unavailableFlag':bool(r.getrandbits(1)),'fatigueComplaint':bool(r.getrandbits(1)),'eligibilityFlag':r.randrange(2)}
  b=bytearray(304)
  for k,off in fields.items():struct.pack_into('<i',b,off,p[k])
  for k,off in flags.items():b[off]=p[k]
  struct.pack_into('<d',b,0x70,p['contractEnd']);struct.pack_into('<d',b,0x68,p['injuryUntil']);u.mem_write(P+j*304,bytes(b));players.append(p)
 rows=list(range(1,24));r.shuffle(rows);ids=rows[:18];slots=[{'playerId':n,'position':[1,22,24,11,13,14,16,2,9,6,8][j] if j<11 else -1} for j,n in enumerate(ids)]
 if i%5==0:slots[r.randrange(11)]['playerId']=-1
 for j in range(11,18):
  if r.randrange(4)==0:slots[j]['playerId']=-1
 for j,s in enumerate(slots):u.mem_write(0x6d3678+j*16,p32(s['position']));u.mem_write(0x6d3684+j*16,p32(s['playerId']))
 u.mem_write(P-4,p32(24));u.mem_write(C,bytes(760));u.mem_write(C+0x39,b'\1');u.mem_write(L-4,p32(0));u.mem_write(S-4,p32(0));u.mem_write(read32(0x66ac78)+8,p32(0));u.mem_write(read32(0x66ac78)+0x88,p32(competition));u.mem_write(read32(0x66ac78)+0x16c,p32(1));u.mem_write(read32(0x66ac78)+0xde,bytes([remember]));u.mem_write(read32(0x66ae3c),bytes([alternate]));u.mem_write(0x1003008,struct.pack('<d',date))
 run(0x5ebb84,[F],1,instruction_limit=2000000)
 mutated=[]
 for j in range(24):
  p={k:struct.unpack('<i',u.mem_read(P+j*304+off,4))[0] for k,off in fields.items()};p.update({k:bool(u.mem_read(P+j*304+off,1)[0]) for k,off in flags.items() if k!='eligibilityFlag'});mutated.append(p)
 cases.append({'players':players,'rows':rows,'slots':slots,'competitionType':competition,'currentDate':date,'alternateMode':alternate,'remember':remember,'expected':{'accepted':dispatched,'messageId':message,'lineupHex':bytes(u.mem_read(L,read32(L-4)*248)).hex(),'savedHex':bytes(u.mem_read(S,read32(S-4)*120)).hex(),'mutations':mutated,'notifications':notifications,'availableCount':read32(C+0xa0)}})
p=R.parent/'cyberfoot-web/native-port/tests/human-commit-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original human lineup commit:300 cases')
