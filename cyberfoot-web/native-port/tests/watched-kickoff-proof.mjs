import {initializeWatchedKickoff} from '../match-preparation.mjs';import {OriginalRandom} from '../match-core.mjs';
export function verifyWatchedKickoff(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const career=new Uint8Array(1888),c=new DataView(career.buffer);c.setUint8(0x6c8,v.fast);v.settings.forEach((n,j)=>c.setInt32(0x70c+j*4,n,true));const rng=new OriginalRandom(v.seed),fixtures=v.settings.map((_,i)=>({id:i+1})),effects=[],runtime={set batchTimerInterval(n){effects.push(['interval',n]);},set batchTimerEnabled(n){effects.push(['enabled',Number(n)]);}};
 initializeWatchedKickoff({career},fixtures,rng,runtime);const actual={values:fixtures.map(f=>[f.field20,f.field180,f.endTick]),effects,seed:rng.state};if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,actual,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkWatchedKickoff(){const r=verifyWatchedKickoff(await fetch(new URL('./watched-kickoff-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
