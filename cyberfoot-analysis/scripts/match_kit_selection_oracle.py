from pathlib import Path
source=(Path(__file__).parent/'club_kit_oracle.py').read_text().split('r=random.Random')[0]
source=source.replace("uc.reg_write(UC_X86_REG_EAX,int(exists))", "uc.reg_write(UC_X86_REG_EAX,int(requested.replace('\\\\','/').lower() in available))")
exec(source)
FRAME=0x800c000;OBJ=0x130c000;VT=0x130d000
u.mem_write(0x6d412c,p32(OBJ));u.mem_write(OBJ,p32(VT));u.mem_write(VT+0x4c,p32(0xdead100));u.mem_write(0x6d4260,p32(0)+p32(1))
chosen='previous.png';available=set();side=1

def selection_hook(uc,a,size,data):
 global chosen
 if a==0x6044fa:uc.reg_write(UC_X86_REG_EBP,FRAME);return
 if a==0x604778:uc.reg_write(UC_X86_REG_EIP,STOP);return
 if a==0xdead100:chosen=text_at(uc.reg_read(UC_X86_REG_EDX))
 elif a==0x4ab2b0:chosen='resource:'+text_at(uc.reg_read(UC_X86_REG_ECX))
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x6044fa,0x604778,0xdead100,0x4ab2b0]:u.hook_add(UC_HOOK_CODE,selection_hook,begin=a,end=a)
r=random.Random(6044);cases=[]
for i in range(800):
 pool=0x1310000;u.mem_write(FRAME-0x200,bytes(0x210));side=r.choice([1,2]);u.mem_write(FRAME-8,p32(side));limit=r.randrange(1,3);u.mem_write(read32(0x66ac78)+0x3c,p32(limit)+p32(0));available=set();clubs=[]
 for j in range(2):
  human=bool(r.randrange(2));colour=r.randrange(3);selected=r.choice([-1,0,1,2,3,4]);name=['Home','Away'][j];b=name.encode();u.mem_write(C+j*760+0x1a,bytes([len(b)])+b);u.mem_write(C+j*760+0x39,bytes([human]));u.mem_write(C+j*760+0x2e4,p32(colour)+p32(selected));clubs.append({'human':human,'kitColour':colour,'selectedKit':selected})
  for k in range(1,5):
   prefix=('c_' if k==1 else 'c2_' if k==2 else 'c3_' if k==3 else '') if j>=limit else ('camisas' if k==1 else 'camisas2' if k==2 else 'camisas3' if k==3 else '')
   path=('teams/selecoes/'+prefix+name+'.png') if j>=limit else ('teams/'+prefix+'/'+name+'.png')
   if r.randrange(2):available.add(path.lower())
 chosen='previous.png';run(0x6044fa,[],1)
 cases.append({'side':side,'limit':limit,'clubs':clubs,'available':sorted(available),'expected':{'selectedKits':[struct.unpack('<i',u.mem_read(C+j*760+0x2e8,4))[0] for j in range(2)],'chosen':chosen}})
(R.parent/'cyberfoot-web/native-port/tests/match-kit-selection-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('800 original match kit selection branches with real lookup helpers and bitmap adapters')
