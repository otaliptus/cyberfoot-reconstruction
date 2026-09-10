import fs from 'node:fs';
import assert from 'node:assert/strict';
import {dispatchEvent} from '../match-events.mjs';
import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./event-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){
 const teams=structuredClone(c.teams),s=structuredClone(c.state),f=structuredClone(c.fixture);let ci=0;const rng=new OriginalRandom(c.initialSeed,()=>c.initialSeed+ci++*c.clockStride);
 const result=dispatchEvent(...c.args,teams,f,s,rng);
 const actual={result,seed:rng.state,clockReads:rng.clockReads,mutations:{teams,active:Array.from({length:37},(_,i)=>s.players[i].active),yellowCards:s.yellowCards,substitutions:f.substitutions,nominees:s.clubs.map(c=>c.setPiecePlayer)}};
 try{assert.deepEqual(actual,c.expected);}catch{if(failed++<3)console.error(JSON.stringify({case:c,actual}));}
}
console.log(JSON.stringify({eventCases:cases.length,failed}));assert.equal(failed,0);
