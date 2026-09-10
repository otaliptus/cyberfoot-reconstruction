from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x100000);E=0x1300100;M=0x1301000;P=0x1302000;C=0x1304000;FORM=0x1306000;PIC=0x1307000;VT=0x1308000;DLG=0x1309000;pool=0x1340000
for ptr,base in [(0x66ac7c,E),(0x66b3b8,M),(0x66b5b8,P),(0x66af70,C)]:u.mem_write(read32(ptr),p32(base))
for i,a in enumerate([0x6d4774,0x6d4778,0x6d4784,0x6d492c]):
 base=0x1310000+i*0x1000;obj=base+0x200;u.mem_write(a,p32(base));u.mem_write(base+4,p32(obj));u.mem_write(obj+0x168,p32(PIC))
u.mem_write(PIC,p32(VT));u.mem_write(VT+8,p32(0xdead100));u.mem_write(DLG,p32(VT));u.mem_write(VT+0xec,p32(0xdead104));u.mem_write(read32(0x66b090),p32(DLG))
icons=['i_gol','i_golv','i_ca','i_cv','i_ct','i_cacv','i_sub']
for i in range(7):u.mem_write(0x6d48f8+i*4,p32(i+100))
language=json.loads((R.parent/'cyberfoot-web/native-port/language.json').read_text());output={}
def read_string(ptr,wide=True):
 if not ptr:return ''
 width=2 if wide else 1;raw=bytearray()
 while True:
  b=bytes(u.mem_read(ptr+len(raw),width))
  if b==bytes(width):break
  raw.extend(b)
 return raw.decode('utf-16le' if wide else 'cp1252')
def allocate(text,wide=True):
 global pool
 b=text.encode('utf-16le' if wide else 'cp1252');ptr=pool+8;pool+=len(b)+32;u.mem_write(ptr-4,p32(len(b)));u.mem_write(ptr,b+(b'\0\0' if wide else b'\0'));return ptr

def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x405050:u.mem_write(eax,p32(edx))
 elif a==0x404ff0:u.mem_write(eax,p32(0))
 elif a==0x409dd8:u.mem_write(edx,p32(allocate(str(eax if eax<2**31 else eax-2**32),False)))
 elif a==0x405194:
  n=u.mem_read(edx,1)[0];u.mem_write(eax,p32(allocate(bytes(u.mem_read(edx+1,n)).decode('cp1252'))))
 elif a==0x4051d4:u.mem_write(eax,p32(allocate(read_string(edx,False))))
 elif a==0x642c50:u.mem_write(edx,p32(allocate(language[eax]['text'])))
 elif a==0x405330:
  text=''.join(read_string(read32(sp+4+j*4)) for j in reversed(range(edx)));u.mem_write(eax,p32(allocate(text)));pop+=edx*4
 elif a==0x466238:output['scores'].append(read_string(edx,False))
 elif a==0x545088:output['html']=read_string(edx)
 elif a==0x55d080:output['sounds'].append(read_string(eax,False))
 elif a==0xdead100:output['icon']=icons[edx-100]
 elif a==0xdead104:output['redCardPrompt']={'fixtureId':read32(read32(0x66ad84)),'side':read32(read32(0x66b5ec))}
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x405050,0x404ff0,0x409dd8,0x405194,0x4051d4,0x642c50,0x405330,0x466238,0x545088,0x55d080,0xdead100,0xdead104,0x43aa68,0x487348,0x43b234,0x487474,0x4048d4,0x405008,0x4048f8]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(61_828);cases=[]
for i in range(700):
 pool=0x1340000;type=r.choice([4,8,13,14,15,16,18,19,20]);detail=r.choice([1,2,3]) if type==13 else 2 if type in [19,20] else 0;club=r.randrange(2);tick=r.randrange(1,191);event=[type,club,1,detail,tick,1];u.mem_write(E,b''.join(p32(n) for n in event));u.mem_write(M+444+8,p32(0)+p32(1));scores=[r.randrange(10),r.randrange(10)];u.mem_write(M+444+0x48,b''.join(p32(n) for n in scores))
 names=['','Gomez','Müller'];players=[]
 for j,name in enumerate(names):b=name.encode('cp1252');u.mem_write(P+j*304,bytes([len(b)])+b);players.append({'name':name})
 humans=[bool(r.randrange(2)),bool(r.randrange(2))]
 for j,h in enumerate(humans):u.mem_write(C+j*760+0x39,bytes([h]))
 silent=bool(r.randrange(2));sound=bool(r.randrange(2));full=bool(r.randrange(2));u.mem_write(read32(0x66b6c8),bytes([silent]));u.mem_write(read32(0x66ac78)+0xdc,bytes([sound,full]));output={'scores':[],'html':'','icon':None,'sounds':[],'redCardPrompt':None};run(0x61b828,[FORM,0],1,instruction_limit=100000)
 cases.append({'event':event,'players':players,'humans':humans,'scores':scores,'silent':silent,'sound':sound,'fullGameGauge':full,'expected':output})
p=R.parent/'cyberfoot-web/native-port/tests/match-event-presentation-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original complete event presentation:700 cases with string/widget adapters')
