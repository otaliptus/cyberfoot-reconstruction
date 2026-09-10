"""Original league-color instruction segment. Only UI color setter is adapted."""
import gzip
from native_oracle import *
career=read32(0x66ac78);league=0x1001000;frame=0x800e000
u.mem_write(read32(0x66aca0),p32(league));u.mem_write(0x6d2658,p32(0));events=[]
def color(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);events.append([uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX),read32(sp+4)])
 uc.reg_write(UC_X86_REG_EIP,read32(sp));uc.reg_write(UC_X86_REG_ESP,sp+8)
u.hook_add(UC_HOOK_CODE,color,begin=0x5ae33c,end=0x5ae33c)
r=random.Random(0x5b31a3);cases=[]
for i in range(1200):
 country=r.randrange(202);mode=r.choice([0,2,4]);divisions=r.randrange(1,5);division=r.randrange(1,5);primary=r.randrange(2);secondary=r.randrange(2);cup=r.choice([-1,*range(1,41)]);continental=r.choice([-1,cup,*range(1,41)])
 u.mem_write(career,bytes(1888));u.mem_write(career+0x168,p32(mode));u.mem_write(career+0x171,bytes([primary,secondary]));u.mem_write(league+0x140,p32(country)+p32(divisions))
 u.mem_write(frame-0x100,bytes(0x100));u.mem_write(frame-0xc,p32(division));u.mem_write(frame-0x24,p32(cup));u.mem_write(frame-0x28,p32(continental));u.reg_write(UC_X86_REG_EBP,frame);u.reg_write(UC_X86_REG_ESP,0x800c000);events=[]
 u.emu_start(0x5b31a3,0x5b3431,count=100000);assert u.reg_read(UC_X86_REG_EIP)==0x5b3431
 cases.append(dict(country=country,mode=mode,totalDivisions=divisions,division=division,primaryEnabled=bool(primary),secondaryEnabled=bool(secondary),cupWinnerRow=cup,continentalWinnerRow=continental,expected=dict(primary=u.reg_read(UC_X86_REG_EBX),secondary=read32(frame-0x18),calls=events)))
with gzip.open(R.parent/'cyberfoot-web/native-port/tests/standings-highlights-vectors.json.gz','wt') as f:json.dump(cases,f,separators=(',',':'))
print('1200 original standings-color segment cases generated; quota/country routines native, color setter adapted')
