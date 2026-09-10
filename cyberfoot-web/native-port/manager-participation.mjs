import {record} from './save-format.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);

/** Whole 65639c: only the domestic club range participates in this count. */
export function countHumanManagersInCountry(save,country){
 const count=view(save.career).getInt32(0x3c,true);let result=0;
 for(let i=0;i<count;i++){
  const club=view(record(save,'clubs',i));
  if(club.getInt32(0x3c,true)===(country|0)&&club.getUint8(0x39)!==0)result++;
 }
 return result;
}

/** Whole 6563e0: the original scans exactly the first 27 clubs, regardless
 * of the domestic count or country. Used when updating regional eligibility. */
export function countHumanManagersInSubgroup(save,subgroup){
 let result=0;
 for(let i=0;i<27;i++){
  const club=view(record(save,'clubs',i));
  if(club.getInt32(0x40,true)===(subgroup|0)&&club.getUint8(0x39)!==0)result++;
 }
 return result;
}
