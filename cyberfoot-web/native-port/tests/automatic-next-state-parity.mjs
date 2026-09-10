import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {automaticNextState} from '../results-routing.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./automatic-next-state-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const regions=bytes(test.regions),save={career:bytes(test.career),sections:[{name:'records_0066ae98',data:regions,recordSize:1384,count:27}]},runtime={};
 automaticNextState(save,runtime);
 assert.equal(runtime.autoNextFlag,test.expected.flag,`Original flag case ${i}`);
 assert.equal(runtime.nextRegionIndex??0,test.expected.region,`Original region case ${i}`);
 assert.equal(hex(regions),test.expected.regions,`Original regions case ${i}`);
}
console.log(`${cases.length} whole original automatic-next state comparisons passed (UI boundary adapters only).`);
