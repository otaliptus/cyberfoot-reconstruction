"""Whole005f996c under-limit human club predicate and whole005f98f4 national
manager index; native eligibility child, no adapters."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x40000)
C=0x1401000;P=0x1408000;D=0x1414000
career=read32(0x66ac78);calendar=D
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(0x66b574,p32(D))
slotL=read32(0x66b610);slotN=read32(0x66b710)
r=random.Random(0x5f996c);cases=[]
for i in range(400):
 count=r.randrange(0,11);clubCount=r.randrange(1,16);limit=r.randrange(18,36);ids=[r.choice([-1,r.randrange(clubCount)]) for _ in range(count)]
 car=bytearray(1888);struct.pack_into('<i',car,0x13c,count)
 for j,id in enumerate(ids):struct.pack_into('<i',car,0x140+j*4,id)
 clubs=bytearray()
 for cid in range(clubCount):
  b=bytearray(r.randbytes(760));struct.pack_into('<i',b,0x64,r.choice([r.randrange(limit+3),limit-1,r.randrange(12)]));clubs+=b
 u.mem_write(career,bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(slotL,p32(limit))
 result=run(0x5f996c,[],1)
 cases.append({'kind':'underLimit','career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'limit':limit,'expected':result['result']&0xff})
for i in range(400):
 season=r.randrange(6);managerCount=r.randrange(0,11);clubCount=r.randrange(1,16);players=r.randrange(0,33)
 domestic=r.randrange(3,10);foreign=r.randrange(0,3);limit=domestic+foreign;day=r.randrange(1,367);date=42000+day-1;flag=r.randrange(2)
 ids=[r.randrange(clubCount) for _ in range(managerCount)]
 car=bytearray(1888);struct.pack_into('<i',car,0xc0,season);struct.pack_into('<i',car,0x5fc,managerCount);struct.pack_into('<i',car,0x16c,day);struct.pack_into('<i',car,0x3c,domestic);struct.pack_into('<i',car,0x40,foreign);car[0x708]=flag
 for j,id in enumerate(ids):struct.pack_into('<i',car,0x604+j*4,id)
 clubs=bytearray()
 for cid in range(clubCount):
  b=bytearray(r.randbytes(760));struct.pack_into('<i',b,0x3c,r.randrange(4));clubs+=b
 data=bytearray()
 for j in range(players):
  b=bytearray(r.randbytes(304));struct.pack_into('<i',b,0x1c,r.randrange(4));struct.pack_into('<i',b,0x20,r.randrange(-1,limit+1));struct.pack_into('<i',b,0x24,r.randrange(5));struct.pack_into('<d',b,0x68,42000+r.randrange(-3,370));data+=b
 cal=b''.join(bytes(8)+struct.pack('<di',42000+d,-1)+bytes(4) for d in range(366))
 u.mem_write(career,bytes(car));u.mem_write(C,bytes(clubs));u.mem_write(P,bytes(data));u.mem_write(P-4,p32(players));u.mem_write(calendar,cal);u.mem_write(slotN,p32(0))
 result=run(0x5f98f4,[],1)
 cases.append({'kind':'nationalIndex','career':bytes(car).hex(),'clubs':bytes(clubs).hex(),'players':bytes(data).hex(),'date':date,'expected':{'result':result['result']&0xff,'index':read32(slotN),'flag':u.mem_read(career+0x708,1)[0]}})
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/human-next-state-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('800 original human-next state comparisons generated (no adapters).')
