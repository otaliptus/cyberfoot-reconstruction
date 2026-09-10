from native_oracle import *
u.mem_map(0x1400000,0x10000);career=read32(0x66ac78);C=0x1400100;L=0x1409000;M=0x140b000
for glob,base in [(0x66af70,C),(0x66aca0,L),(0x66b718,M)]:u.mem_write(read32(glob),p32(base))
r=random.Random(0x654d60);cases=[]
for i in range(4000):
    mode=r.choice([2,4]);competition=r.choice([1,1,3]);country=r.choice([0,1,29]);target=r.randrange(3);active=r.randrange(3);seasonLeg=r.choice([1,2]);regional=r.randrange(2);extra=r.randrange(2)
    clubs=[[int(j==39),r.choice([0,1,1])] for j in range(40)]
    if competition==3 and i%4==0:
        for row in clubs:row[0]=1
    managers=[[r.randrange(-1,40),r.choice([-1,0,1,2,3,4]),r.choice([-1,0,1,29,7])] for _ in range(3)]
    leagues=[dict(country=co,divisions=r.randrange(1,5),rows=[r.sample(range(40),20) for _ in range(4)]) for co in [0,1,29]]
    cb=bytearray(40*760);lb=bytearray(3*660);mb=bytearray(3*128)
    for j,(human,national) in enumerate(clubs):cb[j*760+0x39]=human;cb[j*760+0x216]=national
    for j,row in enumerate(managers):
        for off,n in zip([0x20,0x24,0x7c],row):struct.pack_into('<i',mb,j*128+off,n)
    for j,league in enumerate(leagues):
        for division,row in enumerate(league['rows'],1):
            for pos,n in enumerate(row,1):struct.pack_into('<i',lb,j*660+division*80+0xfc+pos*4,n)
        struct.pack_into('<ii',lb,j*660+0x140,league['country'],league['divisions'])
    u.mem_write(C,bytes(cb));u.mem_write(L-4,p32(3));u.mem_write(L,bytes(lb));u.mem_write(M,bytes(mb));u.mem_write(career,bytes(1888))
    for off,n in [(0x10,active),(0x50,seasonLeg),(0x88,competition),(0x168,mode)]:u.mem_write(career+off,p32(n))
    u.mem_write(career+0x170,bytes([regional]));u.mem_write(career+0x75c,bytes([extra]));u.mem_write(read32(0x66adf4),r.randbytes(16));seed=r.getrandbits(32)
    result=run(0x654d60,[country,target],seed,instruction_limit=300000)
    for base,b in [(C,cb),(L,lb),(M,mb)]:assert bytes(u.mem_read(base,len(b)))==b
    cases.append(dict(clubs=clubs,leagues=leagues,managers=managers,mode=mode,competition=competition,country=country,target=target,active=active,seasonLeg=seasonLeg,regional=regional,extra=extra,seed=seed,expected=dict(offers=list(struct.unpack('<4i',u.mem_read(read32(0x66adf4),16))),seed=result['seed'])))
(R.parent/'cyberfoot-web/native-port/tests/unemployed-job-offer-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('4000 complete unemployed-manager offer executions; no adapters; all save records unchanged')
