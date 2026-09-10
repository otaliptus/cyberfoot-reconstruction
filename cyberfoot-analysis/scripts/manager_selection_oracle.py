from native_oracle import *
u.mem_map(0x1400000,0x10000)
career=read32(0x66ac78);M=0x1400100;C=0x1402000;L=0x140a000
for glob,base in [(0x66b718,M),(0x66af70,C),(0x66aca0,L)]:u.mem_write(read32(glob),p32(base))
globals={'replacementManager':0x66ae80,'outgoingManager':0x66b5a4,'replacementSourceClub':0x66afd4}
r=random.Random(6562);cases=[]
for i in range(4000):
    kind='replacement' if i<1500 else 'employed' if i<3000 else 'available' if i<3500 else 'division'
    count=50 if kind in ['replacement','employed'] else r.choice([0,1,10,50])
    managers=[[r.choice([-1,r.randrange(40)]),r.randrange(1,5),r.choice([0,0,1,2]),r.choice([0,0,0,1,255]),r.choice([0,1,29,7]),r.choice([0,0,1,2])] for _ in range(count)]
    clubs=[[r.choice([0,1,29,7]),r.randrange(-1,count),r.randrange(1,5),r.choice([0,0,0,1,255]),r.choice([0,5,6,10,11,15,16,25])] for _ in range(40)]
    # Force substantial fallback, swap and failure coverage.
    if kind=='replacement' and i%4 in [0,1]:
        for m in managers:m[5]=1
    if kind=='replacement' and i%4==1:
        for m in managers:m[2]=1
    leagues=[dict(country=country,divisions=r.randrange(1,5),rows=[[r.randrange(40) for _ in range(20)] for _ in range(4)]) for country in [0,1,29]][:r.choice([0,1,3])]
    mode=r.choice([2,4]);competition=r.choice([0,1,1,4]);club=r.randrange(40);country=r.choice([-1,0,1,29,7]);division=r.randrange(1,5)
    mb=bytearray(count*128);cb=bytearray(40*760);lb=bytearray(len(leagues)*660)
    for j,row in enumerate(managers):
        for off,n in zip([0x1c,0x24,0x34,0x31,0x3c,0x40],row):
            if off in [0x31,0x40]:mb[j*128+off]=n
            else:struct.pack_into('<i',mb,j*128+off,n)
    for j,row in enumerate(clubs):
        for off,n in zip([0x3c,0x44,0x7c,0x39,0x1a8],row):
            if off==0x39:cb[j*760+off]=n
            else:struct.pack_into('<i',cb,j*760+off,n)
    for j,league in enumerate(leagues):
        for d,row in enumerate(league['rows'],1):
            for pos,n in enumerate(row,1):struct.pack_into('<i',lb,j*660+d*80+0xfc+pos*4,n)
        struct.pack_into('<ii',lb,j*660+0x140,league['country'],league['divisions'])
    for base,b,size in [(M,mb,128),(C,cb,760),(L,lb,660)]:u.mem_write(base-4,p32(len(b)//size));u.mem_write(base,bytes(b))
    u.mem_write(career,bytes(1888));u.mem_write(career+0x168,p32(mode));u.mem_write(career+0x88,p32(competition));u.mem_write(read32(0x66b48c),p32(club))
    initial={key:r.randrange(-1,40) for key in globals};initial['managerReplacementFlag']=bool(r.randrange(2))
    for key,glob in globals.items():u.mem_write(read32(glob),p32(initial[key]))
    u.mem_write(read32(0x66ac4c),bytes([int(initial['managerReplacementFlag'])]));seed=r.getrandbits(32)
    addr={'replacement':0x6562b8,'employed':0x6548c4,'available':0x6547c4,'division':0x654844}[kind]
    result=run(addr,[country,division,club],seed)
    expected={key:struct.unpack('<i',u.mem_read(read32(glob),4))[0] for key,glob in globals.items()};expected['managerReplacementFlag']=bool(u.mem_read(read32(0x66ac4c),1)[0])
    for base,b in [(M,mb),(C,cb),(L,lb)]:assert bytes(u.mem_read(base,len(b)))==b
    cases.append(dict(kind=kind,managers=managers,clubs=clubs,leagues=leagues,mode=mode,competition=competition,club=club,country=country,division=division,seed=seed,initial=initial,expected=dict(runtime=expected,seed=result['seed'],result=bool(result['result']&255) if kind=='replacement' else result['result'])))
(R.parent/'cyberfoot-web/native-port/tests/manager-selection-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('4000 whole manager selection routines; no adapters; all record bytes unchanged')
