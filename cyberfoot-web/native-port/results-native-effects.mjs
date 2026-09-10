import {runAITransfer} from './ai-transfers.mjs';
import {continentalPostRound} from './continental-post-round.mjs';
import {nationalPostRound} from './national-post-round.mjs';
import {nationalSetup} from './national-setup.mjs';
import {competitionFiveEligible} from './club-world.mjs';
import {processManagerChanges} from './manager-changes.mjs';
import {processEmployedManagerOffers,processUnemployedManagerOffers} from './manager-offer-timing.mjs';
import {careerSchedule} from './schedule.mjs';import {processScheduledPlayerReturns,originalSeniorSquadLimit} from './player-move.mjs';import {resetResultsPlayers,continueLeagueResults} from './results-career-continuation.mjs';import {restoreNationalAssignments} from './national-assignment-reset.mjs';import {refreshRefereeAssignments} from './referees.mjs';import {originalPlayerValue} from './player-value.mjs';import {selectResultsHumanParticipation} from './results-participation.mjs';
import {dispatchCompetitionNext,nationalNextScreen} from './results-routing.mjs';
import {seasonEndManagerMoves} from './season-end.mjs';
/** Native children of5f9388. Merge with the remaining career/UI effects;
 * continueResultsCareer rejects missing children before advancing the save. */
export function nativeResultsCareerEffects(save,runtime,{rng,temporary,calendar=careerSchedule(save),maxSeniorPlayers=originalSeniorSquadLimit,managerDialogs}){
 if(!rng||typeof rng.below!=='function')throw Error('Original random generator required.');
 if(!Array.isArray(temporary?.lineups)||!Array.isArray(temporary?.matchTeams))throw Error('Original temporary team arrays required.');
 if(managerDialogs&&(typeof managerDialogs.humanDismissal!=='function'||typeof managerDialogs.showChanges!=='function'))throw Error('Both original manager dialog hosts required.');
 if(managerDialogs?.showOffer!==undefined&&typeof managerDialogs.showOffer!=='function')throw Error('Original job-offer modal required.');
 const currentDate=()=>{const c=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);return calendar[c.getInt32(0x16c,true)-1].date;};
 const effects={
  ...(managerDialogs?{managerChanges:()=>processManagerChanges(save,runtime,{rng,date:currentDate(),humanDismissal:managerDialogs.humanDismissal,showChanges:managerDialogs.showChanges})}:{}),
  ...(managerDialogs?.showOffer?{managerOffers:()=>processEmployedManagerOffers(save,runtime,{rng,showOffer:managerDialogs.showOffer}),unemployedOffers:()=>processUnemployedManagerOffers(save,runtime,{rng,showOffer:managerDialogs.showOffer})}:{}),
  aiTransfer:country=>runAITransfer(save,country,{rng,runtime,date:currentDate(),maxSeniorPlayers}),
  nationalPostRound:competition=>nationalPostRound(save,runtime,competition),
  nationalSetup:()=>nationalSetup(save,runtime,{rng,date:currentDate()}),
  competitionFiveEligible:()=>competitionFiveEligible(save,runtime,{rng}),
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
 if(managerDialogs?.humanNext!==undefined||managerDialogs?.automaticNext!==undefined){
  if(typeof managerDialogs.humanNext!=='function'||typeof managerDialogs.automaticNext!=='function')throw Error('Both original next-screen hosts required.');
  if(!effects.managerOffers||!effects.unemployedOffers||!effects.managerChanges)throw Error('Original manager effects required for next screens.');
  const hosts={humanNext:managerDialogs.humanNext,automaticNext:managerDialogs.automaticNext};
  effects.leagueNext=()=>continueLeagueResults(save,runtime,rng,{managerOffers:effects.managerOffers,unemployedOffers:effects.unemployedOffers,managerChanges:effects.managerChanges,selectHumanParticipation:effects.selectHumanParticipation,aiTransfer:effects.aiTransfer,...hosts});
  effects.cupNext=()=>dispatchCompetitionNext(runtime,hosts);
  effects.otherNext=()=>dispatchCompetitionNext(runtime,hosts);
  effects.nationalNext=()=>nationalNextScreen(save,runtime,{unemployedOffers:effects.unemployedOffers,managerChanges:effects.managerChanges,selectHumanParticipation:effects.selectHumanParticipation,...hosts});
 }
 if(managerDialogs?.showMove!==undefined){
  if(typeof managerDialogs.showMove!=='function')throw Error('Original season-end move host required.');
  effects.seasonEnd=()=>seasonEndManagerMoves(save,runtime,{rng,showMove:managerDialogs.showMove});
 }
 return effects;
}
