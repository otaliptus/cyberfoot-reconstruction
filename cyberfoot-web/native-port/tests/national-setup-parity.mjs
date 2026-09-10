import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {nationalSetup} from '../national-setup.mjs';
import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./national-setup-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const assignments=bytes(test.initialAssignments),save={career:bytes(test.career),sections:[
  {name:'players',data:bytes(test.players),recordSize:304,count:0},
  {name:'clubs',data:bytes(test.clubs),recordSize:760,count:0},
  {name:'records_0066b544',data:assignments,recordSize:8,count:assignments.length/8}
 ]};
 save.sections[0].count=save.sections[0].data.length/304;save.sections[1].count=save.sections[1].data.length/760;
 const rng=new OriginalRandom(test.seed),runtime={};
 if(i%2){const calendar=Array.from({length:366},(_,d)=>({date:42000+d}));
  nativeResultsCareerEffects(save,runtime,{rng,temporary:{lineups:[],matchTeams:[]},calendar}).nationalSetup();}
 else nationalSetup(save,runtime,{rng,date:test.date});
 const section=save.sections[2];
 assert.deepEqual({career:hex(save.career),clubs:hex(save.sections[1].data),players:hex(save.sections[0].data),assignments:hex(section.data),seed:rng.state},test.expected,`Original case ${i}`);
 assert.equal(section.count,section.data.length/8);
}
console.log(`${cases.length} whole original national-setup comparisons passed (storage adapters only).`);
