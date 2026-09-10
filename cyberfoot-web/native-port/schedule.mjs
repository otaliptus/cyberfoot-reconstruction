import {originalScheduleSequence} from './schedule-sequence.mjs';
import {baseCalendar} from './calendar.mjs';
// 006539b4 searches from the last occupied/reserved date, with a January 5 floor.
export function assignNextCompetition(calendar,weekday,competition){
 let start=5;for(let day=366;day>=5;day--){const c=calendar[day-1].competition;if(c>=0||c===-2){start=day;break;}}
 for(let day=start;day<=366;day++){const row=calendar[day-1],dow=((Math.trunc(row.date)+6)%7+7)%7+1;if(row.competition===-1&&dow===weekday){row.competition=competition;return day;}}
 return -1;
}
export function hasExtraCupRound(mode,records){const found=records.find(r=>r.field140===29);return mode===2&&!!found&&found.field148>80;}
// Original 00653a40, including disabled competition reservations (-2).
export function assignCompetitionSchedule(calendar,{season,mode,flags,cupRecords}){
 const flag=o=>!!flags[o];let c2=2,c3=3,c4=4,c5=5,c6=6,c10=-2,national=-2;
 if(season>=3&&flag(0x171)&&flag(0x172))c10=10;
 if(!flag(0x10e))c2=-2;if(!flag(0x170))c3=-2;
 if(!flag(0x171)||season<2){c4=-2;c5=-2;c10=-2;}
 if(flag(0x171)&&flag(0x75d)&&season===1){c4=4;c5=5;}
 if(!flag(0x172)||season<2){c6=-2;c10=-2;}
 const year=(season+2014)|0;
 if(flag(0x17f)&&year%4===2)national=7;
 if(flag(0x181)&&year%4===3)national=8;
 if(flag(0x180)&&year%4===0)national=9;
 const put=(weekday,competition)=>assignNextCompetition(calendar,weekday,competition);
 originalScheduleSequence({mode,c2,c3,c4,c5,c6,c10,national,hasExtraCupRound:()=>hasExtraCupRound(mode,cupRecords),put});
 return calendar;
}
export function careerSchedule(save){
 const v=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),season=v.getInt32(0xc0,true),flags=Object.fromEntries([0x10e,0x170,0x171,0x172,0x17f,0x180,0x181,0x75d].map(o=>[o,!!v.getUint8(o)])),section=save.sections.find(s=>s.name==='records_0066aca0'),c=new DataView(section.data.buffer,section.data.byteOffset,section.data.byteLength),cupRecords=[];
 for(let offset=0;offset<c.byteLength;offset+=660)cupRecords.push({field140:c.getInt32(offset+0x140,true),field148:c.getInt32(offset+0x148,true)});
 return assignCompetitionSchedule(baseCalendar(season),{season,mode:v.getInt32(0x168,true),flags,cupRecords});
}

// Original 00656a18. Positive slots stop immediately; the later type-3 branch is unreachable.
export function nextCalendarCursor(calendar,currentDay,events){
 for(let day=(currentDay+1)|0;day<=366;day++){
  const row=calendar[day-1];if(!row)throw RangeError('Invalid original calendar cursor');
  if(row.competition>0)return day;
  if(row.competition===0&&events.some(e=>e.date===row.date&&!e.complete))return day;
  if(row.competition<0&&day===366)return 366;
 }
 return currentDay;
}
// Original 0065b414 deliberately does not filter completed fixtures.
export function fixtureOnDate(fixtures,club,date){return fixtures.findIndex(f=>f.date===date&&(f.clubs[0]===club||f.clubs[1]===club));}
export function savedFixtures(save){const s=save.sections.find(s=>s.name==='records_0066afa0'),v=new DataView(s.data.buffer,s.data.byteOffset,s.data.byteLength),rows=[];for(let o=0;o<v.byteLength;o+=72)rows.push({id:o/72,clubs:[v.getInt32(o,true),v.getInt32(o+4,true)],competition:v.getInt32(o+0x18,true),complete:!!v.getUint8(o+0x2c),date:v.getFloat64(o+0x30,true)});return rows;}
export function nextCareerCalendarCursor(save,calendar=careerSchedule(save)){
 const v=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),s=save.sections.find(s=>s.name==='records_0066b0d4'),data=new DataView(s.data.buffer,s.data.byteOffset,s.data.byteLength),events=[];
 for(let o=0;o<data.byteLength;o+=24)events.push({date:data.getFloat64(o+16,true),complete:!!data.getUint8(o+8)});
 return nextCalendarCursor(calendar,v.getInt32(0x16c,true),events);
}
export function careerAgenda(save){
 const v=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),calendar=careerSchedule(save),fixtures=savedFixtures(save),currentDay=v.getInt32(0x16c,true),nextDay=nextCareerCalendarCursor(save,calendar),club=v.getInt32(8,true),current=calendar[currentDay-1],next=calendar[nextDay-1];
 return {calendar,currentDay,nextDay,currentDate:current.date,nextDate:next.date,currentCompetition:current.competition,nextCompetition:next.competition,currentFixtureId:fixtureOnDate(fixtures,club,current.date),fixtureId:fixtureOnDate(fixtures,club,next.date),fixtures};
}
