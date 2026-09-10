import {selectPlayerAwards} from './player-awards.mjs';
import {record} from './save-format.mjs';import {recordClubHonour,recordManagerHonour} from './champion-records.mjs';import {updateManagerStatistic} from './match-records.mjs';import {countryGroups} from './score-tables.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),cashLimit=n=>n<-(1n<<63n)||n>=(1n<<63n)?-(1n<<63n):n;
/** Original 00623ee0. Uses the original player-award selector by default. */
export function finalizeCupChampion(save,winnerId,fixtureId,{activeSubgroup,playerAwards=selectPlayerAwards,clubHonour=recordClubHonour,managerHonour=recordManagerHonour,managerStatistic=updateManagerStatistic}){
 if(typeof playerAwards!=='function')throw Error('Original player award selection controller required');
 const career=view(save.career),competition=career.getInt32(0x88,true),fixture=view(record(save,'records_0066afa0',fixtureId)),loserId=fixture.getInt32(0,true)===winnerId?fixture.getInt32(4,true):fixture.getInt32(0,true);
 const winner=view(record(save,'clubs',winnerId)),loser=view(record(save,'clubs',loserId)),ids=[winnerId,loserId],clubs=[winner,loser],manager=winner.getInt32(0x44,true);
 for(let i=0;i<2;i++)clubHonour(save,{competition,clubId:ids[i],country:clubs[i].getInt32(0x3c,true),place:i+1,division:-1,group:-1,subgroup:-1});
 for(let i=0;i<2;i++)managerHonour(save,{competition,clubId:ids[i],managerId:clubs[i].getInt32(0x44,true),country:clubs[i].getInt32(0x3c,true),place:i+1,division:-1,activeSubgroup});
 playerAwards(save,{competition,country:winner.getInt32(0x3c,true),division:-1,group:-1,subgroup:-1});
 const add=(v,o,n)=>v.setInt32(o,(v.getInt32(o,true)+n)|0,true);
 if(competition<7&&manager>=0)add(view(record(save,'records_0066b718',manager)),0x44+competition*4,1);
 managerStatistic(save,manager,winnerId,1,'tit');
 let prizes=[0,0];if(competition===2)prizes=[4000000,2000000];
 if(competition===4)prizes=({0:[7000000,4000000],1:[5000000,3000000],3:[2000000,100000],4:[2000000,1000000]}[countryGroups[winner.getInt32(0x3c,true)]??0]??[0,0]);
 if(competition===6)prizes=[3000000,1500000];
 if([2,4,6].includes(competition))for(let i=0;i<2;i++)if(competition===2||ids[i]<career.getInt32(0x3c,true)){
  add(view(record(save,'records_0066afec',ids[i])),0x24,prizes[i]);clubs[i].setBigInt64(0x48,cashLimit(clubs[i].getBigInt64(0x48,true)+BigInt(prizes[i])*10000n),true);
 }
 const prestige={2:20,4:30,6:25}[competition];if(prestige!==undefined)managerStatistic(save,manager,winnerId,prestige,'pr');
 const bonus={2:[0x2bc,10,7],4:[0x2c4,20,15],6:[0x2cc,12,10]}[competition];if(bonus){add(winner,bonus[0],bonus[1]);add(loser,bonus[0],bonus[2]);}
}
