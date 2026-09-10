import formations from './ai-lineup-tables.mjs';import coordinates from './lineup-screen-tables.mjs';
import {selectHumanCandidate,sortHumanCandidates} from './ai-selection.mjs';import {saveScreenLineup} from './saved-lineup.mjs';
/** Original 5e5264/5eb518 screen order: keeper first, then ten outfield slots. */
export function formationScreenSlots(formation){
 if(!Number.isInteger(formation)||formation<1||formation>10)throw RangeError('Original formation must be 1–10.');
 return Array.from({length:18},(_,i)=>({playerId:-1,position:i<11?formations.formations[(formation-1)*11+i]:0,status:0}));
}
export function screenSlotGeometry(slot,position){
 if(slot<1||slot>18||!Number.isInteger(slot))throw RangeError('Original slot must be 1–18.');
 if(slot<12){
  if(position<1||position>25)throw RangeError('Original pitch position must be 1–25.');
  const x=coordinates.x[position-1],y=coordinates.y[position-1];
  return {x,y,width:55,height:55,labelX:x-(slot===1?34:18),labelY:y+(slot===1?42:48),labelWidth:slot===1?120:90};
 }
 const x=390,y=coordinates.benchY[slot-12];return {x,y,width:55,height:55,labelX:x-18,labelY:y+42,labelWidth:90};
}
/** Business portion of 5e82a0. rows are the original NextGrid order/status,
 * supplied by the roster-screen adapter. This does not infer unavailable flags.
 * The original saves after each successful assignment, regardless of checkbox.
 */
export function autoSelectScreenLineup(state,rows,formation,save,clubId){
 const slots=formationScreenSlots(formation),candidates=[],eligibleRows=new Set(resetScreenSelections(rows));
 rows.forEach((row,index)=>{
  if(!eligibleRows.has(index))return;
  const p=state.players[row.playerId];p.field50=0;
  candidates.push({id:row.playerId,row:index,skill:p.skill,condition:p.condition,field10:0,field2c:p.field2c,role:p.role,specialty:p.specialty,selected:0});
 });
 sortHumanCandidates(candidates);
 let benchSlot=11;
 for(let i=0;i<18;i++){
  const position=i<11?slots[i].position:-1,table=i<11?formations.priorities:formations.benchPriorities,index=i<11?position-1:i-11;
  const id=selectHumanCandidate(candidates,table.slice(index*3,index*3+3),position);
  slots[i].playerId=-1;slots[i].status=-1;
  // The selector can mark id0, even though this caller ignores it.
  for(const c of candidates)if(c.selected)rows[c.row].status=c.selected;
  if(id>0){
   const target=i<11?i:benchSlot++;
   slots[target]={playerId:id,position:i<11?position:-1,status:i<11?1:2};
   if(save)saveScreenLineup(save,clubId,slots);
  }
 }
 return {slots,candidates};
}

/** First two loops of5e82a0 compare grid status strings. A decompiler flag
 * recovery error suggested equality; original JAE means statuses below "3".
 */
export function resetScreenSelections(rows){
 for(const row of rows)if(String(row.status)<'3')row.status=0;
 return rows.flatMap((row,i)=>String(row.status)==='3'||String(row.status)==='4'?[]:[i]);
}
