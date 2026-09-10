import {applyCompetitionResult} from '../competition-result.mjs';
const bytes=hex=>Uint8Array.from(hex.match(/../g),n=>parseInt(n,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyCompetitionResult(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const data=new Uint8Array(1520);data.set(bytes(v.original[0]));data.set(bytes(v.original[1]),760);
  const save={career:new Uint8Array(1888),sections:[{name:'clubs',count:2,recordSize:760,data}]},c=new DataView(save.career.buffer),calls=[],notifications=[];
  for(const [off,n] of [[0x88,v.competition],[0x194,v.phase4],[0x1a0,v.phase6],[0x62c,v.phaseInternational]])c.setInt32(off,n,true);
  applyCompetitionResult(save,{clubs:[0,1],counters:{0x48:v.score[0],0x4c:v.score[1]}},{competition3TableValue:v.table,managerStatistic:(...args)=>calls.push(args),notify:(...args)=>notifications.push(args)});
  const actual={clubs:[hex(data.subarray(0,760)),hex(data.subarray(760))],calls,notifications};
  for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }
 return {cases:vectors.length,failures};
}
export async function checkCompetitionResult(){const r=verifyCompetitionResult(await fetch(new URL('./competition-result-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));const settlement=await(await import('./finished-fixture-proof.mjs')).checkFinishedFixture();const {checkRegulationFlow}=await import('./regulation-flow-integration.mjs');const integration=await checkRegulationFlow(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()),{settle:true});return {...r,failures:0,settlement,integration};}
