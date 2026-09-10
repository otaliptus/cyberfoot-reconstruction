import {finalizeCupChampion} from '../champion-finalization.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyChampionFinalization(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const fixture=new Uint8Array(72);new DataView(fixture.buffer).setInt32(4,1,true);
 const save={career:bytes(v.career),sections:[{name:'clubs',recordSize:760,count:2,data:bytes(v.clubs.join(''))},{name:'records_0066afa0',recordSize:72,count:1,data:fixture},{name:'records_0066afec',recordSize:56,count:2,data:bytes(v.ledger)},{name:'records_0066b718',recordSize:128,count:3,data:bytes(v.managers)}]},calls=[];
 finalizeCupChampion(save,v.winner,0,{activeSubgroup:2,clubHonour:(_,a)=>calls.push(['0x64c36c',[a.competition,a.clubId,a.country,a.place,a.group,a.subgroup,a.division]]),managerHonour:(_,a)=>calls.push(['0x64c4bc',[a.competition,a.clubId,a.managerId,a.country,a.place,a.division]]),playerAwards:(_,a)=>calls.push(['0x657674',[a.competition,a.country,a.division,a.group,a.subgroup]]),managerStatistic:(_,id,club,amount,kind)=>calls.push(['0x6494f8',[id,club,amount,kind]])});
 const actual={clubs:hex(save.sections[0].data),ledger:hex(save.sections[2].data),managers:hex(save.sections[3].data),calls};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkChampionFinalization(){const r=verifyChampionFinalization(await fetch(new URL('./champion-finalization-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
