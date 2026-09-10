from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x100000)
E=0x1300100;P=0x1302000;FORM=0x1306000;pool=0x1340000
u.mem_write(read32(0x66ac7c),p32(E));u.mem_write(read32(0x66b5b8),p32(P));u.mem_write(0x6d4260,p32(0));u.mem_write(0x6d4264,p32(1))
language=json.loads((R.parent/'cyberfoot-web/native-port/language.json').read_text())
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
def short(ptr):
 n=u.mem_read(ptr,1)[0];return bytes(u.mem_read(ptr+1,n)).decode('cp1252')
def hook(uc,a,size,data):
 global output
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX);sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x405050:u.mem_write(eax,p32(edx))
 elif a==0x404ff0:u.mem_write(eax,p32(0))
 elif a==0x409dd8:u.mem_write(edx,p32(allocate(str(eax if eax<2**31 else eax-2**32),False)))
 elif a in [0x405194,0x404b48]:u.mem_write(eax,p32(allocate(short(edx),a==0x405194)))
 elif a==0x4051d4:u.mem_write(eax,p32(allocate(read_string(edx,False))))
 elif a==0x642c50:u.mem_write(edx,p32(allocate(language[eax]['text'])))
 elif a in [0x405330,0x404c64]:
  wide=a==0x405330;text=''.join(read_string(read32(sp+4+j*4),wide) for j in reversed(range(edx)));u.mem_write(eax,p32(allocate(text,wide)));pop+=edx*4
 elif a in [0x4052cc,0x404bf0]:
  wide=a==0x4052cc;u.mem_write(eax,p32(allocate(read_string(edx,wide)+read_string(ecx,wide),wide)))
 elif a==0x40526c:u.mem_write(eax,p32(allocate(read_string(read32(eax))+read_string(edx))))
 elif a==0x545088:output=read_string(edx)
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x405050,0x404ff0,0x409dd8,0x405194,0x404b48,0x4051d4,0x642c50,0x405330,0x404c64,0x4052cc,0x404bf0,0x40526c,0x545088,0x4048d4,0x405008,0x4048f8]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(60540);cases=[];names=['','Gomez','Müller','Longname Playersurname','Verylongreplacementname']
for j,name in enumerate(names):b=name.encode('cp1252')[:20];u.mem_write(P+j*304,bytes([len(b)])+b)
players=[{'name':name[:20]} for name in names]
for i in range(400):
 pool=0x1340000;output='';events=[]
 for j in range(r.randrange(0,26)):
  typ=r.choice([4,8,13,14,15,16,18,19,20]);detail=r.randrange(1,4) if typ==13 else r.randrange(1,5) if typ in [19,20] else -1
  events.append([typ,r.randrange(3),r.randrange(1,5),detail,r.randrange(1,191),r.randrange(1,5)])
 u.mem_write(E-4,p32(len(events)));u.mem_write(E,b''.join(p32(n) for event in events for n in event))
 full=bool(i%2);u.mem_write(read32(0x66ac78)+0xdd,bytes([full]));run(0x605e40,[FORM],1,instruction_limit=1000000)
 cases.append({'events':events,'players':players,'fullGameGauge':full,'expected':output})
(R.parent/'cyberfoot-web/native-port/tests/match-event-log-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('400 original whole match-event-log executions with Delphi string and label adapters')
