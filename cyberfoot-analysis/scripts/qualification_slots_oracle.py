"""Whole original0064c63c arithmetic: no Windows or game-child adapters."""
import gzip,json
from native_oracle import run,R
cases=[]
for country in [-2147483648,-1,*range(203),2147483647]:
 for competition in [-1,0,1,2,3,4,5,6,7,10]:
  for group in [-1,0,1,2,3,4,5,6]:
   cases.append([country,competition,group,run(0x64c63c,[country,competition,group],0)['result']])
out=R.parent/'cyberfoot-web/native-port/tests/qualification-slot-vectors.json.gz'
with gzip.open(out,'wt') as f:json.dump(cases,f,separators=(',',':'))
print(f'{len(cases)} whole original qualification slot comparisons generated')
