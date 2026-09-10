from native_oracle import *
u.mem_map(0x1400000,0x10000)
clubs=0x1400100; career=read32(0x66ac78)
u.mem_write(read32(0x66af70),p32(clubs))
r=random.Random(65639); cases=[]
for i in range(1000):
    rows=[[r.choice([-1,0,1,29,0x7fffffff]),r.randrange(-1,5),r.choice([0,0,1,2,255])] for _ in range(40)]
    count=r.choice([-1,0,1,26,27,28,40]); country=r.choice([-1,0,1,29,0x7fffffff]); subgroup=r.randrange(-1,5)
    raw=bytearray(40*760)
    for j,(c,s,h) in enumerate(rows):
        struct.pack_into('<ii',raw,j*760+0x3c,c,s);raw[j*760+0x39]=h
    u.mem_write(clubs,bytes(raw));u.mem_write(career+0x3c,p32(count))
    a=run(0x65639c,[country],1);b=run(0x6563e0,[subgroup],1)
    assert bytes(u.mem_read(clubs,len(raw)))==raw
    assert a['seed']==b['seed']==1 and a['clockReads']==b['clockReads']==0
    cases.append(dict(rows=rows,count=count,country=country,subgroup=subgroup,expected=[a['result'],b['result']]))
(R.parent/'cyberfoot-web/native-port/tests/manager-participation-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('2000 whole original manager participation counts, no adapters; no record or RNG mutations')
