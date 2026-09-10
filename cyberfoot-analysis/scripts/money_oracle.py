"""Capture original Delphi FormatFloat output before string allocation."""
from native_oracle import u,run,read32,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,random
u.mem_map(0,0x1000);captured=None
def hook(uc,a,size,data):
 global captured
 if a==0x4049c4:captured=bytes(uc.mem_read(uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX))).decode('cp1252')
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x4049c4,0x4051d4,0x40502c]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(2015);cases=[]
for n in [0,1,-1,99,999,1000,-1000,1000000,2147483647,-2147483648]+[r.randint(-2147483648,2147483647) for _ in range(1000)]:
 captured=None;run(0x651ebc,[n,0x1008000],1);cases.append({'value':n,'text':captured})
p=R.parent/'cyberfoot-web/native-port/tests/money-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print(cases[:10])
