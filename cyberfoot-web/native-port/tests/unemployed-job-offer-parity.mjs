import assert from 'node:assert/strict';import fs from 'node:fs';import {selectUnemployedManagerOffers} from '../manager-job-offers.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./unemployed-job-offer-vectors.json',import.meta.url)));
for(const [index,t] of cases.entries()){
 const career=new Uint8Array(1888),clubs=new Uint8Array(40*760),leagues=new Uint8Array(3*660),managers=new Uint8Array(3*128),c=new DataView(career.buffer),b=new DataView(clubs.buffer),l=new DataView(leagues.buffer),m=new DataView(managers.buffer);
 for(const [off,n] of [[0x10,t.active],[0x50,t.seasonLeg],[0x88,t.competition],[0x168,t.mode]])c.setInt32(off,n,true);c.setUint8(0x170,t.regional);c.setUint8(0x75c,t.extra);
 t.clubs.forEach(([human,national],i)=>{b.setUint8(i*760+0x39,human);b.setUint8(i*760+0x216,national);});t.managers.forEach((row,i)=>row.forEach((n,j)=>m.setInt32(i*128+[0x20,0x24,0x7c][j],n,true)));
 t.leagues.forEach((league,i)=>{league.rows.forEach((row,d)=>row.forEach((n,p)=>l.setInt32(i*660+(d+1)*80+0xfc+(p+1)*4,n,true)));l.setInt32(i*660+0x140,league.country,true);l.setInt32(i*660+0x144,league.divisions,true);});
 const save={career,sections:[{name:'clubs',data:clubs,count:40,recordSize:760},{name:'records_0066aca0',data:leagues,count:3,recordSize:660},{name:'records_0066b718',data:managers,count:3,recordSize:128}]},before=save.sections.map(s=>s.data.slice()),rng=new OriginalRandom(t.seed),runtime={managerJobOffers:[1,2,3,4]};selectUnemployedManagerOffers(save,t.country,t.target,{rng,runtime});assert.deepEqual({offers:runtime.managerJobOffers,seed:rng.state},t.expected,`case${index}`);save.sections.forEach((s,i)=>assert.deepEqual(s.data,before[i]));
}
console.log(`${cases.length} complete original unemployed-manager offer comparisons passed (no adapters)`);
