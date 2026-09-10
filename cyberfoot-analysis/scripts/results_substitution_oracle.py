from native_oracle import *
u.mem_map(0x1300000,0x10000)
H=0x1300100;OUT=0x130f000
u.mem_write(read32(0x66ae14),p32(H))
r=random.Random(588);cases=[]
for i in range(800):
 history=r.randrange(4);player=r.randrange(12);rows=[[r.randrange(12),r.randrange(12),0,0,r.randrange(4),0,0,0] for _ in range(r.randrange(50))]
 if i%4:
  current=player
  for j in range(i%4):
   outgoing=r.randrange(12);rows.insert(0,[outgoing,current,0,0,history,0,0,0]);current=outgoing
 u.mem_write(H-4,p32(len(rows)));u.mem_write(H,b''.join(p32(n) for row in rows for n in row))
 run(0x5f88dc,[0,history,player],0,stack=[OUT])
 cases.append({'historyId':history,'playerId':player,'rows':rows,'expected':list(struct.unpack('<iii',u.mem_read(OUT,12)))})
(R.parent/'cyberfoot-web/native-port/tests/results-substitution-vectors.json').write_text(json.dumps(cases,separators=(',',':')))
print('800 original substitution-chain executions')
