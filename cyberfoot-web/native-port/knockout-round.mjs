import {record} from './save-format.mjs';import {resolveTwoLegResult} from './knockout-result.mjs';import {applyKnockoutOutcome,eliminateKnockoutLoser,recordCompetitionFinish,findKnockoutRound} from './knockout-progress.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original 0061dfe4 orchestration. Decider and champion effects must be supplied by their controllers. */
export async function advanceTwoLegKnockout(save,{subgroup,alternateRound,decide,champion}){
 const career=view(save.career),competition=career.getInt32(0x88,true);
 let round=competition===2?career.getInt32(0x110,true):competition===4?career.getInt32(0x194,true):competition===6?(subgroup===2?career.getInt32(0x1a0,true):alternateRound):undefined;
 const iterations=competition===2?[63,31,15,7,3,1][round]:({1:31,2:31,3:31,4:15,5:7,6:3,7:1}[round]);
 if(![2,4,6].includes(competition)||!Number.isInteger(round)||!iterations)throw Error('Uninitialized original knockout round');
 let index=findKnockoutRound(save,subgroup,competition,round),lastFixture;const winners=[];
 if(index<0)throw Error('Missing original knockout fixtures');
 for(let i=0;i<iterations;i++){
  const first=view(record(save,'records_0066afa0',index)),home=first.getInt32(0,true),away=first.getInt32(4,true);if(home<0||away<0)continue;
  lastFixture=index;const second=view(record(save,'records_0066afa0',index+1));
  const result=resolveTwoLegResult({firstLeg:[first.getInt32(8,true),first.getInt32(12,true)],secondLeg:[second.getInt32(8,true),second.getInt32(12,true)],competition,round:career.getInt32(0x194,true)});
  let winner,loser;
  if(result===1||result===2){winner=result===1?home:away;loser=result===1?away:home;}
  else{if(typeof decide!=='function')throw Error('Knockout decider controller is required');const side=await decide(index+1);if(side!==1&&side!==2)throw Error('Invalid decider result');winner=second.getInt32((side-1)*4,true);loser=second.getInt32((2-side)*4,true);}
  winners.push(winner);applyKnockoutOutcome(save,competition,round,loser,winner);eliminateKnockoutLoser(save,index,winner);index+=2;
 }
 let nextRound=round+1;if(competition===6&&subgroup===1)nextRound=Math.max(4,nextRound);
 if((competition===2&&nextRound===6)||((competition===4||competition===6)&&nextRound===8)){
  if(typeof champion!=='function')throw Error('Champion finalization controller is required');const winner=winners[0];view(record(save,'clubs',winner)).setUint8(competition===2?0x214:competition===4?0x217:0x218,0);
  if(competition===2){await champion(winner,lastFixture);recordCompetitionFinish(save,winner,6,competition,6);}
  else{recordCompetitionFinish(save,winner,8,competition,8);await champion(winner,lastFixture);}
 }else{
  const pairs=competition===2?({1:16,2:8,3:4,4:2,5:1}[nextRound]):({4:8,5:4,6:2,7:1}[nextRound]);
  if(!pairs)throw Error('Uninitialized original next-round size');let target=findKnockoutRound(save,subgroup,competition,nextRound);if(target<0)throw Error('Missing next-round fixtures');
  for(let i=0;i<pairs;i++){const a=winners[i*2]??-1,b=winners[i*2+1]??-1,first=view(record(save,'records_0066afa0',target)),second=view(record(save,'records_0066afa0',target+1));first.setInt32(0,a,true);first.setInt32(4,b,true);second.setInt32(0,b,true);second.setInt32(4,a,true);target+=2;}
 }
 return {winners,nextRound};
}
