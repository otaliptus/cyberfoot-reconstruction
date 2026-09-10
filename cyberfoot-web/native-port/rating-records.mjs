import {accumulatePlayerRating} from './player-rating.mjs';
export function savedPlayerRatings(save){
 const s=save.sections.find(s=>s.name==='records_0066b1b8'),v=new DataView(s.data.buffer,s.data.byteOffset,s.data.byteLength),rows=[];
 for(let o=0;o<v.byteLength;o+=24)rows.push({playerId:v.getInt32(o,true),clubId:v.getInt32(o+4,true),competition:v.getInt32(o+8,true),total:v.getFloat32(o+12,true),count:v.getFloat32(o+16,true),role:v.getInt32(o+20,true)});
 return rows;
}
export function accumulateSavedPlayerRating(save,playerId,competition,position,rating,player){
 const rows=savedPlayerRatings(save);if(!accumulatePlayerRating(rows,playerId,competition,position,rating,player))return false;
 const s=save.sections.find(s=>s.name==='records_0066b1b8'),data=new Uint8Array(rows.length*24),v=new DataView(data.buffer);
 rows.forEach((r,i)=>{const o=i*24;v.setInt32(o,r.playerId,true);v.setInt32(o+4,r.clubId,true);v.setInt32(o+8,r.competition,true);v.setFloat32(o+12,r.total,true);v.setFloat32(o+16,r.count,true);v.setInt32(o+20,r.role,true);});
 s.data=data;s.count=rows.length;s.marker=rows.length;return true;
}
