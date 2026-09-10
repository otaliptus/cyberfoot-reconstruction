import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {nationalPostRound} from '../national-post-round.mjs';
import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./national-post-round-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const clubs=bytes(test.clubs),bracket=bytes(test.bracket),save={career:bytes(test.career),sections:[{name:'clubs',data:clubs,recordSize:760,count:16},{name:'records_0066ad60',data:bracket,recordSize:48,count:16}]};
 if(i%2)nativeResultsCareerEffects(save,{},{rng:new OriginalRandom(123),temporary:{lineups:[],matchTeams:[]},calendar:[]}).nationalPostRound(test.competition);
 else nationalPostRound(save,{},test.competition);
 assert.deepEqual({clubs:hex(clubs),bracket:hex(bracket)},test.expected,`Original case ${i}`);
 assert.equal(hex(save.career),test.career);
}
console.log(`${cases.length} whole original international post-round comparisons passed (storage adapters only).`);
