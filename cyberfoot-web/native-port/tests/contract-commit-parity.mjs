import {readFile} from 'node:fs/promises';import assert from 'node:assert/strict';import {renewContract,clubPayroll} from '../contracts.mjs';
const cases=JSON.parse(await readFile(new URL('./contract-commit-vectors.json',import.meta.url)));
for(const [i,c] of cases.entries()){
 const player={clubId:0};for(const k of ['salary','field40','field48','field7D','fieldE4','fieldF0','fieldF4','fieldFC'])player[k]=c[k];
 const notifications=renewContract(player,c);delete player.clubId;
 assert.deepEqual({...player,notifications,payroll:clubPayroll(0,[{...player,clubId:0}])},c.expected,`Contract commit ${i}`);
}
console.log(`Original contract commit: ${cases.length} passed`);
