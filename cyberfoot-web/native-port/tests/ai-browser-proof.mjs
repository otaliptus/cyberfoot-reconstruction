import {verifyAISelection} from './ai-selection-proof.mjs';import {verifyAILineup} from './ai-lineup-proof.mjs';
import {readSave,writeSave} from '../save-format.mjs';import {openCareer,commitCareerStats} from '../career-state.mjs';
import {careerAgenda} from '../schedule.mjs';import {generateAILineup} from '../ai-lineup.mjs';import {OriginalRandom} from '../match-core.mjs';import {stepFixture} from '../fixture-step.mjs';import {recordCareerEvent} from '../career-stats.mjs';
export function checkSavedCareerAI(bytes){
 const save=readSave(bytes),agenda=careerAgenda(save),next=agenda.fixtures[agenda.fixtureId];
 const state=openCareer(save,{currentDate:agenda.nextDate});state.competitionType=next.competition;state.automaticInteractions=true;
 let clock=2015;const rng=new OriginalRandom(2015,()=>clock+=7919);
 // Explicit integration test: use AI selection for both teams, including the
 // human club. The eventual player-facing flow must provide human selection.
 const teams=next.clubs.map(id=>generateAILineup(state,id,rng).lineup);
 for(const team of teams){
  const assigned=[...team.players,...team.bench].filter(id=>id>0);
  if(new Set(assigned).size!==assigned.length)throw Error('Duplicate AI selection');
  if(team.players.some(id=>id<=0))throw Error('Saved club has an unfilled starting position');
 }
 const initialPlayers=teams.map(t=>[...t.players]),fixture={id:agenda.fixtureId,competition:next.competition,clubs:next.clubs,tick:0,zone:-1,side:-1,previousEvent:-1,substitutions:[3,3],endTick:190,counters:{}};
 let steps=0;
 while(fixture.tick<fixture.endTick){stepFixture(fixture,teams,state,rng,recordCareerEvent);if(++steps>200)throw Error('Regulation failed to end');}
 commitCareerStats(save,state);const reloaded=openCareer(readSave(writeSave(save)));
 for(const id of Object.keys(state.players))for(const key of ['specialty','condition','active','selectedFlag','eligibilityFlag','field2c'])if(state.players[id][key]!==reloaded.players[id][key])throw Error(`Player save mismatch: ${id} ${key}`);
 if(JSON.stringify(state.scorers)!==JSON.stringify(reloaded.scorers))throw Error('Scorers save mismatch');
 return {scope:'saved-career integration with AI controlling both teams; not original whole-match parity',clubs:next.clubs.map(id=>state.clubs[id].name),initialPlayers,ticks:steps,score:[fixture.counters[0x48]??0,fixture.counters[0x4c]??0],playerChangesSurviveSave:true};
}
export async function checkAI(){
 const [selection,sort,lineups]=await Promise.all(['ai-selection-vectors.json','ai-sort-vectors.json','ai-lineup-vectors.json'].map(n=>fetch(new URL(n,import.meta.url)).then(r=>r.json())));
 const a=verifyAISelection(selection,sort),b=verifyAILineup(lineups);
 if(a.failures.length||b.failures.length)throw Error(JSON.stringify([...a.failures,...b.failures].slice(0,2)));
 const integration=checkSavedCareerAI(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()));
 return {cases:a.cases+b.cases,failures:0,integration};
}
