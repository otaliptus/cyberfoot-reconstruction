import fs from 'node:fs';
import assert from 'node:assert/strict';
import * as incident from '../match-incidents.mjs';
import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./incident-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){
 const l=structuredClone(c.lineup),s=structuredClone(c.state),f=structuredClone(c.fixture),rng=new OriginalRandom(c.initialSeed,()=>c.initialSeed);let result;
 switch(c.name){case 'card':result=incident.card(l,c.args[1],f.tick,s,rng);break;case 'injuryReplacement':result=incident.injuryReplacement(l,c.args[1],s);break;case 'chooseSubstitution':result=incident.chooseSubstitution(l,c.args[1],s,c.stack[1],c.stack[2]);break;case 'automaticSubstitution':result=incident.automaticSubstitution(l,f,1,s,rng);break;case 'injury':result=incident.injury(l,c.args[1],f,1,s,rng);break;default:throw Error(c.name);}
 const actual={result,seed:rng.state,clockReads:rng.clockReads,mutations:{lineup:l,active:Array.from({length:19},(_,i)=>s.players[i].active),yellowCards:s.yellowCards,substitutions:f.substitutions}};
 try{assert.deepEqual(actual,c.expected);}catch{if(failed++<5)console.error(JSON.stringify({case:c,actual}));}
}
console.log(JSON.stringify({incidentCases:cases.length,failed}));assert.equal(failed,0);
