"""Original event-record business effects; debug text and stat calls are isolated.
Player-stat calls have a separate original-instruction test suite.
"""
from native_oracle import u,p32,read32,run,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000)
for a in [0x1100000,0x1300000,0x1500000]:u.mem_map(a,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1100000));u.mem_write(read32(0x66b3b8),p32(0x1300000))
BASE=0x1500100;PTR=read32(0x66ac7c);statcalls=[]
def ret(uc,pop=0):
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4+pop);uc.reg_write(UC_X86_REG_EIP,read32(sp))
def text(uc,address,size,data):ret(uc,uc.reg_read(UC_X86_REG_EDX)*4 if address==0x404c64 else 0)
for addr in [0x4030d4,0x4030a4,0x404b48,0x404c64]:u.hook_add(UC_HOOK_CODE,text,begin=addr,end=addr)
def resize(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);count=read32(sp+4);old=read32(BASE-4)
 uc.mem_write(BASE+old*24,bytes((count-old)*24));uc.mem_write(BASE-4,p32(count));ret(uc)
u.hook_add(UC_HOOK_CODE,resize,begin=0x4060a8,end=0x4060a8)
def stats(uc,address,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);ptr=read32(sp+4);label=bytes(uc.mem_read(ptr,read32(ptr-4))).decode()
 statcalls.append([uc.reg_read(UC_X86_REG_EAX),uc.reg_read(UC_X86_REG_EDX),uc.reg_read(UC_X86_REG_ECX),label]);ret(uc,4)
u.hook_add(UC_HOOK_CODE,stats,begin=0x650548,end=0x650548)
r=random.Random(64272015);cases=[]
for i in range(1000):
 fixture={'id':0,'clubs':[0,1],'tick':r.randint(0,210),'competition':4};side=r.choice([1,2]);type=r.choice([4,13,14,15,16,18,19]);detail=r.choice([1,2,3]) if type==13 else r.choice([-1,2]);club=r.choice([0,1]);initial=[[4,0,3,-1,50,0]] if i%2 else []
 u.mem_write(0x1100000+304+0x20,p32(club));u.mem_write(0x1300000,p32(4));u.mem_write(0x1300000+8,p32(0)+p32(1));u.mem_write(0x1300000+0x194,p32(fixture['tick']));u.mem_write(read32(0x66af9c),b'\0')
 u.mem_write(PTR,p32(BASE));u.mem_write(BASE-8,p32(1)+p32(len(initial)));u.mem_write(BASE,b''.join(struct.pack('<6i',*row) for row in initial)+bytes(128));statcalls=[]
 e=run(0x60cfa8,[side,1,0],1,[detail,type]);rows=[list(struct.unpack('<6i',u.mem_read(BASE+j*24,24))) for j in range(read32(BASE-4))]
 cases.append({'fixture':fixture,'side':side,'type':type,'detail':detail,'clubId':club,'initialEvents':initial,'expected':{'result':e['result'],'events':rows,'statCalls':statcalls}})
p=R.parent/'cyberfoot-web/native-port/tests/record-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original event-record business cases:',len(cases))
