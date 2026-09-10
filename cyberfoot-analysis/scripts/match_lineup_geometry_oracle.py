from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x20000)
objects={};output={}
for group,base in enumerate([0x6d4140,0x6d4188,0x6d41d0,0x6d4218]):
 for i in range(18):
  obj=0x1300000+group*0x4000+i*0x100;u.mem_write(base+i*4,p32(obj));objects[obj]=['shirt','label','number','status'][group]
def hook(uc,a,size,data):
 eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);sp=uc.reg_read(UC_X86_REG_ESP)
 if a in [0x465978,0x46599c]:
  key='x' if a==0x465978 else 'y';output[objects[eax]][key]=edx if edx<2**31 else edx-2**32;u.mem_write(eax+(0x40 if key=='x' else 0x44),p32(edx))
 elif a==0x409dd8:u.mem_write(edx,p32(eax))
 elif a==0x4051d4:u.mem_write(eax,p32(edx))
 elif a==0x4e1414:output[objects[eax]]['text']=str(edx)
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x465978,0x46599c,0x409dd8,0x4051d4,0x4e1414,0x4048d4,0x404ff0]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(6053);cases=[]
for i in range(600):
 slot=r.randrange(1,19);position=r.randrange(1,26);bench=r.randrange(1,8);number=r.choice([-1,0,r.randrange(1,100)])
 output={k:{} for k in ['shirt','label','number','status']};run(0x6053e0,[0,slot,position],1,[bench,number])
 cases.append({'slot':slot,'position':position,'benchOrdinal':bench,'shirtNumber':number,'expected':output})
(R.parent/'cyberfoot-web/native-port/tests/match-lineup-geometry-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('600 complete original match-lineup geometry helper executions with widget/string adapters')
