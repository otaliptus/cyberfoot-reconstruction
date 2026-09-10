import {selectWeeklyTeam,findLeagueConfiguration} from '../weekly-team.mjs';
const hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyWeeklyTeam(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  if(v.kind==='lookup'){const data=new Uint8Array(v.ids.length*660),d=new DataView(data.buffer);v.ids.forEach((n,j)=>d.setInt32(j*660+0x140,n,true));const actual=findLeagueConfiguration({sections:[{name:'records_0066aca0',count:v.ids.length,data}]},v.query);if(actual!==v.expected)failures.push({i,actual,expected:v.expected});continue;}
  const league={name:'records_0066aca0',recordSize:660,count:1,marker:1,data:new Uint8Array(660)},weekly={name:'records_0066b578',recordSize:100,count:0,marker:0,data:new Uint8Array()},save={career:new Uint8Array(1888),sections:[league,weekly]},c=new DataView(save.career.buffer);
  for(const [o,n] of [[0xc0,v.season],[0x168,v.mode],[0x50,v.leg],[0x4c,v.round]])c.setInt32(o,n,true);new DataView(league.data.buffer).setInt32(0x144,v.divisions,true);
  const state={players:v.players,ratingCandidates:structuredClone(v.candidates)};selectWeeklyTeam(save,state,0);
  const actual={candidates:state.ratingCandidates,records:hex(weekly.data)};for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }
 return {cases:vectors.length,failures};
}
export async function checkWeeklyTeam(){const [weekly,lookup]=await Promise.all(['weekly-team-vectors.json','league-lookup-vectors.json'].map(name=>fetch(new URL(name,import.meta.url)).then(r=>r.json())));const r=verifyWeeklyTeam([...weekly,...lookup.map(v=>({...v,kind:'lookup'}))]);if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));const {checkRegulationFlow}=await import('./regulation-flow-integration.mjs');const integration=await checkRegulationFlow(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()),{settle:true,history:true,weekly:true});const knockout=await(await import('./knockout-result-proof.mjs')).checkKnockoutResults();const deciders=await(await import('./knockout-decider-proof.mjs')).checkKnockoutDeciders();return {...r,failures:0,integration,knockout,deciders};}
