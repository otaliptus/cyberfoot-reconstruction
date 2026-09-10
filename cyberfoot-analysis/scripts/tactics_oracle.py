from native_oracle import *
u.mem_map(0x1300000,0x10000);u.mem_write(read32(0x66af70),p32(0x1300000));r=random.Random(42464);cases=[]
for i in range(1000):
 seed=r.getrandbits(32);result=run(0x4e2a64,[0],seed)
 cases.append({'seed':seed,'expected':{'playStyle':read32(0x1300220),'marking':read32(0x1300224),'attackFocus':read32(0x1300228),'seed':result['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/tactics-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original AI tactical choices: 1000 cases')
