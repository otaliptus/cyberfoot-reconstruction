from native_oracle import *
u.mem_map(0x1400000,0x10000);career=read32(0x66ac78);C=0x1400100;L=0x1409000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66aca0),p32(L));r=random.Random(6556);cases=[]
for i in range(5000):
    clubs=[[r.choice([0,1,29,7]),r.randrange(5),r.choice([0,80,81,100]),r.choice([-1,0,1,2,3,4,5]),r.randrange(4),r.randrange(5),r.choice([0,0,1,255])] for _ in range(40)]
    if i%10==0:
        for row in clubs:row[-1]=1
    leagues=[dict(country=country,rows=[[r.randrange(40) for _ in range(20)] for _ in range(4)]) for country in [0,1,29,7]][:r.randrange(1,5)]
    mode=r.choice([0,2,4]);target=r.randrange(40);active=r.randrange(40);seed=r.getrandbits(32)
    cb=bytearray(40*760);lb=bytearray(len(leagues)*660)
    for j,row in enumerate(clubs):
        for off,n in zip([0x3c,0x7c,0x50,0x1a8,0x1ac,0x1b0,0x39],row):
            if off==0x39:cb[j*760+off]=n
            else:struct.pack_into('<i',cb,j*760+off,n)
    for j,league in enumerate(leagues):
        for division,row in enumerate(league['rows'],1):
            for pos,n in enumerate(row,1):struct.pack_into('<i',lb,j*660+division*80+0xfc+pos*4,n)
        struct.pack_into('<i',lb,j*660+0x140,league['country'])
    u.mem_write(C,bytes(cb));u.mem_write(L-4,p32(len(leagues)));u.mem_write(L,bytes(lb));u.mem_write(career,bytes(1888));u.mem_write(career+8,p32(active));u.mem_write(career+0x168,p32(mode));u.mem_write(read32(0x66adf4),r.randbytes(16))
    result=run(0x6556f4,[target],seed);assert bytes(u.mem_read(C,len(cb)))==cb;assert bytes(u.mem_read(L,len(lb)))==lb
    cases.append(dict(clubs=clubs,leagues=leagues,mode=mode,target=target,active=active,seed=seed,expected=dict(offers=list(struct.unpack('<4i',u.mem_read(read32(0x66adf4),16))),seed=result['seed'])))
(R.parent/'cyberfoot-web/native-port/tests/manager-job-offer-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('5000 complete employed-manager job-offer selections; no adapters; clubs and leagues unchanged')
