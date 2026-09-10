import assert from 'node:assert/strict';
import fs from 'node:fs';
import {countHumanManagersInCountry,countHumanManagersInSubgroup} from '../manager-participation.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./manager-participation-vectors.json',import.meta.url)));
for(const test of cases){
 const career=new Uint8Array(1888),data=new Uint8Array(test.rows.length*760),v=new DataView(data.buffer);
 new DataView(career.buffer).setInt32(0x3c,test.count,true);
 test.rows.forEach(([country,subgroup,human],i)=>{v.setInt32(i*760+0x3c,country,true);v.setInt32(i*760+0x40,subgroup,true);v.setUint8(i*760+0x39,human);});
 const save={career,sections:[{name:'clubs',data,count:test.rows.length,recordSize:760}]},before=data.slice();
 assert.deepEqual([countHumanManagersInCountry(save,test.country),countHumanManagersInSubgroup(save,test.subgroup)],test.expected);
 assert.deepEqual(data,before);
}
console.log(`${cases.length*2} whole original manager participation counts passed`);
