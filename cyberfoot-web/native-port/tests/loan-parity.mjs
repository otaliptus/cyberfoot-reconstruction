import {readFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
import {loanAction,loanEnabled} from '../loan-view.mjs';
const cases=JSON.parse(await readFile(new URL('./loan-vectors.json',import.meta.url),'utf8'));
for(const [i,c] of cases.entries()){
 const state={category:c.category,debt:c.debt,cash:BigInt(c.cash),enabled:loanEnabled(c.debt,c.category)};
 assert.deepEqual(state.enabled,c.initialEnabled,`Initial loan controls ${i}`);loanAction(state,c.action);
 assert.deepEqual({debt:state.debt,cash:String(state.cash),enabled:state.enabled},c.expected,`Original loan mutation ${i}`);
}
console.log(`Original loan parity: ${cases.length} cases passed`);
