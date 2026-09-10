from native_oracle import *
import gzip
u.mem_map(0,0x1000);u.mem_map(0x1500000,0x100000)
career=read32(0x66ac78);calendar=0x15f0000;u.mem_write(0x66b574,p32(calendar))
specs=[('players',0x66b5b8,304),('clubs',0x66af70,760),('records_0066b718',0x66b718,128),('records_0066afec',0x66afec,56),('records_0066b608',0x66b608,16),('records_0066ae98',0x66ae98,1384),('records_0066aca0',0x66aca0,660),('records_0066b2b8',0x66b2b8,12),('records_0066b0d4',0x66b0d4,24),('records_0066b770',0x66b770,48)]
areas={};destinations={};direct={0x66b608,0x66ae98}
for i,(name,glob,size) in enumerate(specs):
    base=0x1500100+i*0x10000;areas[name]=base
    if glob in direct:u.mem_write(glob,p32(base))
    else:destinations[read32(glob)]=(base,size);u.mem_write(read32(glob),p32(base))
def resize(uc,a,z,d):
    sp=uc.reg_read(UC_X86_REG_ESP);dest=uc.reg_read(UC_X86_REG_EAX);base,size=destinations[dest];old=read32(base-4);count=read32(sp+4);assert count>=old
    u.mem_write(base+old*size,bytes((count-old)*size));u.mem_write(base-4,p32(count));u.mem_write(dest,p32(base));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
r=random.Random(649138);cases=[]
counts={'players':16,'clubs':40,'records_0066b718':10,'records_0066afec':40,'records_0066b608':5,'records_0066ae98':27,'records_0066aca0':4,'records_0066b2b8':2,'records_0066b0d4':12,'records_0066b770':12}
for i in range(1600):
    kind='appoint' if i<600 else 'remove' if i<1200 else 'refresh' if i<1400 else 'cancel' if i<1500 else 'clear'
    target=r.randrange(40);manager=r.randrange(10);human=i%3!=0;mode=r.choice([0,2,4]);slots=r.choice([0,1,5,10]);date=42000+r.randrange(365)+r.choice([0,.25,.5])
    car=bytearray(1888)
    def put(b,off,n):struct.pack_into('<i',b,off,n)
    for off,n in [(0x3c,r.choice([0,1,27,40])),(0x13c,r.randrange(10)),(0xc0,r.randrange(1,10)),(0x168,mode),(0x16c,1),(0x88,r.choice([0,1,4]))]:put(car,off,n)
    for j in range(10):put(car,0x140+j*4,r.choice([-1,target,r.randrange(40),5000]))
    car[0x170]=r.randrange(2)
    inputs={name:bytearray(counts[name]*size) for name,glob,size in specs}
    for j in range(40):
        b=inputs['clubs'];off=j*760;b[off:off+24]=r.randbytes(24);b[off+0x39]=r.choice([0,0,0,1,255])
        for at,n in [(0x3c,r.choice([0,1,29,7])),(0x40,r.randrange(27)),(0x44,r.randrange(-1,10)),(0x50,r.randrange(-10,110)),(0x54,r.randrange(110)),(0x7c,r.randrange(5))]:put(b,off+at,n)
        b[off+0x48:off+0x50]=r.randbytes(8)
        for at in range(0x1f4,0x204,4):put(b,off+at,r.randrange(-10,300))
        inputs['records_0066afec'][j*56:j*56+56]=r.randbytes(56)
    inputs['clubs'][target*760+0x39]=int(human) if kind=='remove' else 0
    for j in range(10):
        b=inputs['records_0066b718'];off=j*128;b[off:off+128]=r.randbytes(128);b[off+0x31]=int(human) if j==manager else r.randrange(2)
    for j in range(16):
        b=inputs['players'];off=j*304;b[off:off+304]=r.randbytes(304);put(b,off+0x20,r.choice([-1,target,target,r.randrange(40)]));put(b,off+0x100,r.randrange(4))
    for j in range(5):
        for k in range(4):put(inputs['records_0066b608'],j*16+k*4,r.randrange(300))
    for j,country in enumerate([0,1,29,7]):
        b=inputs['records_0066aca0'];put(b,j*660+0x140,country);put(b,j*660+0x144,r.choice([1,2,3,4]));b[j*660+0x14c]=r.randrange(2)
    for j in range(27):
        b=inputs['records_0066ae98'];off=j*1384;put(b,off+0x510,r.choice([-1,0,1,2]));b[off+0x52c]=r.randrange(2);b[off+0x52d]=r.randrange(2)
        for k in range(60):put(b,off+k*4,r.choice([-1,-1,r.randrange(40)]))
    for name,size in [('records_0066b0d4',24),('records_0066b770',48)]:
        for j in range(12):
            b=inputs[name];off=j*size;b[off:off+size]=r.randbytes(size);put(b,off,r.choice([target,r.randrange(40),-1]));put(b,off+4,r.choice([target,r.randrange(40),-1]));b[off+8]=r.choice([0,0,1,2])
    inputs['records_0066b2b8'][:]=r.randbytes(24)
    for name,glob,size in specs:
        base=areas[name];u.mem_write(base-4,p32(counts[name]));u.mem_write(base,bytes(inputs[name]))
        if glob not in direct:u.mem_write(read32(glob),p32(base))
    u.mem_write(career,bytes(car));u.mem_write(calendar+8,struct.pack('<d',date));u.mem_write(read32(0x66b57c),p32(slots));initialLeague=r.randrange(-1,4);u.mem_write(read32(0x66b4f8),p32(initialLeague));seed=r.getrandbits(32)
    address={'appoint':0x649138,'remove':0x649824,'refresh':0x648ea0,'cancel':0x6497c8,'clear':0x649ad4}[kind]
    result=run(address,[target,manager],seed,instruction_limit=300000)
    outputs={name:bytes(u.mem_read(areas[name],read32(areas[name]-4)*size)).hex() for name,glob,size in specs}
    cases.append(dict(kind=kind,club=target,manager=manager,date=date,slots=slots,initialLeague=initialLeague,seed=seed,career=car.hex(),sections=[dict(name=name,recordSize=size,data=bytes(inputs[name]).hex()) for name,glob,size in specs],expected=dict(sections=outputs,career=bytes(u.mem_read(career,1888)).hex(),seed=result['seed'],league=struct.unpack('<i',u.mem_read(read32(0x66b4f8),4))[0])))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/manager-employment-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('1600 whole manager employment/helper routines; all children native; allocation adapter only')
