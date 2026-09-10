import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {auctionStart} from '../auction.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),signed=n=>n>=0x80000000?n-0x100000000:n,FORM=0x1417000;
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./auction-start-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const save={career:bytes(test.career),sections:[{name:'clubs',data:bytes(test.clubs),recordSize:760,count:0},{name:'players',data:bytes(test.players),recordSize:304,count:0}]};
 save.sections[0].count=save.sections[0].data.length/760;save.sections[1].count=save.sections[1].data.length/304;
 const runtime={auctionPlayer:test.pid,auctionBasePrice:test.base},result=auctionStart(save,runtime,{rng:new OriginalRandom(1)}),records=result.records.map(row=>row.map(v=>v===null?FORM:v));
 assert.deepEqual(records,test.expected.records,`Original records case ${i}`);
 assert.equal(runtime.auctionFlag,test.expected.flag,`Original flag case ${i}`);
 assert.equal(signed(runtime.auctionCurrentClub??0),signed(test.expected.e0),`Original e0 case ${i}`);
 assert.equal(signed(runtime.auctionIndex??0),signed(test.expected.dc),`Original dc case ${i}`);
}
console.log(`${cases.length} whole original auction start comparisons passed (UI stubs only).`);
