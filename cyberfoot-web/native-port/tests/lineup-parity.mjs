import fs from 'node:fs';
import assert from 'node:assert/strict';
import {calculateLineup} from '../lineup.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./lineup-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){const actual=calculateLineup(structuredClone(c.lineup),c.state);delete actual.players;delete actual.positions;try{assert.deepEqual(actual,c.expected);}catch{if(failed++<6)console.error(JSON.stringify({case:c,actual}));}}
console.log(JSON.stringify({lineupCases:cases.length,failed}));assert.equal(failed,0);
