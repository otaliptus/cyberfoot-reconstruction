from native_oracle import *
import gzip
u.mem_map(0,0x1000);u.mem_map(0x1500000,0x100000)
career=read32(0x66ac78);calendar=0x15f0000;u.mem_write(0x66b574,p32(calendar))
specs=[('players',0x66b5b8,304),('clubs',0x66af70,760),('records_0066afec',0x66afec,56),('records_0066b070',0x66b070,32),('records_0066b770',0x66b770,48),('records_0066aca0',0x66aca0,660)]
areas={};destinations={}
for i,(name,glob,size) in enumerate(specs):
 base=0x1500100+i*0x10000;areas[name]=base;destinations[read32(glob)]=(base,size);u.mem_write(read32(glob),p32(base))
def resize(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);dest=uc.reg_read(UC_X86_REG_EAX);base,size=destinations[dest];old=read32(base-4);count=read32(sp+4);assert count>=old;u.mem_write(base+old*size,bytes((count-old)*size));u.mem_write(base-4,p32(count));u.mem_write(dest,p32(base));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
r=random.Random(653268);cases=[];transfers=0
for i in range(800):
 count=72 if i%10==0 else 32;car=bytearray(1888);date=42000.5;competition=r.randrange(11)
 for off,n in [(8,1),(0x88,competition),(0x16c,1),(0x168,r.choice([2,4])),(0x3c,6),(0x40,2)]:struct.pack_into('<i',car,off,n)
 players=bytearray(count*304);clubs=bytearray(8*760);ledgers=bytearray(8*56);countries=[3,3,29,29,43,43,9,68]
 for j in range(8):
  clubs[j*760+0x39]=int(r.randrange(5)==0)
  for off,n in [(0x3c,countries[j]),(0x58,r.randrange(1,4)),(0x64,r.randrange(14,32)),(0xa0,r.randrange(8,31)),(0x98,r.randrange(5,24)),(0x7c,r.randrange(3)),(0xa8,0)]:struct.pack_into('<i',clubs,j*760+off,n)
  for role in range(5):struct.pack_into('<i',clubs,j*760+0x68+role*4,r.randrange(2,12))
  struct.pack_into('<q',clubs,j*760+0x48,r.randrange(100000000,100000000000))
 if i%4==0:
  for j in [0,1]:
   clubs[j*760+0x39]=0
   for off,n in [(0x58,2),(0x64,30 if j==0 else 10),(0xa0,28 if j==0 else 10),(0x98,20),(0x7c,1)]:struct.pack_into('<i',clubs,j*760+off,n)
   for role in range(5):struct.pack_into('<i',clubs,j*760+0x68+role*4,12 if j==0 else 0)
 for j in range(count):
  o=j*304;name=('Player '+str(j)).encode();players[o]=len(name);players[o+1:o+1+len(name)]=name
  for off,n in [(0x20,0 if i%4==0 else r.randrange(8)),(0x24,r.randrange(5)),(0x1c,r.choice(countries)),(0x50,r.randrange(3)),(0x58,r.randrange(3)),(0x5c,r.choice([0,4,9,11])),(0x100,r.randrange(3)),(0x8c+competition*4,r.randrange(5)),(0xb8+competition*4,r.randrange(2))]:struct.pack_into('<i',players,o+off,n)
  players[o+0x15]=int(r.randrange(5)==0);players[o+0x120]=int(r.randrange(5)==0);struct.pack_into('<d',players,o+0x68,date+r.randrange(-3,4));struct.pack_into('<d',players,o+0x70,date+300);struct.pack_into('<q',players,o+0x38,r.randrange(5000000));struct.pack_into('<q',players,o+0x40,r.randrange(10000000000))
 leagues=bytearray(r.choice([0,1,3])*660)
 for j in range(len(leagues)//660):struct.pack_into('<i',leagues,j*660+0x140,[3,29,43][j]);struct.pack_into('<i',leagues,j*660+0x148,2)
 inputs={'players':players,'clubs':clubs,'records_0066afec':ledgers,'records_0066b070':bytes(32),'records_0066b770':bytes(48),'records_0066aca0':leagues}
 for name,glob,size in specs:base=areas[name];u.mem_write(read32(glob),p32(base));u.mem_write(base-4,p32(len(inputs[name])//size));u.mem_write(base,bytes(inputs[name]))
 u.mem_write(career,bytes(car));u.mem_write(calendar+8,struct.pack('<d',date));maximum=r.choice([25,30,35]);u.mem_write(read32(0x66b610),p32(maximum));pool=[r.randrange(-5,100) for _ in range(30)];available=[r.randrange(10) for _ in range(6)];u.mem_write(read32(0x66ad98),b''.join(p32(n) for n in pool));u.mem_write(read32(0x66ad8c),b''.join(p32(n) for n in available));waived=bool(r.randrange(2));u.mem_write(read32(0x66acbc),bytes([int(waived)]));seed=r.getrandbits(32);country=-1 if i%4==0 else r.choice([-2,-1,3,29,43,999])
 result=run(0x653268,[country],seed,instruction_limit=1000000);transfers+=read32(areas['records_0066b070']-4)>1
 outputs={name:bytes(u.mem_read(areas[name],read32(areas[name]-4)*size)).hex() for name,glob,size in specs}
 cases.append({'career':car.hex(),'sections':[{'name':name,'recordSize':size,'data':bytes(inputs[name]).hex()} for name,glob,size in specs],'date':date,'country':country,'maxSeniorPlayers':maximum,'available':available,'pool':pool,'waived':waived,'seed':seed,'expected':{'sections':outputs,'available':list(struct.unpack('<6i',u.mem_read(read32(0x66ad8c),24))),'pool':list(struct.unpack('<30i',u.mem_read(read32(0x66ad98),120))),'waived':bool(u.mem_read(read32(0x66acbc),1)[0]),'seed':result['seed']}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/ai-transfer-vectors.json.gz','wt',encoding='utf-8') as out:json.dump(cases,out,separators=(',',':'))
print('800 whole AI transfers; allocation adapter only; completed transfers:',transfers)
