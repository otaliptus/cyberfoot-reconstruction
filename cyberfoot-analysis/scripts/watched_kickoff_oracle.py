from native_oracle import *
u.mem_map(0x1300000,0x10000);M=0x1300100;u.mem_write(read32(0x66b3b8),p32(M));u.mem_write(0x6d4918,p32(456));effects=[]
def hook(uc,a,size,data):
 effects.append(['interval' if a==0x43b244 else 'enabled',uc.reg_read(UC_X86_REG_EDX) & (0xffffffff if a==0x43b244 else 255)])
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x43b244,0x43b234]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61828);cases=[]
for i in range(500):
 count=r.randrange(22);career=bytearray(1888);career[0x6c8]=r.randrange(2);settings=[r.randrange(-1,4) for _ in range(count)]
 for j,n in enumerate(settings):struct.pack_into('<i',career,0x70c+j*4,n)
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(read32(0x66aea4),p32(count));u.mem_write(M,bytes(41*444));seed=r.getrandbits(32);effects=[];result=run(0x618d28,[],seed)
 values=[[struct.unpack('<i',u.mem_read(M+(j+1)*444+o,4))[0] for o in [0x20,0x180,0x184]] for j in range(count)]
 cases.append({'settings':settings,'fast':bool(career[0x6c8]),'seed':seed,'expected':{'values':values,'effects':effects,'seed':result['seed']}})
p=R.parent/'cyberfoot-web/native-port/tests/watched-kickoff-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original watched kickoff: 500 cases')
