from native_oracle import u,run,read32,p32,R
import json,struct,random
u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000);u.mem_write(0x66b574,p32(0x1300000));u.mem_write(read32(0x66b0d4),p32(0x1400100));u.mem_write(read32(0x66afa0),p32(0x1500100))
r=random.Random(6562018);cases=[]
for i in range(1000):
 cursor=r.randint(0,366);competitions=[r.choice([-1,-2,-3,0,1,2,3,1001]) for _ in range(366)] if i%2 else [-1]*366
 if i%2==0:
  for _ in range(10):competitions[r.randrange(366)]=r.choice([0,1,-2])
 events=[{'date':42000+r.randint(0,365),'complete':bool(r.getrandbits(1))} for _ in range(r.randint(0,20))];u.mem_write(0x14000fc,p32(len(events)))
 for j,row in enumerate(events):u.mem_write(0x1400100+j*24+8,bytes([row['complete']]));u.mem_write(0x1400100+j*24+16,struct.pack('<d',row['date']))
 for j,comp in enumerate(competitions):u.mem_write(0x1300000+j*24+8,struct.pack('<d',42000+j));u.mem_write(0x1300000+j*24+16,p32(comp))
 u.mem_write(read32(0x66ac78)+0x16c,p32(cursor));run(0x656a18,[],1);cases.append({'cursor':cursor,'competitions':competitions,'events':events,'expected':read32(read32(0x66ac78)+0x16c)})
p=R.parent/'cyberfoot-web/native-port/tests/calendar-cursor-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')))
cases=[]
for i in range(1000):
 club=r.randint(0,10);date=42000+r.randint(0,20);fixtures=[{'clubs':[r.randint(0,10),r.randint(0,10)],'date':42000+r.randint(0,20),'competition':r.randint(0,10),'complete':bool(r.getrandbits(1))} for _ in range(r.randint(0,30))];u.mem_write(0x15000fc,p32(len(fixtures)))
 for j,f in enumerate(fixtures):
  a=0x1500100+j*72;u.mem_write(a,p32(f['clubs'][0])+p32(f['clubs'][1]));u.mem_write(a+0x18,p32(f['competition']));u.mem_write(a+0x2c,bytes([f['complete']]));u.mem_write(a+0x30,struct.pack('<d',f['date']))
 result=run(0x65b414,[club],1,list(struct.unpack('<II',struct.pack('<d',date))))['result'];cases.append({'club':club,'date':date,'fixtures':fixtures,'expected':result})
p=R.parent/'cyberfoot-web/native-port/tests/fixture-lookup-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original calendar cursor: 1000; fixture lookup: 1000')
