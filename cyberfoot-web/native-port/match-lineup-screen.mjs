import coordinates from './lineup-screen-tables.mjs';
export {positionAtPitchPoint as matchPositionAtPitchPoint} from './manual-lineup.mjs';
/** 006053e0. Match screen keeps the goalkeeper at slot11. Bench positions use
 * the compact visible-bench ordinal, independently of the stored slot number.
 */
export function matchLineupGeometry(slot,position,benchOrdinal=0,shirtNumber=-1){
 if(!Number.isInteger(slot)||slot<1||slot>18)throw RangeError('Original match lineup slot must be 1–18.');
 if(slot<12){
  if(!Number.isInteger(position)||position<1||position>25)throw RangeError('Original pitch position must be 1–25.');
  const x=coordinates.x[position-1],y=coordinates.y[position-1];
  return {shirt:{x,y},label:{x:x-(slot===11?34:13),y:y+48},number:{x:x+21,y:y+15,...(shirtNumber>0?{text:String(shirtNumber)}:{})},status:{x:x+17,y:y+32}};
 }
 if(!Number.isInteger(benchOrdinal)||benchOrdinal<1||benchOrdinal>7)throw RangeError('Visible bench ordinal must be 1–7.');
 const y=coordinates.benchY[benchOrdinal-1];
 return {shirt:{x:390,y},label:{x:377,y:y+43},number:{x:412,y:y+15,...(shirtNumber>0?{text:String(shirtNumber)}:{})},status:{x:407,y:y+32}};
}
