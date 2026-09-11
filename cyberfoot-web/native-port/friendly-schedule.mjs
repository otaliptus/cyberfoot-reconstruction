import {careerSchedule} from './schedule.mjs';

const view=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);

function appendRecord(section,size,write){
 if(!section)throw Error('Original friendly record section required.');
 const offset=section.data.length,grown=new Uint8Array(offset+size);
 grown.set(section.data);
 const row=new DataView(grown.buffer,offset,size);
 write(row);
 section.data=grown;section.count+=1;section.marker=section.count;
 return section.count-1;
}

export function pendingFriendlyDates(save,currentDay=view(save.career).getInt32(0x16c,true)){
 const events=save.sections.find(section=>section.name==='records_0066b0d4'),occupied=new Set();
 if(events){const eventView=view(events.data);for(let i=0;i<events.count;i++)if(eventView.getUint8(i*24+8)===0)occupied.add(eventView.getFloat64(i*24+16,true));}
 return careerSchedule(save).slice(Math.max(1,currentDay+1)-1).filter(row=>row.competition===-1&&!occupied.has(row.date));
}

export function appendFriendlyMatch(save,{home,away,date}){
 if(!Number.isInteger(home)||!Number.isInteger(away)||home<0||away<0||home===away)throw Error('Two different friendly clubs are required.');
 if(!Number.isFinite(date))throw Error('A friendly date is required.');
 const events=save.sections.find(section=>section.name==='records_0066b0d4'),fixtures=save.sections.find(section=>section.name==='records_0066afa0');
 if(!events||!fixtures)throw Error('Original friendly record section required.');
 const eventId=appendRecord(events,24,row=>{
  row.setInt32(0,home,true);row.setInt32(4,away,true);row.setUint8(8,0);row.setFloat64(0x10,date,true);
 });
 const fixtureId=appendRecord(fixtures,72,row=>{
  row.setInt32(0,home,true);row.setInt32(4,away,true);row.setInt32(0x18,0,true);row.setInt32(0x1c,-1,true);row.setInt32(0x20,0,true);row.setInt32(0x24,0,true);row.setUint8(0x2c,0);row.setFloat64(0x30,date,true);row.setInt32(0x38,0,true);
 });
 return {eventId,fixtureId};
}
