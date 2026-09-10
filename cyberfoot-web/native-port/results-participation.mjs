import {record} from './save-format.mjs';
import {careerSchedule} from './schedule.mjs';
import {hasHumanMatchParticipation} from './match-preparation.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole5f92d8 and its participation predicates. Unlike watched playback,
 * continental participation here has no region filter. Unknown types retain
 * the previous global flag. Competition10 deliberately ignores date/status. */
export function selectResultsHumanParticipation(save,runtime,calendar){
 const type=runtime.nextCompetition,c=view(save.career),club=id=>view(record(save,'clubs',id));
 const anyHuman=predicate=>{for(let i=0;i<c.getInt32(0x13c,true);i++){const id=c.getInt32(0x140+i*4,true);if(id>=0&&predicate(club(id)))return true;}return false;};
 let selected;
 if(type===1||type===2)selected=hasHumanMatchParticipation(save,type);
 else if(type===0){
  const date=(calendar??careerSchedule(save))[c.getInt32(0x16c,true)-1].date,section=save.sections.find(s=>s.name==='records_0066b0d4'),v=view(section.data);selected=false;
  for(let i=0;i<section.count;i++){const o=i*24;if(v.getFloat64(o+16,true)===date&&v.getUint8(o+8)===0&&(club(v.getInt32(o,true)).getUint8(0x39)!==0||club(v.getInt32(o+4,true)).getUint8(0x39)!==0)){selected=true;break;}}
 }else if(type===3)selected=anyHuman(cl=>{if(cl.getUint8(0x216)===0)return false;const group=view(record(save,'records_0066ae98',cl.getInt32(0x40,true)));return group.getUint8(0x52d)!==0&&group.getUint8(0x52f)===0;});
 else if(type===4||type===6)selected=anyHuman(cl=>cl.getUint8(type===4?0x217:0x218)!==0);
 else if(type===5){
  const stage=c.getInt32(0x1a8,true);selected=false;
  if(c.getInt32(0x13c,true)!==0&&stage>=1&&stage<=3){for(let i=(stage-1)*2;i<stage*2;i++){const row=view(record(save,'records_0066af90',i));if(club(row.getInt32(0,true)).getUint8(0x39)!==0||club(row.getInt32(4,true)).getUint8(0x39)!==0)selected=true;}}
 }else if(type>=7&&type<=9){selected=false;for(let i=0;i<c.getInt32(0x5fc,true);i++)if(club(c.getInt32(0x604+i*4,true)).getUint8(0x215)!==0){selected=true;break;}}
 else if(type===10){selected=false;const section=save.sections.find(s=>s.name==='records_0066afa0'),v=view(section.data);for(let i=0;i<section.count;i++){const o=i*72;if(v.getInt32(o+0x18,true)===10&&(club(v.getInt32(o,true)).getUint8(0x39)!==0||club(v.getInt32(o+4,true)).getUint8(0x39)!==0))selected=true;}}
 if(selected!==undefined)runtime.humanParticipation=selected;
 return runtime.humanParticipation;
}
