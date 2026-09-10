import {originalPlayerValue} from './player-value.mjs';
import {selectResultsHumanParticipation} from './results-participation.mjs';
import {nextCareerCalendarCursor,careerSchedule} from './schedule.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const requireEffects=(effects,names)=>{for(const name of names)if(typeof effects?.[name]!=='function')throw Error(`Original results continuation requires ${name}.`);};
/** Whole5f925c. These are per-match counters despite the legacy careerGoals
 * property name for118. Both original temporary arrays are caller-owned. */
export function resetResultsPlayers(save,temporary){
 if(!Array.isArray(temporary.lineups)||!Array.isArray(temporary.matchTeams))throw Error('Original lineup and match-team arrays required.');
 const players=save.sections.find(s=>s.name==='players'),p=view(players.data);
 for(let i=0;i<players.count;i++){const o=i*304;p.setUint8(o+0x86,0);p.setInt32(o+0x88,0,true);p.setInt32(o+0x118,0,true);}
 temporary.lineups.length=0;temporary.matchTeams.length=0;
}
/** Whole5fa020. Required effects retain their original call boundaries;
 * none may be omitted when connecting this to a playable career. */
export async function continueLeagueResults(save,runtime,rng,effects){
 effects={selectHumanParticipation:()=>selectResultsHumanParticipation(save,runtime),...effects};
 requireEffects(effects,['managerOffers','unemployedOffers','managerChanges','selectHumanParticipation','aiTransfer','humanNext','automaticNext']);
 const c=view(save.career),get=o=>c.getInt32(o,true);
 if(c.getUint8(0x6c8)===0){await effects.managerOffers();await effects.unemployedOffers();}
 await effects.managerChanges();await effects.selectHumanParticipation();
 const mode=get(0x168),day=get(0x16c);let transfers=2;
 if(mode===4){if(day<60)transfers=3;else if(day<93)transfers=1;else{transfers=rng.below(3)+(day<102?5:3);rng.below(3);}}
 else if(mode===2){if(day<63)transfers=3;else if(day<120)transfers=1;else{transfers=rng.below(2)+(day<136?0:2);rng.below(2);}}
 if(get(0xc0)>5)transfers=(transfers+3)|0;
 for(let i=0;i<transfers;i++)await effects.aiTransfer(-1);
 if(runtime.humanParticipation)await effects.humanNext();else await effects.automaticNext();
}
const careerEffects=['dateEffects','continentalPostRound','nationalPostRound','competitionFiveEligible','selectHumanParticipation','restoreNationalAssignments','resetPlayers','refreshReferees','nationalSetup','playerValue','seasonEnd','leagueNext','cupNext','nationalNext','otherNext'];
/** Whole5f9388 controller. Calendar cursor, condition resets, career type and
 * value stores are native. Remaining subcontrollers are explicit required
 * effects, not successful no-ops. Do not attach an incomplete effects set. */
export async function continueResultsCareer(save,runtime,effects,calendar=careerSchedule(save)){
 effects={selectHumanParticipation:()=>selectResultsHumanParticipation(save,runtime,calendar),playerValue:id=>originalPlayerValue(save,id),...effects};
 requireEffects(effects,careerEffects);
 const c=view(save.career),get=o=>c.getInt32(o,true),players=save.sections.find(s=>s.name==='players'),p=view(players.data);
 const advance=()=>{c.setInt32(0x16c,nextCareerCalendarCursor(save,calendar),true);runtime.nextCompetition=calendar[get(0x16c)-1].competition;};
 const recover=()=>{for(let i=0;i<players.count;i++)p.setInt32(i*304+0x78,100,true);};
 // 618ac8 snapshots the played day into66adac before match dispatch.
 // Preserve it here before656a18 advances the persistent calendar cursor.
 runtime.completedMatchDay=get(0x16c);
 runtime.completedMatchDate=calendar[runtime.completedMatchDay-1].date;
 runtime.nextCompetition=-1;advance();
 if(runtime.nextCompetition>=1000){if(runtime.nextCompetition===1001)recover();advance();}
 await effects.dateEffects(calendar[get(0x16c)-1].date);
 const previousCompetition=get(0x88);
 if(previousCompetition===4||previousCompetition===6)await effects.continentalPostRound(previousCompetition);
 else if(previousCompetition===8||previousCompetition===9)await effects.nationalPostRound(previousCompetition);
 if(runtime.nextCompetition===5&&get(0x1a8)===1&&!await effects.competitionFiveEligible())runtime.nextCompetition=-1;
 await effects.selectHumanParticipation();c.setInt32(0x88,runtime.nextCompetition,true);
 if(runtime.nationalAssignmentsActive)await effects.restoreNationalAssignments();
 await effects.resetPlayers();await effects.refreshReferees();
 if(get(0x700)===0&&[7,8,9].includes(runtime.nextCompetition)){await effects.nationalSetup();recover();}
 // The second national branch in the original is unreachable: it repeats
 // the opposite of the preceding condition without an intervening effect.
 if(get(0x704)===0&&get(0x4c)===1&&get(0x50)===2){
  for(let id=1;id<players.count;id++)if(p.getInt32(id*304+0x20,true)>=0){const amount=await effects.playerValue(id);p.setBigInt64(id*304+0x40,BigInt(amount|0)*10000n,true);}
  c.setInt32(0x704,1,true);
 }
 if(runtime.nextCompetition===-1){await effects.seasonEnd();return;}
 if(previousCompetition===1)await effects.leagueNext();
 else if([2,4,5,6,10].includes(previousCompetition))await effects.cupNext();
 else if(previousCompetition===3)await effects.nationalNext();
 else if([0,7,8,9].includes(previousCompetition))await effects.otherNext();
}
