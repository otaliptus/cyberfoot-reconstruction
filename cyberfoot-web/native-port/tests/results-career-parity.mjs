import assert from 'node:assert/strict';import fs from 'node:fs';
import {continueResultsCareer,continueLeagueResults,resetResultsPlayers} from '../results-career-continuation.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./results-career-vectors.json',import.meta.url))),bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
for(const test of cases){
 const save={career:bytes(test.career),sections:[]},runtime={nationalAssignmentsActive:test.nationalAssignmentsActive},calls=[];
 const names=['dateEffects','continentalPostRound','nationalPostRound','competitionFiveEligible','selectHumanParticipation','restoreNationalAssignments','resetPlayers','refreshReferees','nationalSetup','playerValue','seasonEnd','leagueNext','cupNext','nationalNext','otherNext','managerOffers','unemployedOffers','managerChanges','aiTransfer','humanNext','automaticNext'];
 const effects=Object.fromEntries(names.map(name=>[name,async(...args)=>{calls.push([name,...args]);if(name==='competitionFiveEligible')return test.eligible;if(name==='playerValue')return test.values[args[0]];if(name==='selectHumanParticipation')runtime.humanParticipation=test.human;}]));
 if(test.kind==='league'){
  const rng=new OriginalRandom(test.seed);await continueLeagueResults(save,runtime,rng,effects);assert.deepEqual({calls,seed:rng.state},test.expected);continue;
 }
 const players=bytes(test.players);save.sections=[{name:'players',data:players,count:players.length/304,recordSize:304},{name:'records_0066b0d4',data:new Uint8Array(),count:0,recordSize:24}];
 const c=new DataView(save.career.buffer),day=c.getInt32(0x16c,true),calendar=Array.from({length:366},(_,i)=>({dayIndex:i+1,date:42000+i,competition:-1}));calendar[day].competition=test.first;if(test.first>=1000)calendar[day+1].competition=test.second;
 const temporary={lineups:[1,2],matchTeams:[1,2,3]};effects.resetPlayers=async()=>{calls.push(['resetPlayers']);resetResultsPlayers(save,temporary);};
 await continueResultsCareer(save,runtime,effects,calendar);
 assert.equal(runtime.completedMatchDay,day);
 assert.equal(runtime.completedMatchDate,calendar[day-1].date);
 assert.deepEqual({career:hex(save.career),players:hex(players),nextCompetition:runtime.nextCompetition,humanParticipation:runtime.humanParticipation,calls,lineups:temporary.lineups.length,matchTeams:temporary.matchTeams.length},test.expected);
}
console.log(`${cases.length} original results-career controller comparisons passed (subcontroller adapters)`);
