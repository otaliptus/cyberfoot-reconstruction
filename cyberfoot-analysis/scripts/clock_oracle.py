from native_oracle import u,p32,read32,run,R
import random,json,struct
u.mem_map(0x1100000,0x10000);u.mem_map(0x1200000,0x10000);u.mem_map(0x1300000,0x10000)
for ptr,a in [(0x66b5b8,0x1100000),(0x66af70,0x1200000),(0x66b3b8,0x1300000)]:u.mem_write(read32(ptr),p32(a))
r=random.Random(6072015);cases=[]
for i in range(3000):
 l={'players':list(range(1,12)),'positions':[r.randint(1,25) for _ in range(11)]};l['positions'][10]=1
 s={'players':{j:{'age':r.choice([r.randint(1,100),0,1000,1001,34,26,27,33,35,36,37,42,43,55,56,60,61,70,71,80,81,90,91]),'active':bool(r.getrandbits(1)),'veteranFlag':bool(r.getrandbits(1)),'condition':r.randint(-5,105)} for j in range(1,12)}}
 b=bytearray(248);struct.pack_into('<11i',b,0,*l['players']);struct.pack_into('<11i',b,0x5c,*l['positions']);u.mem_write(0x1000000,bytes(b));u.mem_write(0x1200000+0x60,p32(0))
 for j,p in s['players'].items():
  b=bytearray(304);b[0x15]=int(p['veteranFlag']);b[0x86]=int(p['active']);struct.pack_into('<i',b,0x18,p['age']);struct.pack_into('<i',b,0x78,p['condition']);u.mem_write(0x1100000+j*304,bytes(b))
 tick=r.choice([0,15,90,91,180,200]);seed=r.getrandbits(32);run(0x607e20,[0,tick],seed)
 cases.append({'name':'fatigue','lineup':l,'state':s,'tick':tick,'expected':[struct.unpack('<i',u.mem_read(0x1100000+j*304+0x78,4))[0] for j in range(1,12)]})
 cards=[r.randint(0,8),r.randint(0,8)];u.mem_write(0x1300000+0x1a0,p32(cards[0])+p32(cards[1]));e=run(0x609b64,[0],seed);e['result']=read32(0x1300000+0x184)
 cases.append({'name':'regulationEndTick','redCards':cards,'initialSeed':seed,'expected':e})
p=R.parent/'cyberfoot-web/native-port/tests/clock-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original-code clock cases:',len(cases))
