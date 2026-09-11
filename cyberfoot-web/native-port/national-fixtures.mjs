import {record,shortString} from './save-format.mjs';
import {findCompetitionMetadata} from './champion-records.mjs';
import {generateAILineup} from './ai-lineup.mjs';
import {randomizeAITactics} from './tactics.mjs';
import {runAutomaticMatches} from './automatic-matches.mjs';
import {recordCareerEvent} from './career-stats.mjs';
import {applyCompetitionResult} from './competition-result.mjs';
import {applyMatchFinances} from './match-finances.mjs';
import {adjustFinishedCounters} from './finished-fixture.mjs';
import {finalizeMatchBatch} from './match-finalization.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** National-team group fixtures (competitions 7/8/9).
 *
 * Decompile evidence that national results come from the GENERIC automatic
 * engine with competition parameters (no isolatable national score routine):
 * - 00612a00 schedule selection at 0x6133b1 handles only
 *   `if ((param_2 == 1) || (param_2 == 2))` and at 0x6134ba only
 *   `if ((param_2 == 4) || (param_2 == 6))`; the timer blocks (0x612ab0,
 *   0x612aed, 0x612b3d, 0x612bd0) and attendance dispatch (0x613c42 616014,
 *   0x613c6a 616628, 0x613c92 61794c, 0x613cba 617e08) likewise cover only
 *   competitions 1/2/4/6. National fixtures never enter 66b3b8 via 612a00.
 * - 00618ac8 dispatches preparation by competition: case 7 -> 0061938c,
 *   cases 8/9 -> 00619e54, case 3 -> 00614e38, cases 1/2/4/6 -> 006225c8.
 * - 0061938c/00619e54 build the transient 66b3b8 batch directly: fixture
 *   counts from career+0x62c (7: 16/8/4/2/2; 8/9 group stage: 6/8, then
 *   4/2/2), group-stage pairings via 00648c98(round,1,column) mapped onto the
 *   career+0x4bc club groups, clubs+0x60 lineup ids, +0x18/+0x1c = 3,
 *   metadata 0064dee4(competition,-1,-1), human scan via clubs+0x39 into
 *   6d4794/6d4490, stadium strings via 00618dc4/0061a918, and zeroed
 *   income/attendance fields (+0x24..+0x38 = 0).
 * - The score engine is shared: 00621ee0 (automatic 1/2/4/6), 006220bc
 *   (automatic competition 3, including national knockout rows appended with
 *   competition 3 via 0065a1c0) and the watched tick 0061c834 all run
 *   0061c174 (plan) + 00609bc8 (step) + 0061c5c0/0061c6f4 (goals) for 190
 *   ticks and then 0061f604. Scoring takes no competition parameter; the
 *   neutral-venue plan for competition > 6 is the only national parameter.
 * - 0061f604 continues by competition at 0x6206b6/0x6206c0: case 7 ->
 *   00620858, cases 8/9 -> 00620fa4. Its per-fixture 0061cdb4 table gate
 *   `(competition < 7 || career+0x62c < 4)` and 0061efa4 history mapping
 *   (7/8/9: round = career+0x62c, group = 0) are already ported in
 *   competition-result.mjs and match-history.mjs.
 *
 * This module therefore routes national group fixtures through the verified
 * generic controllers (ai-lineup, match-score-plan neutral branch,
 * automatic-matches, competition-result, match-finances, match-history)
 * with the original parameters above. One deliberate, contained deviation:
 * 0061ef04 (scheduled-row write) is unconditional in 61f604 but reads
 * transient+0x17c, which 0061938c/00619e54 never set (only 006104c0 sets it),
 * so there is no 66afa0 row for group fixtures; settleNationalFixture omits
 * that write (and the 66ae84/0x234 blocks, which the original itself gates
 * with `competition < 7 || competition == 10`) instead of corrupting row 0.
 *
 * SHELL/SESSION INSERTION (no existing file changed by this port):
 * - route-match-session.mjs prepareRouteTeams (lines 19-27): add a
 *   `competitionType >= 7 && <= 9` branch returning prepareNationalFixtures
 *   before the selectMatchFixtures line; human lineups stay preserved.
 * - route-match-session.mjs openRouteMatchSession (line 33): extend the
 *   `[1,2,4,6].includes(context.competitionType)` guard to accept 7/8/9 (and
 *   3 once its 66afa0 selection exists); the finalize call (lines 58-60)
 *   already forwards nationalOptions/nationalPhase.
 * - game-shell.mjs Form87.bt_irprojogoClick (line 350): prepareRouteTeams
 *   already receives fixtureCompetition/fixtureSubgroup/roundDate, so
 *   national days flow once prepareRouteTeams handles 7/8/9; the
 *   'competition7'/'competition89' routes (route-screens.mjs matchRoutes line
 *   20, match-finalization.mjs line 20) land in presentScreensForRoute, which
 *   needs national-table screens next to the competition-3 'national' branch
 *   (line 369).
 */
