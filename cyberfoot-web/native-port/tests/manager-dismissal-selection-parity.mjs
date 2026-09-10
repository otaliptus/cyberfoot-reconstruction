import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {selectDismissalReplacement} from '../manager-dismissal-selection.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./manager-dismissal-selection-vectors.json.gz',import.meta.url)))),bytes=s=>Uint8Array.from(Buffer.from(s,'hex'));
for(const [index,t] of cases.entries()){
 const career=new Uint8Array(1888),managers=bytes(t.managers),clubs=bytes(t.clubs),save={career,sections:[{name:'records_0066b718',data:managers,count:managers.length/128,recordSize:128},{name:'clubs',data:clubs,count:27,recordSize:760}]},rng=new OriginalRandom(t.seed);new DataView(career.buffer).setInt32(0x3c,t.domestic,true);
 const result=selectDismissalReplacement(save,t.target,rng);
 assert.deepEqual({managers:Buffer.from(save.sections[0].data).toString('hex'),result,seed:rng.state},t.expected,`case ${index}`);assert.equal(Buffer.from(clubs).toString('hex'),t.clubs);
}
console.log(`${cases.length} original dismissal replacement comparisons passed (allocation and Delphi string adapters only)`);
