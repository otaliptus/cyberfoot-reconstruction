import {runMatchDecisionFlow,runMatchDecisionFlowAsync} from './match-decisions.mjs';
import {dispatchEventFlow} from './match-events.mjs';
import {otherSide,mirrorZone} from './match-core.mjs';
import {calculateLineup} from './lineup.mjs';
import {fatigue,regulationEndTick} from './match-clock.mjs';
/** 00609bc8. Fixture counters use their original byte offsets until every
 * display label is established. recordEvent must implement 0060cfa8; this
 * routine is not a complete career simulator without that dependency.
 */
function* stepFixtureFlow(fixture,teams,state,rng,recordEvent,decisions={}){
 if(typeof recordEvent!=='function')throw Error('Original event recording and career statistics are required.');
 const counters=fixture.counters;
 const get=(base,side)=>counters[base+side*4]??0;
 const inc=(base,side,delta=1)=>{counters[base+side*4]=(get(base,side)+delta)|0;};
 let zone=fixture.zone,side=fixture.side,result=-1;
 if(side<1)side=rng.below(2)+1;
 if(zone<1)zone=mirrorZone(5,side);
 fixture.tick=(fixture.tick+1)|0;
 if(fixture.tick===180)fixture.endTick=regulationEndTick([get(0x19c,1),get(0x19c,2)],rng);
 if(fixture.tick>0&&fixture.tick%15===0){fatigue(teams[0],fixture.tick,state);fatigue(teams[1],fixture.tick,state);}
 inc(0x84,side);
 const event=yield* dispatchEventFlow(zone,side,fixture.previousEvent,teams,fixture,state,rng,decisions);
 const [nextZone,nextSide,nextState,type,actor,player,detail]=event;
 fixture.zone=nextZone;fixture.side=nextSide;fixture.previousEvent=nextState;
 const record=(recordType,recordDetail=-1)=>{result=recordEvent(actor,player,fixture,recordDetail,recordType,state,rng);};
 switch(type){
 case 1:inc(0x94,nextSide);break;
 case 2:inc(0x164,nextSide);break;
 case 3:case 6:inc(0x8c,otherSide(nextSide));break;
 case 4:{
  const score=get(0x44,actor);let cancel=false,threshold=null;
  if(fixture.tick<92&&score>1)threshold=score===2?80:score===3?70:score===4?30:score>=5&&score<=100?1:null;
  if(fixture.tick>91&&score>3)threshold=score===4?80:score===5?50:score===6?3:score<=8?1:score<=100?0:null;
  if(threshold!==null)cancel=rng.below(100)>threshold;
  if(!cancel)cancel=!teams[0].warning&&!teams[1].warning;
  if(!cancel){inc(0x8c,actor);inc(0x44,actor);record(4);}break;
 }
 case 5:inc(0xa4,actor);break;
 case 7:inc(0x8c,nextSide);break;
 case 9:inc(0x9c,otherSide(nextSide));break;
 case 10:inc(0x9c,otherSide(nextSide));inc(0x164,otherSide(nextSide),-1);break;
 case 13:record(13,detail);inc(detail===1?0x194:0x19c,actor);break;
 case 14:inc(0x44,actor);inc(0x8c,actor);record(14);break;
 case 15:inc(0x44,actor);inc(0x8c,actor);inc(0x15c,actor);record(15);break;
 case 16:inc(0x8c,actor);inc(0x15c,actor);record(16);break;
 case 18:record(18,detail);inc(0x1a4,actor);break;
 case 19:record(19,detail);break;
 }
 calculateLineup(teams[0],state);calculateLineup(teams[1],state);
 return {event,recordIndex:result};
}

export function stepFixture(...args){return runMatchDecisionFlow(stepFixtureFlow(...args));}
export function stepFixtureAsync(...args){return runMatchDecisionFlowAsync(stepFixtureFlow(...args));}
