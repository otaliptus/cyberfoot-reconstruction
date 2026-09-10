import assert from 'node:assert/strict';
import {OriginalRandom} from '../match-core.mjs';
import {createAttackingPenalty,resolveHumanPenalty,humanPenaltyRoster,selectHumanPenaltyKeeper} from '../human-penalty.mjs';
const players=Array.from({length:23},(_,i)=>({name:'Player '+i,active:i>0,role:i===22?0:4,trait1:0,trait2:0,veteranFlag:false}));
const own={players:Array.from({length:11},(_,i)=>i+1),positions:[18,22,23,24,19,20,21,25,10,14,1]},opponent={players:Array.from({length:11},(_,i)=>i+12)},state={players};
assert.equal(humanPenaltyRoster(own,state)[0].playerId,11);
assert.equal(selectHumanPenaltyKeeper(opponent,state),22);players[22].active=false;
assert.equal(selectHumanPenaltyKeeper(opponent,state),12);assert.equal(selectHumanPenaltyKeeper(opponent,state,21),21);players[22].active=true;
for(const seed of [0,1,2015,0xffffffff]){
 const rng=new OriginalRandom(seed),baseline=new OriginalRandom(seed),phases=[];
 const c=createAttackingPenalty({own,opponent,state,rng,present:v=>phases.push(v.phase)});
 assert.equal(c.kick(),false);assert.throws(()=>c.select(0),/candidate/);c.advanceTime(20000);assert.equal(rng.state,seed>>>0);
 c.select(1);assert.equal(c.kick(),true);assert.equal(c.kick(),false);assert.equal(c.select(2),false);
 const first=baseline.below(5);assert.equal(c.view.languageId,[461,461,462,462,461][first]);
 c.advanceTime(1999);assert.equal(c.view.phase,'runup');c.advanceTime(1);assert.equal(c.view.phase,'shot');
 assert.equal(c.view.languageId,baseline.below(4)<2?461:462);
 c.advanceTime(2000);assert.deepEqual(c.view.outcome,resolveHumanPenalty(1,22,state,baseline,{humanAttacks:true}));
 let resolved=false;c.result.then(()=>resolved=true);c.advanceTime(2499);await Promise.resolve();assert.equal(resolved,false);
 c.advanceTime(1);assert.deepEqual(await c.result,[1,c.view.outcome.result]);assert.equal(rng.state,baseline.state);
 const finalSeed=rng.state;c.advanceTime(50000);assert.equal(rng.state,finalSeed);
 assert.deepEqual(phases,['selection','selection','runup','shot','result','closed']);
}
console.log('Attacking penalty selection, timing, no-repeat and result delivery passed.');
