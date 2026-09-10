import {advanceTwoLegKnockout} from '../knockout-round.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export async function verifyKnockoutRounds(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const save={career:bytes(v.career),sections:[{name:'clubs',recordSize:760,count:v.clubs.length,data:bytes(v.clubs.join(''))},{name:'records_0066afa0',recordSize:72,count:v.fixtures.length/144,data:bytes(v.fixtures)},{name:'records_0066aca0',recordSize:660,count:1,data:new Uint8Array(660)},{name:'records_0066b114',recordSize:20,count:0,marker:0,data:new Uint8Array()}]},calls=[];
 await advanceTwoLegKnockout(save,{subgroup:v.subgroup,alternateRound:v.alternateRound,decide:id=>{calls.push(['decide',id]);return 1+id%2;},champion:(id,fixture)=>calls.push(['champion',id,fixture])});
 const actual={clubs:hex(save.sections[0].data),fixtures:hex(save.sections[1].data),history:hex(save.sections[3].data),calls};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkKnockoutRounds(){const r=await verifyKnockoutRounds(await fetch(new URL('./knockout-round-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
