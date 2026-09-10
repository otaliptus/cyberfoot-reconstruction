import {cupAttendance,continentalAttendance,secondaryContinentalAttendance} from '../match-attendance.mjs';import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16));
export function verifyCupAttendance(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const career=new Uint8Array(1888),c=new DataView(career.buffer);for(const [o,n] of [[0x110,v.stage],[0x168,v.mode],[0x194,v.round],[0x1a0,v.round]])c.setInt32(o,n,true);
 const data=new Uint8Array(80),d=new DataView(data.buffer);v.reference.flat().forEach((n,j)=>d.setInt32(j*4,n,true));
 const save={career,sections:[{name:'clubs',recordSize:760,count:2,data:bytes(v.clubs)},{name:'records_0066b608',recordSize:16,count:5,data}]},rng=new OriginalRandom(v.seed);
 const attendance=({2:cupAttendance,4:continentalAttendance,6:secondaryContinentalAttendance}[v.kind])(save,0,1,rng,v.subgroup),actual={attendance,seed:rng.state};
 if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,kind:v.kind,actual,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkCupAttendance(){const r=verifyCupAttendance(await fetch(new URL('./cup-attendance-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));return {...r,failures:0};}
