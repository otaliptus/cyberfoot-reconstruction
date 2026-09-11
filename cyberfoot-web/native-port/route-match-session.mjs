import {record} from './save-format.mjs';
import {prepareScheduledMatches,initializeWatchedKickoff,selectMatchFixtures} from './match-preparation.mjs';
import {createRegulationController} from './regulation-controller.mjs';
import {recordCareerEvent} from './career-stats.mjs';
import {finalizeMatchBatch} from './match-finalization.mjs';
import {matchEventPresentation} from './match-event-presentation.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {createMatchTacticsHost} from './match-tactics-host.mjs';
import {createPenaltyDialogHost} from './penalty-dialog-host.mjs';
import {createInjuryDialogHost} from './injury-dialog-host.mjs';
import {createMatchAutoInteractions} from './match-auto-interactions.mjs';
import {prepareNationalFixtures,selectNationalFixtures,settleNationalFixture} from './national-fixtures.mjs';
import {prepareDomesticTeams} from './prematch-teams.mjs';
import {generateAILineup} from './ai-lineup.mjs';
import {randomizeAITactics} from './tactics.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Competitions 1/2 use the original 4e1a98 league/cup team preparation. The
 * continental branches prepare every participating non-human club.
 */
export function prepareRouteTeams(save,state,rng,{competitionType,subgroup,currentDate},{generate=generateAILineup,tactics=randomizeAITactics}={}){
  if(competitionType===1||competitionType===2){
   const selected=selectMatchFixtures(save,{competitionType,subgroup,currentDate}),fixtureClubs=new Set(selected.fixtures.flatMap(fixture=>fixture.clubs));
   return prepareDomesticTeams(save,state,rng,{generate,tactics,fixtureClubs});
  }
 // Additive national branch (7/8/9 group stage via national-fixtures.mjs).
 // Human lineups stay preserved; every other participating national side gets
 // a generated lineup and tactics, mirroring the domestic branch below.
 if(Number.isInteger(competitionType)&&competitionType>=7&&competitionType<=9){
  const careerRound=view(save.career).getInt32(0x62c,true);
  if(!Number.isInteger(careerRound)||careerRound<0||careerRound>3)throw RangeError('National group stage rounds are career+0x62c values 0..3; later rounds use the national knockout controller.');
  const selected=selectNationalFixtures(save,{competition:competitionType,round:careerRound});
  return prepareNationalFixtures(save,selected.fixtures,state,rng,{generate,tactics});
 }
 const selected=selectMatchFixtures(save,{competitionType,subgroup,currentDate}),prepared=[];
 for(const fixture of selected.fixtures)for(const id of fixture.clubs){
  const club=state.clubs[id];if(club.human||state.lineups?.[club.lineupId])continue;
  generate(state,id,rng);tactics(club,rng);prepared.push(id);
 }
 return {initialLineupCount:state.lineups?.length??0,prepared};
}
/** Shared native match session for the playable batch competitions. Same
 * controller order as openDomesticMatchSession with the original competition
 * set and explicit knockout adapters supplied by the caller.
 *
 * Additive national branch: competitions 7/8/9 delegate to
 * openNationalRouteMatchSession (watched Form46 via national-fixtures.mjs)
 * before the original 1/2/4/6 guard below, which is left untouched. */
