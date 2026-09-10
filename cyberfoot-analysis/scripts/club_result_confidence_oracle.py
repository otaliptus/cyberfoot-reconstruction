from native_oracle import *
import gzip
u.mem_map(0x1400000,0x10000);clubs=0x1400100;career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(clubs));r=random.Random(647830);cases=[]
for i in range(3000):
 competition=r.choice([0,1,2,3,4,6,8,9]);current=r.choice([1,1,1,3,3,4,6]);mode=r.choice([0,2,4,6]);outcome=r.choice([0,1,2,3]);rank=r.choice([-2147483648,-1,*range(24),2147483647]);regional=r.randrange(-1,10);skill=r.choice([20,21,-1,50]);performance=r.choice([-2147483648,-1,0,30,39,40,99,100,101,2147483647]);confidence=r.choice([-2147483648,-1,0,39,40,41,99,100,101,2147483647]);raw=bytearray(760)
 for o,n in [(0x50,performance),(0x54,confidence),(0x98,skill),(0x1a4+competition*4,rank),(0x1b0,regional)]:struct.pack_into('<i',raw,o,n)
 u.mem_write(clubs,bytes(raw));u.mem_write(career+0x88,p32(current));u.mem_write(career+0x168,p32(mode));result=run(0x647830,[competition,0,outcome],17)
 expected=list(struct.unpack('<ii',u.mem_read(clubs+0x50,8)));changed=bytearray(u.mem_read(clubs,760));changed[0x50:0x58]=raw[0x50:0x58];assert changed==raw and result['seed']==17
 cases.append(dict(competition=competition,current=current,mode=mode,outcome=outcome,rank=rank,regional=regional,skill=skill,performance=performance,confidence=confidence,expected=expected))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/club-result-confidence-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('3000 whole original confidence cases generated, no adapters')
