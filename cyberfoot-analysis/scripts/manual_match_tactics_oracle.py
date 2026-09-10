from native_oracle import *
u.mem_map(0,0x1000)
FRAME=0x800c000
rendered=False;recalculated=False;mode='swap'
def hook(uc,a,size,data):
 global rendered,recalculated
 if a==0x60129d:uc.reg_write(UC_X86_REG_EBP,FRAME);return
 if a==0x601324:rendered=True;uc.reg_write(UC_X86_REG_EIP,0x601968);return
 if a in [0x601970,0x600df4]:uc.reg_write(UC_X86_REG_EIP,STOP);return
 if a==0x600cb9:
  uc.reg_write(UC_X86_REG_EBP,FRAME);uc.reg_write(UC_X86_REG_EDI,slot);uc.reg_write(UC_X86_REG_ESI,0);return
 if a==0x600ce3:rendered=True;uc.reg_write(UC_X86_REG_EIP,0x600d0d);return
 if a==0x600d23:uc.reg_write(UC_X86_REG_EIP,0x600ded);return
 sp=uc.reg_read(UC_X86_REG_ESP)
 if a==0x642c6c:recalculated=True
 elif a==0x600ac0:uc.reg_write(UC_X86_REG_EAX,position)
 uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x60129d,0x601324,0x601970,0x642c6c,0x600cb9,0x600ce3,0x600d23,0x600df4,0x600ac0]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(60129);cases=[]
for source in range(1,19):
 for target in range(1,19):
  players=[r.randrange(-1,50) for _ in range(11)];positions=[r.randrange(1,26) for _ in range(11)]
  u.mem_write(0x1000000,struct.pack('<11i',*players));u.mem_write(0x100005c,struct.pack('<11i',*positions))
  for off,value in [(0x2c,source),(0x30,target),(0x38,0)]:u.mem_write(FRAME-off,p32(value))
  rendered=False;recalculated=False;run(0x60129d,[],1)
  cases.append({'kind':'swap','source':source,'target':target,'players':players,'positions':positions,'expected':{'players':list(struct.unpack('<11i',u.mem_read(0x1000000,44))),'positions':list(struct.unpack('<11i',u.mem_read(0x100005c,44))),'rendered':rendered,'recalculated':recalculated}})
for slot in range(1,19):
 for position in range(0,26):
  players=list(range(1,12));positions=[r.randrange(1,26) for _ in range(11)]
  u.mem_write(0x1000000,struct.pack('<11i',*players));u.mem_write(0x100005c,struct.pack('<11i',*positions))
  rendered=False;recalculated=False;run(0x600cb9,[],1)
  cases.append({'kind':'move','slot':slot,'position':position,'players':players,'positions':positions,'expected':{'players':list(struct.unpack('<11i',u.mem_read(0x1000000,44))),'positions':list(struct.unpack('<11i',u.mem_read(0x100005c,44))),'rendered':rendered,'recalculated':recalculated}})
(R.parent/'cyberfoot-web/native-port/tests/manual-match-tactics-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print(len(cases),'original match swap/move business branches with rendering, hit-test and recalculation adapters')
