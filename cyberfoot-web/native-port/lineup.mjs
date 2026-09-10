/** Native reconstruction of 00642c6c. Preserves order-dependent keeper effects,
 * repeated rounding, formation penalties, and the persistent warning byte.
 */
import data from './lineup-tables.mjs';
import {multiplyRound,conditionStrength} from './x87.mjs';
const C=data.coefficients;
const scale=(v,address)=>multiplyRound(v,C[address]);
export function calculateLineup(lineup,state){
 let clubId=-1;for(let i=10;i>=0;i--){const id=lineup.players[i];if(id>0&&state.players[id].clubId>=0){clubId=state.players[id].clubId;break;}}
 const human=clubId>=0&&state.clubs[clubId].human;
 const attack=Array(12).fill(0),defence=Array(12).fill(0),counts=Array(26).fill(0);
 let keeper=0,warning=Boolean(lineup.warning);
 const scaleRange=(arr,start,end,c)=>{for(let i=start;i<end;i++)arr[i]=scale(arr[i],c);};
 const countRange=(start,end)=>counts.slice(start,end).filter(n=>n>0).length;
 for(let i=0;i<11;i++){
  const position=lineup.positions[i],player=state.players[lineup.players[i]];
  if(!player)throw RangeError('Missing original player record.');
  for(let j=0;j<3;j++){
   const zone=data.positionZones[(position-1)*3+j];
   if(zone>0&&player.active){
    const skill=data.positionRole[(position-1)*3]===player.role?player.skill:scale(player.skill,'0x6434f0');
    const strength=conditionStrength(skill,player.condition);
    attack[zone-1]=(attack[zone-1]+strength)|0;defence[zone-1]=(defence[zone-1]+strength)|0;counts[position]++;
   }
  }
  // The original keeper branch does not test the active byte.
  if(position===1){
   keeper=(keeper+conditionStrength(player.skill,player.condition))|0;
   if(player.role!==0){keeper=scale(keeper,'0x643500');defence[1]=scale(defence[1],'0x64350c');scaleRange(defence,2,12,'0x643518');warning=true;}
  }
 }
 const defenders=countRange(3,9),backPositions=countRange(2,10);
 if(human&&(defenders===1||backPositions<3)){
  scaleRange(attack,0,12,'0x6434f0');scaleRange(defence,0,12,'0x643524');defence[1]=scale(defence[1],'0x643518');keeper=scale(keeper,'0x643518');warning=true;
 }
 if(defenders===0){keeper=scale(keeper,'0x643500');scaleRange(defence,0,12,'0x643500');scaleRange(attack,0,12,'0x643500');if(human)warning=true;}
 if(defenders>3){keeper=scale(keeper,'0x643530');scaleRange(defence,0,3,'0x6434f0');scaleRange(attack,0,12,'0x6434f0');if(human)warning=true;}
 if(countRange(11,17)>4){defence[4]=multiplyRound(defence[4],['1',-1]);defence[7]=multiplyRound(defence[7],['1',-1]);if(human)warning=true;}
 if(countRange(18,26)>3){scaleRange(attack,9,12,'0x643524');scaleRange(attack,0,9,'0x6434f0');scaleRange(defence,0,12,'0x643540');if(human)warning=true;}
 if(countRange(10,18)>5){for(let i=3;i<9;i++)defence[i]=multiplyRound(defence[i],['1',-1]);if(human)warning=true;}
 // The original computes divided lane strengths, then immediately overwrites
 // them with the undivided values. Only those final values are observable.
 Object.assign(lineup,{attack,defence,keeper,attackTotal:attack.reduce((a,b)=>(a+b)|0,0),defenceTotal:defence.reduce((a,b)=>(a+b)|0,0),warning});
 return lineup;
}
