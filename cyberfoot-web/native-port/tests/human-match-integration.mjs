import {readSave,writeSave} from '../save-format.mjs';import {openCareer,commitCareerStats} from '../career-state.mjs';import {careerAgenda} from '../schedule.mjs';import {buildLineupRoster} from '../lineup-roster.mjs';import {autoSelectScreenLineup} from '../lineup-screen.mjs';import {commitHumanLineup} from '../human-lineup-commit.mjs';import {generateAILineup} from '../ai-lineup.mjs';import {randomizeAITactics} from '../tactics.mjs';import {OriginalRandom} from '../match-core.mjs';import {stepFixture} from '../fixture-step.mjs';import {recordCareerEvent} from '../career-stats.mjs';
export function checkHumanMatch(bytes){
 const save=readSave(bytes),agenda=careerAgenda(save),next=agenda.fixtures[agenda.fixtureId],clubId=11,state=openCareer(save,{currentDate:agenda.nextDate});state.competitionType=next.competition;state.automaticInteractions=true;
 let clock=2015;const rng=new OriginalRandom(2015,()=>clock+=7919),rows=buildLineupRoster(state,clubId),{slots}=autoSelectScreenLineup(state,rows,4,save,clubId);
 const committed=commitHumanLineup(save,state,rows,slots,{clubId,remember:true,rng});if(!committed.accepted)throw Error('Saved-career starting team unexpectedly incomplete');
 const teams=next.clubs.map(id=>{if(id===clubId)return committed.lineup;const team=generateAILineup(state,id,rng).lineup;randomizeAITactics(state.clubs[id],rng);return team;});
 const fixture={id:agenda.fixtureId,competition:next.competition,clubs:next.clubs,tick:0,zone:-1,side:-1,previousEvent:-1,substitutions:[3,3],endTick:190,counters:{}};let steps=0;
 while(fixture.tick<fixture.endTick){stepFixture(fixture,teams,state,rng,recordCareerEvent);if(++steps>200)throw Error('Regulation failed to terminate');}
 commitCareerStats(save,state);const reloaded=openCareer(readSave(writeSave(save)));
 for(const p of Object.keys(state.players))for(const field of ['condition','active','selectedFlag','unavailableFlag','fatigueComplaint','morale','field50'])if(reloaded.players[p][field]!==state.players[p][field])throw Error('Player commit/match save mismatch');
 return {scope:'native human commit to regulation with automatic test decisions; not original whole-match parity or career finalization',clubs:next.clubs.map(id=>state.clubs[id].name),ticks:steps,score:[fixture.counters[0x48]??0,fixture.counters[0x4c]??0],commitAndMatchPlayerChangesSurviveReload:true};
}
