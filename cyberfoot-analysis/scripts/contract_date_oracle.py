from native_oracle import u,run,read32,p32,R
import json,struct,random,datetime
u.mem_map(0x1100000,0x10000);u.mem_map(0x1300000,0x10000);u.mem_write(read32(0x66b5b8),p32(0x1100000));u.mem_write(0x66b574,p32(0x1300000));u.mem_write(read32(0x66ac78)+0x16c,p32(1))
r=random.Random(6472015);cases=[]
for i in range(2000):
 date=r.randint(2,70000)+r.choice([0,0.25,0.5,0.75]);months=r.choice([-36,-24,-12,-6,0,6,12,24,36,48]);u.mem_write(0x1300008,struct.pack('<d',date));u.mem_write(0x11000fc,p32(123));run(0x647c9c,[months,0],1);cases.append({'date':date,'months':months,'expected':{'contractEnd':struct.unpack('<d',u.mem_read(0x1100070,8))[0],'fieldFC':read32(0x11000fc)}})
p=R.parent/'cyberfoot-web/native-port/tests/contract-date-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original contract date cases:',len(cases))
