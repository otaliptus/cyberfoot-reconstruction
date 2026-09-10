/** Original player-selection and set-piece rules, expressed as native JS.
 * `lineup.players` and `positions` are eleven slots, preserving original order;
 * `state.players[id]`: clubId (+20), skill (+28), active (+86).
 * `state.clubs[id].setPiecePlayer`: +a8. Position codes are original values.
 */
import {positionPriorities} from './selection-tables.mjs';
export function playerAtPosition(lineup,position,state){ // 0060a38c
 for(let i=0;i<11;i++){const id=lineup.players[i];if(id>0&&lineup.positions[i]===position&&state.players[id].active)return id;}
 return -1;
}
function findInRow(lineup,row,start,state){
 for(let i=start;i<8;i++){const id=playerAtPosition(lineup,row[i],state);if(id>0)return id;}
 return -1;
}
function lastFallback(lineup,state){
 for(let zone=11;zone>=0;zone--){const id=findInRow(lineup,positionPriorities[zone],0,state);if(id>0)return id;}
 return -1;
}
export function selectScorer(lineup,_zone,mode,state,rng){ // 0060a404; input zone intentionally unused.
 const n=rng.below(100);
 let zone=n<19?11:n<38?12:n<55?10:n<66?8:n<73?9:n<80?7:n<85?5:n<89?4:n<91?6:n<95?2:n<99?3:1;
 if(mode===-2)zone=rng.below(100)<91?2:5;
 const start=rng.below(5),row=positionPriorities[zone-1];
 // Five identical retries in the original do not consume randomness or mutate state.
 let id=findInRow(lineup,row,start,state);
 if(id===-1){
  if(rng.below(2)===1)id=findInRow(lineup,row,0,state);
  else for(let i=7;i>=0;i--){id=playerAtPosition(lineup,row[i],state);if(id>0)break;}
 }
 return id===-1?lastFallback(lineup,state):id;
}
export function selectIncidentPlayer(lineup,zone,state,rng){ // 0060a6bc
 if(zone===-1){const n=rng.below(100);zone=rng.below(3)+(n<36?4:n<57?7:n<71?10:1);}
 const row=positionPriorities[zone-1];
 if(!row)throw RangeError('Original incident selection requires zone 1..12 or -1.');
 let id=findInRow(lineup,row,rng.below(5),state);
 if(id===-1)id=findInRow(lineup,row,0,state);
 if(rng.below(30)===1)id=playerAtPosition(lineup,1,state);
 return id===-1?lastFallback(lineup,state):id;
}
function clubForLineup(lineup,state){
 for(let i=10;i>=0;i--){const id=lineup.players[i];if(id>0&&state.players[id].clubId>=0)return state.players[id].clubId;}
 throw RangeError('Original set-piece routine requires a player belonging to a club.');
}
function validNominee(id,clubId,state){return id>0&&state.players[id].active&&state.players[id].clubId===clubId;}
export function freeKick(lineup,keeper,_zone,state,rng){ // 00607b10
 const clubId=clubForLineup(lineup,state),club=state.clubs[clubId];let id=club.setPiecePlayer;
 if(!validNominee(id,clubId,state)){
  id=lineup.players[rng.below(10)];
  for(let i=0;i<10;i++)if(state.players[lineup.players[i]]?.active){id=lineup.players[i];break;}
  club.setPiecePlayer=id;
 }
 return [id>0&&rng.below(100)<=(state.players[id].skill>keeper?12:2)?id:-1,-1];
}
export function penalty(lineup,keeper,explicitPlayer,state,rng){ // 00607ca0
 const clubId=clubForLineup(lineup,state);let id=state.clubs[clubId].setPiecePlayer;
 if(!validNominee(id,clubId,state)){
  id=-1;for(let i=9;i>=0;i--)if(state.players[lineup.players[i]]?.active){id=lineup.players[i];break;}
 }
 if(explicitPlayer>0)id=explicitPlayer;
 return [id,id>0?(rng.below(100)<=(state.players[id].skill>keeper?85:75)?1:2):-1];
}
