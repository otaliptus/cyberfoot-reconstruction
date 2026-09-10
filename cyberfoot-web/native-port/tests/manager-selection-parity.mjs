import assert from 'node:assert/strict';import fs from 'node:fs';
import {findAvailableManager,findEmployedManager,selectManagerReplacement} from '../manager-selection.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./manager-selection-vectors.json',import.meta.url)));
for(const [index,t] of cases.entries()){
 const career=new Uint8Array(1888),c=new DataView(career.buffer),managers=new Uint8Array(t.managers.length*128),clubs=new Uint8Array(t.clubs.length*760),leagues=new Uint8Array(t.leagues.length*660),m=new DataView(managers.buffer),b=new DataView(clubs.buffer),l=new DataView(leagues.buffer);
 c.setInt32(0x168,t.mode,true);c.setInt32(0x88,t.competition,true);
 t.managers.forEach((row,i)=>row.forEach((n,j)=>{const off=[0x1c,0x24,0x34,0x31,0x3c,0x40][j];if(off===0x31||off===0x40)m.setUint8(i*128+off,n);else m.setInt32(i*128+off,n,true);}));
 t.clubs.forEach((row,i)=>row.forEach((n,j)=>{const off=[0x3c,0x44,0x7c,0x39,0x1a8][j];if(off===0x39)b.setUint8(i*760+off,n);else b.setInt32(i*760+off,n,true);}));
 t.leagues.forEach((league,i)=>{league.rows.forEach((row,d)=>row.forEach((n,p)=>l.setInt32(i*660+(d+1)*80+0xfc+(p+1)*4,n,true)));l.setInt32(i*660+0x140,league.country,true);l.setInt32(i*660+0x144,league.divisions,true);});
 const save={career,sections:[{name:'clubs',data:clubs,recordSize:760,count:t.clubs.length},{name:'records_0066b718',data:managers,recordSize:128,count:t.managers.length},{name:'records_0066aca0',data:leagues,recordSize:660,count:t.leagues.length}]},before=save.sections.map(s=>s.data.slice()),rng=new OriginalRandom(t.seed),runtime={...t.initial};
 const result=t.kind==='replacement'?selectManagerReplacement(save,t.club,{rng,runtime}):t.kind==='employed'?findEmployedManager(save,t.country,t.division,t.club,{rng,runtime}):findAvailableManager(save,t.country,t.kind==='division'?t.division:undefined);
 assert.deepEqual({runtime,seed:rng.state,result},t.expected,`case ${index} ${t.kind}`);save.sections.forEach((s,i)=>assert.deepEqual(s.data,before[i]));
}
console.log(`${cases.length} whole original manager selection comparisons passed (no adapters)`);