/** Original group counts from 005f3380 and the 00619e54 header (7: 8, 8: 3, 9: 4). */
export const nationalGroupCounts={7:8,8:3,9:4};
/** 1-based group-slot pairings per group round, from the 00648c98 literals:
 * 0x648e54 "1,2" + 0x648e60 "3,4" (round 0), 0x648e6c "1,3" + 0x648e78 "4,2"
 * (round 1), 0x648e84 "4,1" + 0x648e90 "2,3" (round 2), joined with the
 * 0x648e9c "," separator. Round 3 repeats round 0: the auStack_188 index
 * table behind `auStack_188[round * 0x17 + slot]` was not byte-recovered, so
 * the fourth-leg pairing is an explicit assumption (the alternative is a
 * home/away swap of round 0); national venues are neutral, making the order
 * cosmetic for simulation. */
export const NATIONAL_GROUP_PAIRINGS=[[[1,2],[3,4]],[[1,3],[4,2]],[[4,1],[2,3]],[[1,2],[3,4]]];
/** Career+0x4bc club groups, same layout as nationalSetup (group * 16 + slot * 4). */
export function nationalGroupClubs(save,competition){
 const groups=nationalGroupCounts[competition];
 if(!groups)throw RangeError('Original national group competitions are 7, 8 and 9.');
 const career=view(save.career);
 return Array.from({length:groups},(_,group)=>[0,1,2,3].map(slot=>career.getInt32(0x4bc+group*16+slot*4,true)));
}
/** Transient batch sizes from the 0061938c/00619e54 career+0x62c switches. */
export function nationalFixtureCount(competition,round){
 if(competition===7)return [16,16,16,16,8,4,2,2][round]??null;
 if(competition===8||competition===9){
  if(round<4)return competition===8?6:8;
  return [4,2,2][round-4]??null;
 }
 return null;
}
/** Group-stage fixture selection: the 0061938c/00619e54 `round < 4` branch
 * (00648c98 pairings over career+0x4bc groups, human scan via clubs+0x39).
 * Knockout rounds (career+0x62c >= 4) read the 66ad60 bracket and are already
 * covered by advanceNationalKnockout, so they are rejected here. */
export function selectNationalFixtures(save,{competition,round}={}){
 if(![7,8,9].includes(competition))throw RangeError('Original national group competitions are 7, 8 and 9.');
 if(!Number.isInteger(round)||round<0||round>3)throw RangeError('National group stage rounds are career+0x62c values 0..3; later rounds use the national knockout controller.');
 const groups=nationalGroupClubs(save,competition),pairings=NATIONAL_GROUP_PAIRINGS[round],fixtures=[],humanFixtureIds=[];
 groups.forEach((clubs,group)=>{
  for(const [first,second] of pairings){
   const fixture={id:fixtures.length+1,clubs:[clubs[first-1],clubs[second-1]],group,round};
   fixtures.push(fixture);
   if(fixture.clubs.some(id=>view(record(save,'clubs',id)).getUint8(0x39)!==0))humanFixtureIds.push(fixture.id);
  }
 });
 if(fixtures.length!==nationalFixtureCount(competition,round))throw Error('National fixture count mismatch with the original round switch.');
 return {fixtures,humanFixtureIds};
}
/** Lineup and transient-field preparation. Same competition-generalization
 * pattern as prepareRouteTeams: human lineups (already committed) survive,
 * every other participating side gets a generated lineup and tactics; the
 * stadium string follows prepareScheduledMatches while income/attendance stay
 * zeroed as in the 0061938c/00619e54 tails. */
