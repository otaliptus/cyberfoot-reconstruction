import {baseCalendar} from '../calendar.mjs';import {assignCompetitionSchedule,nextCalendarCursor,fixtureOnDate,careerAgenda} from '../schedule.mjs';import {readSave,writeSave,record,shortString} from '../save-format.mjs';
export async function checkSchedule(){
 const load=n=>fetch(new URL(n,import.meta.url)).then(r=>r.json()),[schedules,cursors,fixtures,agenda]=await Promise.all(['schedule-vectors.json','calendar-cursor-vectors.json','fixture-lookup-vectors.json','career-agenda-vector.json'].map(load)),equal=(a,b,label)=>{if(JSON.stringify(a)!==JSON.stringify(b))throw Error(label);};
 for(const [i,c] of schedules.entries())equal(assignCompetitionSchedule(baseCalendar(c.season),c).map(r=>r.competition),c.expected,`Schedule ${i}`);
 for(const [i,c] of cursors.entries())equal(nextCalendarCursor(c.competitions.map((competition,j)=>({competition,date:42000+j})),c.cursor,c.events),c.expected,`Cursor ${i}`);
 for(const [i,c] of fixtures.entries())equal(fixtureOnDate(c.fixtures,c.club,c.date),c.expected,`Fixture ${i}`);
 const original=new Uint8Array(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer())),save=readSave(original),a=careerAgenda(save);equal({calendar:a.calendar.map(r=>r.competition),currentDay:a.currentDay,nextDay:a.nextDay,nextDate:a.nextDate,fixtureId:a.fixtureId},agenda,'Original save agenda');equal(Array.from(writeSave(save)),Array.from(original),'Agenda mutated save');
 return {cases:schedules.length+cursors.length+fixtures.length+1,failures:0,currentDay:a.currentDay,nextDay:a.nextDay,nextDate:a.nextDate,nextClubs:a.fixtures[a.fixtureId].clubs.map(id=>shortString(record(save,'clubs',id),0,25)),saveUnchanged:true};
}
