import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {readSave,writeSave} from '../save-format.mjs';import {continueDomesticCompetition} from '../domestic-competition-continuation.mjs';
import {developRoundPlayers} from '../player-development.mjs';
const bytes=readFileSync(new URL('./original-career.s15',import.meta.url)),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
for(const [round,leg] of [[1,1],[9,1],[9,2]]){
 const save=readSave(Uint8Array.from(bytes)),expected=readSave(Uint8Array.from(bytes)),career=view(save.career),copy=view(expected.career);
 for(const c of [career,copy]){c.setInt32(0x88,1,true);c.setInt32(0x4c,round,true);c.setInt32(0x50,leg,true);}
 developRoundPlayers(expected);
 const count=save.sections.find(s=>s.name==='records_0066aca0').count,runtime={subgroup:count-1,preferredLeague:0},calls=[];
 await continueDomesticCompetition(save,runtime,{close(){calls.push({round:career.getInt32(0x4c,true),leg:career.getInt32(0x50,true)});}});
 assert.equal(runtime.subgroup,count);assert.equal(calls.length,1);
 assert.deepEqual(save.sections.find(s=>s.name==='players').data,expected.sections.find(s=>s.name==='players').data);
 assert.equal(calls[0].round,round===9&&leg===1?1:round+1);assert.equal(calls[0].leg,round===9?2:leg);assert.equal(!!runtime.leagueFinished,round===9&&leg===2);
 const loaded=readSave(writeSave(save));assert.deepEqual(loaded.sections.find(s=>s.name==='players').data,save.sections.find(s=>s.name==='players').data);
}
console.log('Domestic completion: player development, round/leg rollover, season-finished flag, and save persistence passed.');

const first=readSave(bytes),second=readSave(bytes),original=bytes[4+0x4c];first.career[0x4c]^=255;assert.equal(second.career[0x4c],original);assert.equal(bytes[4+0x4c],original);
