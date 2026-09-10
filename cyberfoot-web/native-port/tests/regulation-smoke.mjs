// Integration fixture using real saved players and explicitly selected test
// lineups. This does not validate original lineup generation or season rules.
import fs from 'node:fs';import assert from 'node:assert/strict';
import {readSave,writeSave} from '../save-format.mjs';import {openCareer,commitCareerStats} from '../career-state.mjs';import {calculateLineup} from '../lineup.mjs';import {stepFixture} from '../fixture-step.mjs';import {recordCareerEvent} from '../career-stats.mjs';import {OriginalRandom} from '../match-core.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),state=openCareer(save,{currentDate:42000});state.automaticInteractions=true;
const clubs=[11,12];
const teams=clubs.map(clubId=>{
 const ids=Object.keys(state.players).map(Number).filter(id=>id>0&&state.players[id].clubId===clubId);assert.ok(ids.length>=18);
 const keeper=ids.find(id=>state.players[id].role===0)??ids[0],outfield=ids.filter(id=>id!==keeper),players=[...outfield.slice(0,10),keeper],bench=outfield.slice(10,17);
 for(const id of [...players,...bench])state.players[id].active=true;
 const lineup={players,bench,positions:[3,4,6,8,11,12,14,16,20,23,1],warning:false};calculateLineup(lineup,state);return lineup;
});
const fixture={id:0,competition:4,clubs,tick:0,zone:-1,side:-1,previousEvent:-1,substitutions:[3,3],endTick:190,counters:{}};
let clock=2015;const rng=new OriginalRandom(2015,()=>clock+=7919);let steps=0;
while(fixture.tick<fixture.endTick){stepFixture(fixture,teams,state,rng,recordCareerEvent);assert.ok(++steps<200);}
assert.ok(fixture.tick>=184&&fixture.tick<=190);assert.ok(state.events.length>0);
commitCareerStats(save,state);const reloaded=openCareer(readSave(writeSave(save)),{currentDate:42000});
assert.deepEqual(reloaded.scorers,state.scorers);assert.deepEqual(reloaded.playerSeasonStats,state.playerSeasonStats);
for(const team of teams)for(const id of team.players)if(id>0){assert.equal(reloaded.players[id].condition,state.players[id].condition);assert.equal(reloaded.players[id].skill,state.players[id].skill);}
console.log(JSON.stringify({scope:'regulation engine with test lineups; not complete-game parity',clubs:clubs.map(i=>state.clubs[i].name),ticks:steps,score:[fixture.counters[0x48]??0,fixture.counters[0x4c]??0],events:state.events.length,statisticsAndPlayerChangesSurviveSave:true}));
