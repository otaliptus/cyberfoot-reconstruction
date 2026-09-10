from native_oracle import *
u.mem_map(0x1300000,0x10000);M=0x1300100;u.mem_write(read32(0x66b3b8),p32(M));trace=[]
def hook(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);eax=uc.reg_read(UC_X86_REG_EAX);edx=uc.reg_read(UC_X86_REG_EDX);ecx=uc.reg_read(UC_X86_REG_ECX)
 if a==0x612a00:trace.append('prepare')
 elif a==0x61c174:trace.append('plan:'+str(edx))
 elif a==0x609bc8:
  trace.append('step:'+str(eax));p=M+eax*444+0x194;u.mem_write(p,p32(read32(p)+1))
 elif a==0x61c5c0:trace.append('goal:'+str(edx)+':'+str(ecx))
 elif a==0x61f604:trace.append('finalize')
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x612a00,0x4060a8,0x61c174,0x609bc8,0x61c5c0,0x61f604]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(62180);cases=[]
for i in range(300):
 n=r.randrange(5);teams=[];fixtures=[]
 for j in range(n*2):
  players=[r.randrange(1,200) for _ in range(11)];positions=[r.randrange(1,26) for _ in range(11)];teams.append({'players':players,'positions':positions});b=bytearray(248);struct.pack_into('<11i',b,0,*players);struct.pack_into('<11i',b,0x5c,*positions);u.mem_write(0x1000000+j*248,bytes(b))
 for j in range(n):
  end=r.randrange(175,196);b=bytearray(444);struct.pack_into('<2i',b,0x10,j*2,j*2+1);struct.pack_into('<i',b,0x184,end);u.mem_write(M+(j+1)*444,bytes(b));fixtures.append({'id':j+1,'endTick':end,'tick':0})
 u.mem_write(read32(0x66aea4),p32(n));u.mem_write(0x6d48f4,p32(77));u.mem_write(read32(0x66b594),p32(11));u.mem_write(read32(0x66af54),p32(12));trace.clear();run(0x621ee0,[0],0,instruction_limit=500000)
 expected=[]
 for j in range(n):
  b=bytes(u.mem_read(M+(j+1)*444,444));expected.append({'startingPlayers':[list(struct.unpack_from('<11i',b,o)) for o in [0xb0,0xdc]],'startingPositions':[list(struct.unpack_from('<11i',b,o)) for o in [0x108,0x134]],'tick':struct.unpack_from('<i',b,0x194)[0]})
 cases.append({'teams':teams,'fixtures':fixtures,'expected':{'fixtures':expected,'trace':list(trace),'runtime':{'tick':read32(0x6d48f4),'counterB594':read32(read32(0x66b594)),'counterAF54':read32(read32(0x66af54))}}})
p=R.parent/'cyberfoot-web/native-port/tests/automatic-matches-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original automatic controller sequencing:300 cases')
