from native_oracle import *
u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);P=0x1300000;A=0x1400100
u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66b1b8),p32(A))
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);dest=uc.reg_read(UC_X86_REG_EAX);n=read32(sp+4);old=read32(A-4);u.mem_write(dest,p32(A));u.mem_write(A-4,p32(n))
 if n>old:u.mem_write(A+old*24,bytes((n-old)*24))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,hook,begin=0x4060a8,end=0x4060a8)
r=random.Random(6428);cases=[]
for i in range(2000):
 id=r.randrange(1,9);competition=r.randrange(11);position=r.randrange(1,26);rating=r.choice([0,.5,5,7.5,10,r.uniform(-5,15)]);rating=struct.unpack('<f',struct.pack('<f',rating))[0]
 player={'role':r.randrange(5),'field2c':r.randrange(3),'specialty':r.randrange(3),'clubId':r.randrange(10)}
 for k,o in [('role',0x24),('field2c',0x2c),('specialty',0x58),('clubId',0x20)]:u.mem_write(P+id*304+o,p32(player[k]))
 rows=[{'playerId':r.choice([id,r.randrange(1,9)]),'clubId':r.randrange(10),'competition':r.choice([competition,r.randrange(11)]),'total':r.randrange(1000)/2,'count':r.randrange(50)/2,'role':r.randrange(8)} for _ in range(r.randrange(8))];u.mem_write(A-4,p32(len(rows)))
 for j,row in enumerate(rows):u.mem_write(A+j*24,struct.pack('<iiiffi',row['playerId'],row['clubId'],row['competition'],row['total'],row['count'],row['role']))
 run(0x6428ac,[id,competition,position],0,[struct.unpack('<I',struct.pack('<f',rating))[0]])
 expected=[]
 for j in range(read32(A-4)):expected.append(dict(zip(['playerId','clubId','competition','total','count','role'],struct.unpack('<iiiffi',u.mem_read(A+j*24,24)))))
 cases.append({'id':id,'competition':competition,'position':position,'rating':rating,'player':player,'rows':rows,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/rating-aggregate-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original rating aggregates:2000 cases')
