import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {selectMatchKit} from '../club-kit.mjs';
const cases=JSON.parse(readFileSync(new URL('./match-kit-selection-vectors.json',import.meta.url)));
for(const c of cases){
 const career=new Uint8Array(1888),v=new DataView(career.buffer),bytes=new Uint8Array(1520);v.setInt32(0x3c,c.limit,true);
 for(const [i,name] of ['Home','Away'].entries()){bytes[i*760+0x1a]=name.length;bytes.set(new TextEncoder().encode(name),i*760+0x1b);}
 const save={career,sections:[{name:'clubs',recordSize:760,count:2,data:bytes}]},state={clubs:structuredClone(c.clubs)},assets=Object.fromEntries(c.available.map(p=>[p,p]));
 const chosen=selectMatchKit(save,{clubs:[0,1]},c.side,state,assets,{previous:'previous.png'}),expected=c.expected.chosen==='resource:camisa1'?'assets/original-shirt-1.png':c.expected.chosen.replaceAll('\\','/').toLowerCase();
 assert.equal(chosen,expected);assert.deepEqual(state.clubs.map(c=>c.selectedKit),c.expected.selectedKits);
}
console.log(`Original match kit selection: ${cases.length} branches passed.`);
