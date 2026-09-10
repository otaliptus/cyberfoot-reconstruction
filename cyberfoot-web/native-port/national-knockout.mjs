import {record} from './save-format.mjs';import {appendRows} from './match-records.mjs';import {findKnockoutRound,recordCompetitionFinish} from './knockout-progress.mjs';import {resolveTwoLegResult} from './knockout-result.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original 0065a1c0; all unassigned fields start at zero. */
export function appendScheduledFixture(save,{home,away,round,date,ordinal,leg,group,competition}){const row=Array(18).fill(0);row[0]=home;row[1]=away;row[6]=competition;row[7]=round;row[8]=leg;row[9]=ordinal;row[14]=group;const id=appendRows(save,'records_0066afa0',[row]);view(record(save,'records_0066afa0',id)).setFloat64(0x30,date,true);return id;}
/** Original 0061e4fc. Calendar and next-leg count come from active scheduling configuration. */
export async function advanceNationalKnockout(save,{phase,groupId,calendar,calendarOrdinal,nextLegCount,decide,champion}){
 if(![11,12,21,22,41,42].includes(phase))throw Error('Unsupported original national knockout phase');
 const legs=phase%10,pairs=phase>=40?4:phase>=20?2:1,round=phase>=40?401:phase>=20?201:101;
 const group=view(record(save,'records_0066ae98',groupId)),winners=[];let loser,index=findKnockoutRound(save,groupId,3,round);
 if(index<0)throw Error('Missing national knockout fixture');
 for(let i=0;i<pairs;i++){
  const first=view(record(save,'records_0066afa0',index)),home=first.getInt32(0,true),away=first.getInt32(4,true);if(home<0||away<0)continue;
  let result;
  if(legs===2){const second=view(record(save,'records_0066afa0',index+1));result=resolveTwoLegResult({firstLeg:[first.getInt32(8,true),first.getInt32(12,true)],secondLeg:[second.getInt32(8,true),second.getInt32(12,true)],competition:3,rankingTieBreak:group.getInt32(0x564,true)===1,clubRanks:[view(record(save,'clubs',home)).getInt32(0x1b0,true),view(record(save,'clubs',away)).getInt32(0x1b0,true)]});}
  else result=first.getInt32(8,true)===first.getInt32(12,true)?3:first.getInt32(8,true)>first.getInt32(12,true)?1:2;
  let deciding=first;if(result!==1&&result!==2){if(typeof decide!=='function')throw Error('National decider controller required');const id=index+(legs===2?1:0);result=await decide(id);if(result!==1&&result!==2)throw Error('Invalid national decider result');deciding=view(record(save,'records_0066afa0',id));}
  const winner=deciding.getInt32((result-1)*4,true);loser=deciding.getInt32((2-result)*4,true);winners.push(winner);view(record(save,'clubs',loser)).setUint8(0x216,0);recordCompetitionFinish(save,loser,phase,3,1);index+=legs;
 }
 if(pairs===1){if(typeof champion!=='function')throw Error('National champion controller required');await champion(winners[0]??-1,loser);}
 else{
  if(!Array.isArray(calendar)||!Number.isInteger(calendarOrdinal)||!Number.isInteger(nextLegCount))throw Error('Original national calendar context required');
  const dates=calendar.filter(day=>day.competition===3),pairings=pairs===2?[[1,0]]:[[3,0],[1,2]],nextRound=pairs===2?101:201;
  for(const [h,a] of pairings){const home=winners[h]??-1,away=winners[a]??-1;appendScheduledFixture(save,{home,away,round:nextRound,date:dates[calendarOrdinal].date,ordinal:calendarOrdinal+1,leg:1,group:groupId,competition:3});if(nextLegCount===2)appendScheduledFixture(save,{home:away,away:home,round:nextRound+1,date:dates[calendarOrdinal+1].date,ordinal:calendarOrdinal+2,leg:2,group:groupId,competition:3});}
  if(pairs===2){group.setInt32(0x524,winners[0]??-1,true);group.setInt32(0x528,winners[1]??-1,true);}
 }
 return {winners,phase};
}
