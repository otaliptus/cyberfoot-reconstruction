import {record} from './save-format.mjs';import {recordClubHonour,recordManagerHonour} from './champion-records.mjs';import {selectPlayerAwards} from './player-awards.mjs';import {updateManagerStatistic} from './match-records.mjs';import {recordCompetitionFinish} from './knockout-progress.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),cashLimit=n=>n<-(1n<<63n)||n>=(1n<<63n)?-(1n<<63n):n;
/** Original 006243c8, including reuse of the last player award and its additional prize. */
export function finalizeNationalChampion(save,winnerId,loserId,{groupId,clubHonour=recordClubHonour,managerHonour=recordManagerHonour,playerAwards=selectPlayerAwards,managerStatistic=updateManagerStatistic,finishRecord=recordCompetitionFinish}){
 const group=view(record(save,'records_0066ae98',groupId)),winner=view(record(save,'clubs',winnerId)),loser=view(record(save,'clubs',loserId)),career=view(save.career),competition=career.getInt32(0x88,true),manager=winner.getInt32(0x44,true),add=(v,o,n)=>v.setInt32(o,(v.getInt32(o,true)+n)|0,true);
 group.setUint8(0x52f,1);
 for(const [id,place] of [[winnerId,1],[loserId,2]])clubHonour(save,{competition:3,clubId:id,country:-1,place,division:-1,group:1,subgroup:groupId});
 managerHonour(save,{competition:3,clubId:winnerId,managerId:manager,country:29,place:1,division:groupId});
 playerAwards(save,{competition:3,country:-1,division:-1,group:1,subgroup:groupId});
 group.setInt32(0x54c,winnerId,true);group.setInt32(0x550,loserId,true);winner.setUint8(0x216,0);loser.setUint8(0x216,0);group.setInt32(0x554,manager<0?-1:manager,true);group.setInt32(0x558,loser.getInt32(0x44,true),true);
 const awards=save.sections.find(s=>s.name==='records_0066b560'),award=view(record(save,awards.name,awards.count-1));group.setInt32(0x55c,award.getInt32(12,true),true);group.setInt32(0x560,award.getInt32(20,true),true);
 if(competition<7&&manager>=0)add(view(record(save,'records_0066b718',manager)),0x44+competition*4,1);
 managerStatistic(save,manager,winnerId,1,'tit');add(winner,0x23c,1);finishRecord(save,winnerId,1,3,1);finishRecord(save,loserId,2,3,1);
 if(manager>=0)managerStatistic(save,manager,winnerId,15,'pr');add(winner,0x2c0,5);add(loser,0x2c0,3);
 for(const [id,amount] of [[winnerId,1000000],[loserId,500000],[award.getInt32(8,true),500000]]){const club=view(record(save,'clubs',id)),ledger=view(record(save,'records_0066afec',id));club.setBigInt64(0x48,cashLimit(club.getBigInt64(0x48,true)+BigInt(amount)*10000n),true);add(ledger,0x24,amount);}
}
