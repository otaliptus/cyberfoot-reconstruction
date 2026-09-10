"""Original sorting instructions; fixed storage replaces Delphi string allocation only."""
from native_oracle import *
u.mem_map(0,0x1000)
def strings(uc,address,size,data):
 a=uc.reg_read(UC_X86_REG_EAX);b=uc.reg_read(UC_X86_REG_EDX);c=uc.reg_read(UC_X86_REG_ECX)
 if address==0x404f30:u.mem_write(a,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(b))
 elif address==0x4049c4:u.mem_write(a,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(b,c)))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(a))
 elif address==0x4048d4:u.mem_write(a,p32(0))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,strings,begin=a,end=a)
r=random.Random(58248);cases=[]
for i in range(1000):
 rows=[{'id':j,'skill':r.randint(-3,3) if i%2 else r.randint(-2147483648,2147483647),'condition':r.randint(0,3),'field10':r.randint(0,2)} for j in range(r.randint(0,50))]
 for j,row in enumerate(rows):
  data=bytearray(36);struct.pack_into('<i',data,0,row['id']);struct.pack_into('<iii',data,8,row['skill'],row['condition'],row['field10']);u.mem_write(0x1002000+j*36,bytes(data))
 run(0x4bcdb0,[0x1002000,36,0],1,[0x5e8248,len(rows)-1])
 cases.append({'rows':rows,'expected':[read32(0x1002000+j*36) for j in range(len(rows))]})
p=R.parent/'cyberfoot-web/native-port/tests/human-sort-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original human candidate sort: 1000')
