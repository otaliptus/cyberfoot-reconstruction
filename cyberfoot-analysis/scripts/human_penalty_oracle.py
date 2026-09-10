from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000)
P=0x1300000;FORM=0x1303000
u.mem_write(read32(0x66b5b8),p32(P))
output={}
def cstr(ptr):
 b=bytearray()
 while u.mem_read(ptr+len(b),1)!=b'\0':b.extend(u.mem_read(ptr+len(b),1))
 return b.decode('cp1252')
def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x642c50:output['languageId']=eax;u.mem_write(edx,p32(0))
 elif a==0x405330:u.mem_write(eax,p32(0));pop+=edx*4
 elif a==0x55d080:output['sounds'].append(cstr(eax))
 elif a==0x40f8fc:output['delayMs']=read32(sp+4);pop=8
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x642c50,0x405330,0x55d080,0x40f8fc,0x43b234,0x545088,0x4e1414,0x487348,0x483bc4,0x405008]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(5934);cases=[]
for i in range(1200):
 humans=bool(i%2);players=[]
 for j in range(3):
  p={'trait1':r.choice([0,1,9,10]),'trait2':r.choice([0,1,9,10]),'veteranFlag':bool(r.randrange(2))};players.append(p)
  u.mem_write(P+j*304+0x5c,p32(p['trait1'])+p32(p['trait2']));u.mem_write(P+j*304+0x15,bytes([p['veteranFlag']]))
 u.mem_write(read32(0x66b4c8),p32(1));u.mem_write(read32(0x66b504),p32(-1));u.mem_write(0x6d4114,p32(2));u.mem_write(0x6d4104,p32(1));u.mem_write(0x6d4108,p32(2))
 seed=r.getrandbits(32);output={'sounds':[]}
 result=run(0x5fe940 if humans else 0x5fd96c,[FORM],seed)
 output.update(playerId=read32(read32(0x66b4c8)),result=read32(read32(0x66b504)))
 cases.append({'players':players,'humanAttacks':humans,'seed':seed,'expected':dict(output),'finalSeed':result['seed'],'clockReads':result['clockReads']})
p=R.parent/'cyberfoot-web/native-port/tests/human-penalty-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')))
print('1200 original complete penalty timer executions with language/UI/sleep adapters')
