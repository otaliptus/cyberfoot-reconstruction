import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';
import {openCareer} from '../career-state.mjs';
import {careerAgenda,careerSchedule} from '../schedule.mjs';
import {OriginalRandom} from '../match-core.mjs';
import {prepareScheduledMatches,initializeWatchedKickoff} from '../match-preparation.mjs';
import {generateAILineup} from '../ai-lineup.mjs';
import {randomizeAITactics} from '../tactics.mjs';
import {recordCareerEvent} from '../career-stats.mjs';
import {runAutomaticMatches} from '../automatic-matches.mjs';
import {finalizeMatchBatch} from '../match-finalization.mjs';
import {continueDomesticCompetition} from '../domestic-competition-continuation.mjs';
import {settleAutomaticDecider} from '../knockout-decider.mjs';
import {finalizeCupChampion} from '../champion-finalization.mjs';
import {findKnockoutRound} from '../knockout-progress.mjs';
import {selectNationalPlayers} from '../national-setup.mjs';
import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import {continueResultsCareer} from '../results-career-continuation.mjs';
import {assignScreens,automaticNextScreens} from '../route-screens.mjs';
const load=()=>readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url),'utf8'));
async function cupRound(){
 const save=load(),career=view(save.career),calendar=careerSchedule(save);
 career.setInt32(0x88,2,true);career.setInt32(0xc0,1,true);career.setInt32(0x168,4,true);career.setInt32(0x6c8,1,true);
 const day=calendar.findIndex(row=>row.date===42137)+1;assert.ok(day>0,'Original cup second-leg date missing');career.setInt32(0x16c,day,true);
 const state=openCareer(save,{currentDate:42137});state.automaticInteractions=true;let clock=2015;const rng=new OriginalRandom(0x6225c8,()=>clock+=7919);
 const runtime={subgroup:0,silent:false,preferredLeague:-1};
 const selected=prepareScheduledMatches(save,{competitionType:2,subgroup:0,currentDate:42137},rng,runtime);
 assert.equal(selected.fixtures.length,16,'Original cup second-leg batch size');
 const teams=new Map();
 for(const fixture of selected.fixtures)for(const id of fixture.clubs)if(!teams.has(id)){teams.set(id,generateAILineup(state,id,rng).lineup);randomizeAITactics(state.clubs[id],rng);}
 const teamsFor=f=>f.clubs.map(id=>teams.get(id));
 initializeWatchedKickoff(save,selected.fixtures,rng,runtime);
 let closed=0;const seen=[];
 await runAutomaticMatches({fixtures:selected.fixtures,teamsFor,state,rng,recordEvent:recordCareerEvent,runtime,prepare:async()=>{},finalize:async()=>{
  const leagueMetadataId=view(record(save,'records_0066b6ac',2)).getInt32(4,true);
  await finalizeMatchBatch(save,selected.fixtures,state,rng,{runtime,teamsFor,historyContext:{competitionGroupId:0,subgroupId:0,leagueMetadataId},present:()=>{},knockoutOptions:{decide:async id=>settleAutomaticDecider(save,id,selected.fixtures,rng).winner,champion:async(winner,fixtureId)=>finalizeCupChampion(save,winner,fixtureId,{activeSubgroup:0})},continueCompetition:async route=>{seen.push(route);assert.equal(route,'batch');await continueDomesticCompetition(save,runtime,{close:async()=>{closed++;}});}});
 }});
 assert.equal(closed,1);assert.deepEqual(seen,['batch']);
 assert.equal(career.getInt32(0x110,true),2,'Cup round advances after the completed second legs');
 assert.equal(career.getInt32(0x118,true),1,'Cup leg resets for the next round');
 const nextRound=findKnockoutRound(save,0,2,2);assert.ok(nextRound>=0,'Cup next-round block exists');
 assert.ok(view(record(save,'records_0066afa0',nextRound)).getInt32(0,true)>=0,'Cup next-round pairing filled by the native knockout controller');
 const routeViews=[];
 const managerDialogs={humanDismissal:async()=>{},showChanges:async()=>{},showOffer:async()=>{},showMove:async()=>{},
  humanNext:async()=>{routeViews.push(...assignScreens(save,runtime,language,{state,date:runtime.completedMatchDate}));},
  automaticNext:async()=>{routeViews.push(...automaticNextScreens(save,runtime,language,{state,subgroup:0,currentDate:runtime.completedMatchDate}));}};
 const effects=nativeResultsCareerEffects(save,runtime,{rng,temporary:{lineups:[],matchTeams:[]},calendar,managerDialogs});
 await continueResultsCareer(save,runtime,effects,calendar);
 assert.equal(runtime.completedMatchDate,42137);
 assert.ok(routeViews.length>0,'Cup route presented a next screen');
 assert.ok(routeViews.some(screen=>screen.form==='Form13'||screen.form==='Form26'),'Cup route screen uses the verified hub/table view models');
 const agenda=careerAgenda(save);assert.ok(Number.isFinite(agenda.nextDate)&&agenda.nextDay>day,'Cup route produced a next agenda');
 const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes,'Cup route save round-trip');
 return {day,nextDay:agenda.nextDay,round:career.getInt32(0x110,true)};
}
async function nationalRound(){
 const save=load(),career=view(save.career);
 career.setInt32(0x88,3,true);career.setInt32(0xc0,1,true);career.setInt32(0x168,4,true);career.setInt32(0x6c8,1,true);
 career.setInt32(0x700,0,true);career.setInt32(0x704,1,true);career.setUint8(0x708,0);career.setUint8(0x181,1);
 career.setInt32(0x5fc,2,true);
 for(let i=0;i<2;i++){
  const managerClub=42+i,nationalClub=42+i;
  career.setInt32(0x604+i*4,managerClub,true);career.setInt32(0x600+(i+1)*4,nationalClub,true);
  const club=view(record(save,'clubs',managerClub));club.setInt32(0x3c,3,true);club.setUint8(0x215,1);
 }
 for(let i=0;i<12;i++){career.setInt32(0x4bc+i*4,44+i,true);view(record(save,'clubs',44+i)).setInt32(0x3c,3,true);}
 const calendar=careerSchedule(save),nationalDay=calendar.findIndex(row=>row.competition===8)+1;
 assert.ok(nationalDay>1,'National competition date generated for 2015');
 career.setInt32(0x16c,nationalDay-1,true);
 const state=openCareer(save,{currentDate:calendar[nationalDay-2].date});let clock=2015;const rng=new OriginalRandom(0x5f3380,()=>clock+=7919);
 const runtime={nationalManagerCount:2,nationalAssignmentsActive:false},routeViews=[];
 const managerDialogs={humanDismissal:async()=>{},showChanges:async()=>{},showOffer:async()=>{},showMove:async()=>{},
  humanNext:async()=>{
   routeViews.push(...assignScreens(save,runtime,language,{state,date:runtime.completedMatchDate}));
   assert.equal(career.getInt32(0x708,true),1,'National manager assignment gate opened');
   for(const candidate of runtime.routeAssignments)if(candidate.eligible)selectNationalPlayers(save,candidate.country,candidate.nationalClubId,{rng});
  },
  automaticNext:async()=>{routeViews.push(...automaticNextScreens(save,runtime,language,{state,subgroup:0,currentDate:runtime.completedMatchDate}));}};
 const effects=nativeResultsCareerEffects(save,runtime,{rng,temporary:{lineups:[],matchTeams:[]},calendar,managerDialogs});
 await continueResultsCareer(save,runtime,effects,calendar);
 assert.equal(career.getInt32(0x700,true),1,'National setup completed');
 assert.ok(routeViews.some(screen=>screen.form==='Form77'&&screen.candidates.length>0),'National assignment screen built from the verified candidate scan');assert.equal(routeViews.find(screen=>screen.form==='Form77')?.properties.bt2.Enabled,true,'National assignment can continue from Form77');
 assert.ok(routeViews.some(screen=>screen.form==='Form75'),'National hub screen built from the national squad');
 assert.ok(routeViews.every(screen=>screen.properties&&Object.keys(screen.properties).length>0),'National screens carry language captions');
 assert.ok(save.sections.find(s=>s.name==='records_0066b544').count>=25,'National call-up assignments recorded');
 const agenda=careerAgenda(save);assert.ok(Number.isFinite(agenda.nextDate),'National route produced a next agenda');
 const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes,'National route save round-trip');
 return {nationalDay,nextDay:agenda.nextDay,assignments:save.sections.find(s=>s.name==='records_0066b544').count};
}
const cup=await cupRound(),national=await nationalRound();
console.log(`Route screens: cup round ${cup.day}->${cup.nextDay} advanced to cup round ${cup.round} through native batch/knockout controllers; national setup and assignment produced ${national.assignments} call-ups with next agenda ${national.nextDay}.`);
