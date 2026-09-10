import {currentCareerDate} from './calendar.mjs';
import {record,shortString} from './save-format.mjs';
const playerFields={age:0x18,clubId:0x20,role:0x24,skill:0x28,field2c:0x2c,field50:0x50,statusIconBase:0x54,specialty:0x58,trait1:0x5c,trait2:0x60,condition:0x78,field88:0x88,morale:0xe4,seasonGoals:0x104,seasonCards:0x108,seasonAppearances:0x10c,careerGoals:0x118};
function integer(view,offset){return {enumerable:true,get:()=>view.getInt32(offset,true),set:v=>view.setInt32(offset,v,true)};}
function boolean(view,offset){return {enumerable:true,get:()=>view.getUint8(offset)!==0,set:v=>view.setUint8(offset,v?1:0)};}
function integerArray(view,offset,length){return new Proxy(Array.from({length},(_,i)=>view.getInt32(offset+i*4,true)),{get(target,key,receiver){if(/^\d+$/.test(String(key))&&Number(key)<length)return view.getInt32(offset+Number(key)*4,true);return Reflect.get(target,key,receiver);},set(target,key,value){if(/^\d+$/.test(String(key))){const i=Number(key);if(i>=length)throw RangeError('Original field array bounds exceeded.');view.setInt32(offset+i*4,value,true);}return Reflect.set(target,key,value);}});}
function readRows(save,name){const s=save.sections.find(s=>s.name===name),v=new DataView(s.data.buffer,s.data.byteOffset,s.data.byteLength);return Array.from({length:s.count},(_,row)=>Array.from({length:s.recordSize/4},(_,col)=>v.getInt32(row*s.recordSize+col*4,true)));}
/** Live views over original records. Loading does not change any save bytes.
 * Current date follows the saved season/day through the original base calendar.
 */
export function openCareer(save,{currentDate}={}){
 const career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),players={},clubs=[];
 for(let i=0;i<save.sections.find(s=>s.name==='players').count;i++){
  const bytes=record(save,'players',i),v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),p={};
  for(const [name,offset] of Object.entries(playerFields))Object.defineProperty(p,name,integer(v,offset));
  Object.defineProperties(p,{active:boolean(v,0x86),fatigueComplaint:boolean(v,0xf5),unavailableFlag:boolean(v,0x85),contractEnd:{enumerable:true,get:()=>v.getFloat64(0x70,true),set:n=>v.setFloat64(0x70,n,true)},selectedFlag:boolean(v,0x7c),eligibilityFlag:{enumerable:true,get:()=>v.getUint8(0x120),set:n=>v.setUint8(0x120,n)},veteranFlag:boolean(v,0x15),injuryUntil:{enumerable:true,get:()=>v.getFloat64(0x68,true),set:n=>v.setFloat64(0x68,n,true)},name:{enumerable:true,get:()=>shortString(bytes,0,20)}});
  p.yellowCounts=integerArray(v,0x8c,11);p.suspensions=integerArray(v,0xb8,11);players[i]=p;
 }
 for(let i=0;i<save.sections.find(s=>s.name==='clubs').count;i++){
  const bytes=record(save,'clubs',i),v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),c={};
  Object.defineProperties(c,{human:boolean(v,0x39),kitColour:integer(v,0x2e4),selectedKit:integer(v,0x2e8),country:integer(v,0x3c),field58:integer(v,0x58),field98:integer(v,0x98),playStyle:integer(v,0x220),marking:integer(v,0x224),attackFocus:integer(v,0x228),availableCount:integer(v,0xa0),captain:integer(v,0xa4),setPiecePlayer:integer(v,0xa8),lineupId:integer(v,0x60),name:{enumerable:true,get:()=>shortString(bytes,0,25)}});clubs.push(c);
 }
 const state={players,clubs,currentDate,notifications:[],events:[],yellowCards:[],automaticInteractions:false,scorers:readRows(save,'scorers'),appearances:readRows(save,'appearances'),playerSeasonStats:readRows(save,'playerSeasonStats')};
 Object.defineProperty(state,'currentDate',{enumerable:true,get:()=>currentDate??currentCareerDate(save),set:v=>{currentDate=v;}});
 Object.defineProperties(state,{season:integer(career,0xc0),competitionType:integer(career,0x88)});
 return state;
}
/** Commit the three growing statistic tables; player and club edits are live.
 * Notifications and fixture events have their own original storage paths.
 */
export function commitCareerStats(save,state){
 for(const name of ['scorers','appearances','playerSeasonStats']){
  const section=save.sections.find(s=>s.name===name),rows=state[name],data=new Uint8Array(rows.length*section.recordSize),v=new DataView(data.buffer);
  rows.forEach((row,i)=>{if(row.length!==section.recordSize/4)throw Error(`Invalid ${name} row.`);row.forEach((n,j)=>v.setInt32(i*section.recordSize+j*4,n,true));});
  section.data=data;section.count=rows.length;section.marker=rows.length;
 }
}
