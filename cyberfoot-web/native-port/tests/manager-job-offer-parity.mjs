import assert from 'node:assert/strict';import fs from 'node:fs';import {selectEmployedManagerOffer} from '../manager-job-offers.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./manager-job-offer-vectors.json',import.meta.url)));
for(const [index,t] of cases.entries()){
 const career=new Uint8Array(1888),clubs=new Uint8Array(t.clubs.length*760),leagues=new Uint8Array(t.leagues.length*660),c=new DataView(career.buffer),b=new DataView(clubs.buffer),l=new DataView(leagues.buffer);c.setInt32(8,t.active,true);c.setInt32(0x168,t.mode,true);
 t.clubs.forEach((row,i)=>row.forEach((n,j)=>{const off=[0x3c,0x7c,0x50,0x1a8,0x1ac,0x1b0,0x39][j];if(off===0x39)b.setUint8(i*760+off,n);else b.setInt32(i*760+off,n,true);}));
 t.leagues.forEach((league,i)=>{league.rows.forEach((row,d)=>row.forEach((n,p)=>l.setInt32(i*660+(d+1)*80+0xfc+(p+1)*4,n,true)));l.setInt32(i*660+0x140,league.country,true);});
 const save={career,sections:[{name:'clubs',data:clubs,count:t.clubs.length,recordSize:760},{name:'records_0066aca0',data:leagues,count:t.leagues.length,recordSize:660}]},rng=new OriginalRandom(t.seed),runtime={managerJobOffers:[1,2,3,4]},before=[clubs.slice(),leagues.slice()];selectEmployedManagerOffer(save,t.target,{rng,runtime});
 assert.deepEqual({offers:runtime.managerJobOffers,seed:rng.state},t.expected,`case ${index}`);assert.deepEqual(clubs,before[0]);assert.deepEqual(leagues,before[1]);
}
console.log(`${cases.length} complete original employed-manager offer comparisons passed (no adapters)`);
