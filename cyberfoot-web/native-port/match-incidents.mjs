import {runMatchDecisionFlow,runMatchDecisionFlowAsync} from './match-decisions.mjs';
import data from './lineup-tables.mjs';
import {calculateLineup} from './lineup.mjs';
import {selectIncidentPlayer} from './match-players.mjs';
export function removePlayer(lineup,id,state){ // 00607ac0
 if(lineup.players.includes(id)){state.players[id].active=false;calculateLineup(lineup,state);}
}
export function card(lineup,zone,tick,state,rng){ // 0060797c
 rng.randomize();let id=-1,type=-1;
 if(rng.below(100)>93){
  id=selectIncidentPlayer(lineup,zone,state,rng);type=1;
  if(id>0){if(state.yellowCards.includes(id)){type=3;removePlayer(lineup,id,state);}else state.yellowCards.push(id);}
 }else if(rng.below(tick<90?700:400)===1){id=selectIncidentPlayer(lineup,zone,state,rng);type=2;if(id>0)removePlayer(lineup,id,state);}
 return [id,type];
}
function benchForPosition(lineup,position,state,passes){
 const role=data.positionRole[(position-1)*3],specialty=data.positionRole[(position-1)*3+2];
 if(role===undefined)throw RangeError('Replacement requires an original position code.');
 for(let alternative=0;alternative<passes;alternative++){
  const targetRole=data.substitutionRole[role*5+alternative];
  // Passes one and two compare the same fields in the original.
  for(let pass=1;pass<=3;pass++)for(let i=0;i<7;i++){
   const id=lineup.bench[i];if(id>0&&state.players[id].role===targetRole&&(pass===3||state.players[id].specialty===specialty)){lineup.bench[i]=-1;return id;}
  }
 }
 return -1;
}
export function injuryReplacement(lineup,injured,state){ // 0060855c
 const slot=lineup.players.indexOf(injured);if(slot<0)throw RangeError('Injured player is not in the original lineup.');
 return benchForPosition(lineup,lineup.positions[slot],state,5);
}
export function chooseSubstitution(lineup,outgoing,state,mode=-1,requestedPosition=-1){ // 0060876c
 let position=-1;
 if(outgoing<1){
  if(requestedPosition>0){position=requestedPosition;
   if(mode===1)for(let p=25;p>=10&&outgoing<1;p--)for(let i=0;i<11;i++)if(state.players[lineup.players[i]].active&&lineup.positions[i]===p){outgoing=lineup.players[i];break;}
  }
 }else{const slot=lineup.players.indexOf(outgoing);if(slot>=0)position=lineup.positions[slot];}
 return position===-1?[-1,-1]:[outgoing,benchForPosition(lineup,position,state,4)];
}
export function automaticSubstitution(lineup,fixture,side,state,rng){ // 00608a20
 if(fixture.substitutions[side-1]<=0)return [-1,-1];
 const counts=Array(26).fill(0);for(const p of lineup.positions)counts[p]++;
 let pair=[-1,-1],kind=-1;
 const keeperId=lineup.players[10];
 if(keeperId<1||!state.players[keeperId].active){pair=chooseSubstitution(lineup,-1,state,1,1);kind=2;}
 if(counts.slice(3,9).filter(n=>n>0).length<2){pair=chooseSubstitution(lineup,-1,state,1,3);kind=1;}
 if(fixture.tick>92&&fixture.substitutions[side-1]>1&&rng.below(100)>60){
  let outgoing=pair[0];for(const id of lineup.players)if(state.players[id].active&&state.players[id].condition<80){outgoing=id;break;}
  if(outgoing>0)pair=chooseSubstitution(lineup,outgoing,state);
 }
 const [outgoing,incoming]=pair;
 if(outgoing>0&&incoming>0){
  removePlayer(lineup,outgoing,state);fixture.substitutions[side-1]--;
  const slot=lineup.players.indexOf(outgoing);
  if(slot>=0){state.players[incoming].active=true;lineup.players[slot]=incoming;}
  if(kind===1)lineup.positions[slot]=lineup.positions.includes(6)?8:6;
  if(kind===2){lineup.positions[slot]=1;lineup.players[10]=lineup.players[slot];lineup.players[slot]=0;}
 }
 return pair;
}
export function* injuryFlow(lineup,zone,fixture,side,state,rng,chooseHumanReplacement){ // 006082b8
 const id=selectIncidentPlayer(lineup,zone,state,rng);if(id<=0)return [-1,-1];
 const condition=state.players[id].condition;
 const bound=condition>=0&&condition<=10?19:condition<=20&&condition>=11?20:condition<=30&&condition>=21?21:condition<=40&&condition>=31?22:condition<=50&&condition>=41?23:condition<=60&&condition>=51?24:condition<=80&&condition>=61?25:condition<=100&&condition>=81?26:550;
 if(rng.below(bound)!==1)return [-1,-1];
 removePlayer(lineup,id,state);let incoming=-1;
 if(fixture.substitutions[side-1]>0){
  if(!state.clubs[fixture.clubs[side-1]].human||state.automaticInteractions)incoming=injuryReplacement(lineup,id,state);
  else {
   if(!chooseHumanReplacement)throw Error('Original injury replacement requires a manager decision.');
   incoming=yield ()=>chooseHumanReplacement({lineup,injured:id,fixture,side});
   if(incoming>0){const index=lineup.bench.indexOf(incoming);if(index>=0)lineup.bench[index]=-1;}
  }
 }
 if(incoming>0){fixture.substitutions[side-1]--;const slot=lineup.players.indexOf(id);if(slot>=0){state.players[incoming].active=true;lineup.players[slot]=incoming;}}
 return [id,incoming>0?incoming:-1];
}

export function injury(...args){return runMatchDecisionFlow(injuryFlow(...args));}
export function injuryAsync(...args){return runMatchDecisionFlowAsync(injuryFlow(...args));}
