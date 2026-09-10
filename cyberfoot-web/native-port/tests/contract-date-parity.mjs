import {readFile} from 'node:fs/promises';import assert from 'node:assert/strict';import {addContractMonths} from '../dates.mjs';
const cases=JSON.parse(await readFile(new URL('./contract-date-vectors.json',import.meta.url)));
for(const [i,c] of cases.entries())assert.equal(addContractMonths(c.date,c.months),c.expected.contractEnd,`Contract date ${i}`);
console.log(`Original contract dates: ${cases.length} passed`);
