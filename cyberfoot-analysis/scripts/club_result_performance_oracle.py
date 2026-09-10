from native_oracle import *
import gzip
u.mem_map(0x1400000,0x10000);clubs=0x1400100;leagues=0x1402000;career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(clubs));u.mem_write(read32(0x66aca0),p32(leagues));u.mem_write(leagues-4,p32(1));u.mem_write(leagues+0x140,p32(29));r=random.Random(646000);cases=[]
for i in range(5000):
 t=dict(competition=r.choice([0,1,1,1,3,3,4,6,8]),current=r.choice([1,3,4,6]),mode=r.choice([0,2,4,6]),outcome=r.choice([0,1,2,3]),side=r.choice([0,1,2,3]),difference=r.choice([-2147483648,-1,0,1,2147483647]),margin=r.randrange(10),rank=r.choice([-1,*range(24),2147483647]),regional=r.randrange(-1,10),skill=r.choice([20,21,-1,50]),performance=r.choice([-1,0,30,99,100,101,2147483647]),confidence=r.choice([-1,0,39,40,99,100,101,2147483647]),cash=str(r.choice([-9223372036854775808,-1,0,1,9223372036854775807])),human=r.choice([0,1,255]),country=r.choice([29,29,29,1]))
 raw=bytearray(760)
 for o,n in [(0x50,t['performance']),(0x54,t['confidence']),(0x98,t['skill']),(0x1a4+t['competition']*4,t['rank']),(0x1b0,t['regional']),(0x3c,t['country'])]:struct.pack_into('<i',raw,o,n)
 raw[0x39]=t['human'];struct.pack_into('<q',raw,0x48,int(t['cash']));u.mem_write(clubs,bytes(raw));u.mem_write(career+0x88,p32(t['current']));u.mem_write(career+0x168,p32(t['mode']));result=run(0x646fc0,[t['competition'],0,t['outcome']],17,stack=[t['side'],t['difference'],t['margin']])
 t['expected']=list(struct.unpack('<ii',u.mem_read(clubs+0x50,8)));changed=bytearray(u.mem_read(clubs,760));changed[0x50:0x58]=raw[0x50:0x58];assert changed==raw and result['seed']==17;cases.append(t)
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/club-result-performance-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('5000 whole original performance cases generated, no adapters')
