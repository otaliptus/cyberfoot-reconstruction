import {applyKnockoutOutcome,eliminateKnockoutLoser} from '../knockout-progress.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyKnockoutProgress(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const leagues=new Uint8Array(v.countries.length*660),l=new DataView(leagues.buffer);v.countries.forEach((n,j)=>l.setInt32(j*660+0x140,n,true));
 const save={career:bytes(v.career),sections:[{name:'clubs',recordSize:760,count:2,data:bytes(v.clubs.join(''))},{name:'records_0066afa0',recordSize:72,count:1,data:bytes(v.saved)},{name:'records_0066aca0',recordSize:660,count:v.countries.length,data:leagues},{name:'records_0066b114',recordSize:20,count:0,marker:0,data:new Uint8Array()}]};
 applyKnockoutOutcome(save,v.competition,v.round,1,0);eliminateKnockoutLoser(save,0,v.winner);
 const actual={clubs:[0,1].map(j=>hex(save.sections[0].data.subarray(j*760,(j+1)*760))),history:hex(save.sections[3].data)};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkKnockoutProgress(){const r=verifyKnockoutProgress(await fetch(new URL('./knockout-progress-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
