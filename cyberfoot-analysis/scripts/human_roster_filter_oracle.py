"""Original first two grid loops in5e82a0. Virtual grid storage is adapted;
comparison and branch instructions execute unchanged. Stops before sorting.
"""
from native_oracle import *
u.mem_map(0,0x1000);form=0x1001000;grid=0x1002000;vtable=0x1003000
u.mem_write(form+0x304,p32(grid));u.mem_write(grid,p32(vtable))
for off,addr in [(0x100,0x100a000),(0x194,0x100a010),(0x11c,0x100a020)]:u.mem_write(vtable+off,p32(addr))
rows=[];eligible=[]
def string(i):
 a=0x1005000+i*64;s=str(rows[i]).encode('utf-16le');u.mem_write(a-4,p32(len(s)));u.mem_write(a,s+b'\0\0');return a
def callback(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);row=uc.reg_read(UC_X86_REG_ECX);pop=4
 if address==0x100a000:u.mem_write(read32(sp+4),p32(string(row)));pop=8
 elif address==0x100a010:rows[row]=0;pop=8
 elif address==0x100a020:uc.reg_write(UC_X86_REG_EAX,len(rows))
 elif address==0x5e83bd:eligible.append(uc.reg_read(UC_X86_REG_EBX));uc.reg_write(UC_X86_REG_EIP,0x5e86e9);return
 elif address==0x5e86f3:uc.reg_write(UC_X86_REG_EIP,STOP);return
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x100a000,0x100a010,0x100a020,0x4060a8,0x5e83bd,0x5e86f3]:u.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
r=random.Random(582);cases=[]
for i in range(500):
 original=[r.randrange(6) for _ in range(r.randrange(41))];rows=original.copy();eligible=[];run(0x5e82a0,[form,4],1)
 cases.append({'statuses':original,'expected':{'statuses':rows,'eligible':eligible}})
p=R.parent/'cyberfoot-web/native-port/tests/human-roster-filter-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original human roster filtering: 500 cases')
