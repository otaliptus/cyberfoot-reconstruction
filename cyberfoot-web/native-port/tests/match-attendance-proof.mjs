import {leagueAttendance,ticketIncome} from '../match-attendance.mjs';
import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16));
export function verifyMatchAttendance(vectors){
 const failures=[];
 for(const [i,v] of vectors.cases.entries()){
  const career=new Uint8Array(1888),c=new DataView(career.buffer);c.setInt32(0x4c,v.phase,true);c.setInt32(0x50,v.leg,true);
  const data=new Uint8Array(80),d=new DataView(data.buffer);v.reference.flat().forEach((n,j)=>d.setInt32(j*4,n,true));
  const clubs=bytes(v.clubs),save={career,sections:[{name:'clubs',recordSize:760,count:2,data:clubs},{name:'records_0066b608',recordSize:16,count:5,data}]},rng=new OriginalRandom(v.seed);
  const attendance=leagueAttendance(save,0,1,rng),home=new DataView(clubs.buffer),prices=Array.from({length:4},(_,j)=>home.getInt32(0x1f4+j*4,true));
  const actual={attendance,seed:rng.state,income:ticketIncome(attendance,prices)};
  if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,actual,expected:v.expected});
 }
 for(const [i,v] of vectors.incomes.entries()){const actual=ticketIncome(v.attendance,v.prices);if(actual!==v.expected)failures.push({incomeCase:i,actual,expected:v.expected});}
 return {cases:vectors.cases.length+vectors.incomes.length,failures};
}
export async function checkMatchAttendance(){const r=verifyMatchAttendance(await fetch(new URL('./match-attendance-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));return {...r,failures:0};}
