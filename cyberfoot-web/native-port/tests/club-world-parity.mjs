import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {competitionFiveEligible} from '../club-world.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./club-world-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const leagues=bytes(test.leagues),history=bytes(test.history),metadata=bytes(test.metadata),clubs=bytes(test.clubs),af90=bytes(test.initialAf90);
 const save={career:bytes(test.career),sections:[
  {name:'clubs',data:clubs,recordSize:760,count:clubs.length/760},
  {name:'records_0066aca0',data:leagues,recordSize:660,count:leagues.length/660},
  {name:'records_0066b058',data:history,recordSize:20,count:history.length/20},
  {name:'records_0066b6ac',data:metadata,recordSize:12,count:metadata.length/12},
  {name:'records_0066af90',data:af90,recordSize:48,count:6}
 ]};
 const runtime={},rng=new OriginalRandom(test.seed),result=competitionFiveEligible(save,runtime,{rng});
 assert.equal(result,!test.error,`Original case ${i}`);
 assert.equal(runtime.clubWorldErrorMessage,result?null:'Erro no jogo, reinstale os times');
 assert.equal(hex(save.sections[0].data),test.expected.clubs,`Original clubs case ${i}`);
 assert.equal(hex(save.sections[4].data),test.expected.af90,`Original field case ${i}`);
 assert.equal(rng.state,test.expected.seed,`Original seed case ${i}`);
}
console.log(`${cases.length} whole original club-world comparisons passed (storage adapters only).`);
