import {record} from './save-format.mjs';
/** 5e9970: first matching club row is replaced; absent clubs append a row.
 * Saved positions use screen order (keeper first), unlike match lineups.
 */
export function saveScreenLineup(save,clubId,slots){
 if(slots.length!==18)throw RangeError('Original lineup screen has 18 slots.');
 const section=save.sections.find(s=>s.name==='records_0066b754');
 let index=-1;
 for(let i=0;i<section.count;i++){
  const b=record(save,section.name,i);if(new DataView(b.buffer,b.byteOffset,b.byteLength).getInt32(0,true)===clubId){index=i;break;}
 }
 if(index<0){
  index=section.count;const bytes=new Uint8Array(section.data.length+120);bytes.set(section.data);section.data=bytes;section.count++;section.marker=section.count;
 }
 const b=record(save,section.name,index),v=new DataView(b.buffer,b.byteOffset,b.byteLength);v.setInt32(0,clubId,true);
 for(let i=0;i<18;i++)v.setInt32(48+i*4,slots[i].playerId,true);
 for(let i=0;i<11;i++)v.setInt32(4+i*4,slots[i].position,true);
 return index;
}
export function readScreenLineup(save,clubId){
 const section=save.sections.find(s=>s.name==='records_0066b754');
 for(let i=0;i<section.count;i++){
  const b=record(save,section.name,i),v=new DataView(b.buffer,b.byteOffset,b.byteLength);
  if(v.getInt32(0,true)===clubId)return Array.from({length:18},(_,j)=>({playerId:v.getInt32(48+j*4,true),position:j<11?v.getInt32(4+j*4,true):-1}));
 }
 return null;
}
