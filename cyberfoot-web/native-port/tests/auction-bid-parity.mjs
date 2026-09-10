import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {auctionBid} from '../auction.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),signed=n=>n>=0x80000000?n-0x100000000:n;
const stops={resolved:0x5a47c5,next:0x5a4848,invalid:0x5a4959,unaffordable:0x5a4959};
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./auction-bid-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const career=bytes(test.career),clubs=bytes(test.clubs),players=bytes(test.players);
 const save={career,sections:[{name:'clubs',data:clubs,recordSize:760,count:clubs.length/760},{name:'players',data:players,recordSize:304,count:players.length/304}]};
 const runtime={auctionCurrentClub:test.current,auctionIndex:test.dc,auctionHighestBid:test.d0,auctionHighestBidder:test.d4,auctionBasePrice:test.base,auctionPlayer:test.player};
 const result=auctionBid(save,runtime,{text:test.text});
 assert.equal(stops[result.outcome],test.expected.stop,`Original outcome case ${i} (${result.outcome})`);
 assert.equal(signed(runtime.auctionHighestBid),signed(test.expected.d0),`Original highest case ${i}`);
 assert.equal(signed(runtime.auctionHighestBidder),signed(test.expected.d4),`Original bidder case ${i}`);
 assert.equal(signed(runtime.auctionIndex),signed(test.expected.dc),`Original index case ${i}`);
 assert.equal(signed(runtime.auctionCurrentClub),signed(test.expected.e0),`Original current case ${i}`);
 assert.deepEqual(runtime.auctionVisibility.map(row=>row.map(v=>v==='caption'?v:v===0?0:String(v))).map(row=>row.map(String)),test.expected.vis.map(row=>row.map(String)),`Original labels case ${i}`);
}
console.log(`${cases.length} whole original auction bid comparisons passed (UI stubs only).`);
