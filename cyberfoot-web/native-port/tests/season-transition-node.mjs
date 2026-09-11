import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';
import {careerAgenda,careerSchedule} from '../schedule.mjs';
import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import {continueResultsCareer} from '../results-career-continuation.mjs';
import {findLeagueConfiguration} from '../weekly-team.mjs';
import {OriginalRandom} from '../match-core.mjs';
import {applySeasonRotation} from '../season-rotation.mjs';
import {advanceCareerSeason,nextHumanFixtureDay,seasonTransitionView} from '../season-transition.mjs';
const load=()=>readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url)));
// Real career: force the season boundary, then run the native continuation settlement.
const save=load(),c=v(save.career),fixtures=save.sections.find(s=>s.name==='records_0066afa0'),fixtureView=v(fixtures.data),baselinePairs=Array.from({length:360},(_,i)=>[fixtureView.getInt32(i*72,true),fixtureView.getInt32(i*72+4,true)]),calendar=careerSchedule(save);
let last=0;for(const row of calendar)if(row.competition>0)last=row.dayIndex;
c.setInt32(0x88,1,true);c.setInt32(0xc0,1,true);c.setInt32(0x6c8,1,true);c.setInt32(0x16c,last,true);
const runtime={nationalManagerCount:0,nationalAssignmentsActive:false},records=[];
const effects=nativeResultsCareerEffects(save,runtime,{rng:new OriginalRandom(0x5f9388),temporary:{lineups:[],matchTeams:[]},calendar,managerDialogs:{humanDismissal:async()=>{},showChanges:async()=>{},showOffer:async()=>{},humanNext:async()=>{},automaticNext:async()=>{},showMove:async move=>records.push(move)}});
const baseSeasonEnd=effects.seasonEnd;effects.seasonEnd=async()=>{records.push({settlement:true});return baseSeasonEnd();};
await continueResultsCareer(save,runtime,effects,calendar);
assert.equal(runtime.nextCompetition,-1,'season end must report the original -1 competition');
assert.equal(c.getInt32(0x16c,true),366,'the original calendar cursor must end the season');
assert.equal(records.filter(entry=>entry.settlement).length,1,'the native seasonEnd settlement must run once');
// Forced move fixture (mode2 plus a second league, the same pattern as season-end-integration): the host records every cleared slot.
const moveSave=load(),mc=v(moveSave.career);
mc.setInt32(0x168,2,true);mc.setInt32(0xc0,1,true);mc.setInt32(0x88,1,true);mc.setInt32(0x6c8,1,true);
for(let i=0;i<10;i++){mc.setInt32(0x14+i*4,i,true);record(moveSave,'records_0066b718',i)[0x30]=1;const club=v(record(moveSave,'clubs',i));club.setInt32(0x7c,1,true);club.setInt32(0x50,100,true);club.setInt32(0x1a8,0,true);}
const leagues=moveSave.sections.find(s=>s.name==='records_0066aca0'),row=record(moveSave,leagues.name,0),grownLeague=new Uint8Array(leagues.data.length+660);grownLeague.set(leagues.data);new Uint8Array(grownLeague.buffer,leagues.data.length,660).set(row);v(new Uint8Array(grownLeague.buffer,leagues.data.length,660)).setInt32(0x140,29,true);leagues.data=grownLeague;leagues.count++;
const moveCalendar=careerSchedule(moveSave);let moveLast=0;for(const row of moveCalendar)if(row.competition>0)moveLast=row.dayIndex;mc.setInt32(0x16c,moveLast,true);
const moveRuntime={nationalManagerCount:0,nationalAssignmentsActive:false},moves=[];
const moveEffects=nativeResultsCareerEffects(moveSave,moveRuntime,{rng:new OriginalRandom(0x5f96dc),temporary:{lineups:[],matchTeams:[]},calendar:moveCalendar,managerDialogs:{humanDismissal:async()=>{},showChanges:async()=>{},showOffer:async()=>{},humanNext:async()=>{},automaticNext:async()=>{},showMove:async move=>moves.push(move)}});
await continueResultsCareer(moveSave,moveRuntime,moveEffects,moveCalendar);
assert.ok(moves.length>0,`Expected season-end manager moves, got ${moves.length}`);
for(const move of moves){assert.equal(record(moveSave,'records_0066b718',move.slot)[0x30],0);assert.ok(move.destination>=0);assert.ok(findLeagueConfiguration(moveSave,v(record(moveSave,'clubs',move.destination)).getInt32(0x3c,true))>=0);}
// Player-facing transition: native summary, then the native season advance and the next season's first fixture.
const summary=seasonTransitionView(save,{language,crestAssets:{}});
assert.ok(summary.summary.champion&&summary.summary.champion.points>=0,'champion from native standings');
assert.ok(summary.summary.promoted.length>0&&summary.summary.relegated.length>0,'promoted/relegated from native highlights');
assert.ok(summary.summary.human&&summary.summary.human.outcome,'human club outcome required');
const before=fixtures.count,leagueDaysBefore=calendar.filter(r=>r.competition===1).length;
const result=advanceCareerSeason(save);
assert.equal(result.season,2);assert.equal(c.getInt32(0xc0,true),2);
assert.equal(fixtures.count-before,360,'the league fixture records must be appended');
assert.equal(result.fixtures.length,360);
const leagueDays=result.calendar.filter(r=>r.competition===1);assert.equal(leagueDays.length,leagueDaysBefore);
for(const fixtureRow of result.fixtures)assert.ok(leagueDays.some(day=>day.date===fixtureRow.date),'every new fixture must use a native calendar day');
const firstDay=nextHumanFixtureDay(save,result.calendar,c.getInt32(8,true),1);assert.ok(firstDay>0,'next season human fixture required');
c.setInt32(0x16c,firstDay-1,true);
const agenda=careerAgenda(save);assert.ok(agenda.fixtureId>=0,'career agenda must open the new season');assert.equal(agenda.fixtures[agenda.fixtureId].competition,1);
const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
// Rotated divisions must own the regenerated fixtures, not the ended season's
// club IDs. This catches stale-pairing regressions while preserving the native
// day/interleaved-divisions ordering checked above.
const rotated=load(),rotationRng=new OriginalRandom(0x5f9388);
applySeasonRotation(rotated,0,{rng:rotationRng});
const rotatedResult=advanceCareerSeason(rotated),rotatedLeague=record(rotated,'records_0066aca0',0),rotatedLeagueView=v(rotatedLeague),rotatedDivisions=[];
for(let division=1;division<=4;division++)rotatedDivisions.push(new Set(Array.from({length:10},(_,i)=>rotatedLeagueView.getInt32(division*80-0x54+(i+1)*4,true))));
assert.ok(rotatedResult.fixtures.some((row,i)=>row.home!==baselinePairs[i][0]||row.away!==baselinePairs[i][1]),'rotated fixture generation must use the new division membership');
for(const fixtureRow of rotatedResult.fixtures)assert.ok(rotatedDivisions.some(teams=>teams.has(fixtureRow.home)&&teams.has(fixtureRow.away)),'rotated fixture must stay within one division');
console.log(`Original career season transition: settlement ran, ${moves.length} manager moves cleared, season2 calendar (${leagueDays.length} league days) and ${result.fixtures.length} fixtures advanced, first human fixture #${agenda.fixtureId}; save round-trip passed.`);
