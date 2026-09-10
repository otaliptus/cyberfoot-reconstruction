"""Execute complete61c174; adapt only dynamic-array storage/cleanup."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
C=0x1300100;M=0x1400100;T=0x1500100;G=0x1502000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b3b8),p32(M))
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX)
 if a==0x4060a8:
  base,sz=(G,12) if eax==0x6d491c else (T,4);n=read32(sp+4);old=read32(base-4);u.mem_write(eax,p32(base));u.mem_write(base-4,p32(n))
  if n>old:u.mem_write(base+old*sz,bytes((n-old)*sz))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4060a8,0x4061c8]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(6174);cases=[]
for i in range(1000):
 teams=[{'attackTotal':r.randrange(2001)} for _ in range(2)];clubs=[{'field58':r.randrange(25),'field98':r.randrange(10),'country':r.randrange(202),'human':bool(r.randrange(2))} for _ in range(2)]
 for j in range(2):
  u.mem_write(0x1000000+j*248+0xec,p32(teams[j]['attackTotal']));b=bytearray(760)
  for k,o in [('field58',0x58),('field98',0x98),('country',0x3c)]:struct.pack_into('<i',b,o,clubs[j][k])
  b[0x39]=clubs[j]['human'];u.mem_write(C+j*760,bytes(b))
 comp=r.randrange(11);seed=r.getrandbits(32);stride=r.choice([0,1,7919,1000003]);u.mem_write(read32(0x66ac78)+0x88,p32(comp));u.mem_write(M+444,bytes(444));u.mem_write(M+444+8,struct.pack('<4i',0,1,0,1));u.mem_write(T-4,p32(0));u.mem_write(G-4,p32(0));u.mem_write(0x6d491c,p32(G))
 out=run(0x61c174,[0,1],seed,stride=stride,instruction_limit=500000)
 plan=[dict(zip(['fixtureId','side','tick'],struct.unpack('<3i',u.mem_read(G+j*12,12)))) for j in range(read32(G-4))]
 cases.append({'teams':teams,'clubs':clubs,'competitionType':comp,'seed':seed,'stride':stride,'expected':{'plan':plan,'difference':struct.unpack('<i',u.mem_read(M+444+0x1b0,4))[0],'neutral':read32(M+444+0x1b4),'alternate':read32(M+444+0x1b8),'seed':out['seed'],'clockReads':out['clockReads']}})
p=R.parent/'cyberfoot-web/native-port/tests/score-schedule-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original complete pre-match goal scheduling:1000 cases')
