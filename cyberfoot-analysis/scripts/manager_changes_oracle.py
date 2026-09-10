from native_oracle import *
import gzip
u.mem_map(0,0x1000);u.mem_map(0x1500000,0x100000)
career=read32(0x66ac78);calendar=0x15f0000;u.mem_write(0x66b574,p32(calendar))
source=json.loads(gzip.decompress((R.parent/'cyberfoot-web/native-port/tests/manager-employment-vectors.json.gz').read_bytes()))[:500]
specs=[(s['name'],int(s['name'].removeprefix('records_'),16) if s['name'].startswith('records_') else {'players':0x66b5b8,'clubs':0x66af70}[s['name']],s['recordSize']) for s in source[0]['sections']]
areas={};destinations={};direct={0x66b608,0x66ae98};temp=0x15b0100
for i,(name,glob,size) in enumerate(specs):
    base=0x1500100+i*0x10000;areas[name]=base
    if glob in direct:u.mem_write(glob,p32(base))
    else:destinations[read32(glob)]=(base,size);u.mem_write(read32(glob),p32(base))
destinations[read32(0x66b3cc)]=(temp,16)
def ret(uc):
    sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_EIP,read32(sp));uc.reg_write(UC_X86_REG_ESP,sp+4)
def resize(uc,a,z,d):
    sp=uc.reg_read(UC_X86_REG_ESP);dest=uc.reg_read(UC_X86_REG_EAX);base,size=destinations[dest];old=read32(base-4);count=read32(sp+4)
    if count>old:u.mem_write(base+old*size,bytes((count-old)*size))
    u.mem_write(base-4,p32(count));u.mem_write(dest,p32(base));ret(uc)
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
dialog=None;events=[];obj=0x15d0010;vmt=0x15d0100;show=0x15d0300;u.mem_write(obj,p32(vmt));u.mem_write(vmt+0xec,p32(show))
def create_dialog(uc,a,z,d):
    global dialog
    dialog=uc.reg_read(UC_X86_REG_EDX);u.mem_write(uc.reg_read(UC_X86_REG_ECX),p32(obj));ret(uc)
def show_dialog(uc,a,z,d):
    if dialog==read32(0x641f38):events.append(['human',read32(read32(0x66b48c))])
    elif dialog==read32(0x5ef344):events.append(['summary',[list(struct.unpack('<4i',u.mem_read(temp+j*16,16))) for j in range(read32(temp-4))]])
    else:raise AssertionError(hex(dialog))
    ret(uc)
u.hook_add(UC_HOOK_CODE,create_dialog,begin=0x487474,end=0x487474);u.hook_add(UC_HOOK_CODE,show_dialog,begin=show,end=show)
globals={'replacementManager':0x66ae80,'outgoingManager':0x66b5a4,'replacementSourceClub':0x66afd4,'managerChangeClub':0x66b48c,'currentLeagueConfiguration':0x66b4f8}
r=random.Random(656410);cases=[];transactions=0
for i,test in enumerate(source):
    car=bytearray.fromhex(test['career']);inputs={s['name']:bytearray.fromhex(s['data']) for s in test['sections']}
    struct.pack_into('<i',car,0x3c,40);struct.pack_into('<i',car,0x88,1);car[0xd8]=int(i>=400);car[0x170]=0
    managers=bytearray(46*128)
    for j in range(46):
        for off,n in [(0x1c,j if j<40 else -1),(0x24,r.randrange(1,5)),(0x34,r.choice([0,0,1,5])),(0x3c,[0,1,29,7][j%4])]:struct.pack_into('<i',managers,j*128+off,n)
        managers[j*128+0x40]=int(j<40 or i%3==0)
    inputs['records_0066b718']=managers
    for j in range(40):
        club=inputs['clubs'];off=j*760;club[off+0x39]=int(i>=400 and j in [3,12]);managers[j*128+0x31]=club[off+0x39]
        for at,n in [(0x44,j),(0x3c,[0,1,29,7][j%4]),(0x50,r.choice([0,9,10,100,100,100])),(0x1a8,r.choice([0,5,6,11,16,20]))]:struct.pack_into('<i',club,off+at,n)
    for j in range(4):
        league=inputs['records_0066aca0']
        for division in range(1,5):
            for pos in range(1,21):struct.pack_into('<i',league,j*660+division*80+0xfc+pos*4,r.randrange(40))
        struct.pack_into('<ii',league,j*660+0x140,[0,1,29,7][j],4)
    for name,glob,size in specs:
        base=areas[name];u.mem_write(base-4,p32(len(inputs[name])//size));u.mem_write(base,bytes(inputs[name]))
        if glob not in direct:u.mem_write(read32(glob),p32(base))
    u.mem_write(temp-4,p32(0));u.mem_write(read32(0x66b3cc),p32(temp));u.mem_write(career,bytes(car));u.mem_write(calendar+8,struct.pack('<d',test['date']));u.mem_write(read32(0x66b57c),p32(10))
    initial={key:r.randrange(-1,40) for key in globals};initial['managerReplacementFlag']=bool(r.randrange(2))
    for key,glob in globals.items():u.mem_write(read32(glob),p32(initial[key]))
    u.mem_write(read32(0x66ac4c),bytes([int(initial['managerReplacementFlag'])]));seed=r.getrandbits(32);events=[]
    result=run(0x656410,[],seed,instruction_limit=1000000)
    expected={key:struct.unpack('<i',u.mem_read(read32(glob),4))[0] for key,glob in globals.items()};expected['managerReplacementFlag']=bool(u.mem_read(read32(0x66ac4c),1)[0]);expected['managerChanges']=[]
    assert read32(temp-4)==0
    outputs={name:bytes(u.mem_read(areas[name],read32(areas[name]-4)*size)).hex() for name,glob,size in specs};transactions+=read32(areas['records_0066b2b8']-4)-len(inputs['records_0066b2b8'])//12
    cases.append(dict(career=car.hex(),date=test['date'],seed=seed,initial=initial,sections=[dict(name=name,recordSize=size,data=inputs[name].hex()) for name,glob,size in specs],expected=dict(career=bytes(u.mem_read(career,1888)).hex(),sections=outputs,runtime=expected,events=events,seed=result['seed'])))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/manager-changes-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print(f'500 manager-change executions, {transactions} appointments; 400 complete AI-only allocation-adapted cases; 100 modal-boundary-adapted cases')
