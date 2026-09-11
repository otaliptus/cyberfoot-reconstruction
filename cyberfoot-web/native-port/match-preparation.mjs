import {record} from './save-format.mjs';import {findCompetitionMetadata} from './champion-records.mjs';
import {shortString} from './save-format.mjs';import {prepareFixtureAttendance} from './match-attendance.mjs';import {findLeagueConfiguration} from './weekly-team.mjs';import {findKnockoutRound} from './knockout-progress.mjs';import {countryGroups} from './score-tables.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original 006104c0 business fields; name/colour widgets are handled by the match screen. */
export function initializeScheduledFixture(save,savedFixtureId,id,competitionType){
 const scheduled=view(record(save,'records_0066afa0',savedFixtureId)),clubs=[scheduled.getInt32(0,true),scheduled.getInt32(4,true)],home=view(record(save,'clubs',clubs[0])),away=view(record(save,'clubs',clubs[1]));
 return {id,savedFixtureId,competition:findCompetitionMetadata(save,{competition:competitionType,country:home.getInt32(0x3c,true),division:home.getInt32(0x7c,true),group:home.getInt32(0x80,true),subgroup:home.getInt32(0x40,true)}),clubs,lineupIds:[home.getInt32(0x60,true),away.getInt32(0x60,true)],field4:home.getInt32(0x7c,true),substitutions:[3,3],tick:0,zone:0,side:0,previousEvent:0,endTick:0,counters:{},field170:0,field174:0,field178:0};
}
/** Schedule-selection block 006133b1..006135a9 within 612a00. */
export function selectMatchFixtures(save,{competitionType,subgroup,currentDate}){
 const fixtures=[],humanFixtureIds=[];let alternateRound=1;
  if(![0,1,2,4,6].includes(competitionType))return {fixtures,humanFixtureIds,alternateRound};
 const s=save.sections.find(s=>s.name==='records_0066afa0'),v=view(s.data);
 for(let i=0;i<s.count;i++)if(v.getInt32(i*72+0x38,true)===subgroup&&v.getInt32(i*72+0x18,true)===competitionType&&v.getFloat64(i*72+0x30,true)===currentDate&&v.getUint8(i*72+0x2c)===0){
  const fixture=initializeScheduledFixture(save,i,fixtures.length+1,competitionType);fixtures.push(fixture);
  if((competitionType===4||competitionType===6)&&subgroup===1)alternateRound=v.getInt32(i*72+0x1c,true);
  if(fixture.clubs.some(id=>view(record(save,'clubs',id)).getUint8(0x39)!==0))humanFixtureIds.push(fixture.id);
 }
 return {fixtures,humanFixtureIds,alternateRound};
}
/** 657070 / 6574c4 / 657538: human participation controls background playback speed. */
export function hasHumanMatchParticipation(save,competitionType,region){
 const career=view(save.career),count=career.getInt32(0x13c,true);
 if(competitionType===1)return count!==0;
 for(let i=0;i<count;i++){
  const id=career.getInt32(0x140+i*4,true);if(id<0)continue;
  const club=view(record(save,'clubs',id));
  if(competitionType===2&&club.getUint8(0x214)){
   const stage=career.getInt32(0x110,true);
   if(stage>1)return true;
   if((stage===0||stage===1)&&findKnockoutRound(save,findLeagueConfiguration(save,club.getInt32(0x3c,true)),2,stage)>=0)return true;
  }
  if((competitionType===4||competitionType===6)&&club.getUint8(competitionType===4?0x217:0x218)&&(countryGroups[club.getInt32(0x3c,true)]??0)===region)return true;
 }
 return false;
}
/** Business portion of 612a00. Lineups must already exist; rendering consumes the returned fixtures. */
export function prepareScheduledMatches(save,context,rng,runtime={}){
 const career=view(save.career),normal=career.getInt32(0xc8,true),background=career.getInt32(0xcc,true),kind=context.competitionType,subgroup=context.subgroup;
 runtime.matchTimerInterval=normal;runtime.batchTimerInterval=normal;
 if(kind===1||kind===2)runtime.batchTimerInterval=hasHumanMatchParticipation(save,kind)?normal:background;
 if((kind===4||kind===6)&&(subgroup===1||subgroup===2))runtime.batchTimerInterval=hasHumanMatchParticipation(save,kind,subgroup===1?1:0)?normal:background;
 const selected=selectMatchFixtures(save,context);runtime.eventCursor=selected.humanFixtureIds.length;runtime.humanFixtures=Array(10).fill(0);selected.humanFixtureIds.forEach((id,i)=>runtime.humanFixtures[i]=id);runtime.alternateRound=selected.alternateRound;runtime.fixtureCount=selected.fixtures.length;
 for(const fixture of selected.fixtures){
  fixture.stadium=shortString(record(save,'clubs',fixture.clubs[0]),0x1d0,35);fixture.flag40=false;fixture.flag41=false;
   prepareFixtureAttendance(save,fixture,rng,{...context,competitionType:kind===0?1:kind});
 }
 return selected;
}
/** Original watched kickoff 618d28; endTick is overwritten by the match engine at tick 180. */
export function initializeWatchedKickoff(save,fixtures,rng,runtime){
 const career=view(save.career);
 fixtures.forEach((fixture,i)=>{fixture.field20=career.getInt32(0x70c+i*4,true);fixture.field180=rng.below(3);fixture.endTick=rng.below(4);});
 if(career.getUint8(0x6c8))runtime.batchTimerInterval=1;
 runtime.batchTimerEnabled=true;
}
