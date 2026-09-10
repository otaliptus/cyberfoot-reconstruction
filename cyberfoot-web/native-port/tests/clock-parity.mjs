import fs from 'node:fs';import assert from 'node:assert/strict';import {fatigue,regulationEndTick} from '../match-clock.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./clock-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){let actual;if(c.name==='fatigue'){const s=structuredClone(c.state);fatigue(c.lineup,c.tick,s);actual=Array.from({length:11},(_,i)=>s.players[i+1].condition);}else{const rng=new OriginalRandom(c.initialSeed);actual={result:regulationEndTick(c.redCards,rng),seed:rng.state,clockReads:0};}try{assert.deepEqual(actual,c.expected);}catch{if(failed++<3)console.error({c,actual});}}
console.log({clockCases:cases.length,failed});assert.equal(failed,0);
