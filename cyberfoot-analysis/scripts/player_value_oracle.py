from native_oracle import *
u.mem_map(0,0x1000)
P=0x1001000;C=0x1002000;career=read32(0x66ac78);u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(read32(0x66af70),p32(C))
r=random.Random(652134);cases=[]
for i in range(4000):
 fields={'country':r.randrange(-2,205),'strength':r.choice([11,12,17,18,19,20,21,22,23]),'age':r.choice([19,20,25,26,31,32,33,34,35,r.randrange(14,61)]),'skill':r.randrange(151),'goals':r.randrange(-10,501),'talent':r.randrange(1,11),'season':r.randrange(-1,10),'youthSeason':r.randrange(-1,10),'youth':r.randrange(2),'star':r.randrange(2),'field50':r.randrange(3)}
 if i%10==0:
  for key in ['age','skill','goals','talent']:fields[key]=r.randrange(-2147483648,2147483648)
 p=bytearray(304);c=bytearray(760)
 for off,key in [(0x18,'age'),(0x28,'skill'),(0x104,'goals'),(0x30,'talent'),(0x11c,'youthSeason'),(0x50,'field50')]:struct.pack_into('<i',p,off,fields[key])
 p[0x120]=fields['youth'];p[0x15]=fields['star'];struct.pack_into('<i',c,0x3c,fields['country']);struct.pack_into('<i',c,0x98,fields['strength']);u.mem_write(P,bytes(p));u.mem_write(C,bytes(c));u.mem_write(career+0xc0,p32(fields['season']));result=run(0x652134,[0],0)
 cases.append({**fields,'expected':result['result']})
(R.parent/'cyberfoot-web/native-port/tests/player-value-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('4000 whole player-value executions; no adapters')
