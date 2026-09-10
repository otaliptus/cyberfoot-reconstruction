import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {selectHumanPenaltyKeeper} from '../human-penalty.mjs';
const cases=JSON.parse(readFileSync(new URL('./human-penalty-keeper-vectors.json',import.meta.url)));
for(const c of cases)assert.equal(selectHumanPenaltyKeeper(c.lineup,{players:c.players},c.previous),c.expected);
console.log(`Original penalty goalkeeper selection: ${cases.length} cases passed.`);
