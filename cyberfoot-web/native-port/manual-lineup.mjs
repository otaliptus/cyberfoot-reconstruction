import coordinates from './lineup-screen-tables.mjs';
const slotAt=(slots,index)=>{if(!Number.isInteger(index)||index<1||index>18)throw RangeError('Original slot must be 1–18.');return slots[index-1];};
/**5ea6e4: first matching screen slot, including original sentinel values.*/
export function findScreenPlayer(slots,playerId){const i=slots.findIndex(s=>s.playerId===playerId);return i<0?-1:i+1;}
/**5ea708 roster-to-shirt branch. Moves a selected player; displaced player
 * returns to the roster. Slot positions and the separate slot status word stay.
 */
export function placeRosterPlayer(slots,rows,playerId,targetSlot){
 const target=slotAt(slots,targetSlot),row=rows.find(r=>r.playerId===playerId);if(!row)throw RangeError('Missing original roster row.');
 if(row.status>=3)return false;
 const previous=findScreenPlayer(slots,playerId);
 if(previous>0&&previous!==targetSlot)slots[previous-1].playerId=-1;
 if(target.playerId>0&&target.playerId!==playerId){const displaced=rows.find(r=>r.playerId===target.playerId);if(displaced)displaced.status=0;}
 if(target.playerId===playerId)return false;
 target.playerId=playerId;row.status=targetSlot<12?1:2;return true;
}
/**5ea708 shirt-to-shirt branch exchanges players, not pitch positions.*/
export function swapScreenPlayers(slots,rows,sourceSlot,targetSlot){
 const source=slotAt(slots,sourceSlot),target=slotAt(slots,targetSlot);if(sourceSlot===targetSlot)return false;
 [source.playerId,target.playerId]=[target.playerId,source.playerId];
 for(const index of [targetSlot,sourceSlot]){const id=slots[index-1].playerId;if(id>0){const row=rows.find(r=>r.playerId===id);if(row)row.status=index<12?1:2;}}
 return true;
}
/**5eb714 uses Win32 PtInRect: right/bottom edges are excluded.*/
export function positionAtPitchPoint(x,y){
 for(let i=0;i<25;i++)if(x>=coordinates.x[i]&&x<coordinates.x[i]+42&&y>=coordinates.y[i]&&y<coordinates.y[i]+42)return i+1;
 return 0;
}
/**5eb798 allows only outfield starting slots to move onto pitch targets.*/
export function repositionScreenSlot(slots,slot,x,y){
 const target=slotAt(slots,slot);if(slot<=1||slot>=12)return false;
 const position=positionAtPitchPoint(x,y);if(position<=0)return false;
 target.position=position;target.manualLabelOffset=true;return true;
}
