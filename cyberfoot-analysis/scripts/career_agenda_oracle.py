"""Original full calendar/cursor/fixture lookup over the supplied original save."""
from native_oracle import u,run,read32,p32,R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import json,struct
u.mem_map(0,0x1000)
for a in [0x1300000,0x1400000,0x1500000,0x1600000]:u.mem_map(a,0x10000)
u.mem_write(0x66b574,p32(0x1300000))
schema=json.loads((R.parent/'cyberfoot-web/native-port/save-schema.mjs').read_text().split('=',1)[1].strip().rstrip(';'));raw=(R.parent/'cyberfoot-web/native-port/tests/original-career.s15').read_bytes();u.mem_write(read32(0x66ac78),raw[4:1892]);offset=1892
for spec in schema:
 count=struct.unpack_from('<i',raw,offset)[0];offset+=4;count=spec.get('fixedCount',count);size=count*spec['recordSize'];data=raw[offset:offset+size];offset+=size
 base={'records_0066aca0':0x1400100,'records_0066afa0':0x1500100,'records_0066b0d4':0x1600100}.get(spec['name'])
 if base:u.mem_write(read32(int(spec['sourcePointer'],16)),p32(base));u.mem_write(base-8,p32(1)+p32(count));u.mem_write(base,data)
def skip(uc,a,z,d):
 sp=uc.reg_read(UC_X86_REG_ESP);uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x405658,0x405050,0x405744]:u.hook_add(UC_HOOK_CODE,skip,begin=a,end=a)
run(0x656abc,[],1,instruction_limit=2000000);calendar=[struct.unpack('<i',u.mem_read(0x1300000+j*24+16,4))[0] for j in range(366)];c=read32(0x66ac78);current=read32(c+0x16c);run(0x656a18,[],1);nextDay=read32(c+0x16c);date=struct.unpack('<d',u.mem_read(0x1300000+(nextDay-1)*24+8,8))[0];fixture=run(0x65b414,[read32(c+8)],1,list(struct.unpack('<II',struct.pack('<d',date))))['result'];result={'calendar':calendar,'currentDay':current,'nextDay':nextDay,'nextDate':date,'fixtureId':fixture}
p=R.parent/'cyberfoot-web/native-port/tests/career-agenda-vector.json';p.write_text(json.dumps(result));print({k:v for k,v in result.items() if k!='calendar'})
