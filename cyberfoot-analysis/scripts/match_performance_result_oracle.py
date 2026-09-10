from native_oracle import *
import gzip
u.mem_map(0x1400000,0x10000);clubs=0x1400100;leagues=0x1402000;career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(clubs));u.mem_write(read32(0x66aca0),p32(leagues));u.mem_write(leagues-4,p32(1));u.mem_write(leagues+0x140,p32(29));r=random.Random(646038);cases=[]
for i in range(2000):
 competition=r.choice([1,3,4,6]);current=r.choice([1,3,4,6,2]);mode=r.choice([2,4,0]);scores=[r.randrange(8),r.randrange(8)];raw=bytearray(1520);inputs=[]
 for j in range(2):
  fields=[[0x50,r.randrange(-10,120)],[0x54,r.randrange(-10,120)],[0x98,r.randrange(40)],[0x1a4+competition*4,r.randrange(-1,23)],[0x1b0,r.randrange(-1,8)],[0x3c,r.choice([29,29,1])],[0x2f0,r.choice([46,44,52,45,999])]]
  cash=r.choice([-1,0,1]);human=r.randrange(2)
  for o,n in fields:struct.pack_into('<i',raw,j*760+o,n)
  raw[j*760+0x39]=human;struct.pack_into('<q',raw,j*760+0x48,cash);inputs.append(dict(fields=fields,cash=cash,human=human))
 u.mem_write(clubs,bytes(raw));u.mem_write(career+0x88,p32(current));u.mem_write(career+0x168,p32(mode));result=run(0x646a38,[competition,0,1],17,stack=[0,scores[1],scores[0]])
 expected=[list(struct.unpack('<ii',u.mem_read(clubs+j*760+0x50,8))) for j in range(2)];changed=bytearray(u.mem_read(clubs,1520))
 for j in range(2):changed[j*760+0x50:j*760+0x58]=raw[j*760+0x50:j*760+0x58]
 assert changed==raw and result['seed']==17
 cases.append(dict(competition=competition,current=current,mode=mode,scores=scores,clubs=inputs,expected=expected))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/match-performance-result-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('2000 whole original result cases generated, native children and no adapters')
