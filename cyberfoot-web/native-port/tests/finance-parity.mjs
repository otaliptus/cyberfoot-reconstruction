import {readFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
import {financeAmounts,financeLanguage,originalMoney} from '../finance-view.mjs';
const cases=JSON.parse(await readFile(new URL('./finance-vectors.json',import.meta.url),'utf8'));
for(const [index,test] of cases.entries()){
 const bytes=new Uint8Array(56),v=new DataView(bytes.buffer);
 test.ledger.forEach((n,i)=>v.setInt32(i*4,n,true));
 assert.deepEqual(financeAmounts(v,BigInt(test.cash)),test.expected,`Finance amounts ${index}`);
 for(const [name,languageIndex] of Object.entries(financeLanguage))assert.equal(test.language[name],languageIndex,`Finance language ${name}`);
}
console.log(`Original finance parity: ${cases.length} cases passed`);
const money=JSON.parse(await readFile(new URL('./money-vectors.json',import.meta.url),'utf8'));
for(const c of money)assert.equal(originalMoney(c.value),'$'+c.text);
console.log(`Original money formatting: ${money.length} cases passed`);
