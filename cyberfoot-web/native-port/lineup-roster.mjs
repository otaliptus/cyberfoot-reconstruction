import {sortRosterCandidates} from './ai-selection.mjs';
/** Original6538b8 display ordering; unsupported specialties return zero. */
export function rosterRoleOrder(player){return [[0,0,0],[2,3,6],[4,5,4],[7,8,6],[9,10,11]][player.role]?.[player.specialty]??0;}
/** Numeric roster portion of5e547c. Text/cell hints remain presentation work.
 * alternateMode is original global66ae3c, supplied explicitly by the caller.
 */
export function buildLineupRoster(state,clubId,{alternateMode=false}={}){
 const comp=state.competitionType,rows=[];
 for(const [key,p] of Object.entries(state.players)){
  const playerId=Number(key);
  if(playerId<1||p.clubId<0||p.clubId!==clubId||!(p.eligibilityFlag===0||p.eligibilityFlag===Number(comp===0)))continue;
  rows.push({playerId,roleOrder:rosterRoleOrder(p),skill:p.skill,condition:p.condition});
 }
 sortRosterCandidates(rows);
 return rows.map(row=>{
  const p=state.players[row.playerId];let status=0,conditionIcon=0;
  if(!alternateMode&&(p.unavailableFlag||(p.eligibilityFlag===0&&p.contractEnd<state.currentDate)))status=4;
  let statusIcon=alternateMode?0:status===4?94:(p.statusIconBase+62)|0;
  // Original drawing also repairs out-of-range trait codes in saved players.
  if(p.trait1<0||p.trait1>13)p.trait1=p.role===0?0:13;
  if(p.trait2<0||p.trait2>13)p.trait2=p.role===0?1:11;
  if(p.yellowCounts[comp]>=3||p.suspensions[comp]>=1||!(p.injuryUntil<=state.currentDate)){
   status=3;statusIcon=93;conditionIcon=p.veteranFlag?4:0;
  }else if(p.veteranFlag)conditionIcon=12;
  return {...row,status,statusIcon,conditionIcon};
 });
}
