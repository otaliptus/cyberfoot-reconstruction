import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {processManagerChanges} from '../manager-changes.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./manager-changes-vectors.json.gz',import.meta.url)))),bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
for(const [index,test] of cases.entries()){
 const save={career:bytes(test.career),sections:test.sections.map(s=>({...s,data:bytes(s.data),count:s.data.length/2/s.recordSize}))},rng=new OriginalRandom(test.seed),runtime={...test.initial,nationalManagerCount:10},events=[];
 await processManagerChanges(save,runtime,{rng,date:test.date,humanDismissal:async()=>events.push(['human',runtime.managerChangeClub]),showChanges:async()=>events.push(['summary',structuredClone(runtime.managerChanges)])});
 for(const section of [...save.sections,{name:'career',data:save.career}]){
  const actual=hex(section.data),expected=section.name==='career'?test.expected.career:test.expected.sections[section.name];
  if(actual!==expected){let at=0;while(at<Math.max(actual.length,expected.length)&&actual.slice(at,at+2)===expected.slice(at,at+2))at+=2;throw Error(`case${index} ${section.name} byte${at/2}: ${actual.slice(at,at+32)} expected${expected.slice(at,at+32)}`);}
 }
 assert.deepEqual(runtime,{...test.expected.runtime,nationalManagerCount:10},`case${index} runtime`);assert.equal(rng.state,test.expected.seed,`case${index} RNG`);assert.deepEqual(events,test.expected.events,`case${index} dialogs`);
}
console.log(`${cases.length} original manager-change comparisons passed (400 allocation-only; 100 modal-boundary adapters)`);
