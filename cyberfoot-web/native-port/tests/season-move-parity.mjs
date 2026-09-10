import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {managerSeasonMove} from '../season-end.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./season-move-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const clubs=bytes(test.clubs),leagues=bytes(test.leagues);
 const save={career:bytes(test.career),sections:[{name:'clubs',data:clubs,recordSize:760,count:clubs.length/760},{name:'records_0066aca0',data:leagues,recordSize:660,count:leagues.length/660}]};
 const rng=new OriginalRandom(test.seed),destinations=managerSeasonMove(save,test.clubId,{rng,stackBound:test.bound});
 const actual=new Uint8Array(32),view=new DataView(actual.buffer);destinations.forEach((value,index)=>view.setInt32(index*4,value,true));
 assert.equal(hex(actual),test.expected.destinations,`Original destinations case ${i}`);
 assert.equal(rng.state,test.expected.seed,`Original seed case ${i}`);
}
console.log(`${cases.length} whole original season-end manager move comparisons passed (stack slot controlled).`);
