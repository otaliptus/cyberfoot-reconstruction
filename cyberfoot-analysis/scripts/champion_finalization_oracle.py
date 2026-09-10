from native_oracle import *
u.mem_map(0x1300000,0x10000)
C=0x1300100;F=0x1302000;L=0x1303000;M=0x1304000
for ptr,base in [(0x66af70,C),(0x66afa0,F),(0x66afec,L),(0x66b718,M)]:u.mem_write(read32(ptr),p32(base))
calls=[]
def delivery(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);args=[uc.reg_read(reg) for reg in [UC_X86_REG_EAX,UC_X86_REG_EDX,UC_X86_REG_ECX]];count={0x64c36c:4,0x64c4bc:3,0x657674:2,0x6494f8:1}[a];args += [read32(sp+4+j*4) for j in range(count)];args=[n if n<0x80000000 else n-0x100000000 for n in args]
 if a==0x6494f8:args[-1]='tit' if args[-1]==0x624394 else 'pr'
 calls.append([hex(a),args]);uc.reg_write(UC_X86_REG_ESP,sp+4+count*4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x64c36c,0x64c4bc,0x657674,0x6494f8]:u.hook_add(UC_HOOK_CODE,delivery,begin=a,end=a)
r=random.Random(62380);cases=[]
for i in range(1000):
 comp=r.choice([2,4,6]);winner=r.randrange(2);career=bytearray(1888)
 for o,n in [(0x88,comp),(0x3c,r.randrange(3)),(0xc0,r.randrange(20))]:struct.pack_into('<i',career,o,n)
 clubs=[bytearray(r.randbytes(760)) for _ in range(2)];ledger=r.randbytes(112);managers=r.randbytes(128*3)
 for j,b in enumerate(clubs):
  struct.pack_into('<i',b,0x3c,r.randrange(-2,205));struct.pack_into('<i',b,0x44,r.randrange(-1,3));u.mem_write(C+j*760,bytes(b))
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(F,struct.pack('<2i',0,1));u.mem_write(L,ledger);u.mem_write(M,managers);calls.clear();run(0x623ee0,[0,winner,0],0)
 cases.append({'career':career.hex(),'clubs':[b.hex() for b in clubs],'ledger':ledger.hex(),'managers':managers.hex(),'winner':winner,'expected':{'clubs':bytes(u.mem_read(C,1520)).hex(),'ledger':bytes(u.mem_read(L,112)).hex(),'managers':bytes(u.mem_read(M,384)).hex(),'calls':list(calls)}})
p=R.parent/'cyberfoot-web/native-port/tests/champion-finalization-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original champion finalization with record/award/statistic delivery adapters:1000 cases')
