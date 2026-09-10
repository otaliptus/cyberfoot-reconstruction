import fs from 'node:fs';
import assert from 'node:assert/strict';
import {evaluate} from './evaluate.mjs';
let total=0;
for(const [kind,file] of [['core','original'],['player','player'],['lineup','lineup'],['incident','incident'],['event','event'],['clock','clock'],['stats','stats'],['step','step'],['record','record']]){
 const cases=JSON.parse(fs.readFileSync(new URL(`./${file}-vectors.json`,import.meta.url)));
 let failed=0;
 for(const c of cases){try{assert.deepEqual(evaluate(kind,c),c.expected);}catch(e){if(failed++<3)console.error(kind,c.args,e.message);}}
 console.log(JSON.stringify({kind,cases:cases.length,failed}));assert.equal(failed,0);total+=cases.length;
}
console.log(JSON.stringify({total,failed:0}));
