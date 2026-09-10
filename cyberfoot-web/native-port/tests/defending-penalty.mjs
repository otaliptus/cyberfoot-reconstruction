import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {selectDefendingPenaltyPlayers,createDefendingPenalty,resolveHumanPenalty} from '../human-penalty.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(readFileSync(new URL('./defending-penalty-players-vectors.json',import.meta.url)));
for(const c of cases){
 const state={players:c.players};assert.deepEqual(selectDefendingPenaltyPlayers(c.own,c.opponent,c.nominee,state),c.expected);
 const rng=new OriginalRandom(2015),baseline=new OriginalRandom(2015),phases=[];
 const flow=createDefendingPenalty({...c,state,rng,present:v=>phases.push(v.phase)});
 flow.advanceTime(1999);assert.equal(flow.view.phase,'runup');assert.equal(rng.state,2015);
 flow.advanceTime(1);assert.equal(flow.view.phase,'shot');assert.equal(rng.state,2015);assert.equal(flow.view.languageId,462);
 flow.advanceTime(2000);const expected=resolveHumanPenalty(c.expected.playerId,c.expected.keeperId,state,baseline,{humanAttacks:false});assert.deepEqual(flow.view.outcome,expected);
 let done=false;flow.result.then(()=>done=true);flow.advanceTime(1999);await Promise.resolve();assert.equal(done,false);
 flow.advanceTime(1);assert.deepEqual(await flow.result,[expected.playerId,expected.result]);assert.equal(rng.state,baseline.state);flow.advanceTime(99999);assert.equal(rng.state,baseline.state);
 assert.deepEqual(phases,['runup','shot','result','closed']);
}
console.log(`Defending penalty: ${cases.length} original player selections and timed flows passed.`);
