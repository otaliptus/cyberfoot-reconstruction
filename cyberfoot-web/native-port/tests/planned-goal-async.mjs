import {readFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import {OriginalRandom} from '../match-core.mjs';
import {deliverPlannedGoals,deliverPlannedGoalsAsync} from '../match-score-plan.mjs';
const vectors=JSON.parse(readFileSync(new URL('./planned-goal-vectors.json',import.meta.url)));
for(const v of vectors){
 const make=()=>({rng:new OriginalRandom(v.seed),fixture:{id:1,counters:Object.fromEntries([0x48,0x4c,0x90,0x94].map(n=>[n,0]))},records:[],shown:[]});
 const a=make(),b=make();
 const args=c=>[v.plan,v.tick,c.fixture,structuredClone(v.teams),{players:structuredClone(v.players)},c.rng,(side,player,f,detail,type)=>{c.records.push([side,player,f.id,detail,type]);return v.returns[c.records.length-1];}];
 deliverPlannedGoals(...args(a),index=>a.shown.push(index));
 await deliverPlannedGoalsAsync(...args(b),async index=>{
  b.shown.push(index);
  const before=JSON.stringify({records:b.records,counters:b.fixture.counters,seed:b.rng.state});
  await new Promise(resolve=>setImmediate(resolve));
  assert.equal(JSON.stringify({records:b.records,counters:b.fixture.counters,seed:b.rng.state}),before,'Goal delivery advanced while presentation was pending');
 });
 assert.deepEqual({records:b.records,shown:b.shown,counters:b.fixture.counters,seed:b.rng.state},{records:a.records,shown:a.shown,counters:a.fixture.counters,seed:a.rng.state});
}
console.log(`Async planned-goal delivery preserves event order and RNG in ${vectors.length} original scenarios.`);
