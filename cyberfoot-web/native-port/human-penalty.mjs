/** Shot resolution in Form34.Timer2 (005fe940) and Form54.Timer2 (005fd96c).
 * These are the original dialog rules, separate from automatic 00607ca0.
 */
export function humanPenaltyThreshold(taker,keeper){
 let threshold=70;
 if(taker.trait1===9)threshold+=10;
 if(taker.trait2===9)threshold+=5;
 if(taker.veteranFlag)threshold+=5;
 if(keeper.trait1===1)threshold-=15;
 if(keeper.trait2===1)threshold-=10;
 if(keeper.veteranFlag)threshold-=5;
 return threshold;
}
export function resolveHumanPenalty(takerId,keeperId,state,rng,{humanAttacks}){
 const threshold=humanPenaltyThreshold(state.players[takerId],state.players[keeperId]);
 const scored=rng.below(100)+1<=threshold;
 const commentary=rng.below(humanAttacks?11:6);
 const variant=humanAttacks?(scored?(commentary<4?0:commentary<7?1:2):(commentary<3?0:commentary<7?1:2)):commentary%3;
 return {playerId:takerId,result:scored?1:2,languageId:(scored?463:466)+variant,sounds:humanAttacks?[scored?'gol':'goladv']:[],delayMs:humanAttacks?2500:2000};
}

// 00664440, referenced by Form34.FormCreate through 0066ad68.
const penaltyPositionOrder=[1,9,3,4,5,6,7,8,2,17,13,12,11,16,15,14,10,25,21,20,19,24,23,22,18];
export function humanPenaltyRoster(lineup,state){
 const rows=[];
 for(const position of penaltyPositionOrder)for(let slot=0;slot<11;slot++){
  const playerId=lineup.players[slot];
  if(lineup.positions[slot]===position&&state.players[playerId].active)rows.push({playerId,position});
 }
 return rows;
}
/** 005fe608..005fe76a. The original retains the previous global if no candidate exists. */
export function selectHumanPenaltyKeeper(lineup,state,previousKeeper=0){
 let keeper=previousKeeper;
 const last=lineup.players[10];if(state.players[last].active)keeper=last;
 if(keeper<=0)for(const id of lineup.players)if(state.players[id].role===0&&state.players[id].active){keeper=id;break;}
 if(keeper<=0)for(const id of lineup.players)if(state.players[id].active){keeper=id;break;}
 return keeper;
}
/** Timed Form34 interaction. advanceTime follows the original two 2000ms timers
 * and 2500ms result delay. The caller owns the suspended fixture invocation.
 */
export function createAttackingPenalty({own,opponent,state,rng,previousKeeper=0,present}){
 if(typeof present!=='function')throw TypeError('Penalty presentation is required.');
 const rows=humanPenaltyRoster(own,state),keeperId=selectHumanPenaltyKeeper(opponent,state,previousKeeper);
 let resolve;const result=new Promise(r=>resolve=r);
 const view={phase:'selection',rows,selectedId:null,keeperId,languageId:null,includeName:false,remainingMs:0};
 const render=()=>present({...view});
 function select(playerId){if(view.phase!=='selection')return false;if(!rows.some(r=>r.playerId===playerId))throw RangeError('Player is not an active penalty candidate.');view.selectedId=playerId;render();return true;}
 function kick(){
  if(view.phase!=='selection'||view.selectedId===null)return false;
  const n=rng.below(5);view.languageId=n===2||n===3?462:461;view.includeName=true;
  view.phase='runup';view.remainingMs=2000;render();return true;
 }
 function advanceTime(ms){
  if(!Number.isFinite(ms)||ms<0)throw RangeError('Elapsed time must be finite and nonnegative.');
  while(view.remainingMs>0&&ms>=view.remainingMs){
   ms-=view.remainingMs;
   if(view.phase==='runup'){view.languageId=rng.below(4)<2?461:462;view.includeName=false;view.phase='shot';view.remainingMs=2000;}
   else if(view.phase==='shot'){const outcome=resolveHumanPenalty(view.selectedId,keeperId,state,rng,{humanAttacks:true});Object.assign(view,{phase:'result',languageId:outcome.languageId,outcome,remainingMs:outcome.delayMs});}
   else{view.phase='closed';view.remainingMs=0;resolve([view.outcome.playerId,view.outcome.result]);}
   render();
  }
  if(view.remainingMs>0)view.remainingMs-=ms;
 }
 render();return {view,result,select,kick,advanceTime};
}

/** Form54.FormCreate (005fd646..005fd81d). Preserve its attacker-lineup
 * fallback for a missing defending goalkeeper, even though that is unusual.
 */
export function selectDefendingPenaltyPlayers(own,opponent,nominee,state){
 let playerId=0;
 if(nominee>0&&state.players[nominee].active)playerId=nominee;
 else for(let slot=9;slot>=0;slot--)if(state.players[own.players[slot]].active){playerId=own.players[slot];break;}
 let keeperId=opponent.players[10];
 if(keeperId<=0)for(const id of own.players)if(state.players[id].role===0&&state.players[id].active){keeperId=id;break;}
 if(keeperId<=0)for(const id of own.players)if(state.players[id].active){keeperId=id;break;}
 return {playerId,keeperId};
}
export function createDefendingPenalty({own,opponent,nominee,state,rng,present}){
 if(typeof present!=='function')throw TypeError('Penalty presentation is required.');
 const {playerId,keeperId}=selectDefendingPenaltyPlayers(own,opponent,nominee,state);
 let resolve;const result=new Promise(r=>resolve=r);
 const view={phase:'runup',selectedId:playerId,keeperId,languageId:461,includeName:true,remainingMs:2000};
 const render=()=>present({...view});
 function advanceTime(ms){
  if(!Number.isFinite(ms)||ms<0)throw RangeError('Elapsed time must be finite and nonnegative.');
  while(view.remainingMs>0&&ms>=view.remainingMs){
   ms-=view.remainingMs;
   if(view.phase==='runup')Object.assign(view,{phase:'shot',languageId:462,includeName:false,remainingMs:2000});
   else if(view.phase==='shot'){const outcome=resolveHumanPenalty(playerId,keeperId,state,rng,{humanAttacks:false});Object.assign(view,{phase:'result',languageId:outcome.languageId,outcome,remainingMs:outcome.delayMs});}
   else{view.phase='closed';view.remainingMs=0;resolve([view.outcome.playerId,view.outcome.result]);}
   render();
  }
  if(view.remainingMs>0)view.remainingMs-=ms;
 }
 render();return {view,result,advanceTime};
}
