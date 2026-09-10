import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {hasUnderLimitHumanClub,nationalManagerAssignmentIndex} from '../results-routing.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex'));
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./human-next-state-vectors.json.gz',import.meta.url))));
let under=0,national=0;
for(const [i,test] of cases.entries()){
 const career=bytes(test.career),clubs=bytes(test.clubs);
 if(test.kind==='underLimit'){
  const save={career,sections:[{name:'clubs',data:clubs,recordSize:760,count:clubs.length/760}]};
  assert.equal(hasUnderLimitHumanClub(save,{maxSeniorPlayers:test.limit}),!!test.expected,`Original under-limit case ${i}`);under++;
 }else{
  const players=bytes(test.players),runtime={};
  const save={career,sections:[{name:'clubs',data:clubs,recordSize:760,count:clubs.length/760},{name:'players',data:players,recordSize:304,count:players.length/304}]};
  const result=nationalManagerAssignmentIndex(save,runtime,{date:test.date});
  assert.equal(result,!!test.expected.result,`Original national index result case ${i}`);
  assert.equal(runtime.nextNationalManagerIndex??0,test.expected.index,`Original national index case ${i}`);
  assert.equal(save.career[0x708],test.expected.flag,`Original national flag case ${i}`);national++;
 }
}
console.log(`${cases.length} original human-next state comparisons passed (${under} under-limit, ${national} national index; no adapters).`);
