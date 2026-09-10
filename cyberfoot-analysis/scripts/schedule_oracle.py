"""Original competition calendar assignment, all scheduling helpers executed."""
from native_oracle import u,run,read32,p32,R
import json,struct,random,datetime
u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_write(0x66b574,p32(0x1300000));u.mem_write(read32(0x66aca0),p32(0x1400100))
r=random.Random(6532015);cases=[];fields=[0x10e,0x170,0x171,0x172,0x17f,0x180,0x181,0x75d]
for i in range(500):
 season=r.randint(0,50);mode=r.choice([2,4,0]);flags={str(o):bool(r.getrandbits(1)) for o in fields};cupRecords=[{'field140':r.choice([29,0,1]),'field148':r.choice([80,81,82,100,32])} for _ in range(r.randint(0,4))]
 c=read32(0x66ac78);u.mem_write(c+0xc0,p32(season));u.mem_write(c+0x168,p32(mode))
 for o in fields:u.mem_write(c+o,bytes([flags[str(o)]]))
 u.mem_write(0x14000fc,p32(len(cupRecords)))
 for j,row in enumerate(cupRecords):u.mem_write(0x1400100+j*660+0x140,p32(row['field140']));u.mem_write(0x1400100+j*660+0x148,p32(row['field148']))
 start=(datetime.datetime(2014+season,1,1)-datetime.datetime(1899,12,30)).days;data=bytearray(366*24)
 for j in range(366):struct.pack_into('<i',data,j*24,j+1);struct.pack_into('<d',data,j*24+8,start+j);struct.pack_into('<i',data,j*24+16,-1)
 u.mem_write(0x1300000,bytes(data));run(0x653a40,[],1,instruction_limit=2000000)
 expected=[struct.unpack('<i',u.mem_read(0x1300000+j*24+16,4))[0] for j in range(366)];cases.append({'season':season,'mode':mode,'flags':flags,'cupRecords':cupRecords,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/schedule-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original complete competition calendar cases:',len(cases))
