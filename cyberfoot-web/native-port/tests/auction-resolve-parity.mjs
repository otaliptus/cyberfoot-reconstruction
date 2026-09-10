import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {auctionResolve} from '../auction.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),signed=n=>n>=0x80000000?n-0x100000000:n,FORM=0x141f000;
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./auction-resolve-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const save={career:bytes(test.career),sections:[{name:'clubs',data:bytes(test.clubs),recordSize:760,count:0},{name:'players',data:bytes(test.players),recordSize:304,count:0}]};
 save.sections[0].count=save.sections[0].data.length/760;save.sections[1].count=save.sections[1].data.length/304;
 const runtime={auctionPlayer:test.pid,auctionHighestBid:test.d0,auctionHighestBidder:test.d4,auctionFlag:test.e4,auctionBasePrice:test.base,auctionStartClub:test.ec,auctionCurrentClub:test.e0,auctionTicks:test.ticks,auctionValuation:test.valuation,auctionValueGate:test.gate,timerGate:test.timerGate};
 const rng=new OriginalRandom(test.seed),records=auctionResolve(save,runtime,{rng});
 const norm=row=>row.map((value,index)=>value===null?FORM:typeof value==='number'&&index>0?signed(value):value);
 assert.deepEqual(records.map(norm),test.expected.records.map(norm),`Original records case ${i}`);
 assert.equal(rng.state,test.expected.seed,`Original seed case ${i}`);
 assert.equal(runtime.auctionFlag,test.expected.e4,`Original flag case ${i}`);
 assert.equal(signed(runtime.auctionBasePrice),signed(test.expected.base),`Original base case ${i}`);
 assert.equal(signed(runtime.auctionHighestBid),signed(test.expected.d0),`Original highest case ${i}`);
 assert.equal(signed(runtime.auctionTicks),signed(test.expected.ticks),`Original ticks case ${i}`);
 const valueBytes=new Uint8Array(4);new DataView(valueBytes.buffer).setFloat32(0,Math.fround(runtime.auctionValuation),true);
 assert.equal(Buffer.from(valueBytes).toString('hex'),test.expected.valuation,`Original valuation case ${i}`);
}
console.log(`${cases.length} whole original auction resolution comparisons passed (UI/finalization stubs only).`);
