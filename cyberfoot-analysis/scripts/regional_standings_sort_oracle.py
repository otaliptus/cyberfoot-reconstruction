"""Original004bcdb0 sorting with original005ae390 regional comparator."""
import gzip
from native_oracle import *
u.mem_map(0,0x1000)
def scratch(uc,address,size,data):
 a=uc.reg_read(UC_X86_REG_EAX);b=uc.reg_read(UC_X86_REG_EDX);c=uc.reg_read(UC_X86_REG_ECX)
 if address==0x404f30:u.mem_write(a,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(b))
 elif address==0x4049c4:u.mem_write(a,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(b,c)))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(a))
 elif address==0x4048d4:u.mem_write(a,p32(0))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for address in [0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,scratch,begin=address,end=address)
r=random.Random(0x5ae390);cases=[];base=0x1002000
for i in range(2000):
 count=r.choice([1,5,6,7,8,9,10,12,16,20,40]);rows=[]
 for j in range(count):
  values=[r.choice([-2147483648,-1,0,1,2,3,2147483647]) if i%3 else r.randint(-100,100) for _ in range(8)]
  if i%5==0:values=[0]*8
  rows.append([j,*values,0])
 u.mem_write(base,b''.join(p32(x) for row in rows for x in row));run(0x4bcdb0,[base,40,0],1,[0x5ae390,count-1])
 output=[list(struct.unpack('<10i',u.mem_read(base+j*40,40))) for j in range(count)]
 cases.append(dict(rows=rows,expected=output))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/regional-standings-sort-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('2000 original regional sort cases generated; fixed scratch-string storage adapters only')
