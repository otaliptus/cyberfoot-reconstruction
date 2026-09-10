from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000)
C=0x1300100;pool=0x1310000;u.mem_write(read32(0x66af70),p32(C));requested='';exists=False

def text_at(ptr):
 if not ptr:return ''
 return bytes(u.mem_read(ptr,300)).split(b'\0')[0].decode('cp1252')
def alloc(text):
 global pool
 b=text.encode('cp1252');p=pool+8;pool+=len(b)+24;u.mem_write(p-4,p32(len(b)));u.mem_write(p,b+b'\0');return p

def hook(uc,a,size,data):
 global requested
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);sp=uc.reg_read(UC_X86_REG_ESP);pop=4
 if a==0x404b48:
  n=u.mem_read(edx,1)[0];u.mem_write(eax,p32(alloc(bytes(u.mem_read(edx+1,n)).decode('cp1252'))))
 elif a in [0x40496c,0x404928]:u.mem_write(eax,p32(edx))
 elif a==0x404c64:
  s=''.join(text_at(read32(sp+4+j*4)) for j in reversed(range(edx)));u.mem_write(eax,p32(alloc(s)));pop+=edx*4
 elif a==0x40a43c:requested=text_at(eax);uc.reg_write(UC_X86_REG_EAX,int(exists))
 elif a==0x4048d4:u.mem_write(eax,p32(0))
 uc.reg_write(UC_X86_REG_ESP,sp+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x404b48,0x40496c,0x404928,0x404c64,0x40a43c,0x4048d4,0x4048f8]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(646);cases=[]
for i in range(800):
 pool=0x1310000;club=r.randrange(8);counts=[r.randrange(8),r.randrange(5)];name=r.choice(['','bayern_ale','Mixed_CASE','Müller','a'*30]);b=name.encode('cp1252');u.mem_write(C+club*760+0x1a,bytes([len(b)])+b);u.mem_write(read32(0x66ac78)+0x3c,p32(counts[0])+p32(counts[1]));exists=bool(r.randrange(2));u.mem_write(OUT,p32(0))
 op=r.choice(['exists','path']);kit=r.choice([-1,0,1,2,3,4]) if op=='exists' else r.randrange(1,4)
 result=run(0x6460a4 if op=='exists' else [0x6462ac,0x6464c4,0x6466dc][kit-1],[club,kit if op=='exists' else OUT],0)
 cases.append({'op':op,'kit':kit,'clubId':club,'counts':counts,'name':name,'exists':exists,'expected':{'requested':requested,'present':bool(result['result']&255) if op=='exists' else bool(read32(OUT)),'path':None if op=='exists' else text_at(read32(OUT))}})
(R.parent/'cyberfoot-web/native-port/tests/club-kit-vectors.json').write_text(json.dumps(cases,separators=(',',':')));print('800 original club/national kit existence and path helpers')
