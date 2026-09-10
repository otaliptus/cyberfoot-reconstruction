from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1500000,0x100000)
career=read32(0x66ac78);calendar=0x15f0000;u.mem_write(0x66b574,p32(calendar))
specs=[('players',0x66b5b8,304),('clubs',0x66af70,760),('records_0066afec',0x66afec,56),('records_0066b070',0x66b070,32),('records_0066b770',0x66b770,48),('records_0066b05c',0x66b05c,24)]
areas={};destinations={}
for i,(name,glob,size) in enumerate(specs):
 base=0x1500100+i*0x10000;areas[name]=base;destinations[read32(glob)]=(base,size);u.mem_write(read32(glob),p32(base))
def resize(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);dest=uc.reg_read(UC_X86_REG_EAX);base,size=destinations[dest];old=read32(base-4);count=read32(sp+4);assert count>=old;u.mem_write(base+old*size,bytes((count-old)*size));u.mem_write(base-4,p32(count));u.mem_write(dest,p32(base));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
r=random.Random(650218);cases=[]
for i in range(2000):
 kind='move' if i<600 else 'returns' if i<1200 else 'recall' if i<1800 else 'schedule';count=r.randrange(2,13);car=bytearray(1888);date=42000+r.randrange(366)+r.choice([0,.5]);cutoff=date+r.randrange(-10,11);competition=r.randrange(11);day=1
 struct.pack_into('<i',car,8,r.randrange(4));struct.pack_into('<i',car,0x88,competition);struct.pack_into('<i',car,0x16c,day)
 players=bytearray(r.randbytes(count*304));clubs=bytearray(r.randbytes(4*760));ledgers=bytearray(r.randbytes(4*56))
 for j in range(count):
  o=j*304;name=r.choice(['Rogério Ceni','Rogerio Ceni','Player '+str(j),'']);b=name.encode('cp1252');players[o]=len(b);players[o+1:o+1+len(b)]=b
  for off,n in [(0x20,r.randrange(4)),(0x24,r.randrange(5)),(0x50,r.randrange(3)),(0x58,r.randrange(3)),(0x5c,r.choice([0,4,9,11])),(0x8c+competition*4,r.randrange(5)),(0xb8+competition*4,r.randrange(2))]:struct.pack_into('<i',players,o+off,n)
  players[o+0x15]=r.randrange(2);players[o+0x120]=r.randrange(2);struct.pack_into('<d',players,o+0x68,date+r.randrange(-3,4))
 for j in range(4):
  clubs[j*760+0x39]=r.randrange(2)
  for off,n in [(0xa8,r.randrange(count)),(0x64,r.randrange(12)),(0x98,r.randrange(20,26))]:struct.pack_into('<i',clubs,j*760+off,n)
 pending=bytearray(r.randrange(8)*24)
 for j in range(len(pending)//24):struct.pack_into('<i',pending,j*24,r.randrange(-1,count));struct.pack_into('<d',pending,j*24+8,date+r.randrange(-20,21));struct.pack_into('<i',pending,j*24+16,r.randrange(4))
 inputs={'players':players,'clubs':clubs,'records_0066afec':ledgers,'records_0066b070':r.randbytes(r.randrange(3)*32),'records_0066b770':r.randbytes(r.randrange(3)*48),'records_0066b05c':pending}
 for name,glob,size in specs:base=areas[name];u.mem_write(read32(glob),p32(base));u.mem_write(base-4,p32(len(inputs[name])//size));u.mem_write(base,bytes(inputs[name]))
 u.mem_write(career,bytes(car));u.mem_write(calendar+8,struct.pack('<d',date));max_players=r.randrange(1,13);u.mem_write(read32(0x66b610),p32(max_players));available=[r.randrange(10) for _ in range(6)];u.mem_write(read32(0x66ad8c),b''.join(p32(n) for n in available));seed=r.getrandbits(32);player=r.randrange(count+2);destination=r.randrange(4);end=date+120
 if kind=='move':result=run(0x650218,[player,destination],seed,list(struct.unpack('<II',struct.pack('<d',end))))
 elif kind=='returns':result=run(0x64fdf0,[],seed,list(struct.unpack('<II',struct.pack('<d',cutoff))),instruction_limit=300000)
 elif kind=='recall':result=run(0x64ff24,[player],seed,instruction_limit=300000)
 else:result=run(0x64fd84,[player,destination],seed,list(struct.unpack('<II',struct.pack('<d',end))))
 outputs={name:bytes(u.mem_read(areas[name],read32(areas[name]-4)*size)).hex() for name,glob,size in specs}
 cases.append({'kind':kind,'career':car.hex(),'sections':[{'name':name,'recordSize':size,'data':bytes(inputs[name]).hex()} for name,glob,size in specs],'date':date,'cutoff':cutoff,'player':player,'destination':destination,'contractEnd':end,'maxSeniorPlayers':max_players,'available':available,'seed':seed,'expected':{'sections':outputs,'available':list(struct.unpack('<6i',u.mem_read(read32(0x66ad8c),24))),'seed':result['seed']}})
(R.parent/'cyberfoot-web/native-port/tests/player-move-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('600 moves,600 scheduled returns,600 recalls,200 scheduling calls; child game routines native; allocation adapter only')
