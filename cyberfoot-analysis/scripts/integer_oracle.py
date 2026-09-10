from native_oracle import u,run,read32,p32,R
import json,random
r=random.Random(40343);texts=['',' ','  0','0','-0','+0','1 ','\t1','1\t','$','0x','x','0x1','-xF','+Xf','2147483647','2147483648','-2147483648','-2147483649','$FFFFFFFF','-$FFFFFFFF','0x100000000','9999499','9999999','1.0','1e2']
for i in range(1500):texts.append(r.choice(['',' ','  ','+','-','0x','$','x'])+''.join(r.choice('0123456789ABCDEFxyz+- $') for _ in range(r.randint(0,15))))
cases=[]
for text in texts:
 b=text.encode('cp1252');u.mem_write(0x10000fc,p32(len(b)));u.mem_write(0x1000100,b+b'\0');out=run(0x40343c,[0x1000100,0x1008000],1);cases.append({'text':text,'expected':out['result'] if read32(0x1008000)==0 else None})
p=R.parent/'cyberfoot-web/native-port/tests/integer-vectors.json';p.write_text(json.dumps(cases,separators=(',',':')));print('Original integer parse cases:',len(cases))
