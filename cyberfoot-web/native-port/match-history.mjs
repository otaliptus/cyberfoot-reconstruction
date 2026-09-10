import {findLeagueConfiguration,selectWeeklyTeam} from './weekly-team.mjs';
import {record} from './save-format.mjs';import {currentCareerDate} from './calendar.mjs';import {appendRows,archiveFixtureEvents} from './match-records.mjs';import {archiveSubstitutedPlayers,archiveFinalPlayers} from './player-history.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Round selection at entry0061efa4. Competition3 uses the first fixture's schedule row. */
export function matchHistoryRound(save,firstFixture){
 const c=view(save.career),get=o=>c.getInt32(o,true),competition=get(0x88);
 if(competition===1){const mode=get(0x168);return mode===2||mode===4?(get(0x4c)+(get(0x50)===1?0:mode===2?19:9))|0:0;}
 if(competition===2)return get(0x114);
 if(competition===3)return view(record(save,'records_0066afa0',firstFixture.savedFixtureId)).getInt32(0x1c,true);
 if(competition===4)return (get(0x194)+(get(0x190)===1?0:3))|0;
 if(competition===5)return 1;
 if(competition===6)return (get(0x1a0)+(get(0x19c)===1?0:3))|0;
 if(competition>=7&&competition<=9)return get(0x62c);return 0;
}
/** Original600-byte detailed history record, copied by0061efa4. */
export function matchHistoryRecord(save,fixture,{round,groupId}){
 for(const key of ['income','field28','field170','field174','field178'])if(!Number.isInteger(fixture[key]))throw Error(`Original match ${key} is required for detailed history.`);
 if(!Number.isInteger(round)||!Number.isInteger(groupId))throw Error('Original history round and group are required.');
 const career=view(save.career),competition=career.getInt32(0x88,true),bytes=new Uint8Array(600),v=view(bytes),put=(o,n)=>v.setInt32(o,n,true),get=o=>fixture.counters[o]??0;
 put(0x30,competition);put(0x34,round);put(0x38,career.getInt32(0x50,true));put(0x3c,[1,2,3,4,6].includes(competition)?groupId:0);v.setFloat64(0x40,currentCareerDate(save),true);v.setUint8(0x48,fixture.field170);put(0x4c,fixture.field174);put(0x50,fixture.field178);put(0x10,fixture.income);
 for(let side=1;side<=2;side++){
  const club=view(record(save,'clubs',fixture.clubs[side-1]));put((side-1)*4,fixture.clubs[side-1]);put(4+side*4,get(0x44+side*4));
  for(const [to,from] of [[0x238,0x220],[0x240,0x228],[0x248,0x224]])put(to+side*4,club.getInt32(from,true));
  for(const [to,from] of [[500,0x84],[0x1f8,0x94],[0x1fc,0x8c],[0x200,0x9c],[0x204,0xa4],[0x208,0x164]])put(to+side*24,get(from+side*4));
  for(let slot=1;slot<=11;slot++){put(side*44+0x24+slot*4,fixture.startingPlayers[side-1][slot-1]);put(side*44+300+slot*4,fixture.startingPositions[side-1][slot-1]);}
 }
 [fixture.field28,...fixture.attendance].forEach((n,i)=>put(0x14+i*4,n));return bytes;
}
/** Per-fixture detailed history work. Weekly awards and day-wide scheduling
 * remain in the caller; required context prevents an invented history round.
 */
export function archiveDetailedFixture(save,fixture,teams,state,rng,context){
 const bytes=matchHistoryRecord(save,fixture,context),v=view(bytes),words=Array.from({length:150},(_,i)=>v.getInt32(i*4,true));
 const historyId=appendRows(save,'records_0066b154',[words]);
 archiveFixtureEvents(save,state.events,fixture.id,historyId);
 archiveSubstitutedPlayers(save,historyId,fixture,state,rng,context.playerOptions);
 archiveFinalPlayers(save,historyId,fixture,teams,state,rng,context.playerOptions);
 return historyId;
}

/** Day-level0061efa4 orchestration. The active competition metadata ID is the
 * original66b6ac[firstFixture.competition].field4, supplied by match preparation.
 */
export function archiveMatchDayHistory(save,fixtures,teamsFor,state,rng,{competitionGroupId,subgroupId,leagueMetadataId,playerOptions}){
 const career=view(save.career),competition=career.getInt32(0x88,true);
 if(!fixtures.length)throw Error('Original match-day history requires its first transient fixture.');
 const groupId=competition===3?competitionGroupId:[1,2,4,6].includes(competition)?subgroupId:0;
 if(!Number.isInteger(groupId))throw Error('Original active match-day group is required.');
 if(competition===1&&!Number.isInteger(leagueMetadataId))throw Error('Original league metadata ID is required for weekly awards.');
 const round=matchHistoryRound(save,fixtures[0]);state.historyScratch=[];
 const historyIds=fixtures.map(fixture=>archiveDetailedFixture(save,fixture,teamsFor(fixture),state,rng,{round,groupId,playerOptions}));
 if(competition===1){const leagueId=findLeagueConfiguration(save,leagueMetadataId);if(leagueId!==-1)selectWeeklyTeam(save,state,leagueId);}
 return historyIds;
}
