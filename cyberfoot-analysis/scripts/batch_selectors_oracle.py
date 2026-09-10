from native_oracle import *
u.mem_map(0x1300000,0x10000);L=0x1300100;F=0x1302000;C=0x1303000;M=0x1305000;H=0x1306000
for ptr,base in [(0x66aca0,L),(0x66afa0,F),(0x66af70,C),(0x66b6ac,M),(0x66b058,H)]:u.mem_write(read32(ptr),p32(base))
r=random.Random(65698);cases=[]
for i in range(1000):
 career=bytearray(1888);struct.pack_into('<i',career,0x110,r.randrange(7));humans=[r.randrange(-1,4) for _ in range(r.randrange(5))];struct.pack_into('<i',career,0x13c,len(humans))
 for j,n in enumerate(humans):struct.pack_into('<i',career,0x140+j*4,n)
 preferred=r.randrange(-2,6);count=r.randrange(5);leagues=[];flags=r.randrange(2)
 for j in range(count):
  b=bytearray(660);struct.pack_into('<i',b,0x140,r.choice([0,1,29]));b[0x14c]=r.randrange(2)*flags;b[0x290]=r.randrange(2)*flags;leagues.append(b)
 fixtures=[]
 for j in range(r.randrange(15)):
  b=bytearray(72);struct.pack_into('<i',b,0x18,r.choice([1,2]));struct.pack_into('<i',b,0x1c,r.randrange(3));struct.pack_into('<i',b,0x38,r.randrange(5));fixtures.append(b)
 clubs=[]
 for j in range(4):
  b=bytearray(760);struct.pack_into('<i',b,0x3c,r.randrange(202));b[0x217]=r.randrange(2);clubs.append(b)
 country=r.randrange(4);region=r.randrange(6);metadata=[[0,0,0]]+[[1,j,1] for j in range(3)];honours=[[r.randrange(10),r.randrange(4),r.randrange(40),r.randrange(1,4),0] for _ in range(r.randrange(10))]
 for base,rows,width in [(L,leagues,660),(F,fixtures,72),(C,clubs,760)]:u.mem_write(base-4,p32(len(rows)));u.mem_write(base,b''.join(rows))
 for base,rows in [(M,metadata),(H,honours)]:u.mem_write(base-4,p32(len(rows)));u.mem_write(base,b''.join(p32(n) for row in rows for n in row))
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(read32(0x66b4f8),p32(preferred))
 expected={'cup':run(0x656dc8,[],0)['result'],'league':run(0x656fb0,[],0)['result'],'human':bool(run(0x6574c4,[region],0)['result']),'champion':run(0x645280,[country],0)['result']}
 cases.append({'career':career.hex(),'preferred':preferred,'leagues':b''.join(leagues).hex(),'fixtures':b''.join(fixtures).hex(),'clubs':b''.join(clubs).hex(),'metadata':metadata,'honours':honours,'country':country,'region':region,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/batch-selectors-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original batch selectors:1000 cases across four functions')
