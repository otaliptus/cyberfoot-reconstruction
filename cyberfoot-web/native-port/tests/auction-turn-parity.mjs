import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {auctionNextLot} from '../auction.mjs';
import {OriginalRandom} from '../match-core.mjs';
const FORM=0x1417000;
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./auction-turn-vectors.gz'.replace('.gz','.json.gz'),import.meta.url))));
for(const [i,test] of cases.entries()){
 const runtime={auctionPlayer:test.pid,auctionHighestBid:test.d0,auctionHighestBidder:test.d4};
 const save={career:new Uint8Array(1888),sections:[{name:'clubs',data:new Uint8Array(760),recordSize:760,count:1},{name:'players',data:new Uint8Array(304),recordSize:304,count:1},{name:'records_0066aca0',data:new Uint8Array(660),recordSize:660,count:1}]};
 const result=auctionNextLot(save,runtime,{rng:new OriginalRandom(1)}),records=result.records.map(row=>row.map(v=>v===null?FORM:v));
 assert.equal(result.resetPlayer,-1,`Original reset case ${i}`);
 assert.deepEqual(records,test.expected.records,`Original records case ${i}`);

 assert.equal(runtime.auctionHighestBid,test.expected.d0,`Original d0 case ${i}`);
 assert.equal(runtime.auctionHighestBidder,test.expected.d4,`Original d4 case ${i}`);
}
console.log(`${cases.length} whole original auction turn comparisons passed (stubs only).`);
