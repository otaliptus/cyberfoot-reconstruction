import {record} from './save-format.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);/** Whole006552ec season-end manager move. The original's slot-bound Random in
 * one branch reads an uninitialized stack word; the recovered value is passed
 * in. The RNG stream advances identically for any bound. Negative club ids
 * mirror the original reading memory before the club array. */
export function managerSeasonMove(save,clubId,{rng,stackBound=0}={}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const leagues=save.sections.find(s=>s.name==='records_0066aca0'),c=view(save.career),club=view(record(save,'clubs',clubId)),league=id=>view(record(save,'records_0066aca0',id)),human=id=>id>=0?view(record(save,'clubs',id)).getUint8(0x39):0,destinations=Array.from({length:8},()=>0);let count=1;
 for(let i=0;i<4;i++)destinations[i]=-1;
 rng.below(leagues.count);
 if(rng.below(100)>10&&club.getInt32(0x7c,true)===1&&leagues.count>1&&club.getInt32(0x50,true)>80&&club.getInt32(0x1a8,true)<=4){
  const own=findLeagueConfiguration(save,club.getInt32(0x3c,true));let index;
  do{index=rng.below(leagues.count);}while(index===own);
  let bound=stackBound;
  if(club.getInt32(0x1a8,true)<=1)bound=3;
  if(club.getInt32(0x1ac,true)===2)bound=4;
  if(club.getInt32(0x1b0,true)===3)bound=5;
  if(club.getInt32(0x1b0,true)<4)bound=6;
  if(rng.below(100)>98)bound=2;
  let slot=rng.below(bound)+1;
  if(slot<=10){
   do{const dest=league(index).getInt32(0x14c+slot*4,true);if(dest<0||human(dest)===0){if(dest>=0){destinations[count-1]=dest;count++;}break;}slot++;}while(slot!==11);
  }
 }
 const index=findLeagueConfiguration(save,club.getInt32(0x3c,true));
 if(club.getInt32(0x3c,true)===29&&index>=0&&league(index).getInt32(0x144,true)===4&&club.getInt32(0x7c,true)===1&&club.getInt32(0x1a8,true)<=10){
  let n=rng.below(5)+10;
  if(c.getUint8(0x170)!==0&&n>3)do{const id=league(index).getInt32(0x23c+n*4,true);if(id>=0&&human(id)===0&&view(record(save,'clubs',id)).getInt32(0x80,true)>0){destinations[count-1]=id;count++;break;}n--;}while(n!==3);
  if(c.getUint8(0x170)===0&&n>3)do{const id=league(index).getInt32(0x23c+n*4,true);if(id>=0&&human(id)===0){destinations[count-1]=id;count++;break;}n--;}while(n!==3);
  let position=rng.below(4)+2;
  if(rng.below(100)>30&&club.getInt32(0x1a8,true)===1&&position<21)do{const id=league(index).getInt32(0x14c+position*4,true);if(id>=0&&human(id)===0){destinations[count-1]=id;count++;break;}position++;}while(position!==21);
  let candidate=rng.below(7)+12;
  if(rng.below(100)>30&&candidate<21)do{const id=league(index).getInt32(0x14c+candidate*4,true);if(id>=0&&human(id)===0){destinations[count-1]=id;return destinations;}candidate++;}while(candidate!==21);
 }
 return destinations;
}
/** Whole005f96dc manager-move engine loop. The original then presents the
 * coach-invitation form for every cleared slot; the host is required before
 * any mutation so an incomplete flow cannot silently alter the save. */
export async function seasonEndManagerMoves(save,runtime,{rng,showMove,stackBound=0}={}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 if(typeof showMove!=='function')throw Error('Original season-end move host required.');
 const c=view(save.career),manager=id=>view(record(save,'records_0066b718',id)),moves=[];
 if(c.getInt32(0x168,true)!==2)return moves;
 for(let i=0;i<10;i++){
  c.setInt32(0x10,c.getInt32(0x14+i*4,true),true);
  const slot=c.getInt32(0x10,true);
  if(slot<0||manager(slot).getInt32(0x1c,true)<0)continue;
  const destinations=managerSeasonMove(save,manager(slot).getInt32(0x1c,true),{rng,stackBound});
  if(destinations[0]>=0&&findLeagueConfiguration(save,view(record(save,'clubs',destinations[0])).getInt32(0x3c,true))>=0){
   manager(slot).setUint8(0x30,0);
   moves.push({slot,destination:destinations[0]});
   await showMove({slot,destination:destinations[0]});
  }
 }
 return moves;
}
