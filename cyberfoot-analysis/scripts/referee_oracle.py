from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1400000,0x10000)
base=read32(0x66b4dc);career=read32(0x66ac78);A=0x1400100

def adapters(uc,address,size,data):
 a=uc.reg_read(UC_X86_REG_EAX);b=uc.reg_read(UC_X86_REG_EDX);c=uc.reg_read(UC_X86_REG_ECX);sp=uc.reg_read(UC_X86_REG_ESP)
 if address==0x404928:u.mem_write(a,p32(b))
 elif address==0x4060a8:u.mem_write(a,p32(A));u.mem_write(A-4,p32(read32(sp+4)))
 elif address==0x404f30:u.mem_write(a,p32(0x1009000));u.mem_write(0x1008ff8,p32(1)+p32(b))
 elif address==0x4049c4:u.mem_write(a,p32(0x1009000));u.mem_write(0x1009000,bytes(u.mem_read(b,c)))
 elif address==0x404db0:uc.reg_write(UC_X86_REG_EAX,read32(a))
 elif address==0x4048d4:u.mem_write(a,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x404928,0x4060a8,0x404f30,0x4049c4,0x404db0,0x4048d4]:u.hook_add(UC_HOOK_CODE,adapters,begin=a,end=a)
run(0x65d968,[],0)
def name(ptr):
 b=bytearray()
 while u.mem_read(ptr+len(b),1)[0]:b+=u.mem_read(ptr+len(b),1)
 return b.decode('cp1252')
refs=[{'id':i+1,'name':name(read32(base+i*16)),'rating':read32(base+i*16+4),'rigour':read32(base+i*16+8),'country':read32(base+i*16+12)} for i in range(42)]
(R.parent/'cyberfoot-web/native-port/referee-data.mjs').write_text('// Original42referees initialized by0065d968. Names and scalar fields recovered by execution.\nexport const originalReferees='+json.dumps(refs,ensure_ascii=False,separators=(',',':'))+';\n')
r=random.Random(64);cases=[]
for i in range(1000):
 rows=[dict(row) for row in refs]
 if i%2:
  for row in rows:row['rating']=r.randrange(-3,7);row['country']=r.choice([1,29,99])
 for j,row in enumerate(rows):u.mem_write(base+j*16+4,p32(row['rating']));u.mem_write(base+j*16+12,p32(row['country']))
 initial=[r.randrange(-10,60) for _ in range(12)];u.mem_write(career+0x70c,b''.join(p32(n) for n in initial));seed=r.getrandbits(32);result=run(0x64cae0,[],seed)
 expected=list(struct.unpack('<12i',u.mem_read(career+0x70c,48)));order=[read32(A+j*12) for j in range(42)]
 cases.append({'rows':[{k:v for k,v in row.items() if k!='name'} for row in rows],'initial':initial,'seed':seed,'expected':expected,'order':order,'finalSeed':result['seed']})
(R.parent/'cyberfoot-web/native-port/tests/referee-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('42referees recovered;1000 whole referee-selection executions with allocation adapters')
