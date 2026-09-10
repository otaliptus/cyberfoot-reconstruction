from native_oracle import *
import gzip
u.mem_map(0,0x1000);u.mem_map(0x1500000,0x100000)
career=read32(0x66ac78);calendar=0x15f0000;u.mem_write(0x66b574,p32(calendar))
source=json.loads(gzip.decompress((R.parent/'cyberfoot-web/native-port/tests/manager-employment-vectors.json.gz').read_bytes()))[:800]
specs=[(s['name'],int(s['name'].removeprefix('records_'),16) if s['name'].startswith('records_') else {'players':0x66b5b8,'clubs':0x66af70}[s['name']],s['recordSize']) for s in source[0]['sections']]
areas={};destinations={};direct={0x66b608,0x66ae98}
for i,(name,glob,size) in enumerate(specs):
 base=0x1500100+i*0x10000;areas[name]=base
 if glob in direct:u.mem_write(glob,p32(base))
 else:destinations[read32(glob)]=(base,size);u.mem_write(read32(glob),p32(base))
form=0x15d0000;getter=0x15d3000;vmt=0x15d2000;u.mem_write(vmt+0xc8,p32(getter))
for j in range(4):u.mem_write(form+0x308+j*8,p32(0x15d1000+j*16));u.mem_write(0x15d1000+j*16,p32(vmt))
checks=[];closed=False
def hook(uc,a,z,d):
 global closed
 sp=uc.reg_read(UC_X86_REG_ESP)
 if a==0x4060a8:
  dest=uc.reg_read(UC_X86_REG_EAX);base,size=destinations[dest];old=read32(base-4);count=read32(sp+4);assert count>=old;u.mem_write(base+old*size,bytes((count-old)*size));u.mem_write(base-4,p32(count));u.mem_write(dest,p32(base))
 elif a==getter:uc.reg_write(UC_X86_REG_EAX,int(checks[(uc.reg_read(UC_X86_REG_EAX)-0x15d1000)//16]))
 else:closed=True
 uc.reg_write(UC_X86_REG_EIP,read32(sp));uc.reg_write(UC_X86_REG_ESP,sp+4)
for a in [0x4060a8,getter,0x483bc4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(0x5d6b3c);cases=[]
for i,test in enumerate(source):
 inputs={s['name']:bytearray.fromhex(s['data']) for s in test['sections']};car=bytearray.fromhex(test['career']);selected=r.randrange(-1,4);employed=bool(i%2);offers=[-1,-1,-1,-1]
 if selected>=0:offers[selected]=1 if i%7 else -1
 checks=[j==selected or (j>selected>=0 and bool(r.randrange(2))) for j in range(4)]
 struct.pack_into('<i',car,0x10,0);struct.pack_into('<i',car,0x13c,1 if employed else 0)
 for j in range(10):struct.pack_into('<i',car,0x140+j*4,0 if j==0 and employed else -1)
 managers=inputs['records_0066b718'];clubs=inputs['clubs'];managers[0x31]=1;managers[128+0x31]=0;struct.pack_into('<i',managers,0x1c,0 if employed else -1);struct.pack_into('<i',managers,128+0x1c,1);clubs[0x39]=int(employed);clubs[760+0x39]=0;struct.pack_into('<i',clubs,0x44,0 if employed else -1);struct.pack_into('<i',clubs,760+0x44,1)
 for j in range(1,16):struct.pack_into('<i',inputs['players'],j*304+0x20,r.choice([-1,0,1,1,2]))
 for name,glob,size in specs:
  base=areas[name];u.mem_write(base-4,p32(len(inputs[name])//size));u.mem_write(base,bytes(inputs[name]))
  if glob not in direct:u.mem_write(read32(glob),p32(base))
 u.mem_write(career,bytes(car));u.mem_write(calendar+8,struct.pack('<d',test['date']));u.mem_write(read32(0x66b57c),p32(10));initialLeague=r.randrange(-1,4);u.mem_write(read32(0x66b4f8),p32(initialLeague));u.mem_write(read32(0x66adf4),b''.join(p32(n) for n in offers));seed=r.getrandbits(32);closed=False
 result=run(0x5d6b3c,[form],seed,instruction_limit=1000000)
 outputs={name:bytes(u.mem_read(areas[name],read32(areas[name]-4)*size)).hex() for name,glob,size in specs}
 cases.append(dict(career=car.hex(),date=test['date'],seed=seed,selected=selected,offers=offers,initialLeague=initialLeague,sections=[dict(name=name,recordSize=size,data=inputs[name].hex()) for name,glob,size in specs],expected=dict(career=bytes(u.mem_read(career,1888)).hex(),sections=outputs,closed=closed,seed=result['seed'],league=struct.unpack('<i',u.mem_read(read32(0x66b4f8),4))[0])))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/manager-offer-acceptance-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('800 whole original offer acceptances; allocation, checked-radio and form-close adapters only')
