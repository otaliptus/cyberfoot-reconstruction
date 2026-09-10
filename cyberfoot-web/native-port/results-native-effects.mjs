import {runAITransfer} from './ai-transfers.mjs';
import {continentalPostRound} from './continental-post-round.mjs';
import {nationalPostRound} from './national-post-round.mjs';
import {processManagerChanges} from './manager-changes.mjs';
import {processEmployedManagerOffers,processUnemployedManagerOffers} from './manager-offer-timing.mjs';
import {careerSchedule} from './schedule.mjs';import {processScheduledPlayerReturns,originalSeniorSquadLimit} from './player-move.mjs';import {resetResultsPlayers} from './results-career-continuation.mjs';import {restoreNationalAssignments} from './national-assignment-reset.mjs';import {refreshRefereeAssignments} from './referees.mjs';import {originalPlayerValue} from './player-value.mjs';import {selectResultsHumanParticipation} from './results-participation.mjs';
/** Native children of5f9388. Merge with the remaining career/UI effects;
 * continueResultsCareer rejects missing children before advancing the save. */
export function nativeResultsCareerEffects(save,runtime,{rng,temporary,calendar=careerSchedule(save),maxSeniorPlayers=originalSeniorSquadLimit,managerDialogs}){
 if(!rng||typeof rng.below!=='function')throw Error('Original random generator required.');
 if(!Array.isArray(temporary?.lineups)||!Array.isArray(temporary?.matchTeams))throw Error('Original temporary team arrays required.');
 if(managerDialogs&&(typeof managerDialogs.humanDismissal!=='function'||typeof managerDialogs.showChanges!=='function'))throw Error('Both original manager dialog hosts required.');
 if(managerDialogs?.showOffer!==undefined&&typeof managerDialogs.showOffer!=='function')throw Error('Original job-offer modal required.');
 const currentDate=()=>{const c=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);return calendar[c.getInt32(0x16c,true)-1].date;};
 return {
  ...(managerDialogs?{managerChanges:()=>processManagerChanges(save,runtime,{rng,date:currentDate(),humanDismissal:managerDialogs.humanDismissal,showChanges:managerDialogs.showChanges})}:{}),
  ...(managerDialogs?.showOffer?{managerOffers:()=>processEmployedManagerOffers(save,runtime,{rng,showOffer:managerDialogs.showOffer}),unemployedOffers:()=>processUnemployedManagerOffers(save,runtime,{rng,showOffer:managerDialogs.showOffer})}:{}),
  aiTransfer:country=>runAITransfer(save,country,{rng,runtime,date:currentDate(),maxSeniorPlayers}),
  nationalPostRound:competition=>nationalPostRound(save,runtime,competition),
  continentalPostRound:competition=>{
   if(!Number.isFinite(runtime.completedMatchDate))throw Error('Original completed match date required.');
   return continentalPostRound(save,runtime,competition,{date:runtime.completedMatchDate});
  },
  dateEffects:date=>processScheduledPlayerReturns(save,date,{rng,runtime,maxSeniorPlayers,currentDate:currentDate()}),
  resetPlayers:()=>resetResultsPlayers(save,temporary),
  refreshReferees:()=>refreshRefereeAssignments(save,rng),
  restoreNationalAssignments:()=>restoreNationalAssignments(save,runtime),
  playerValue:id=>originalPlayerValue(save,id),
  selectHumanParticipation:()=>selectResultsHumanParticipation(save,runtime,calendar)
 };
}
