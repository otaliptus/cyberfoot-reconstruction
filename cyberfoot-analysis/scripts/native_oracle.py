"""Run isolated arithmetic/game routines for differential tests, never in the web app."""
from pathlib import Path
import json, random, struct
import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import *
R=Path(__file__).resolve().parents[1]
pe=pefile.PE(str(R/'payload/cf2015.exe'))
u=Uc(UC_ARCH_X86,UC_MODE_32)
image=pe.get_memory_mapped_image();u.mem_map(0x400000,0x800000);u.mem_write(0x400000,image)
u.mem_map(0x8000000,0x10000);u.mem_map(0x1000000,0x10000);u.mem_map(0xdead000,0x1000)
STOP=0xdead000;SP=0x800e000;OUT=0x1008000;SEED=0x662008
clock_seed=1;clock_reads=0;clock_stride=0
p32=lambda v:struct.pack('<I',v&0xffffffff)
def read32(a):return struct.unpack('<I',u.mem_read(a,4))[0]
def clock(uc,address,size,data):
 global clock_reads
 sp=uc.reg_read(UC_X86_REG_ESP);dest=read32(sp+4)
 uc.mem_write(dest,struct.pack('<Q',(clock_seed+clock_reads*clock_stride)&0xffffffff));clock_reads+=1
 uc.reg_write(UC_X86_REG_EAX,1);uc.reg_write(UC_X86_REG_ESP,sp+8);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,clock,begin=0x40143c,end=0x40143c)
lineup_pointer=read32(0x66b238);u.mem_write(lineup_pointer,p32(0x1000000))
def run(address,args,seed,stack=[],stride=0,instruction_limit=100000):
 global clock_seed,clock_reads,clock_stride
 clock_seed=seed;clock_reads=0;clock_stride=stride
 for reg,value in zip([UC_X86_REG_EAX,UC_X86_REG_EDX,UC_X86_REG_ECX],args+[0,0,0]):u.reg_write(reg,value&0xffffffff)
 u.reg_write(UC_X86_REG_ESP,SP);u.reg_write(UC_X86_REG_EBP,0)
 u.reg_write(UC_X86_REG_FPCW,0x1332);u.reg_write(UC_X86_REG_FPTAG,0xffff)
 u.mem_write(SEED,p32(seed));u.mem_write(SP,p32(STOP)+b''.join(p32(x) for x in stack))
 u.emu_start(address,STOP,count=instruction_limit)
 assert u.reg_read(UC_X86_REG_EIP)==STOP,hex(address)
 result=u.reg_read(UC_X86_REG_EAX)
 return {'result':result if result<0x80000000 else result-0x100000000,'seed':read32(SEED),'clockReads':clock_reads}
if __name__ == "__main__":
 r=random.Random(2015);cases=[]
 def add(name,address,args,seed,stack=[],extra=None):
  o=run(address,args,seed,stack,(extra or {}).get("clockStride",0))
  if name=='transition':o['result']=list(struct.unpack('<iii',u.mem_read(OUT,12)))
  cases.append({'name':name,'args':args,'stack':stack,'initialSeed':seed,**(extra or {}),'expected':o})
 for seed in [0,1,0xffffffff,0x80000000]+[r.getrandbits(32) for _ in range(200)]:
  for bound in [0,1,2,3,100,0x7fffffff]:add('random',0x4032c8,[bound],seed)
 for side in [1,2]:
  for address,name in [(0x6077f0,'otherSide'),(0x607800,'goalKickZone'),(0x607810,'kickoffZone')]:add(name,address,[side],0)
  for zone in range(1,13):add('mirrorZone',0x6078a8,[zone,side],0)
 for i in range(700):
  seed=r.getrandbits(32);side=r.choice([1,2]);zone=r.randint(1,12);attack=r.randint(0,300);defence=r.randint(0,300);keeper=r.randint(0,30)
  add('cornerZone',0x607820,[side],seed)
  add('restartZone',0x60774c,[zone,side],seed)
  add('chance',0x6071c4,[r.randint(-20,130),100],seed)
  add('duel',0x6078b4,[zone,attack,defence],seed,[side])
  add('pass',0x607854,[zone,attack,defence],seed,[1,0,side])
  add('shot',0x607918,[zone,attack,defence],seed,[keeper])
 for coeff,words in [('half',[0,0x80000000,0x3ffe]),('threeTenths',[0x9999999a,0x99999999,0x3ffd]),('oneFifth',[0xcccccccd,0xcccccccc,0x3ffc])]:
  for delta in range(-300,301):
   add('adjustedThreshold',0x6071e8,[92,300,300+delta],1,words,{'coefficient':coeff})
 for i in range(10000):
  teams=[]
  for team_id in range(2):
   team={'attack':[r.choice([0,r.randint(1,150)]) for _ in range(12)],'defence':[r.choice([0,r.randint(1,150)]) for _ in range(12)],'keeper':r.randint(0,35)};teams.append(team)
   b=bytearray(248)
   for k,values in [(0x88,team['attack']),(0xb8,team['defence'])]:struct.pack_into('<12i',b,k,*values)
   struct.pack_into('<i',b,0xe8,team['keeper']);u.mem_write(0x1000000+248*team_id,bytes(b))
  add('transition',0x607264,[r.randint(1,12),r.choice([1,2]),r.choice([0,2,3,8])],r.getrandbits(32),[OUT,0,1,0],{'teams':teams,'clockStride':r.choice([0,1,100,7919,1000003])})
 path=R.parent/'cyberfoot-web/native-port/tests/original-vectors.json'
 path.write_text(json.dumps(cases,separators=(',',':')))
 print('Original-code test vectors:',len(cases),path)
