import {fatigue,regulationEndTick} from '../match-clock.mjs';
import {stepFixture} from '../fixture-step.mjs';
import {updatePlayerStats,recordCareerEvent} from '../career-stats.mjs';
import * as core from '../match-core.mjs';
import * as players from '../match-players.mjs';
import * as incidents from '../match-incidents.mjs';
import {calculateLineup} from '../lineup.mjs';
import {dispatchEvent} from '../match-events.mjs';
export function evaluate(kind,c){
 let ci=0;const rng=new core.OriginalRandom(c.initialSeed,()=>c.initialSeed+ci++*(c.clockStride??0));
 const state=c.state?structuredClone(c.state):null,lineup=c.lineup?structuredClone(c.lineup):null,fixture=c.fixture?structuredClone(c.fixture):null;
 const [a,b,d]=c.args??[];let result;
 if(kind==='record'){
  const state={players:{1:{clubId:c.clubId}},events:structuredClone(c.initialEvents)},statCalls=[];
  const result=recordCareerEvent(c.side,1,c.fixture,c.detail,c.type,state,rng,(id,club,competition,event)=>statCalls.push([id,club,competition,event]));
  return {result,events:state.events,statCalls};
 }
 if(kind==='clock'){
  if(c.name==='fatigue'){fatigue(lineup,c.tick,state);return Array.from({length:11},(_,i)=>state.players[i+1].condition);}
  return {result:regulationEndTick(c.redCards,rng),seed:rng.state,clockReads:0};
 }
 if(kind==='stats'){
  updatePlayerStats(1,0,4,c.event,state,rng);
  return {seed:rng.state,clockReads:rng.clockReads,player:state.players[1],notifications:state.notifications,scorers:state.scorers,appearances:state.appearances,playerSeasonStats:state.playerSeasonStats};
 }
 if(kind==='step'){
  const teams=structuredClone(c.teams),calls=[];
  const {recordIndex}=stepFixture(fixture,teams,state,rng,(side,player,_f,detail,type)=>{calls.push([side,player,detail,type]);return calls.length-1;});
  const f=fixture;
  return {result:recordIndex,seed:rng.state,clockReads:rng.clockReads,calls,fixture:{zone:f.zone,side:f.side,previousEvent:f.previousEvent,tick:f.tick,endTick:f.endTick,counters:f.counters,substitutions:f.substitutions},condition:Array.from({length:37},(_,i)=>state.players[i].condition),active:Array.from({length:37},(_,i)=>state.players[i].active)};
 }

 if(kind==='lineup'){
  const value=calculateLineup(lineup,state);delete value.players;delete value.positions;return value;
 }
 if(kind==='player'){
  switch(c.name){case 'playerAtPosition':result=players.playerAtPosition(lineup,b,state);break;case 'selectScorer':result=players.selectScorer(lineup,b,d,state,rng);break;case 'selectIncidentPlayer':result=players.selectIncidentPlayer(lineup,b,state,rng);break;case 'freeKick':case 'penalty':result=players[c.name](lineup,b,d,state,rng);break;default:throw Error(c.name);}
  return {result,seed:rng.state,clockReads:rng.clockReads,nominees:state.clubs.map(c=>c.setPiecePlayer)};
 }
 if(kind==='incident'){
  switch(c.name){case 'card':result=incidents.card(lineup,b,fixture.tick,state,rng);break;case 'injuryReplacement':result=incidents.injuryReplacement(lineup,b,state);break;case 'chooseSubstitution':result=incidents.chooseSubstitution(lineup,b,state,c.stack[1],c.stack[2]);break;case 'automaticSubstitution':result=incidents.automaticSubstitution(lineup,fixture,1,state,rng);break;case 'injury':result=incidents.injury(lineup,b,fixture,1,state,rng);break;default:throw Error(c.name);}
  return {result,seed:rng.state,clockReads:rng.clockReads,mutations:{lineup,active:Array.from({length:19},(_,i)=>state.players[i].active),yellowCards:state.yellowCards,substitutions:fixture.substitutions}};
 }
 if(kind==='event'){
  const teams=structuredClone(c.teams);result=dispatchEvent(...c.args,teams,fixture,state,rng);
  return {result,seed:rng.state,clockReads:rng.clockReads,mutations:{teams,active:Array.from({length:37},(_,i)=>state.players[i].active),yellowCards:state.yellowCards,substitutions:fixture.substitutions,nominees:state.clubs.map(c=>c.setPiecePlayer)}};
 }
 switch(c.name){case 'random':result=rng.below(a)|0;break;case 'otherSide':case 'goalKickZone':case 'kickoffZone':case 'mirrorZone':result=core[c.name](...c.args);break;case 'cornerZone':result=core.cornerZone(a,rng);break;case 'restartZone':result=core.restartZone(a,b,rng);break;case 'chance':result=Number(rng.chance(a,b));break;case 'adjustedThreshold':result=core.adjustedThreshold(a,b,d,c.coefficient);break;case 'duel':result=core.duel(a,b,d,c.stack[0],rng);break;case 'pass':result=core.pass(a,b,d,c.stack[2],rng);break;case 'shot':result=core.shot(a,b,d,c.stack[0],rng);break;case 'transition':result=core.transition(a,b,d,c.teams,rng);break;default:throw Error(c.name);}
 return {result,seed:rng.state,clockReads:rng.clockReads};
}
export function equalValues(a,b){
 if(a===b)return true;if(!a||!b||typeof a!=='object'||typeof b!=='object')return false;
 const keys=Object.keys(a);return keys.length===Object.keys(b).length&&keys.every(k=>Object.hasOwn(b,k)&&equalValues(a[k],b[k]));
}
