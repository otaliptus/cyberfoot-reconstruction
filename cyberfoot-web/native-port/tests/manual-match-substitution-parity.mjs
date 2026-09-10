import {readFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import {substituteDuringMatch} from '../manual-match-substitution.mjs';
const cases=JSON.parse(readFileSync(new URL('./manual-match-substitution-vectors.json',import.meta.url)));
let changed=0;
for(const c of cases){
 const before=structuredClone(c.before),state={players:before.players},lineup={players:before.pitch,bench:before.bench},fixture={substitutions:before.substitutions,counters:before.counters};
 const snapshot=()=>structuredClone({players:state.players,pitch:lineup.players,bench:lineup.bench,substitutions:fixture.substitutions,counters:fixture.counters});
 const observed={},calls=[];let release;
 const pending=new Promise(resolve=>release=resolve);
 const result=substituteDuringMatch({...c,lineup,fixture,state,rng:null,
  recordEvent(side,outgoing,f,incoming,type){assert.equal(f,fixture);calls.push('record');observed.event=[side,outgoing,incoming,type];return 77;},
  async presentEvent(index){calls.push('present');observed.presented=snapshot();observed.recordIndex=index;await pending;},
  refresh(){calls.push('refresh');observed.refreshed=true;},
  recalculate(l,s){assert.equal(l,lineup);assert.equal(s,state);calls.push('calculate');observed.recalculated=true;}
 });
 if(c.expected.presented){
  changed++;assert.deepEqual(snapshot(),c.expected.presented);assert.deepEqual(calls,['record','present']);
  await Promise.resolve();assert.deepEqual(snapshot(),c.expected.presented);
 }
 release();const outcome=await result;
 if(outcome.languageId)observed.languageId=outcome.languageId;
 assert.deepEqual({after:snapshot(),...observed},c.expected);
 assert.equal(outcome.changed,!!c.expected.presented);
 if(outcome.changed)assert.deepEqual(calls,['record','present','refresh','calculate']);
}
console.log(`Original manual substitutions: ${cases.length} branch cases, including ${changed} paused successful changes passed.`);
