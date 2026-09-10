import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {swapMatchPitchPlayers,repositionMatchPlayer,initializeMatchShirts} from '../manual-match-tactics.mjs';
import coordinates from '../lineup-screen-tables.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(readFileSync(new URL('./manual-match-tactics-vectors.json',import.meta.url)));
for(const c of cases){
 const lineup={players:[...c.players],positions:[...c.positions]},state={},calls=[];let rendered=false,recalculated=false;
 const callbacks={render(){rendered=true;calls.push('render');},recalculate(l,s){assert.equal(l,lineup);assert.equal(s,state);recalculated=true;calls.push('calculate');}};
 const changed=c.kind==='swap'?swapMatchPitchPlayers(lineup,c.source,c.target,state,callbacks):repositionMatchPlayer(lineup,c.slot,c.position?coordinates.x[c.position-1]+1:-100,c.position?coordinates.y[c.position-1]+1:-100,state,callbacks);
 assert.deepEqual({...lineup,rendered,recalculated},c.expected);assert.equal(changed,rendered);assert.deepEqual(calls,rendered?['render','calculate']:['calculate']);
}
for(const seed of [0,1,2015,0xffffffff]){const actual=new OriginalRandom(seed),expected=new OriginalRandom(seed);const shirts=initializeMatchShirts(actual);assert.equal(shirts.length,18);for(const shirt of shirts)assert.deepEqual(shirt,{x:expected.below(100),y:expected.below(100)});assert.equal(actual.state,expected.state);}
console.log(`Original match pitch tactics: ${cases.length} swap/move branches passed; shirt initialization consumes 36 draws.`);
