from native_oracle import *
u.mem_map(0x1300000,0x10000);A=0x1300100;u.mem_write(read32(0x66aca0),p32(A));r=random.Random(65208);cases=[]
for i in range(500):
 ids=[r.randrange(10) for _ in range(r.randrange(25))];query=r.randrange(12);u.mem_write(A-4,p32(len(ids)))
 for j,id in enumerate(ids):u.mem_write(A+j*660+0x140,p32(id))
 cases.append({'ids':ids,'query':query,'expected':run(0x65208c,[query],0)['result']})
p=R.parent/'cyberfoot-web/native-port/tests/league-lookup-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original league configuration lookup:500 cases')
