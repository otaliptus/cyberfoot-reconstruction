import {runMatchDecisionFlow,runMatchDecisionFlowAsync} from './match-decisions.mjs';
import {transition,otherSide,kickoffZone,mirrorZone} from './match-core.mjs';
import {automaticSubstitution,card,injuryFlow} from './match-incidents.mjs';
import {penalty,freeKick,selectScorer} from './match-players.mjs';
/** 00608da4, including control flow wrongly discarded by automatic decompilation.
 * Output: zone, possession side, next event state, event, actor side, player,
 * detail, reserved. Human penalty/replacement dialogs need host decisions.
 */
export function* dispatchEventFlow(zone,side,previousEvent,teams,fixture,state,rng,decisions={}){
 const own=teams[side-1],other=otherSide(side),opponent=teams[other-1],out=Array(8).fill(-1);
 let allow=true;
 function set(values){values.forEach((v,i)=>{out[i]=v;});allow=false;}
 if(!state.clubs[fixture.clubs[side-1]].human&&fixture.tick%4===0){
  const [a,b]=automaticSubstitution(own,fixture,side,state,rng);if(a>0&&b>0)set([zone,side,previousEvent,19,side,a,b]);
 }
 if(previousEvent===11&&allow){const [id,type]=card(opponent,-1,fixture.tick,state,rng);if(id>0)set([zone,side,12,13,other,id,type]);}
 if(previousEvent===12&&allow){const [id,replacement]=yield* injuryFlow(own,zone,fixture,side,state,rng,decisions.injuryReplacement);if(id>0)set([zone,side,17,18,side,id,replacement]);}
 // State 17 deliberately bypasses the allow guard in the original.
 if(previousEvent===17||(previousEvent===12&&allow)){
  if(rng.below(100)>90){
   let pair;
   const humanAttacks=state.clubs[fixture.clubs[side-1]].human,humanDefends=state.clubs[fixture.clubs[other-1]].human;
   if(state.automaticInteractions||(!humanAttacks&&!humanDefends))pair=penalty(own,opponent.keeper,-1,state,rng);
   else {
    if(!decisions.penalty)throw Error('Original penalty requires a manager decision.');
    pair=yield ()=>decisions.penalty({side,humanAttacks,own,opponent,fixture,state,rng});
   }
   const [id,type]=pair;
   if(type===1)set([kickoffZone(other),other,-1,15,side,id]);
   else if(type>1)set([mirrorZone(2,other),other,-1,16,side,id,type]);
  }else{const [id]=freeKick(own,opponent.keeper,zone,state,rng);if(id>0)set([kickoffZone(other),other,-1,14,side,id]);}
 }
 if(allow){
  const [nextZone,nextSide,event]=transition(zone,side,previousEvent,teams,rng);
  if(event===4){
   const scorer=rng.below(100)>0?selectScorer(teams[otherSide(nextSide)-1],nextZone,-1,state,rng):selectScorer(teams[nextSide-1],mirrorZone(2,nextSide),-2,state,rng);
   set([kickoffZone(nextSide),nextSide,-1,4,otherSide(nextSide),scorer]);
  }else if(event===5)set([nextZone,nextSide,11,5,otherSide(nextSide),-1]);
  else set([nextZone,nextSide,event,event,nextSide,-1]);
 }
 return out;
}

export function dispatchEvent(...args){return runMatchDecisionFlow(dispatchEventFlow(...args));}
export function dispatchEventAsync(...args){return runMatchDecisionFlowAsync(dispatchEventFlow(...args));}
