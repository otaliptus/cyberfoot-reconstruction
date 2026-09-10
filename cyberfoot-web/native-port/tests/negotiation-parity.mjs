import {readFile} from 'node:fs/promises';import assert from 'node:assert/strict';import {negotiateContract} from '../contracts.mjs';
const cases=JSON.parse(await readFile(new URL('./negotiation-vectors.json',import.meta.url)));
for(const [i,c] of cases.entries())assert.deepEqual(negotiateContract(c),c.expected,`Contract decision ${i}`);
console.log(`Original contract decisions: ${cases.length} passed`);
