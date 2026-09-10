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
 rows=[{'id':j,'roleOrder':r.randint(0,11),'skill':r.randint(0,40),'condition':r.randint(0,100)} for j in range(r.randint(0,50))]
 for j,row in enumerate(rows):
  data=bytearray(16);struct.pack_into('<i',data,0,row['id']);struct.pack_into('<iii',data,4,row['roleOrder'],row['skill'],row['condition']);u.mem_write(0x1002000+j*16,bytes(data))
 run(0x4bcdb0,[0x1002000,16,0],1,[0x5e52bc,len(rows)-1])
 cases.append({'rows':rows,'expected':[read32(0x1002000+j*16) for j in range(len(rows))]})
p=R.parent/'cyberfoot-web/native-port/tests/roster-sort-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original roster sort: 1000')
