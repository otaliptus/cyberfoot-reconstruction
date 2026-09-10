import {appendRows} from './match-records.mjs';import {playerIncidentCounts,playerMatchRating} from './player-rating.mjs';import {updatePlayerStats} from './career-stats.mjs';import {accumulateSavedPlayerRating} from './rating-records.mjs';
const floatBits=n=>{const a=new DataView(new ArrayBuffer(4));a.setFloat32(0,n,true);return a.getInt32(0,true);};
const discipline=(counts,substituted)=>counts[2]>0?3:counts[1]>0?2:counts[0]>(substituted?1:0)?1:0;
/** 0065867c: substitution/injury-replacement history in original32-byte records. */
export function archiveSubstitutedPlayers(save,historyId,fixture,state,rng,{writeStats=updatePlayerStats}={}){
 for(const [type,clubId,id,replacement,tick,fixtureId] of state.events){
  if(fixtureId!==fixture.id||(type!==19&&type!==20))continue;
  const counts=playerIncidentCounts(id,state.events);writeStats(id,state.players[id].clubId,fixture.competition,'j',state,rng);
  const rating=playerMatchRating(id,fixture,clubId,-1,state,rng);
  appendRows(save,'records_0066ae14',[[id,replacement,tick,floatBits(rating),historyId,clubId,discipline(counts,true),counts[3]]]);
 }
}
/** 006588a4: final lineup records, weekly candidates, and accumulated ratings. */
export function archiveFinalPlayers(save,historyId,fixture,teams,state,rng,{writeStats=updatePlayerStats,accumulate=accumulateSavedPlayerRating}={}){
 if(!Number.isInteger(fixture.field4))throw Error('Original match field4 is required for rating candidates.');
 state.ratingCandidates??=[];
 for(let side=0;side<2;side++)for(let slot=0;slot<11;slot++){
  const id=teams[side].players[slot];if(id<=0)continue;
  const p=state.players[id],position=teams[side].positions[slot],counts=playerIncidentCounts(id,state.events);
  writeStats(id,p.clubId,fixture.competition,'j',state,rng);
  const rating=playerMatchRating(id,fixture,fixture.clubs[side],position,state,rng),bits=floatBits(rating);
  appendRows(save,'records_0066b128',[[historyId,id,position===10?14:position,bits,p.active?1:0,fixture.clubs[side],discipline(counts,false),counts[3]]]);
  state.ratingCandidates.push([id,bits,fixture.field4,fixture.competition,position,rng.below(100),0]);
  accumulate(save,id,fixture.competition,position,rating,p);
 }
}
