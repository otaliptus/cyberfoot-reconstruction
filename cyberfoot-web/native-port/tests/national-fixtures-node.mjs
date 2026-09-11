import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';
import {currentCareerDate} from '../calendar.mjs';
import {openCareer,commitCareerStats} from '../career-state.mjs';
import {OriginalRandom} from '../match-core.mjs';
import {nationalGroupClubs,nationalFixtureCount,selectNationalFixtures,playNationalRound} from '../national-fixtures.mjs';
const load=()=>readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const CLUBS=16,SEED=0x619e54;
function setupNationalSave(){
 const save=load(),career=view(save.career);
 career.setInt32(0x88,9,true);career.setInt32(0x62c,0,true);
 const clubs=[];
 for(let id=0;clubs.length<CLUBS;id++)if(record(save,'clubs',id)[0x39]===0)clubs.push(id);
 clubs.forEach((club,index)=>career.setInt32(0x4bc+index*4,club,true));
 for(const club of clubs)view(record(save,'clubs',club)).setInt32(0x60,-1,true);
 return {save,career,clubs};
}
async function nationalGroupRound(){
 const {save,career,clubs}=setupNationalSave();
 assert.deepEqual(nationalGroupClubs(save,9),[clubs.slice(0,4),clubs.slice(4,8),clubs.slice(8,12),clubs.slice(12,16)]);
 assert.equal(nationalFixtureCount(9,0),8);
 assert.equal(nationalFixtureCount(7,0),16);assert.equal(nationalFixtureCount(8,0),6);
 const preview=selectNationalFixtures(save,{competition:9,round:0});
 assert.equal(preview.fixtures.length,8);assert.deepEqual(preview.humanFixtureIds,[]);
 const appearances=preview.fixtures.flatMap(fixture=>fixture.clubs);
 assert.equal(new Set(appearances).size,CLUBS,'Every national side plays exactly once per group round');
 assert.ok(preview.fixtures.every(fixture=>Math.abs(clubs.indexOf(fixture.clubs[0])>>2)===Math.abs(clubs.indexOf(fixture.clubs[1])>>2)&&fixture.id>=1),'Fixtures stay inside their original groups');
 const state=openCareer(save,{currentDate:currentCareerDate(save)});
 let clock=2015;const rng=new OriginalRandom(SEED,()=>clock+=7919);
 const historySection=save.sections.find(s=>s.name==='records_0066b154'),historyBefore=historySection.count;
 const scheduledSection=save.sections.find(s=>s.name==='records_0066afa0'),scheduledBefore=Buffer.from(scheduledSection.data).toString('hex');
 const playedBefore=clubs.map(id=>view(record(save,'clubs',id)).getInt32(0xdc+9*4,true));
 const runtime={silent:true};let route=null;
 const {fixtures}=await playNationalRound(save,state,rng,{runtime,continueCompetition:async next=>{route=next;}});
 assert.equal(fixtures.length,8);
 for(const fixture of fixtures){
  const home=fixture.counters[0x48]??0,away=fixture.counters[0x4c]??0;
  assert.ok(Number.isInteger(home)&&home>=0&&Number.isInteger(away)&&away>=0,'Simulated national score persisted on the transient fixture');
  assert.equal(fixture.startingPlayers.flat().length,22,'Automatic engine snapshotted both national lineups');
 }
 assert.equal(route,'competition89');
 assert.equal(career.getInt32(0x62c,true),1,'National round advanced exactly as 00620858/00620fa4 do after history');
 const deltas=clubs.map((id,index)=>view(record(save,'clubs',id)).getInt32(0xdc+9*4,true)-playedBefore[index]);
 assert.ok(deltas.every(delta=>delta===1),'Every national side recorded exactly one played match in its competition-9 table');
 const points=clubs.map(id=>view(record(save,'clubs',id)).getInt32(0xb4+9*4,true)).reduce((sum,n)=>sum+n,0);
 assert.ok(points>=16&&points<=24,'Eight fixtures award 2-3 table points each');
 const goals=fixtures.reduce((sum,fixture)=>sum+(fixture.counters[0x48]??0)+(fixture.counters[0x4c]??0),0);
 const scored=clubs.map(id=>view(record(save,'clubs',id)).getInt32(0x154+9*4,true)).reduce((sum,n)=>sum+n,0);
 const conceded=clubs.map(id=>view(record(save,'clubs',id)).getInt32(0x17c+9*4,true)).reduce((sum,n)=>sum+n,0);
 assert.equal(scored,goals);assert.equal(conceded,goals);
 assert.equal(historySection.count,historyBefore+8,'One detailed history row per national fixture');
 const historyView=view(historySection.data);
 for(let i=historyBefore;i<historySection.count;i++){
  assert.equal(historyView.getInt32(i*600+0x30,true),9,'History competition follows career+0x88');
  assert.equal(historyView.getInt32(i*600+0x34,true),0,'History round follows career+0x62c before the increment');
  assert.equal(historyView.getInt32(i*600+0x3c,true),0,'History group is zero for competitions 7/8/9');
 }
 assert.equal(Buffer.from(scheduledSection.data).toString('hex'),scheduledBefore,'Group fixtures have no 66afa0 rows, so the domestic schedule is untouched');
 commitCareerStats(save,state);
 const bytes=writeSave(save);
 assert.deepEqual(writeSave(readSave(bytes)),bytes,'National round save round-trip');
 const replay=setupNationalSave(),replayState=openCareer(replay.save,{currentDate:currentCareerDate(replay.save)});
 let replayClock=2015;const replayRng=new OriginalRandom(SEED,()=>replayClock+=7919);
 await playNationalRound(replay.save,replayState,replayRng,{runtime:{silent:true},continueCompetition:async()=>{}});
 commitCareerStats(replay.save,replayState);
 assert.deepEqual(writeSave(replay.save),bytes,'National round is deterministic for seed 0x619e54');
 const knockout=setupNationalSave();
 knockout.career.setInt32(0x62c,4,true);
 const knockoutState=openCareer(knockout.save,{currentDate:currentCareerDate(knockout.save)});
 await assert.rejects(playNationalRound(knockout.save,knockoutState,new OriginalRandom(1),{runtime:{silent:true},continueCompetition:async()=>{}}),/knockout/);
 assert.throws(()=>selectNationalFixtures(knockout.save,{competition:3,round:0}),/7, 8 and 9/);
 return {fixtures:fixtures.length,history:historySection.count-historyBefore,points,goals,route,round:career.getInt32(0x62c,true)};
}
const summary=await nationalGroupRound();
console.log(`National fixtures: ${summary.fixtures} competition-9 group fixtures simulated through the generic automatic engine (${summary.goals} goals, ${summary.points} table points, +${summary.history} history rows), route ${summary.route}, round now ${summary.round}; replay identical, save round-trip passed.`);
