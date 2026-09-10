"""Execute full financial block of61f604; original date/x87 instructions retained."""
from native_oracle import *
u.mem_map(0,0x1000);u.mem_map(0x1300000,0x10000);u.mem_map(0x1400000,0x10000);u.mem_map(0x1500000,0x10000)
C=0x1300100;M=0x1400100;L=0x1500100;D=0x1001000
u.mem_write(read32(0x66af70),p32(C));u.mem_write(read32(0x66b3b8),p32(M));u.mem_write(read32(0x66afec),p32(L));u.mem_write(0x66b574,p32(D))
def hook(uc,a,size,data):
 if a==0x61fadb:uc.reg_write(UC_X86_REG_EBP,SP-0x200);u.mem_write(SP-0x210,p32(1))
 else:uc.reg_write(UC_X86_REG_EIP,STOP)
for a in [0x61fadb,0x620344]:u.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
r=random.Random(620344);cases=[]
for i in range(3000):
 competition=r.randrange(11);day=r.randrange(1,30);date=r.randrange(40000,45000);income=r.randint(-10000000,10000000);clubs=[]
 for j in range(2):
  c={'cash':str(r.choice([r.randint(-10**13,10**13),2**63-1,-2**63])),'payroll':r.choice([r.randint(0,1000000),0,-100]),'payrollExpense':r.randint(0,2**31-1),'gateIncome':r.randint(0,2**31-1),'debt':r.randint(-10,5000000),'interestExpense':r.randint(0,100000)};clubs.append(c)
  u.mem_write(C+j*760+0x48,struct.pack('<q',int(c['cash'])))
  for k,o in [('payroll',4),('payrollExpense',8),('gateIncome',0x10),('debt',0x20),('interestExpense',0x28)]:u.mem_write(L+j*56+o,p32(c[k]))
 career=read32(0x66ac78);u.mem_write(career+0x88,p32(competition));u.mem_write(career+0x16c,p32(day));u.mem_write(D+(day-1)*24+8,struct.pack('<d',date));u.mem_write(M+444+8,struct.pack('<2i',0,1));u.mem_write(M+444+0x24,p32(income))
 weekday=run(0x40c3a8,[],0,list(struct.unpack('<2I',struct.pack('<d',date))))['result'];run(0x61fadb,[],0)
 expected=[]
 for j in range(2):
  c={'cash':str(struct.unpack('<q',u.mem_read(C+j*760+0x48,8))[0])}
  for k,o in [('payroll',4),('payrollExpense',8),('gateIncome',0x10),('debt',0x20),('interestExpense',0x28)]:c[k]=struct.unpack('<i',u.mem_read(L+j*56+o,4))[0]
  expected.append(c)
 cases.append({'competition':competition,'day':day,'weekday':weekday,'date':date,'income':income,'clubs':clubs,'expected':expected})
p=R.parent/'cyberfoot-web/native-port/tests/match-finance-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original match financial settlement:3000 cases')
