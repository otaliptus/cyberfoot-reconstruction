"""Original regional highlighting segment with only UI color setter adapted."""
import gzip
from native_oracle import *
region=0x1002000;frame=0x800e000;u.mem_write(0x66ae98,p32(region));u.mem_write(0x6d25e4,p32(0));events=[]
formats=[list(struct.unpack('<12i',u.mem_read(read32(0x66b50c)+i*48,48))) for i in range(7)]
def color(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);events.append([struct.unpack('<i',p32(uc.reg_read(UC_X86_REG_EDX)))[0],struct.unpack('<i',p32(uc.reg_read(UC_X86_REG_ECX)))[0],read32(sp+4)]);uc.reg_write(UC_X86_REG_EIP,read32(sp));uc.reg_write(UC_X86_REG_ESP,sp+8)
u.hook_add(UC_HOOK_CODE,color,begin=0x5ae33c,end=0x5ae33c)
r=random.Random(0x5b0f2a);cases=[]
for i in range(1400):
 formatId=i%7+1;fmt=formats[formatId-1];divisions=r.randrange(1,5);lower=bool(r.randrange(2));grouped=fmt[1]>1 and not lower;rows=r.sample(range(1,41),4);data=bytearray(b'\xff'*1384)
 for base in [80,divisions*80]:
  for j in range(20):struct.pack_into('<i',data,base+j*4,r.choice([-1,-1,j]))
 struct.pack_into('<i',data,0x530,formatId);struct.pack_into('<i',data,0x510,divisions);u.mem_write(region,bytes(data));counts={name:sum(struct.unpack_from('<i',data,base+j*4)[0]>=0 for j in range(20)) for name,base in [('bottom',divisions*80),('second',80)]}
 u.mem_write(frame-0x100,bytes(0x100));u.mem_write(frame-0x40,p32(fmt[2]));u.mem_write(frame-0x24,p32(fmt[1] if grouped else divisions));u.mem_write(frame-0x49,bytes([int(grouped)]));u.mem_write(frame-5,bytes([int(lower)]));u.mem_write(frame-0x88,b''.join(p32(x) for x in rows));u.reg_write(UC_X86_REG_EBP,frame);u.reg_write(UC_X86_REG_ESP,0x800c000);events=[]
 u.emu_start(0x5b0f2a,0x5b138f,count=100000);assert u.reg_read(UC_X86_REG_EIP)==0x5b138f
 cases.append(dict(formatId=formatId,divisions=divisions,grouped=grouped,lowerDivisions=lower,counts=counts,relegationRows=rows,expected=events))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/regional-standings-highlight-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('1400 original regional highlight segment cases generated; native fixed-slot counts and UI color setter adapter')