export function prepareNationalFixtures(save,fixtures,state,rng,{generate=generateAILineup,tactics=randomizeAITactics}={}){
 const competition=view(save.career).getInt32(0x88,true);
 const initialLineupCount=state.lineups?.length??0,prepared=[],humanFixtureIds=[];
 for(const fixture of fixtures)for(const id of fixture.clubs){
  const club=state.clubs[id];
  if(club.human||state.lineups?.[club.lineupId])continue;
  generate(state,id,rng);tactics(state.clubs[id],rng);prepared.push(id);
 }
 for(const fixture of fixtures)if(fixture.clubs.some(id=>state.clubs[id].human))humanFixtureIds.push(fixture.id);
 for(const fixture of fixtures){
  const homeClub=view(record(save,'clubs',fixture.clubs[0]));
  fixture.field4=homeClub.getInt32(0x7c,true);
  fixture.stadium=shortString(record(save,'clubs',fixture.clubs[0]),0x1d0,35);fixture.flag40=false;fixture.flag41=false;
  fixture.attendance=[0,0,0,0];fixture.field28=0;fixture.income=0;
  fixture.field170=0;fixture.field174=0;fixture.field178=0;
  fixture.tick=0;fixture.zone=0;fixture.side=0;fixture.previousEvent=0;fixture.endTick=0;
  fixture.substitutions=[3,3];fixture.counters={};fixture.savedFixtureId=-1;
  if(!fixture.lineupIds)fixture.lineupIds=fixture.clubs.map(id=>state.clubs[id].lineupId);
  if(!Number.isInteger(fixture.competition))fixture.competition=findCompetitionMetadata(save,{competition});
 }
 return {initialLineupCount,prepared,humanFixtureIds};
}
/** Per-fixture settlement for national group fixtures: the 61f604 loop minus
 * the blocks the original itself gates out for competitions 7/8/9 (the 0x234
 * points block and the 66ae84 append, both `competition < 7 || == 10`) and
 * minus the 61ef04 scheduled-row write, which has no target row for group
 * fixtures (see module header). */
export function settleNationalFixture(save,fixture,state,{rng}={}){
 const clubs=fixture.clubs.map(id=>view(record(save,'clubs',id)));
 for(const club of clubs)state.lineups?.[club.getInt32(0x60,true)]?.bench?.fill(0);
 applyCompetitionResult(save,fixture,{rng});
 applyMatchFinances(save,fixture);
 adjustFinishedCounters(fixture,clubs.map(club=>club.getInt32(0x220,true)));
}
/** Full national group round on a real save: select, prepare, simulate via
 * the verified automatic engine, settle, archive history, then advance
 * career+0x62c exactly as 00620858/00620fa4 do after 0061efa4. */
export async function playNationalRound(save,state,rng,{runtime={},continueCompetition,present}={}){
 if(typeof continueCompetition!=='function')throw TypeError('National continuation is required.');
 const career=view(save.career),competition=career.getInt32(0x88,true),round=career.getInt32(0x62c,true);
 if(![7,8,9].includes(competition))throw RangeError('Original national group competitions are 7, 8 and 9.');
 if(!Number.isInteger(round)||round<0||round>3)throw RangeError('National group stage rounds are career+0x62c values 0..3; later rounds use the national knockout controller.');
 const selected=selectNationalFixtures(save,{competition,round});
 const prepared=prepareNationalFixtures(save,selected.fixtures,state,rng);
 const fixtures=selected.fixtures,teamsFor=fixture=>fixture.lineupIds.map(id=>state.lineups[id]);
 for(const fixture of fixtures)if(teamsFor(fixture).some(team=>!team))throw Error('A participating national side has no committed lineup.');
 runtime.fixtureCount=fixtures.length;runtime.humanFixtures=Array(10).fill(0);
 selected.humanFixtureIds.forEach((id,index)=>{runtime.humanFixtures[index]=id;});
 await runAutomaticMatches({fixtures,teamsFor,state,rng,recordEvent:recordCareerEvent,runtime,prepare:async()=>{},finalize:async()=>{
  await finalizeMatchBatch(save,fixtures,state,rng,{runtime,teamsFor,historyContext:{competitionGroupId:0,subgroupId:0},handlers:{settle:(target,fixture,matchState,options)=>settleNationalFixture(target,fixture,matchState,options)},continueCompetition:async route=>{
   career.setInt32(0x62c,round+1,true);runtime.nationalRound={competition,round,route};
   await continueCompetition(route);
  },...(runtime.silent?{}:{present})});
 }});
 return {fixtures,teamsFor,prepared,runtime};
}
