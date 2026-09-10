import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {selectAuctionLot} from '../auction.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),signed=n=>n>=0x80000000?n-0x100000000:n;
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./auction-lot-vectors.json.gz',import.meta.url))));
for(const [i,test] of cases.entries()){
 const career=bytes(test.career),clubs=bytes(test.clubs),players=bytes(test.players),leagues=bytes(test.leagues);
 const save={career,sections:[
  {name:'clubs',data:clubs,recordSize:760,count:clubs.length/760},
  {name:'players',data:players,recordSize:304,count:players.length/304},
  {name:'records_0066aca0',data:leagues,recordSize:660,count:leagues.length/660}
 ]};
 const runtime=test.preset>=0?{auctionPlayer:test.preset}:{},rng=new OriginalRandom(test.seed);
 selectAuctionLot(save,runtime,{rng,previousClub:test.previous});
 assert.equal(runtime.auctionPlayer??test.preset,signed(test.expected.player),`Original player case ${i}`);
 assert.equal(runtime.auctionSellerClub,signed(test.expected.seller),`Original seller case ${i}`);
 assert.equal(runtime.auctionSecondClub,signed(test.expected.second),`Original second case ${i}`);
 assert.equal(runtime.auctionStartClub,signed(test.expected.start),`Original start case ${i}`);
 assert.equal(rng.state,test.expected.seed,`Original seed case ${i}`);
}
console.log(`${cases.length} whole original auction-lot selection comparisons passed (UI stubs only).`);
