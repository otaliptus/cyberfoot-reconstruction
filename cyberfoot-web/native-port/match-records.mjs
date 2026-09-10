import {record} from './save-format.mjs';
const view=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
export function appendRows(save,name,rows){
 const section=save.sections.find(s=>s.name===name);if(!section)throw Error(`Missing original save section ${name}`);
 if(!rows.length)return section.count;
 const old=section.count,data=new Uint8Array(section.data.length+rows.length*section.recordSize);data.set(section.data);const v=view(data);
 rows.forEach((row,i)=>{if(row.length*4!==section.recordSize)throw Error('Invalid original record width');row.forEach((n,j)=>v.setInt32((old+i)*section.recordSize+j*4,n,true));});
 section.data=data;section.count+=rows.length;section.marker=section.count;return old;
}
/** 0061ef04: original scheduled-fixture result fields; preserves every other byte.
 * Attendance categories at2c..38 and income24 must come from match preparation.
 */
export function commitFixtureResult(save,fixture){
 const target=view(record(save,'records_0066afa0',fixture.savedFixtureId));
 target.setInt32(8,fixture.counters[0x48]??0,true);target.setInt32(12,fixture.counters[0x4c]??0,true);
 target.setInt32(0x40,fixture.attendance.reduce((sum,n)=>(sum+n)|0,0),true);
 target.setInt32(0x3c,fixture.income,true);target.setUint8(0x2c,1);
}
/** 0061de24: permanent event history uses the history index, not transient fixture ID. */
export function archiveFixtureEvents(save,events,fixtureId,historyId){
 return appendRows(save,'records_0066b160',events.filter(row=>row[5]===fixtureId).map(row=>[...row.slice(0,5),historyId]));
}
/** 006494f8: manager seasonal records and prestige. The original creates a
 * played=1 row on first use regardless of the requested statistic; preserve it.
 */
export function updateManagerStatistic(save,managerId,clubId,amount,kind){
 if(managerId===-1)return;
 const career=view(save.career),season=career.getInt32(0xc0,true),competition=career.getInt32(0x88,true);
 const section=save.sections.find(s=>s.name==='records_0066b474');let row=-1;const data=view(section.data);
 for(let i=0;i<section.count;i++){const off=i*32;if(data.getInt32(off,true)===managerId&&data.getInt32(off+28,true)===season&&data.getInt32(off+24,true)===clubId){row=i;break;}}
 if(row===-1){appendRows(save,'records_0066b474',[[managerId,1,0,0,0,0,clubId,season]]);return;}
 const offset={j:4,v:8,d:12,pr:16,tit:20,t:20}[kind];
 if(offset!==undefined){const at=row*32+offset;data.setInt32(at,(data.getInt32(at,true)+(kind==='pr'?amount:1))|0,true);}
 if(kind==='pr'){
  const manager=view(record(save,'records_0066b718',managerId));
  manager.setInt32(0x28,(manager.getInt32(0x28,true)+amount)|0,true);
  if(competition!==3)manager.setInt32(0x2c,(manager.getInt32(0x2c,true)+amount)|0,true);
 }
}
