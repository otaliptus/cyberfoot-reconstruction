import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {verifyHumanLineup} from './human-lineup-proof.mjs';
const result=verifyHumanLineup(...['human-selection-vectors.json','human-sort-vectors.json','saved-lineup-vectors.json'].map(n=>JSON.parse(readFileSync(new URL(n,import.meta.url)))));
if(result.failures.length)console.log(result.failures.slice(0,2));assert.equal(result.failures.length,0);console.log(`Original human selection, sorting and saved lineups: ${result.cases} cases passed.`);
