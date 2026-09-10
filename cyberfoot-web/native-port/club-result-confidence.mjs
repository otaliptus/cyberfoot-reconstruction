import {record} from './save-format.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const adjustment=(rank,ranges)=>ranges.find(([lo,hi])=>rank>=lo&&rank<=hi)?.[2]??0;
/** Whole00647830: confidence changes, low-confidence penalty, then clamps. */
export function updateClubResultConfidence(save,competition,clubId,outcome){
 const c=view(save.career),p=view(record(save,'clubs',clubId)),current=c.getInt32(0x88,true),mode2=c.getInt32(0x168,true)===2,add=(offset,n)=>p.setInt32(offset,(p.getInt32(offset,true)+n)|0,true);
 if(current===1){const rank=p.getInt32(0x1a4+competition*4,true);let delta=0;
  if(outcome===0)delta=adjustment(rank,mode2?[[1,2,3],[5,10,-1],[11,16,-3],[17,20,-5]]:[[1,2,2],[5,8,-5],[9,10,-7]]);
  if(outcome===1)delta=5+adjustment(rank,mode2?[[1,2,3],[3,4,1]]:[[1,2,5],[3,4,3]]);
  if(outcome===2)delta=-5+adjustment(rank,mode2?[[13,17,-3],[18,20,-7]]:[[5,7,-7],[8,10,-10]]);
  add(0x54,delta);
 }
 if(current===3){const rank=p.getInt32(0x1b0,true),ranges=outcome===0?[[1,2,2],[5,6,-2]]:outcome===1?[[1,2,7],[3,4,5],[5,6,3]]:outcome===2?[[1,2,-3],[3,4,-5],[5,6,-7]]:[];add(0x54,adjustment(rank,ranges));}
 if(p.getInt32(0x54,true)<40)add(0x50,p.getInt32(0x98,true)<21?-8:-5);
 for(const offset of [0x54,0x50])p.setInt32(offset,Math.max(0,Math.min(100,p.getInt32(offset,true))),true);
}
