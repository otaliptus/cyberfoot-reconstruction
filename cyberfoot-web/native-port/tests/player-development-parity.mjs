import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {developSeniorPlayer,declineOlderPlayer,developYouthPlayer,developRoundPlayers} from '../player-development.mjs';
const vectors=JSON.parse(readFileSync(new URL('./player-development-vectors.json',import.meta.url))),methods={senior:developSeniorPlayer,older:declineOlderPlayer,youth:developYouthPlayer,round:developRoundPlayers};
for(const [index,t] of vectors.entries()){
 const career=new Uint8Array(1888),c=new DataView(career.buffer),players=Uint8Array.from(Buffer.from(t.players,'hex')),clubs=Uint8Array.from(Buffer.from(t.clubs,'hex'));
 c.setInt32(0x168,t.mode,true);c.setUint8(0x170,t.option);c.setInt32(0x88,t.competition,true);c.setInt32(0x3c,t.counts[0],true);c.setInt32(0x40,t.counts[1],true);
 const save={career,sections:[{name:'players',data:players,count:players.length/304,recordSize:304},{name:'clubs',data:clubs,count:clubs.length/760,recordSize:760}]};
 if(t.kind==='round')methods.round(save);else methods[t.kind](save,0);
 const expected=Buffer.from(t.expected,'hex');for(let offset=0;offset<players.length;offset++)assert.equal(players[offset],expected[offset],`case ${index} ${t.kind}, player ${Math.floor(offset/304)}, offset ${(offset%304).toString(16)}`);
}
console.log(`Original player development: ${vectors.length} whole helper/round cases passed.`);
