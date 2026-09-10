from native_oracle import *
u.mem_map(0x1300000,0x10000)
C=0x1300100;M=0x1302000;H=0x1304000;J=0x1305000;P=0x1306000
for ptr,base in [(0x66af70,C),(0x66b6ac,M),(0x66b058,H),(0x66b3d0,J),(0x66b560,P)]:u.mem_write(read32(ptr),p32(base))
sizes={read32(0x66b058):(H,20),read32(0x66b3d0):(J,28),read32(0x66b560):(P,28)}
def allocation(uc,a,size,data):
 sp=uc.reg_read(UC_X86_REG_ESP);base,size=sizes[uc.reg_read(UC_X86_REG_EAX)];old=read32(base-4);n=read32(sp+4);u.mem_write(base-4,p32(n));u.mem_write(base+old*size,bytes((n-old)*size));uc.reg_write(UC_X86_REG_ESP,sp+4);uc.reg_write(UC_X86_REG_EIP,read32(sp))
u.hook_add(UC_HOOK_CODE,allocation,begin=0x4060a8,end=0x4060a8)
r=random.Random(64366);cases=[]
for i in range(1500):
 comp=r.randrange(1,11);country=r.randrange(-2,205);division=r.randrange(-1,4);group=r.randrange(4);sub=r.randrange(4);active=r.randrange(4);place=r.randrange(1,4);season=r.randrange(30)
 club=bytearray(r.randbytes(760));struct.pack_into('<i',club,0x58,r.randrange(-1,7));struct.pack_into('<i',club,0x44,r.randrange(-1,5))
 if i%3:struct.pack_into('<i',club,0x2e0,r.choice([0,9,10,100,101,999,1000,9999,10000,99999,100000]))
 u.mem_write(C,bytes(club));u.mem_write(read32(0x66ac78)+0xc0,p32(season));u.mem_write(read32(0x66b484),p32(active))
 # Matching metadata plus distractors; independently compute keys only for input construction.
 keycountry=country;keyround=division
 if comp==2:keyround=-1
 if comp==3:keycountry=sub;keyround=group
 if comp in [4,6,10]:keycountry=-1;keyround=run(0x64f2d0,[country],0)['result']
 if comp in [5,7,8,9]:keycountry=-1;keyround=-1
 metadata=[[r.randrange(11),r.randrange(-1,10),r.randrange(-1,6)] for _ in range(r.randrange(2,20))];metadata[r.randrange(len(metadata))]=[comp,keycountry,keyround]
 u.mem_write(M-4,p32(len(metadata)));u.mem_write(M,b''.join(p32(n) for row in metadata for n in row))
 for base in [H,J,P]:u.mem_write(base-4,p32(0))
 run(0x64c36c,[comp,0,country],0,[place,group,sub,division]);run(0x64c4bc,[comp,0,3],0,[country,place,division]);run(0x64c58c,[7,0,17],0,[23])
 cases.append({'competition':comp,'country':country,'division':division,'group':group,'subgroup':sub,'activeSubgroup':active,'place':place,'season':season,'club':club.hex(),'metadata':metadata,'expected':{'club':bytes(u.mem_read(C,760)).hex(),'honours':bytes(u.mem_read(H,20)).hex(),'managers':bytes(u.mem_read(J,28)).hex(),'players':bytes(u.mem_read(P,28)).hex()}})
p=R.parent/'cyberfoot-web/native-port/tests/champion-records-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original champion records and reputation:1500 cases')
