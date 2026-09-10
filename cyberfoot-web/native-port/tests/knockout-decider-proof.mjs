import {settleAutomaticDecider} from '../knockout-decider.mjs';import {OriginalRandom} from '../match-core.mjs';
const hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyKnockoutDeciders(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const bytes=Uint8Array.from(v.saved.match(/../g),x=>parseInt(x,16)),save={sections:[{name:'records_0066afa0',recordSize:72,count:1,data:bytes}]},fixtures=structuredClone(v.fixtures),rng=new OriginalRandom(v.seed);
  const {winner}=settleAutomaticDecider(save,0,fixtures,rng);const actual={winner,seed:rng.state,fixtures:fixtures.map(({field170,field174,field178})=>({field170,field174,field178})),saved:hex(bytes)};
  for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }
 return {cases:vectors.length,failures};
}
export async function checkKnockoutDeciders(){const r=verifyKnockoutDeciders(await fetch(new URL('./knockout-decider-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));return {...r,failures:0};}
