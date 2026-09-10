import assert from 'node:assert/strict';
import fs from 'node:fs';
import {resultSubstitutionChain} from '../results-data.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./results-substitution-vectors.json',import.meta.url)));
for(const test of cases){const data=new Uint8Array(test.rows.length*32),v=new DataView(data.buffer);test.rows.forEach((row,i)=>row.forEach((n,j)=>v.setInt32(i*32+j*4,n,true)));assert.deepEqual(resultSubstitutionChain({sections:[{name:'records_0066ae14',count:test.rows.length,data}]},test.historyId,test.playerId),test.expected);}
console.log(`${cases.length} original substitution-chain comparisons passed`);
