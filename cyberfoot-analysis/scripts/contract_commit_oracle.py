"""Original contract state mutations; UI grid writes and notification delivery adapted."""
from native_oracle import u,run,read32,p32,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct,random
u.mem_map(0,0x1000)
for a in [0x1100000,0x1200000,0x1300000,0x1800000]:u.mem_map(a,0x10000)
u.mem_write(read32(0x66b5b8),p32(0x1101000));u.mem_write(0x1100ffc,p32(1));u.mem_write(read32(0x66afec),p32(0x1200000));u.mem_write(0x66b574,p32(0x1300000));u.mem_write(read32(0x66ac78)+8,p32(0));u.mem_write(read32(0x66ac78)+0x16c,p32(1));u.mem_write(0x6d2494,p32(0))
current={};notifications=[]
def hook(uc,a,size,data):
 if a in [0x5a1f18,0x5a1fee,0x5a21a5]:uc.reg_write(UC_X86_REG_EIP,{0x5a1f18:0x5a2016,0x5a1fee:0x5a2016,0x5a21a5:0x5a21fe}[a]);return
 if a==0x54c0f0:uc.reg_write(UC_X86_REG_EAX,current['durationIndex'])
 if a==0x409ff8:uc.reg_write(UC_X86_REG_EAX,current['entryOffer'])
 if a==0x64cbf0:notifications.append([uc.reg_read(r) for r in [UC_X86_REG_EAX,UC_X86_REG_EDX,UC_X86_REG_ECX]])
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4+(12 if a==0x64cbf0 else 0));uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x5a1f18,0x5a1fee,0x5a21a5,0x54c0f0,0x466208,0x409ff8,0x64cbf0,0x405744]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(5242415);cases=[]
for i in range(2000):
 current={'offer':r.randint(0,200000),'entryOffer':r.randint(0,200000),'durationIndex':i%6,'date':r.randint(40000,48000),'salary':str(r.randint(0,2000000000)),'field7D':bool(i%2),'field40':str(r.randint(0,10000000000)),'field48':str(r.randint(0,10000000000)),'fieldE4':r.randint(-1,5),'fieldF4':bool(i%3),'fieldF0':r.randint(0,20),'fieldFC':r.randint(0,50)};notifications=[]
 u.mem_write(0x1101000,bytes(304));u.mem_write(0x1101038,struct.pack('<q',int(current['salary'])));u.mem_write(0x1101040,struct.pack('<q',int(current['field40'])));u.mem_write(0x1101048,struct.pack('<q',int(current['field48'])));u.mem_write(0x110107d,bytes([current['field7D']]));u.mem_write(0x11010f4,bytes([current['fieldF4']]))
 for key,off in [('fieldE4',0xe4),('fieldF0',0xf0),('fieldFC',0xfc)]:u.mem_write(0x1101000+off,p32(current[key]))
 u.mem_write(0x1300008,struct.pack('<d',current['date']));run(0x5a1eb4,[0x1800000,current['offer']],1)
 out={}
 for key,off in [('fieldE4',0xe4),('fieldF0',0xf0),('fieldFC',0xfc)]:out[key]=struct.unpack('<i',u.mem_read(0x1101000+off,4))[0]
 for key,off in [('salary',0x38),('field40',0x40),('field48',0x48)]:out[key]=str(struct.unpack('<q',u.mem_read(0x1101000+off,8))[0])
 for key,off in [('field7D',0x7d),('fieldF4',0xf4)]:out[key]=bool(u.mem_read(0x1101000+off,1)[0])
 out['contractEnd']=struct.unpack('<d',u.mem_read(0x1101070,8))[0];out['payroll']=struct.unpack('<i',u.mem_read(0x1200004,4))[0];out['notifications']=notifications;cases.append({**current,'expected':out})
p=R.parent/'cyberfoot-web/native-port/tests/contract-commit-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original contract commit cases:',len(cases))
