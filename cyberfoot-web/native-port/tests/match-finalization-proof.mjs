import {finalizeMatchBatch} from '../match-finalization.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16));
export async function verifyMatchFinalization(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const calls=[],fixtures=Array.from({length:v.count},(_,i)=>({id:i+1})),runtime={silent:v.silent,subgroup:v.subgroup,set batchTimerEnabled(n){calls.push(['timer',Number(n)]);}};
 await finalizeMatchBatch({career:bytes(v.career)},fixtures,{},null,{runtime,nationalPhase:v.phase,continueCompetition:route=>calls.push([route==='national'?'nationalNext':route]),present:type=>calls.push([type]),handlers:{settle:(_s,f)=>calls.push(['settle',f.id]),recover:(_s,f)=>calls.push(['recover',f.id]),knockout:()=>calls.push(['knockout']),national:(_s,o)=>calls.push(['national',o.phase]),history:()=>calls.push(['history'])}});
 if(JSON.stringify(calls)!==JSON.stringify(v.expected))failures.push({i,actual:calls,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkMatchFinalization(){const r=await verifyMatchFinalization(await fetch(new URL('./match-finalization-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
