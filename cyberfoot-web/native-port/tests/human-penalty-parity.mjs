import {readFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import {OriginalRandom} from '../match-core.mjs';
import {resolveHumanPenalty} from '../human-penalty.mjs';
const cases=JSON.parse(readFileSync(new URL('./human-penalty-vectors.json',import.meta.url)));
for(const c of cases){
 const rng=new OriginalRandom(c.seed);
 assert.deepEqual(resolveHumanPenalty(1,2,{players:c.players},rng,{humanAttacks:c.humanAttacks}),c.expected);
 assert.equal(rng.state,c.finalSeed);assert.equal(rng.clockReads,c.clockReads);
}
console.log(`Original human penalty timer resolution: ${cases.length} cases passed.`);
