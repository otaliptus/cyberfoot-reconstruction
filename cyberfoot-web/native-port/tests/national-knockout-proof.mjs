import {advanceNationalKnockout} from '../national-knockout.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export async function verifyNationalKnockout(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const career=new Uint8Array(1888);new DataView(career.buffer).setInt32(0xc0,v.season,true);const save={career,sections:[{name:'clubs',recordSize:760,count:v.clubs.length,data:bytes(v.clubs.join(''))},{name:'records_0066afa0',recordSize:72,count:v.fixtures.length/144,data:bytes(v.fixtures)},{name:'records_0066ae98',recordSize:1384,count:1,data:bytes(v.group)},{name:'records_0066b114',recordSize:20,count:0,data:new Uint8Array()}]},calls=[];
 await advanceNationalKnockout(save,{...v,groupId:0,calendar:Array.from({length:366},(_,j)=>({date:42000+j,competition:3})),decide:id=>{calls.push(['decide',id]);return 1+id%2;},champion:(winner,loser)=>calls.push(['champion',winner,loser])});
 const actual={clubs:hex(save.sections[0].data),fixtures:hex(save.sections[1].data),group:hex(save.sections[2].data),history:hex(save.sections[3].data),calls};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkNationalKnockout(){const r=await verifyNationalKnockout(await fetch(new URL('./national-knockout-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
