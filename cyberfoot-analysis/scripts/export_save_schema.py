"""Extract writer record order; fixed sections verified against writer assembly."""
import re,json,base64
from pathlib import Path
R=Path(__file__).resolve().parents[1];W=R.parent/'cyberfoot-web/native-port'
s=(R/'decompiled/0064af08_FUN_0064af08.c').read_text()
rows=re.findall(r'local_c,\*\(int \*\)PTR_DAT_([0-9a-f]+) \+ local_8 \* (0x[0-9a-f]+|\d+),(0x[0-9a-f]+|\d+)',s)
names={'0066b5b8':'players','0066af70':'clubs','0066b604':'playerSeasonStats','0066b6b4':'scorers','0066ae58':'appearances'}
a=[]
for pointer,stride,size in rows:
 assert int(stride,0)==int(size,0)
 a.append({'name':names.get(pointer,'records_'+pointer),'sourcePointer':'0x'+pointer,'recordSize':int(size,0)})
 if pointer=='0066b718':a.append({'name':'records_0066b608','sourcePointer':'0x0066b608','recordSize':16,'fixedCount':5,'marker':4})
 if pointer=='0066ae84':
  for ptr,count,size in [('0066ad60',16,48),('0066af90',6,48),('0066ae98',27,1384)]:a.append({'name':'records_'+ptr,'sourcePointer':'0x'+ptr,'recordSize':size,'fixedCount':count,'marker':count})
(W/'save-schema.mjs').write_text('// Sequential record layout of original save writer 0064af08.\nexport const saveSections='+json.dumps(a,indent=1)+';\n')
v=json.loads((R.parent/'cyberfoot-web/output/session/cyberfoot-2015-saves-2026-09-09.json').read_text())
f=next(f for f in v['files'] if f['path'].endswith('.s15'))
(W/'tests/original-career.s15').write_bytes(base64.b64decode(f['data']))
print(len(a),'sections, sample:',f['path'])
