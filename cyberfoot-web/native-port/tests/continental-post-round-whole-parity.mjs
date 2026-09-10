import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {continentalPostRound} from '../continental-post-round.mjs';
import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./continental-post-round-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const career=bytes(test.career),clubs=bytes(test.clubs),fixtures=bytes(test.fixtures),history=bytes(test.history),league=bytes(test.league);
 const save={career,sections:[
  {name:'clubs',data:clubs,recordSize:760,count:clubs.length/760},
  {name:'records_0066aca0',data:league,recordSize:660,count:1},
  {name:'records_0066afa0',data:fixtures,recordSize:72,count:fixtures.length/72},
  {name:'records_0066b114',data:history,recordSize:20,count:history.length/20}
 ]};
 const runtime={},rng=new OriginalRandom(test.seed);
 if(i%2){runtime.completedMatchDate=test.date;await nativeResultsCareerEffects(save,runtime,{rng,temporary:{lineups:[],matchTeams:[]},calendar:[{date:test.date}]}).continentalPostRound(test.competition);}
 else await continentalPostRound(save,runtime,test.competition,{date:test.date});
 assert.equal(hex(save.career),test.expected.career,`Original career case ${i}`);
 assert.equal(hex(save.sections[0].data),test.expected.clubs,`Original clubs case ${i}`);
 assert.equal(hex(save.sections[2].data),test.expected.fixtures,`Original fixtures case ${i}`);
 assert.equal(hex(save.sections[3].data),test.expected.history,`Original history case ${i}`);
 assert.equal(rng.state,test.expected.seed,`Original seed case ${i}`);
}
console.log(`${cases.length} whole original continental post-round comparisons passed (storage adapters only).`);
