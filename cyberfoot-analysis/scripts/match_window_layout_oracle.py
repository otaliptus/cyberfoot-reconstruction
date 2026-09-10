from native_oracle import *
u.mem_map(0x1300000,0x100000);next_obj=0x1340000
arrays=[0x6d4760,0x6d4788,0x6d4764,0x6d4768,0x6d4784,0x6d492c,0x6d476c,0x6d4770,0x6d4774,0x6d4778]
for k,a in enumerate(arrays):
 base=0x1300000+k*0x1000;u.mem_write(a,p32(base))
 for i in range(1,41):u.mem_write(base+i*4,p32(next_obj));u.mem_write(next_obj+0x4c,p32(17));next_obj+=0x200
for a in [0x6d457c,0x6d461c,0x6d46bc,0x6d47ac,0x6d484c,0x6d453c,0x6d455c]:
 count=8 if a in [0x6d453c,0x6d455c] else 40
 for i in range(1,count+1):u.mem_write(a+i*4,p32(next_obj));next_obj+=0x200
u.mem_write(read32(0x66ac78)+0x88,p32(1))
def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if a==0x46599c:u.mem_write(eax+0x44,p32(edx))
 if a==0x4659e8:u.mem_write(eax+0x4c,p32(edx))
 if a==0x40a43c:uc.reg_write(UC_X86_REG_EAX,0)
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x46599c,0x4659e8,0x466128,0x40a43c]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
cases=[]
for spacing in range(1,41):
 u.mem_write(read32(0x66b098),p32(spacing));top=63;rows=[];groups=[]
 for div in range(1,5):
  first=(div-1)*5+1;last=first+4;run(0x6109ac,[0,first,last],0,[top]);run(0x61078c,[0,div,first],0,[last])
  for i in range(first,last+1):rows.append({'id':i,'division':div,'top':read32(read32(read32(0x6d4764)+i*4)+0x44)})
  obj=read32(0x6d453c+div*4);groups.append({'division':div,'left':26,'top':read32(obj+0x44),'width':740,'height':read32(obj+0x4c),'labelTop':read32(obj+0x44)-13});top=rows[-1]['top']+65
 cases.append({'spacing':spacing,'expected':{'rows':rows,'groups':groups}})
p=R.parent/'cyberfoot-web/native-port/tests/match-window-layout-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original row/group placement helpers:40 spacing cases')
