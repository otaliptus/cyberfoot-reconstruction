import tables from './ai-lineup-tables.mjs';
import {playerSpecialty,selectLineupCandidate,sortLineupCandidates} from './ai-selection.mjs';
import {nearestEven,conditionStrength} from './x87.mjs';
import {calculateLineup} from './lineup.mjs';
const triple=(table,index)=>table.slice(index*3,index*3+3);
export function countAvailablePlayers(state,clubId){
 const counts=Array(6).fill(0),club=state.clubs[clubId];club.availableCount=0;
 for(const [key,p] of Object.entries(state.players)){
  if(Number(key)<1||p.clubId<0||p.clubId!==clubId||p.eligibilityFlag!==0||p.yellowCounts[state.competitionType]>=3||p.suspensions[state.competitionType]!==0||!(p.injuryUntil<=state.currentDate))continue;
  club.availableCount++;counts[p.role]++;
  if(p.role===3&&p.specialty===0)counts[5]++;
 }
 state.availableRoleCounts=counts;return counts;
}
export function assignLineupPlayer(lineup,state,playerId,slot){
 if(slot<1||slot>11)throw RangeError('Original lineup slot must be 1–11.');
 state.players[playerId].active=true;state.players[playerId].selectedFlag=true;
 lineup.players[slot-1]=playerId;
 const benchIndex=lineup.bench.indexOf(playerId);if(benchIndex>=0)lineup.bench[benchIndex]=0;
}
export function selectAIFormation(draw){
 if(draw<2)return 1;if(draw<4)return 2;if(draw===4)return 4;
 if(draw<7)return 3;if(draw<38)return 4;if(draw<49)return 5;
 if(draw<60)return 6;if(draw<65)return 7;if(draw<72)return 8;
 if(draw<98)return 9;return 10;
}
/** Original 4e24d0. Creates a transient lineup and mutates original player and
 * club fields. A caller owns the complete transient lineup array in state.
 */
export function generateAILineup(state,clubId,rng){
 const lineup={players:Array(11).fill(0),scratch:Array(5).fill(0),bench:Array(7).fill(0),positions:Array(11).fill(0),warning:false};
 state.lineups??=[];state.clubs[clubId].lineupId=state.lineups.length;state.lineups.push(lineup);
 countAvailablePlayers(state,clubId);
 const candidates=[],competition=state.competitionType;
 for(const [key,p] of Object.entries(state.players)){
  if(p.clubId<0||p.clubId!==clubId||p.yellowCounts[competition]>=3||p.suspensions[competition]!==0||!(p.injuryUntil<=state.currentDate)||!(p.eligibilityFlag===0||p.eligibilityFlag===Number(competition===0)))continue;
  p.specialty=playerSpecialty(p);p.active=false;
  if(p.condition<20)p.condition=30+rng.below(10);
  const half=Number(nearestEven(BigInt(p.skill),2n));
  candidates.push({id:Number(key),rating:(half+conditionStrength(half,p.condition))|0,condition:p.condition,field2c:p.field2c,specialty:p.specialty,role:p.role,selected:false});
 }
 sortLineupCandidates(candidates);
 const formation=selectAIFormation(rng.below(100));
 for(let originalSlot=0;originalSlot<11;originalSlot++){
  const position=tables.formations[(formation-1)*11+originalSlot],slot=originalSlot===0?11:originalSlot;
  const id=selectLineupCandidate(candidates,triple(tables.priorities,position-1),position);
  lineup.positions[slot-1]=position;
  if(id>0)assignLineupPlayer(lineup,state,id,slot);
 }
 for(let i=0;i<11;i++)if(lineup.players[i]<1){
  const position=lineup.positions[i],priority=triple(tables.priorities,position-1),role=priority[0];
  for(let j=0;j<5;j++){
   priority[0]=tables.fallbackRoles[role*5+j];
   const id=selectLineupCandidate(candidates,priority,position);
   if(id>0){assignLineupPlayer(lineup,state,id,i+1);break;}
  }
 }
 let benchIndex=0;
 for(let i=0;i<7;i++){
  const id=selectLineupCandidate(candidates,triple(tables.benchPriorities,i),-1);
  if(id>0)lineup.bench[benchIndex++]=id;
 }
 calculateLineup(lineup,state);
 return {lineup,formation,candidates};
}
