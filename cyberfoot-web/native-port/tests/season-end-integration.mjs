import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';import {seasonEndManagerMoves} from '../season-end.mjs';import {findLeagueConfiguration} from '../weekly-team.mjs';import {OriginalRandom} from '../match-core.mjs';
const load=()=>readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const prepare=()=>{const save=load(),c=v(save.career);c.setInt32(0x168,2,true);c.setInt32(0xc0,1,true);
 for(let i=0;i<10;i++){c.setInt32(0x14+i*4,i,true);record(save,'records_0066b718',i)[0x30]=1;const club=v(record(save,'clubs',i));club.setInt32(0x7c,1,true);club.setInt32(0x50,100,true);club.setInt32(0x1a8,0,true);}
 const leagues=save.sections.find(s=>s.name==='records_0066aca0'),row=record(save,leagues.name,0),data=new Uint8Array(leagues.data.length+660);data.set(leagues.data);new Uint8Array(data.buffer,leagues.data.length,660).set(row);
 v(new Uint8Array(data.buffer,leagues.data.length,660)).setInt32(0x140,29,true);leagues.data=data;leagues.count++;
 return save;};
const save=prepare(),recorded=[],rng=new OriginalRandom(0x5f96dc),moves=await seasonEndManagerMoves(save,{}, {rng,showMove:async move=>recorded.push(move)});
assert.equal(moves.length,recorded.length);assert.ok(moves.length>0,`Expected season-end moves, got ${moves.length}`);
assert.deepEqual(recorded,moves);
for(const move of moves){assert.equal(record(save,'records_0066b718',move.slot)[0x30],0);assert.ok(move.destination>=0);assert.ok(findLeagueConfiguration(save,v(record(save,'clubs',move.destination)).getInt32(0x3c,true))>=0);}
const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
const second=prepare();await seasonEndManagerMoves(second,{}, {rng:new OriginalRandom(0x5f96dc),showMove:async()=>{}});assert.deepEqual(writeSave(second),bytes);
const guarded=load(),guardedBytes=writeSave(guarded);await assert.rejects(seasonEndManagerMoves(guarded,{}, {}),/random generator/);await assert.rejects(seasonEndManagerMoves(guarded,{}, {rng:new OriginalRandom(1)}),/move host/);assert.deepEqual(writeSave(guarded),guardedBytes);
console.log(`Original career fixture: ${moves.length} season-end manager moves, slot flags cleared, deterministic replay, save round-trip and guards passed.`);
