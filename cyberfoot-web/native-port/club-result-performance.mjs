import {record} from './save-format.mjs';import {findLeagueConfiguration} from './weekly-team.mjs';import {updateClubResultConfidence} from './club-result-confidence.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),adjust=(rank,ranges)=>ranges.find(([lo,hi])=>rank>=lo&&rank<=hi)?.[2]??0;
/** Whole00646fc0 with native00647830 child. The x87 cash threshold6476b0
 * is exactly zero, so an Int64 sign comparison preserves its result. */
export function updateClubResultPerformance(save,competition,clubId,outcome,side,difference,margin){
 const p=view(record(save,'clubs',clubId)),c=view(save.career);if(findLeagueConfiguration(save,p.getInt32(0x3c,true))===-1)return;
 const add=n=>p.setInt32(0x50,(p.getInt32(0x50,true)+n)|0,true),mode=c.getInt32(0x168,true),rank=p.getInt32(0x1a4+competition*4,true),debt=p.getBigInt64(0x48,true)<0n,human=p.getUint8(0x39)!==0;
 if(difference<0){if(outcome===0)add(1);else if(outcome===1)add(2);}else if(difference>0){if(outcome===0)add(-1);else if(outcome===2)add(-2);}
 if(competition===1){
  if(outcome===0){if(human&&debt)add(-10);
   if(side===1||side===2)add(adjust(rank,mode===2?(side===1?[[1,1,2],[2,2,1],[10,16,-2],[17,20,-5]]:[[1,2,3],[3,6,1],[14,16,-2],[17,20,-4]]):[[1,2,5],[3,4,4],[7,8,-3],[9,10,-5]]));
  }else if(outcome===1){if(human&&debt)add(-9);add(adjust(rank,mode===2?[[1,2,5],[3,6,3],[7,10,1]]:[[1,2,7],[3,4,5],[5,6,3],[7,8,1]]));
  }else if(outcome===2){if(debt)add(-12);if(p.getInt32(0x98,true)>20)add(-2);
   if(side===1)add(adjust(rank,mode===2?[[1,3,-1],[4,8,-2],[9,10,-3],[11,16,-5],[17,20,-7]]:mode===4?[[1,2,-1],[3,4,-2],[5,8,-5],[9,10,-7]]:[]));
   if(side===2)add(adjust(rank,mode===2?[[4,8,-1],[9,10,-2],[11,16,-4],[17,20,-7]]:mode===4?[[3,4,-1],[5,8,-5],[9,10,-7]]:[]));
  }
 }
 if(competition===3){if(human&&debt)add(-10);const position=p.getInt32(0x1b0,true);
  if(outcome===0){if(position<3)add(3);if(position>4)add(-2);}else if(outcome===1)add(position<3?5:2);else if(outcome===2){add(-2);if(position>3)add(-3);}
 }
 updateClubResultConfidence(save,competition,clubId,outcome);
}
