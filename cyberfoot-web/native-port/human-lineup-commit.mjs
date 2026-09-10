import {saveScreenLineup} from './saved-lineup.mjs';import {assignLineupPlayer,countAvailablePlayers} from './ai-lineup.mjs';import {calculateLineup} from './lineup.mjs';import {appendNotification} from './notifications.mjs';
/** Business portion of5ebb84. Caller performs the original next-manager/match
 * dispatch after a successful commit. Saving precedes starter validation.
 */
export function commitHumanLineup(save,state,rows,slots,{clubId,remember=false,alternateMode=false,rng,notify=(...args)=>appendNotification(save,state.currentDate,rng,...args)}){
 if(slots.length!==18)throw RangeError('Original lineup screen has18 slots.');
 if(remember)saveScreenLineup(save,clubId,slots);
 if(slots.slice(0,11).some(s=>s.playerId<1))return {accepted:false,messageId:301};
 for(const row of rows){const p=state.players[row.playerId];p.active=false;p.field50=0;p.unavailableFlag=false;}
 const lineup={players:Array(11).fill(0),scratch:Array(5).fill(0),bench:Array(7).fill(0),positions:Array(11).fill(0),warning:false};
 state.lineups??=[];const index=state.lineups.length;state.lineups.push(lineup);state.clubs[clubId].lineupId=index;
 for(let i=0;i<11;i++){
  const slot=i===0?11:i,id=slots[i].playerId,p=state.players[id];lineup.positions[slot-1]=slots[i].position;assignLineupPlayer(lineup,state,id,slot);
  if(!alternateMode){
   if(p.condition<15&&p.trait1!==12){p.morale=1;p.fatigueComplaint=true;notify(clubId,2,6,0,0,id);}
   if(p.contractEnd<state.currentDate){p.condition=(p.condition-10)|0;if(p.condition<0)p.condition=5;}
  }
 }
 let benchIndex=0;for(const slot of slots.slice(11))if(slot.playerId>0){const p=state.players[slot.playerId];p.active=false;p.field50=2;lineup.bench[benchIndex++]=slot.playerId;}
 countAvailablePlayers(state,clubId);calculateLineup(lineup,state);
 return {accepted:true,lineup,index};
}
