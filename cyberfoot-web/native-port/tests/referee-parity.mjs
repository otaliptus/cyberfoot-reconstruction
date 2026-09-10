import assert from 'node:assert/strict';import fs from 'node:fs';import {refreshRefereeAssignments} from '../referees.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./referee-vectors.json',import.meta.url)));
for(const test of cases){const save={career:new Uint8Array(1888)},c=new DataView(save.career.buffer);test.initial.forEach((n,i)=>c.setInt32(0x70c+i*4,n,true));const rng=new OriginalRandom(test.seed),order=refreshRefereeAssignments(save,rng,test.rows);assert.deepEqual(order,test.order);assert.deepEqual(Array.from({length:12},(_,i)=>c.getInt32(0x70c+i*4,true)),test.expected);assert.equal(rng.state,test.finalSeed);}
console.log(`${cases.length} original referee-assignment comparisons passed`);
