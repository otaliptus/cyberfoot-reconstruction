import fs from 'node:fs';import assert from 'node:assert/strict';import {stepFixture} from '../fixture-step.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./step-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){const f=structuredClone(c.fixture),s=structuredClone(c.state),teams=structuredClone(c.teams);let ci=0;const rng=new OriginalRandom(c.initialSeed,()=>c.initialSeed+ci++*c.clockStride),calls=[];
 const {recordIndex}=stepFixture(f,teams,s,rng,(side,player,_f,detail,type)=>{calls.push([side,player,detail,type]);return calls.length-1;});
 const actual={result:recordIndex,seed:rng.state,clockReads:rng.clockReads,calls,fixture:{zone:f.zone,side:f.side,previousEvent:f.previousEvent,tick:f.tick,endTick:f.endTick,counters:f.counters,substitutions:f.substitutions},condition:Array.from({length:37},(_,i)=>s.players[i].condition),active:Array.from({length:37},(_,i)=>s.players[i].active)};
 try{assert.deepEqual(actual,c.expected);}catch(e){if(failed++<3)console.error(JSON.stringify({args:[c.fixture.tick,c.fixture.previousEvent],expected:c.expected,actual}));}}
console.log({fixtureStepCases:cases.length,recorder:'test double',failed});assert.equal(failed,0);
