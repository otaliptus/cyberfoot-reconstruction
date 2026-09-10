import {routeCompetitionBatch,continueCompetitionBatch} from '../competition-batch.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export async function verifyCompetitionBatch(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const save={career:bytes(v.career),sections:[{name:'records_0066aca0',recordSize:660,count:3,data:bytes(v.leagues)},{name:'records_0066afa0',recordSize:72,count:v.fixtures.length/144,data:bytes(v.fixtures)}]},runtime=structuredClone(v.runtime),effects=[];
 await (v.advance?continueCompetitionBatch:routeCompetitionBatch)(save,runtime,(...args)=>effects.push(args),{cup:()=>v.selectors.cup,league:()=>v.selectors.league,champion:()=>v.selectors.champion,human:(_,region)=>v.selectors.human[region]});
 const actual={career:hex(save.career),runtime:Object.fromEntries(Object.keys(v.expected.runtime).map(key=>[key,runtime[key]])),effects};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkCompetitionBatch(){const r=await verifyCompetitionBatch(await fetch(new URL('./competition-batch-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
