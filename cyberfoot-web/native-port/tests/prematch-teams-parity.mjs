import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {prepareDomesticTeams} from '../prematch-teams.mjs';
const vectors=JSON.parse(readFileSync(new URL('./prematch-teams-vectors.json',import.meta.url)));
for(const test of vectors){
 const clubs=Uint8Array.from(Buffer.from(test.clubs,'hex')),players=Uint8Array.from(Buffer.from(test.players,'hex')),career=new Uint8Array(1888),c=new DataView(career.buffer);
 c.setInt32(0x3c,clubs.length/760,true);c.setInt32(0x88,test.competition,true);
 const save={career,sections:[{name:'clubs',data:clubs,count:clubs.length/760,recordSize:760},{name:'players',data:players,count:players.length/304,recordSize:304}]},calls=[];
 const state={lineups:Array(test.initial).fill(null),clubs:Array.from({length:clubs.length/760},(_,id)=>({id}))};
 const result=prepareDomesticTeams(save,state,null,{generate:(_,id)=>calls.push(['lineup',id]),tactics:club=>calls.push(['tactics',club.id])});
 assert.deepEqual(calls,test.expected.calls);assert.equal(result.initialLineupCount,test.expected.initial);assert.equal(Buffer.from(players).toString('hex'),test.expected.players);
}
console.log(`Original domestic prematch dispatch and player cleanup: ${vectors.length} cases passed.`);
