import {calculateLineup} from './lineup.mjs';
import {matchPositionAtPitchPoint} from './match-lineup-screen.mjs';
/** 0060129d..00601970: recognized shirt/number controls exchange pitch IDs.
 * The original recalculates even for same-slot or bench-only drops.
 * Presentation is supplied by the Form88 host, before recalculation.
 */
export function swapMatchPitchPlayers(lineup,sourceSlot,targetSlot,state,{render=()=>{},recalculate=calculateLineup}={}){
 for(const slot of [sourceSlot,targetSlot])if(!Number.isInteger(slot)||slot<1||slot>18)throw RangeError('Original match slot must be 1–18.');
 const changed=sourceSlot<12&&targetSlot<12&&sourceSlot!==targetSlot;
 if(changed){[lineup.players[sourceSlot-1],lineup.players[targetSlot-1]]=[lineup.players[targetSlot-1],lineup.players[sourceSlot-1]];render({sourceSlot,targetSlot});}
 recalculate(lineup,state);return changed;
}
/** 00600cb9..00600df4 after the original accepted-control check. Goalkeeper
 * slot11 and bench slots cannot move. Positions remain independent of IDs.
 */
export function repositionMatchPlayer(lineup,slot,x,y,state,{render=()=>{},recalculate=calculateLineup}={}){
 if(!Number.isInteger(slot)||slot<1||slot>18)throw RangeError('Original match slot must be 1–18.');
 const position=slot<11?matchPositionAtPitchPoint(x,y):0;
 if(position>0){lineup.positions[slot-1]=position;render({slot,position});}
 recalculate(lineup,state);return position>0;
}
/** FormCreate allocates 18 shirts with random initial coordinates before
 * positioning them. Those 36 draws must occur even though they are invisible.
 */
export function initializeMatchShirts(rng){return Array.from({length:18},()=>({x:rng.below(100),y:rng.below(100)}));}
