import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';import {processEmployedManagerOffers,processUnemployedManagerOffers} from '../manager-offer-timing.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./manager-offer-timing-vectors.json.gz',import.meta.url)))),bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
for(const [index,t] of cases.entries()){
 const career=bytes(t.career),managers=bytes(t.managers),clubs=bytes(t.clubs),leagues=bytes(t.leagues),save={career,sections:[{name:'clubs',data:clubs,count:40,recordSize:760},{name:'records_0066aca0',data:leagues,count:3,recordSize:660},{name:'records_0066b718',data:managers,count:3,recordSize:128}]},runtime={managerJobOffers:[...t.offers]},rng=new OriginalRandom(t.seed),events=[];
 await(t.kind==='employed'?processEmployedManagerOffers:processUnemployedManagerOffers)(save,runtime,{rng,showOffer:async()=>{const id=new DataView(career.buffer).getInt32(0x10,true);events.push([id,[...runtime.managerJobOffers],managers[id*128+0x30]]);}});
 assert.deepEqual({career:hex(career),managers:hex(managers),offers:runtime.managerJobOffers,events,seed:rng.state},t.expected,`case${index} ${t.kind}`);assert.equal(hex(clubs),t.clubs);assert.equal(hex(leagues),t.leagues);
}
console.log(`${cases.length} original job-offer timing comparisons passed (modal adapter only)`);