export async function openNationalRouteMatchSession(renderer,{save,state,rng,context,language,crestAssets,kitAssets,knockoutOptions,nationalOptions,settlementOptions,autoInteractions=false,continueCompetition}){
 const career=view(save.career),displayRound=career.getInt32(0x4c,true);
 if(typeof continueCompetition!=='function')throw TypeError('Competition continuation is required.');
 const competition=context.competitionType,round=career.getInt32(0x62c,true);
 const selected=selectNationalFixtures(save,{competition,round});
 const prepared=prepareNationalFixtures(save,selected.fixtures,state,rng);
 const runtime={silent:false,subgroup:0,fixtureCount:selected.fixtures.length,humanFixtures:Array(10).fill(0)};
 selected.humanFixtureIds.forEach((id,index)=>{runtime.humanFixtures[index]=id;});
 const fixtures=selected.fixtures,teamsFor=f=>f.lineupIds.map(id=>state.lineups[id]);
 for(const fixture of fixtures)if(teamsFor(fixture).some(t=>!t))throw Error('A participating national side has no committed lineup.');
 initializeWatchedKickoff(save,fixtures,rng,runtime);
  let minute=0,period=language[504].text,finished=false,elapsed=0,pending=null,failure=null;
  const latestEvents=new Map(),soundRequests=[],soundedEvents=new Set();
  const windowView=()=>({form:'Form46',divisionLabels:[35,36,37,38].map(i=>language[i].text),properties:{g1:{Progress:minute,MaxValue:career.getUint8(0xdd)?90:45},HTMLabel3:{HTMLText:language[209].text+displayRound},labtempo:{Caption:period},Label1:{Caption:minute+"'",Visible:true}},fixtures:fixtures.map(f=>{const home=view(record(save,'clubs',f.clubs[0])),away=view(record(save,'clubs',f.clubs[1]));return {homeCrest:clubCrestPath(save,f.clubs[0],crestAssets),awayCrest:clubCrestPath(save,f.clubs[1],crestAssets),event:latestEvents.get(f.id),id:f.id,stadium:f.stadium,attendance:'| '+f.field28,home:state.clubs[f.clubs[0]].name,away:state.clubs[f.clubs[1]].name,homeScore:f.counters[0x48]??0,awayScore:f.counters[0x4c]??0,homeColor:home.getInt32(0xb0,true),awayColor:away.getInt32(0xb0,true),homeBackground:home.getInt32(0xac,true),awayBackground:away.getInt32(0xac,true)};})});
  await renderer.loadCrests(fixtures.flatMap(f=>f.clubs.map(id=>clubCrestPath(save,id,crestAssets))));
  await renderer.show(windowView());
  const penaltyHost=createPenaltyDialogHost(renderer,{save,state,language,assets:crestAssets,playSound:name=>soundRequests.push(name)}),injuryHost=createInjuryDialogHost(renderer,{state,language,playSound:name=>soundRequests.push(name)});
  // Additive sound propagation: the watched-fixture presentation computes the
  // original goal/expulsion requests (gol/goladv/expulsao); record each event
  // index once so substitution re-presentation never double-records.
  const showEvent=index=>{const event=state.events[index],fixture=fixtures.find(f=>f.id===event[5]);const presentation=matchEventPresentation(event,fixture,state,language,{silent:runtime.silent,sound:!!career.getUint8(0xdc),fullGameGauge:!!career.getUint8(0xdd)});latestEvents.set(fixture.id,presentation);if(!soundedEvents.has(index)){soundedEvents.add(index);for(const name of presentation.sounds??[])soundRequests.push(name);}return {fixture,presentation};};
  const tacticsHost=createMatchTacticsHost(renderer,{save,state,language,assets:crestAssets,kitAssets,rng,recordEvent:recordCareerEvent,presentEvent:showEvent});
  const auto=autoInteractions?createMatchAutoInteractions({renderer,injuryHost,penaltyHost,tacticsHost}):null;
  const openTactics=options=>{const opened=tacticsHost.open(options);return auto?Promise.all([opened,auto.tactics()]):opened;};
  const controller=createRegulationController({fixtures,teamsFor,state,rng,decisions:{penalty:c=>auto?auto.penalty(c):penaltyHost.decide(c),injuryReplacement:c=>auto?auto.injury(c):injuryHost.decide(c)},recordEvent:recordCareerEvent,fullGameGauge:!!career.getUint8(0xdd),pauseAtHalftime:!!career.getUint8(0xd9),humanFixtureIds:selected.humanFixtureIds??runtime.humanFixtures,humanManagerCount:career.getInt32(0x13c,true),sound:!!career.getUint8(0xdc),present:async e=>{
   if(e.type==='event'){const {fixture,presentation}=showEvent(e.index);if(presentation.redCardPrompt){renderer.update(windowView());await openTactics({fixture,teams:teamsFor(fixture),side:presentation.redCardPrompt.side,minute,period:controller.flow.period});}}
  if(e.type==='clearFixtureEvent')latestEvents.delete(e.fixtureId);
  if(e.type==='minute')minute=e.minute;if(e.languageId)period=language[e.languageId].text;if(e.type==='gauge')minute=e.value;if(e.type==='sound')soundRequests.push(e.resource);
 },halftime:async fixture=>{
  renderer.update(windowView());const side=state.clubs[fixture.clubs[0]].human?1:2;await openTactics({fixture,teams:teamsFor(fixture),side,minute,period:1});
 },finalize:async()=>{
  await finalizeMatchBatch(save,fixtures,state,rng,{runtime,teamsFor,historyContext:{competitionGroupId:0,subgroupId:0},handlers:{settle:(target,fixture,matchState,options)=>settleNationalFixture(target,fixture,matchState,options)},knockoutOptions:{...knockoutOptions,subgroup:runtime.subgroup,alternateRound:runtime.alternateRound},nationalOptions,nationalPhase:runtime.nationalPhase,settlementOptions,continueCompetition:route=>continueCompetition(route,runtime),present:(type,resource)=>{if(type==='sound')soundRequests.push(resource);if(type==='finishing')renderer.update(windowView());}});finished=true;
 }});
 const modal=()=>!!(tacticsHost.active||injuryHost.active||injuryHost.opening||penaltyHost.active||penaltyHost.opening);
 const advance=()=>{if(pending||finished||failure||modal())return pending;pending=controller.advance().then(()=>{if(renderer.frame?.form==='Form46')renderer.update(windowView());},error=>{failure=error;throw error;}).finally(()=>{pending=null;});return pending;};
 const advanceTime=async ms=>{if(penaltyHost.active||penaltyHost.opening){penaltyHost.advanceTime(ms);return;}if(pending||modal()||finished||failure)return;elapsed+=ms;const interval=Math.max(1,runtime.batchTimerInterval);if(elapsed>=interval){elapsed%=interval;advance()?.catch(error=>console.error(error));await Promise.resolve();}};
 void prepared;
 return {advanceTime,advance,controller,fixtures,teamsFor,tacticsHost,penaltyHost,injuryHost,runtime,auto,national:{competition,round},get pending(){return pending;},snapshot:()=>({form:renderer.frame?.form,tick:controller.flow.tick,minute,period,finished,error:failure?.message,timerEnabled:controller.flow.timerEnabled,modal:modal(),fixtures:windowView().fixtures,autoInteractions:auto?auto.resolved:null,soundRequests})};
}
export async function openRouteMatchSession(renderer,{save,state,rng,context,language,crestAssets,kitAssets,knockoutOptions,nationalOptions,settlementOptions,autoInteractions=false,continueCompetition}){
 // Additive national branch: competitions 7/8/9 play via national-fixtures.
 if(Number.isInteger(context?.competitionType)&&context.competitionType>=7&&context.competitionType<=9)return openNationalRouteMatchSession(renderer,{save,state,rng,context,language,crestAssets,kitAssets,knockoutOptions,nationalOptions,settlementOptions,autoInteractions,continueCompetition});
 const career=view(save.career),displayRound=career.getInt32(0x4c,true);
  if(![0,1,2,4,6].includes(context.competitionType)||(![2,4].includes(career.getInt32(0x168,true))&&context.competitionType!==0))throw RangeError('This presentation supports original friendly, batch competitions 1,2,4 and 6 (league modes 2 and 4).');
 if(typeof continueCompetition!=='function')throw TypeError('Competition continuation is required.');
 const runtime={silent:false,subgroup:context.subgroup},prepared=prepareScheduledMatches(save,context,rng,runtime),fixtures=prepared.fixtures,teamsFor=f=>f.lineupIds.map(id=>state.lineups[id]);
 for(const fixture of fixtures)if(teamsFor(fixture).some(t=>!t))throw Error('A participating club has no committed lineup.');
 initializeWatchedKickoff(save,fixtures,rng,runtime);
  let minute=0,period=language[504].text,finished=false,elapsed=0,pending=null,failure=null;
  const latestEvents=new Map(),soundRequests=[],soundedEvents=new Set();
  const windowView=()=>({form:'Form46',divisionLabels:[35,36,37,38].map(i=>language[i].text),properties:{g1:{Progress:minute,MaxValue:career.getUint8(0xdd)?90:45},HTMLabel3:{HTMLText:language[209].text+displayRound},labtempo:{Caption:period},Label1:{Caption:minute+"'",Visible:true}},fixtures:fixtures.map(f=>{const home=view(record(save,'clubs',f.clubs[0])),away=view(record(save,'clubs',f.clubs[1]));return {homeCrest:clubCrestPath(save,f.clubs[0],crestAssets),awayCrest:clubCrestPath(save,f.clubs[1],crestAssets),event:latestEvents.get(f.id),id:f.id,stadium:f.stadium,attendance:'| '+f.field28,home:state.clubs[f.clubs[0]].name,away:state.clubs[f.clubs[1]].name,homeScore:f.counters[0x48]??0,awayScore:f.counters[0x4c]??0,homeColor:home.getInt32(0xb0,true),awayColor:away.getInt32(0xb0,true),homeBackground:home.getInt32(0xac,true),awayBackground:away.getInt32(0xac,true)};})});
  await renderer.loadCrests(fixtures.flatMap(f=>f.clubs.map(id=>clubCrestPath(save,id,crestAssets))));
  await renderer.show(windowView());
  const penaltyHost=createPenaltyDialogHost(renderer,{save,state,language,assets:crestAssets,playSound:name=>soundRequests.push(name)}),injuryHost=createInjuryDialogHost(renderer,{state,language,playSound:name=>soundRequests.push(name)});
  // Additive sound propagation (same as the national branch above): record the
  // watched-fixture goal/expulsion requests once per event index.
  const showEvent=index=>{const event=state.events[index],fixture=fixtures.find(f=>f.id===event[5]);const presentation=matchEventPresentation(event,fixture,state,language,{silent:runtime.silent,sound:!!career.getUint8(0xdc),fullGameGauge:!!career.getUint8(0xdd)});latestEvents.set(fixture.id,presentation);if(!soundedEvents.has(index)){soundedEvents.add(index);for(const name of presentation.sounds??[])soundRequests.push(name);}return {fixture,presentation};};
 const tacticsHost=createMatchTacticsHost(renderer,{save,state,language,assets:crestAssets,kitAssets,rng,recordEvent:recordCareerEvent,presentEvent:showEvent});
 // autoInteractions resolves the original modal decisions with their first
 // option so a watched human fixture can finish unattended. The engine branch
 // and random sequence are untouched; sound assets are absent in cyberfoot-web
 // so playSound only records requests.
 const auto=autoInteractions?createMatchAutoInteractions({renderer,injuryHost,penaltyHost,tacticsHost}):null;
 const openTactics=options=>{const opened=tacticsHost.open(options);return auto?Promise.all([opened,auto.tactics()]):opened;};
 const controller=createRegulationController({fixtures,teamsFor,state,rng,decisions:{penalty:c=>auto?auto.penalty(c):penaltyHost.decide(c),injuryReplacement:c=>auto?auto.injury(c):injuryHost.decide(c)},recordEvent:recordCareerEvent,fullGameGauge:!!career.getUint8(0xdd),pauseAtHalftime:!!career.getUint8(0xd9),humanFixtureIds:prepared.humanFixtureIds??runtime.humanFixtures,humanManagerCount:career.getInt32(0x13c,true),sound:!!career.getUint8(0xdc),present:async e=>{
  if(e.type==='event'){const {fixture,presentation}=showEvent(e.index);if(presentation.redCardPrompt){renderer.update(windowView());await openTactics({fixture,teams:teamsFor(fixture),side:presentation.redCardPrompt.side,minute,period:controller.flow.period});}}
  if(e.type==='clearFixtureEvent')latestEvents.delete(e.fixtureId);
  if(e.type==='minute')minute=e.minute;if(e.languageId)period=language[e.languageId].text;if(e.type==='gauge')minute=e.value;if(e.type==='sound')soundRequests.push(e.resource);
 },halftime:async fixture=>{
  renderer.update(windowView());const side=state.clubs[fixture.clubs[0]].human?1:2;await openTactics({fixture,teams:teamsFor(fixture),side,minute,period:1});
 },finalize:async()=>{
  const leagueMetadataId=view(record(save,'records_0066b6ac',fixtures[0].competition)).getInt32(4,true);
  await finalizeMatchBatch(save,fixtures,state,rng,{runtime,teamsFor,historyContext:{competitionGroupId:0,subgroupId:context.subgroup,leagueMetadataId},knockoutOptions:{...knockoutOptions,subgroup:runtime.subgroup,alternateRound:runtime.alternateRound},nationalOptions,nationalPhase:runtime.nationalPhase,settlementOptions,continueCompetition:route=>continueCompetition(route,runtime),present:(type,resource)=>{if(type==='sound')soundRequests.push(resource);if(type==='finishing')renderer.update(windowView());}});finished=true;
 }});
 const modal=()=>!!(tacticsHost.active||injuryHost.active||injuryHost.opening||penaltyHost.active||penaltyHost.opening);
 const advance=()=>{if(pending||finished||failure||modal())return pending;pending=controller.advance().then(()=>{if(renderer.frame?.form==='Form46')renderer.update(windowView());},error=>{failure=error;throw error;}).finally(()=>{pending=null;});return pending;};
 const advanceTime=async ms=>{if(penaltyHost.active||penaltyHost.opening){penaltyHost.advanceTime(ms);return;}if(pending||modal()||finished||failure)return;elapsed+=ms;const interval=Math.max(1,runtime.batchTimerInterval);if(elapsed>=interval){elapsed%=interval;advance()?.catch(error=>console.error(error));await Promise.resolve();}};
 return {advanceTime,advance,controller,fixtures,teamsFor,tacticsHost,penaltyHost,injuryHost,runtime,auto,get pending(){return pending;},snapshot:()=>({form:renderer.frame?.form,tick:controller.flow.tick,minute,period,finished,error:failure?.message,timerEnabled:controller.flow.timerEnabled,modal:modal(),fixtures:windowView().fixtures,autoInteractions:auto?auto.resolved:null,soundRequests})};
}
