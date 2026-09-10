"""Original slot lookup and pitch target loop; Win32 PtInRect is adapted."""
from native_oracle import *
def pt(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);left,top,right,bottom=struct.unpack('<4i',u.mem_read(read32(sp+4),16));x,y=struct.unpack('<2i',u.mem_read(sp+8,8));uc.reg_write(UC_X86_REG_EAX,int(left<=x<right and top<=y<bottom));uc.reg_write(UC_X86_REG_ESP,sp+16);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,pt,begin=0x407e18,end=0x407e18)
x=list(struct.unpack('<25i',u.mem_read(read32(0x66b388),100)));y=list(struct.unpack('<25i',u.mem_read(read32(0x66b3bc),100)))
r=random.Random(5714);points=[(a+dx,b+dy) for a,b in zip(x,y) for dx,dy in [(-1,0),(0,0),(41,0),(42,0),(0,41),(0,42),(41,41),(42,42),(21,21)]]+[(r.randint(-20,480),r.randint(-20,620)) for _ in range(500)]
positions=[{'x':a,'y':b,'expected':run(0x5eb714,[0,a,b],1)['result']} for a,b in points];lookup=[]
for i in range(500):
 ids=[r.randint(-1,50) for _ in range(18)];target=r.randint(-1,50)
 for j,n in enumerate(ids):u.mem_write(0x6d3684+j*16,p32(n))
 lookup.append({'players':ids,'target':target,'expected':run(0x5ea6e4,[0,target],1)['result']})
p=R.parent/'cyberfoot-web/native-port/tests/manual-lineup-vectors.json';p.write_text(json.dumps({'positions':positions,'lookup':lookup},separators=(',',':')));print('Original pitch target and slot lookup: 1225 cases')
