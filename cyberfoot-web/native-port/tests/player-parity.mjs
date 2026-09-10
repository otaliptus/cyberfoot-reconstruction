import fs from 'node:fs';
import assert from 'node:assert/strict';
import * as players from '../match-players.mjs';
import {OriginalRandom} from '../match-core.mjs';
export function evaluatePlayerCase(c){
 const state=structuredClone(c.state),rng=new OriginalRandom(c.initialSeed,()=>c.initialSeed);let result;
 const [,b,d]=c.args;
 switch(c.name){
 case 'playerAtPosition':result=players.playerAtPosition(c.lineup,b,state);break;
 case 'selectScorer':result=players.selectScorer(c.lineup,b,d,state,rng);break;
 case 'selectIncidentPlayer':result=players.selectIncidentPlayer(c.lineup,b,state,rng);break;
 case 'freeKick':case 'penalty':result=players[c.name](c.lineup,b,d,state,rng);break;
 default:throw Error(c.name);
 }
 return {result,seed:rng.state,clockReads:rng.clockReads,nominees:state.clubs.map(c=>c.setPiecePlayer)};
}
const cases=JSON.parse(fs.readFileSync(new URL('./player-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){const actual=evaluatePlayerCase(c);try{assert.deepEqual(actual,c.expected);}catch{if(failed++<8)console.error(JSON.stringify({case:c,actual}));}}
console.log(JSON.stringify({playerCases:cases.length,failed}));assert.equal(failed,0);
