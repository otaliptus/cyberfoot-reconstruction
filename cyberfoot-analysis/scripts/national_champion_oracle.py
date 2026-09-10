from native_oracle import *
u.mem_map(0x1300000,0x10000)
C=0x1300100;L=0x1303000;M=0x1304000;G=0x1305000;A=0x1307000
for ptr,base in [(0x66af70,C),(0x66afec,L),(0x66b718,M),(0x66b560,A)]:u.mem_write(read32(ptr),p32(base))
u.mem_write(0x66ae98,p32(G));calls=[]
def delivery(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);args=[uc.reg_read(reg) for reg in [UC_X86_REG_EAX,UC_X86_REG_EDX,UC_X86_REG_ECX]];count={0x64c36c:4,0x64c4bc:3,0x657674:2,0x6494f8:1,0x6490a8:1}[a];args += [read32(sp+4+j*4) for j in range(count)];args=[n if n<0x80000000 else n-0x100000000 for n in args]
 if a==0x6494f8:args[-1]='tit' if args[-1]==0x62478c else 'pr'
 calls.append([hex(a),args]);uc.reg_write(UC_X86_REG_ESP,sp+4+count*4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
for a in [0x64c36c,0x64c4bc,0x657674,0x6494f8,0x6490a8]:u.hook_add(UC_HOOK_CODE,delivery,begin=a,end=a)
r=random.Random(62468);cases=[]
for i in range(1000):
 winner=r.randrange(2);groupId=r.randrange(3);career=bytearray(1888);struct.pack_into('<i',career,0x88,3);clubs=[bytearray(r.randbytes(760)) for _ in range(3)];ledger=r.randbytes(168);managers=r.randbytes(384);groups=r.randbytes(4152);award=bytearray(r.randbytes(28));struct.pack_into('<i',award,8,r.randrange(3))
 for j,b in enumerate(clubs):struct.pack_into('<i',b,0x44,r.randrange(-2,3));u.mem_write(C+j*760,bytes(b))
 u.mem_write(read32(0x66ac78),bytes(career));u.mem_write(read32(0x66b09c),p32(groupId));u.mem_write(L,ledger);u.mem_write(M,managers);u.mem_write(G,groups);u.mem_write(A,bytes(award));u.mem_write(A-4,p32(1));calls.clear();run(0x6243c8,[0,winner,1-winner],0)
 cases.append({'career':career.hex(),'clubs':[b.hex() for b in clubs],'ledger':ledger.hex(),'managers':managers.hex(),'groups':groups.hex(),'award':award.hex(),'winner':winner,'groupId':groupId,'expected':{'clubs':bytes(u.mem_read(C,2280)).hex(),'ledger':bytes(u.mem_read(L,168)).hex(),'managers':bytes(u.mem_read(M,384)).hex(),'groups':bytes(u.mem_read(G,4152)).hex(),'calls':list(calls)}})
p=R.parent/'cyberfoot-web/native-port/tests/national-champion-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original national champion with delivery adapters:1000 cases')
