"""Original wage demand and club payroll, without business-logic adapters."""
from native_oracle import u,run,read32,p32,R
from unicorn.x86_const import UC_X86_REG_EBX
import struct,json,random
u.mem_map(0x1100000,0x20000);u.mem_map(0x1200000,0x10000);u.mem_map(0x1300000,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1101000));u.mem_write(read32(0x66af70),p32(0x1200000));u.mem_write(read32(0x66afec),p32(0x1300000))
r=random.Random(652590);cases=[]
for i in range(3000):
 p={'clubId':0,'skill':r.randint(0,100),'age':r.randint(15,45),'role':r.randint(0,5),'veteranFlag':bool(i%2)};c={'category':i%6,'countryId':r.choice([3,72,104,97,65,1,2,44]),'cash':str(r.choice([99999999999,100000000000,100000000001,200000000000,200000000001,r.randint(-1000000000000,1000000000000)])),'field98':r.randint(0,40)}
 for off,key in [(0x20,'clubId'),(0x28,'skill'),(0x18,'age'),(0x24,'role')]:u.mem_write(0x1101000+off,p32(p[key]))
 u.mem_write(0x1101015,bytes([p['veteranFlag']]));u.mem_write(0x120003c,p32(c['countryId']));u.mem_write(0x120007c,p32(c['category']));u.mem_write(0x1200098,p32(c['field98']));u.mem_write(0x1200048,struct.pack('<q',int(c['cash'])))
 result=run(0x652590,[0],1)['result'];cases.append({'player':p,'club':c,'expected':result})
p=R.parent/'cyberfoot-web/native-port/tests/wage-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')))
cases=[]
for i in range(1000):
 players=[{'clubId':r.randint(-1,2),'salary':str(r.randint(-1000000000000,1000000000000))} for _ in range(r.randint(0,40))];u.mem_write(0x1100ffc,p32(len(players)))
 for j,p in enumerate(players):u.mem_write(0x1101000+j*304+0x20,p32(p['clubId']));u.mem_write(0x1101000+j*304+0x38,struct.pack('<q',int(p['salary'])))
 run(0x652900,[0],1);cases.append({'players':players,'expected':struct.unpack('<i',u.mem_read(0x1300004,4))[0]})
p=R.parent/'cyberfoot-web/native-port/tests/payroll-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Wage demand: 3000; payroll: 1000 original cases')
