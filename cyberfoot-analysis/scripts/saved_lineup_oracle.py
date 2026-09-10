from native_oracle import *
u.mem_map(0x1300000,0x10000);base=0x1300100;u.mem_write(read32(0x66b754),p32(base))
def resize(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);n=read32(sp+4);old=read32(base-4)
 if n>old:u.mem_write(base+old*120,bytes((n-old)*120))
 u.mem_write(base-4,p32(n));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
r=random.Random(59970);cases=[]
for i in range(500):
 club=r.randrange(10);rows=[]
 for j in range(r.randrange(10)):
  b=bytearray(r.randbytes(120));struct.pack_into('<i',b,0,r.randrange(10));rows.append(b.hex());u.mem_write(base+j*120,bytes(b))
 u.mem_write(base-4,p32(len(rows)))
 slots=[{'playerId':r.randint(-1,10000),'position':r.randint(-1,25)} for j in range(18)]
 for j,s in enumerate(slots):u.mem_write(0x6d3678+j*16,p32(s['position']));u.mem_write(0x6d3684+j*16,p32(s['playerId']))
 run(0x5e9970,[0,club],1)
 cases.append({'clubId':club,'rows':rows,'slots':slots,'expected':bytes(u.mem_read(base,read32(base-4)*120)).hex()})
p=R.parent/'cyberfoot-web/native-port/tests/saved-lineup-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original saved lineup: 500 cases')
