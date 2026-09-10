from native_oracle import *
u.mem_map(0x1400000,0x100000)
career=read32(0x66ac78);calendar=read32(0x66b574);r=random.Random(592);cases=[]
for i in range(300):
 car=bytearray(1888);day=r.randrange(1,367);count=r.randrange(-1,6);stage=r.randrange(5)
 for off,n in [(0x16c,day),(0x13c,count),(0x110,stage),(0x1a8,r.randrange(5)),(0x5fc,r.randrange(5))]:struct.pack_into('<i',car,off,n)
 for j in range(5):struct.pack_into('<i',car,0x140+j*4,r.randrange(-1,10));struct.pack_into('<i',car,0x604+j*4,r.randrange(10))
 clubs=bytearray(10*760)
 for j in range(10):
  for off in [0x39,0x214,0x215,0x216,0x217,0x218]:clubs[j*760+off]=int(r.randrange(5)==0)
  struct.pack_into('<i',clubs,j*760+0x3c,r.randrange(5));struct.pack_into('<i',clubs,j*760+0x40,r.randrange(27))
 groups=bytearray(27*1384)
 for j in range(27):groups[j*1384+0x52d]=r.randrange(2);groups[j*1384+0x52f]=r.randrange(2)
 leagues=bytearray(3*660)
 for j in range(3):struct.pack_into('<i',leagues,j*660+0x140,r.randrange(5))
 fixtures=bytearray(r.randrange(20)*72)
 for j in range(len(fixtures)//72):
  for off,n in [(0,r.randrange(10)),(4,r.randrange(10)),(0x18,r.choice([2,10,1])),(0x1c,r.randrange(3)),(0x38,r.randrange(-1,3))]:struct.pack_into('<i',fixtures,j*72+off,n)
 events=bytearray(r.randrange(15)*24);date=42000+day
 for j in range(len(events)//24):
  struct.pack_into('<ii',events,j*24,r.randrange(10),r.randrange(10));events[j*24+8]=r.randrange(2);struct.pack_into('<d',events,j*24+16,date+r.choice([0,0,1,-1]))
 cup=bytearray(6*48)
 for j in range(6):struct.pack_into('<ii',cup,j*48,r.randrange(10),r.randrange(10))
 sections=[('clubs',0x66af70,760,clubs),('records_0066aca0',0x66aca0,660,leagues),('records_0066afa0',0x66afa0,72,fixtures),('records_0066b0d4',0x66b0d4,24,events)]
 pos=0x1400100
 for name,glob,size,data in sections:u.mem_write(read32(glob),p32(pos));u.mem_write(pos-4,p32(len(data)//size));u.mem_write(pos,bytes(data));pos+=0x10000
 u.mem_write(read32(0x66ae98),bytes(groups));u.mem_write(read32(0x66af90),bytes(cup));u.mem_write(career,bytes(car));u.mem_write(calendar+(day-1)*24+8,struct.pack('<d',date))
 expected=[]
 for kind in range(-1,13):
  initial=bool(r.randrange(2));u.mem_write(0x6d3f3c,p32(kind));u.mem_write(0x6d3f40,bytes([int(initial)]));run(0x5f92d8,[0],0);expected.append({'competition':kind,'initial':initial,'selected':bool(u.mem_read(0x6d3f40,1)[0])})
 cases.append({'career':car.hex(),'date':date,'sections':[{ 'name':name,'recordSize':size,'data':data.hex()} for name,glob,size,data in sections]+[{'name':'records_0066ae98','recordSize':1384,'data':groups.hex()},{'name':'records_0066af90','recordSize':48,'data':cup.hex()}],'expected':expected})
(R.parent/'cyberfoot-web/native-port/tests/results-participation-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('4200 whole original participation dispatcher executions; no call adapters')
