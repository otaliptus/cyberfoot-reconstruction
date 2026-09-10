from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);C=0x1300100;S=0x1304000;u.mem_write(read32(0x66af70),p32(C));exists=False;requested=''
def hook(uc,a,size,data):
 global requested
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX)
 if a==0x404b48:
  n=u.mem_read(edx,1)[0];u.mem_write(S,bytes(u.mem_read(edx+1,n))+b'\0');u.mem_write(eax,p32(S))
 if a==0x40a43c:
  requested=bytes(u.mem_read(eax,100)).split(b'\0')[0].decode('cp1252');uc.reg_write(UC_X86_REG_EAX,int(exists))
 if a==0x4048d4:u.mem_write(eax,p32(0))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x404b48,0x40a43c,0x4048d4]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(645508);cases=[]
for i in range(300):
 club=r.randrange(8);counts=[r.randrange(8),r.randrange(5)];name=r.choice(['','bayern_ale','Mixed_CASE','Müller','a'*30]);b=name.encode('cp1252');u.mem_write(C+club*760+0x1a,bytes([len(b)])+b);u.mem_write(read32(0x66ac78)+0x3c,p32(counts[0])+p32(counts[1]));exists=bool(r.randrange(2));u.mem_write(OUT,p32(0));run(0x645508,[club,OUT],0);result=read32(OUT)
 cases.append({'clubId':club,'counts':counts,'name':name,'exists':exists,'expected':{'requested':requested,'present':bool(result)}})
p=R.parent/'cyberfoot-web/native-port/tests/club-crest-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original crest lookup:300 cases')
