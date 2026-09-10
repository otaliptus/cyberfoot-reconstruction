import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {clubKitPath,clubKitExists} from '../club-kit.mjs';
const vectors=JSON.parse(readFileSync(new URL('./club-kit-vectors.json',import.meta.url)));
for(const v of vectors){
 const career=new Uint8Array(1888),c=new DataView(career.buffer),clubs=new Uint8Array(760*8);c.setInt32(0x3c,v.counts[0],true);c.setInt32(0x40,v.counts[1],true);const name=Uint8Array.from(v.name,x=>x.charCodeAt(0));clubs[v.clubId*760+0x1a]=name.length;clubs.set(name,v.clubId*760+0x1b);
 const expectedKey=v.expected.requested.replaceAll('\\','/').toLowerCase(),seen=[],assets=new Proxy({}, {get:(_,key)=>{seen.push(key);return v.exists&&key===expectedKey?'original.png':undefined;}}),save={career,sections:[{name:'clubs',recordSize:760,count:8,data:clubs}]};
 const result=v.op==='exists'?clubKitExists(save,v.clubId,v.kit,assets):clubKitPath(save,v.clubId,v.kit,assets);assert.equal(seen[0],expectedKey);assert.equal(Boolean(result),v.expected.present);
 if(v.op==='path')assert.equal(v.expected.path,v.expected.present?v.expected.requested:'');
}
console.log(`Original club kit lookup: ${vectors.length} cases passed.`);
