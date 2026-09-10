import {record} from './save-format.mjs';
import {updateClubResultPerformance} from './club-result-performance.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original direct table0066b714→00665284; values are club2f0 identities. */
export const originalRivalries=Object.freeze([[46,44],[87,66],[69,58],[68,58],[69,68],[56,55],[47,50],[59,61],[64,70],[116,74],[54,49],[54,65],[54,51],[49,65],[49,51],[65,51],[48,45],[48,52],[52,45]].map(Object.freeze));
/** Whole00646c50. Assembly clears the result before the negative-ID gate. */
export function areRivalClubs(save,homeId,awayId){
 if((homeId|awayId)<0)return false;
 const a=view(record(save,'clubs',homeId)).getInt32(0x2f0,true),b=view(record(save,'clubs',awayId)).getInt32(0x2f0,true);
 return originalRivalries.some(([x,y])=>a===x&&b===y||a===y&&b===x);
}
/** 00646a38 with native club performance00646fc0 by default. The unused
 * fourth original argument is retained so fixture callers preserve the ABI. */
export function applyMatchPerformanceResult(save,competition,homeId,awayId,unused,awayScore,homeScore,{updatePerformance=(...args)=>updateClubResultPerformance(save,...args)}={}){
 if(typeof updatePerformance!=='function')throw Error('Original club performance update required.');
 const home=view(record(save,'clubs',homeId)),away=view(record(save,'clubs',awayId)),difference=(home.getInt32(0x98,true)-away.getInt32(0x98,true))|0,reverse=(away.getInt32(0x98,true)-home.getInt32(0x98,true))|0;
 const outcome=homeScore>awayScore?1:homeScore<awayScore?2:0,margin=(outcome===1?homeScore-awayScore:outcome===2?awayScore-homeScore:0)|0;
 updatePerformance(competition,homeId,outcome===1?1:outcome===2?2:0,outcome||1,difference,margin);
 updatePerformance(competition,awayId,outcome===1?2:outcome===2?1:0,outcome||2,reverse,margin);
 if(outcome&&areRivalClubs(save,homeId,awayId)){
  const current=view(save.career).getInt32(0x88,true),bonus=({1:[2,5],3:[2,5],4:[10,20],6:[3,10]})[current]??[1,1],winner=outcome===1?home:away;
  winner.setInt32(0x50,(winner.getInt32(0x50,true)+bonus[0])|0,true);winner.setInt32(0x54,(winner.getInt32(0x54,true)+bonus[1])|0,true);
 }
}
