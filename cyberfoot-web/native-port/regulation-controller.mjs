import {prepareScorePlan,deliverPlannedGoalsAsync,matchMinute} from './match-score-plan.mjs';
import {stepFixtureAsync} from './fixture-step.mjs';
/** Business sequencing of 0061c834. Presentation, modal halftime decisions and
 * 0061f604 finalization are explicit dependencies, not silently skipped.
 * Async event presentation and halftime correspond to the original modal dialog/message loop.
 */
export function createRegulationController({fixtures,teamsFor,state,rng,recordEvent,decisions={},fullGameGauge=false,pauseAtHalftime=false,humanFixtureIds=[],humanManagerCount=0,sound=false,present,halftime,finalize}){
 for(const [name,fn] of Object.entries({teamsFor,recordEvent,present,halftime,finalize}))if(typeof fn!=='function')throw TypeError(`Original regulation requires ${name}.`);
 if(fixtures.some((f,i)=>f.id!==i+1))throw RangeError('Original transient fixture IDs must be consecutive from one.');
 const flow={tick:0,period:1,timerEnabled:false,halftimeActive:false,halftimeReached:false,finished:false,plan:[]};let busy=false;
 async function advance(){
  if(busy)throw Error('Match clock is already advancing.');if(flow.finished)return false;
  busy=true;flow.timerEnabled=false;
  try{
   if(flow.tick===0){
    flow.plan=[];
    for(const fixture of fixtures){
     const teams=teamsFor(fixture);fixture.startingPlayers=teams.map(t=>[...t.players]);fixture.startingPositions=teams.map(t=>[...t.positions]);
     flow.plan.push(...prepareScorePlan(fixture,teams,state,rng));
    }
   }
   flow.tick=(flow.tick+1)|0;
   if(flow.tick===1){flow.period=1;await present({type:'period',languageId:504});await present({type:'clockStart'});}
   await present({type:'processMessages'});
   for(const fixture of fixtures){
    const teams=teamsFor(fixture);let recordIndex=-1;
    if(flow.tick<183||flow.tick<=fixture.endTick)({recordIndex}=await stepFixtureAsync(fixture,teams,state,rng,recordEvent,decisions));
    if(!teams[0].warning&&!teams[1].warning)await deliverPlannedGoalsAsync(flow.plan,flow.tick,fixture,teams,state,rng,recordEvent,index=>present({type:'event',index}));
    if(recordIndex>0)await present({type:'event',index:recordIndex});
   }
   if(flow.tick%2===0&&flow.tick<183)await present({type:'minute',minute:matchMinute(flow.tick,fullGameGauge),maximum:fullGameGauge?90:45});
   if(flow.tick===92){
    flow.halftimeReached=true;flow.halftimeActive=true;await present({type:'clockLabel',languageId:506});
    if(sound)await present({type:'sound',resource:'intervalo'});
    if(pauseAtHalftime&&humanManagerCount>0){for(const id of humanFixtureIds){if(id>0&&id<=fixtures.length){const fixture=fixtures.find(f=>f.id===id);if(fixture)await halftime(fixture);}}}
    for(const fixture of fixtures)await present({type:'clearFixtureEvent',fixtureId:fixture.id});
    flow.period=2;await present({type:'period',languageId:505});flow.halftimeActive=false;
    if(!fullGameGauge)await present({type:'gauge',value:0});
   }
   if(flow.tick===182)await present({type:'clockLabel',languageId:507});
   if(flow.tick===190){await present({type:'clockLabel',languageId:508});flow.tick=0;await finalize();flow.finished=true;}
   else flow.timerEnabled=true;
   return true;
  }finally{busy=false;}
 }
 return {flow,advance};
}
