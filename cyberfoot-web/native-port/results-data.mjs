import {record,shortString} from './save-format.mjs';
import {currentCareerDate} from './calendar.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** 5f619a..5f6228: retain history order and filter by date, competition, group. */
export function selectResultHistory(save,{subgroup=0,nationalGroup=0,currentDate=currentCareerDate(save)}={}){
 const career=view(save.career),kind=career.getInt32(0x88,true),group=kind===3?nationalGroup:[1,2,4,6].includes(kind)?subgroup:0,section=save.sections.find(s=>s.name==='records_0066b154'),v=view(section.data),ids=[];
 for(let id=0;id<section.count;id++){const offset=id*600;if(v.getFloat64(offset+0x40,true)===currentDate&&v.getInt32(offset+0x30,true)===kind&&v.getInt32(offset+0x3c,true)===group)ids.push(id);}
 return ids;
}
/** 5f7f45..5f85e6. Results use archived raw possession and signed integer
 * division, rather than the live tactics screen's adjusted percentages.
 * The original exception handler retains zero on division errors.
 */
export function resultDetailLabels(bytes,language,previous={}){
 const v=view(bytes),get=o=>v.getInt32(o,true),denominator=(get(0x20c)+get(0x224))|0,numerator=Math.imul(get(0x20c),100);
 const home=denominator===0||(numerator===-2147483648&&denominator===-1)?0:Math.trunc(numerator/denominator);
 const labels={...previous,Label3:home+'%',Label4:((100-home)|0)+'%',Label5:get(8)+' x '+get(12),Label1:v.getUint8(0x48)?'(P:'+get(0x4c)+'x'+get(0x50)+')':''};
 for(const [name,offset] of Object.entries({Label10:0x210,Label11:0x228,Label16:0x214,Label17:0x22c,Label22:0x218,Label23:0x230,Label24:0x21c,Label25:0x234}))labels[name]=String(get(offset));
 for(const [name,offset,ids] of [['Label12',0x23c,[290,291,292]],['Label33',0x240,[290,291,292]],['Label13',0x244,[296,297]],['Label34',0x248,[296,297]],['Label32',0x24c,[293,294,295]],['Label35',0x250,[293,294,295]]]){
  const index=get(offset);if(index>=0&&index<ids.length)labels[name]=language[ids[index]].text;
 }
 return labels;
}
export function resultRows(save,historyIds){return historyIds.map(historyId=>{const bytes=record(save,'records_0066b154',historyId),v=view(bytes),clubs=[v.getInt32(0,true),v.getInt32(4,true)];return {historyId,clubs,names:clubs.map(id=>shortString(record(save,'clubs',id),0,25)),score:[v.getInt32(8,true),v.getInt32(12,true)]};});}
const positionOrder=[1,9,3,4,5,6,7,8,2,17,13,12,11,16,15,14,10,25,21,20,19,24,23,22,18];
/** Whole5f88dc: first matching predecessor at each of three steps, oldest
 * first, padded with−1. Assembly preserves−1 when the third lookup misses. */
export function resultSubstitutionChain(save,historyId,playerId){
 const section=save.sections.find(s=>s.name==='records_0066ae14'),v=view(section.data),chain=[];let current=playerId;
 for(let depth=0;depth<3;depth++){
  let found=-1;for(let row=0;row<section.count;row++)if(v.getInt32(row*32+16,true)===historyId&&v.getInt32(row*32+4,true)===current){found=row;break;}
  if(found<0)break;chain.push(found);current=v.getInt32(found*32,true);
 }
 chain.reverse();while(chain.length<3)chain.push(-1);return chain;
}
/** 5f8632..5f8747: first eleven matching archive rows, then position order.
 * Filtering before sorting matters when an archive contains extra rows. */
export function resultLineupRows(save,historyId,clubId){
 const section=save.sections.find(s=>s.name==='records_0066b128'),v=view(section.data),selected=[];
 for(let id=0;id<section.count&&selected.length<11;id++)if(v.getInt32(id*32,true)===historyId&&v.getInt32(id*32+20,true)===clubId)selected.push(id);
 return positionOrder.flatMap(position=>selected.filter(id=>v.getInt32(id*32+8,true)===position)).map(id=>({archiveRow:id,playerId:v.getInt32(id*32+4,true),position:v.getInt32(id*32+8,true),rating:v.getFloat32(id*32+12,true),active:v.getInt32(id*32+16,true)!==0,discipline:v.getInt32(id*32+24,true),injuries:v.getInt32(id*32+28,true)}));
}
