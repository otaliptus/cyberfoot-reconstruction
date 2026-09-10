import fs from 'node:fs';
import assert from 'node:assert/strict';
import * as native from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./original-vectors.json',import.meta.url)));
let failed=0;const counts={};
for(const c of cases){
 let clockIndex=0;const rng=new native.OriginalRandom(c.initialSeed,()=>c.initialSeed+clockIndex++*(c.clockStride??0));const [a,b,d]=c.args;let result;
 switch(c.name){
 case 'random':result=rng.below(a)|0;break;
 case 'otherSide':case 'goalKickZone':case 'kickoffZone':case 'mirrorZone':result=native[c.name](...c.args);break;
 case 'cornerZone':result=native.cornerZone(a,rng);break;
 case 'restartZone':result=native.restartZone(a,b,rng);break;
 case 'chance':result=Number(rng.chance(a,b));break;
 case 'adjustedThreshold':result=native.adjustedThreshold(a,b,d,c.coefficient);break;
 case 'duel':result=native.duel(a,b,d,c.stack[0],rng);break;
 case 'pass':result=native.pass(a,b,d,c.stack[2],rng);break;
 case 'shot':result=native.shot(a,b,d,c.stack[0],rng);break;
 case 'transition':result=native.transition(a,b,d,c.teams,rng);break;
 default:throw Error(c.name);
 }
 const actual={result,seed:rng.state,clockReads:rng.clockReads};
 try{assert.deepEqual(actual,c.expected);}catch{if(failed++<12)console.error(JSON.stringify({case:c,actual}));}
 counts[c.name]=(counts[c.name]??0)+1;
}
console.log(JSON.stringify({total:cases.length,failed,counts},null,2));
assert.equal(failed,0,'Native outputs must match original instructions, RNG state, and clock reads.');
