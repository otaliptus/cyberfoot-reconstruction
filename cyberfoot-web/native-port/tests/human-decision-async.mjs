import {readFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import {OriginalRandom} from '../match-core.mjs';
import {stepFixture,stepFixtureAsync} from '../fixture-step.mjs';
const vectors=JSON.parse(readFileSync(new URL('./step-vectors.json',import.meta.url)));
const counts={penalty:0,injuryReplacement:0};
for(const v of vectors){
 function setup(){
  let clock=0;
  const state=structuredClone(v.state),fixture=structuredClone(v.fixture),teams=structuredClone(v.teams),calls=[],choices=[];
  // Exercise the human branch with identical explicit decisions in both runners.
  for(const club of state.clubs)club.human=true;
  state.automaticInteractions=false;
  const rng=new OriginalRandom(v.initialSeed,()=>v.initialSeed+clock++*(v.clockStride??0));
  const snapshot=()=>structuredClone({state,fixture,teams,calls,choices,seed:rng.state,clockReads:rng.clockReads});
  const record=(side,player,_f,detail,type)=>{calls.push([side,player,detail,type]);return calls.length-1;};
  const decisions={penalty:({own})=>{choices.push('penalty');return [own.players.find(id=>id>0),1];},injuryReplacement:({lineup})=>{choices.push('injuryReplacement');return lineup.bench.find(id=>id>0)??-1;}};
  return {state,fixture,teams,rng,record,decisions,snapshot};
 }
 const a=setup(),b=setup();
 const expected=stepFixture(a.fixture,a.teams,a.state,a.rng,a.record,a.decisions);
 const decisions=Object.fromEntries(Object.entries(b.decisions).map(([name,choose])=>[name,async context=>{
  counts[name]++;
  const before=b.snapshot();
  await new Promise(resolve=>setImmediate(resolve));
  assert.deepEqual(b.snapshot(),before,'Engine mutated or consumed RNG while waiting for a human decision');
  return choose(context);
 }]));
 const actual=await stepFixtureAsync(b.fixture,b.teams,b.state,b.rng,b.record,decisions);
 assert.deepEqual(actual,expected);
 assert.deepEqual(b.snapshot(),a.snapshot());
}
assert.ok(counts.penalty>0,'Penalty pause was not exercised');
assert.ok(counts.injuryReplacement>0,'Injury pause was not exercised');
console.log('Human async decisions preserve complete fixture/state/RNG:',{scenarios:vectors.length,...counts});
