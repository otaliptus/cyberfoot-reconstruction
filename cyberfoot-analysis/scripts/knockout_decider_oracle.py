from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000)
C=0x1300000;F=0x1303000;M=0x1305000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66b3b8,M)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(read32(0x66b6c8),b'\1')
def adapter(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x43b234,0x404ff0]:u.hook_add(UC_HOOK_CODE,adapter,begin=a,end=a)
r=random.Random(61840);cases=[]
for i in range(1000):
 seed=r.getrandbits(32);clubs=r.sample(range(10),2);fixtures=[{'clubs':r.sample(range(10),2),'field170':r.randrange(256),'field174':r.randrange(10),'field178':r.randrange(10)} for _ in range(r.randrange(1,9))]
 saved=bytearray(r.randbytes(72));struct.pack_into('<2i',saved,0,*clubs);u.mem_write(F,bytes(saved));u.mem_write(M-4,p32(len(fixtures)))
 for j,f in enumerate(fixtures):
  raw=bytearray(444);struct.pack_into('<2i',raw,8,*f['clubs']);raw[0x170]=f['field170'];struct.pack_into('<2i',raw,0x174,f['field174'],f['field178']);u.mem_write(M+j*444,bytes(raw))
 result=run(0x61eb40,[0,0],seed)
 expected=[]
 for j in range(len(fixtures)):
  b=bytes(u.mem_read(M+j*444,444));expected.append({'field170':b[0x170],'field174':struct.unpack_from('<i',b,0x174)[0],'field178':struct.unpack_from('<i',b,0x178)[0]})
 cases.append({'seed':seed,'saved':saved.hex(),'fixtures':fixtures,'expected':{'winner':result['result'],'seed':result['seed'],'fixtures':expected,'saved':bytes(u.mem_read(F,72)).hex()}})
p=R.parent/'cyberfoot-web/native-port/tests/knockout-decider-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original automatic decider:1000 cases')
