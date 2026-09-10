/** Unattended watched-match presentation proof.
 *
 * Runs the real route session on the original save with autoInteractions: the
 * engine stays on the human decision branch (state.automaticInteractions is
 * false), the Form53 injury and Form34/54 penalties appear, and the automatic
 * path resolves each modal with its first original option. The match must reach
 * full time, the sound requests must stay recorded (no web audio assets), and
 * two identical runs must produce byte-identical saves.
 */
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';
import {openCareer,commitCareerStats} from '../career-state.mjs';
import {careerAgenda} from '../schedule.mjs';
import {OriginalRandom} from '../match-core.mjs';
import {generateAILineup} from '../ai-lineup.mjs';
import {randomizeAITactics} from '../tactics.mjs';
import {prepareRouteTeams,openRouteMatchSession} from '../route-match-session.mjs';
import {selectIncidentPlayer} from '../match-players.mjs';
import {createInjuryDecision} from '../injury-dialog.mjs';
import {autoInjuryChoice,autoPenaltyChoice} from '../match-auto-interactions.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url),'utf8'));
function createStubRenderer(){
 const renderer={frame:null,parents:[],images:new Map(),handlers:new Map(),firstRow:0,canvas:{focus(){}},
  register(name,handler){renderer.handlers.set(name,handler);},
  async bitmap(){},
  async loadCrests(){},
  async show(frame,{modal=false}={}){if(modal&&renderer.frame)renderer.parents.push(renderer.frame);renderer.frame=frame;},
  update(frame){Object.assign(renderer.frame,frame);},
  close(){renderer.frame=renderer.parents.pop()??null;}};
 return renderer;
}
function penaltySeed(){let seed=0;while(new OriginalRandom(seed).below(100)<=90)seed++;return seed;}
function injurySeed(team,state){for(const id of team.players)if(id>0)state.players[id].condition=10;for(let seed=0;;seed++){const probe=new OriginalRandom(seed),id=selectIncidentPlayer(team,11,state,probe);if(id>0&&probe.below(19)===1)return {seed,injured:id};}}
async function play(){
 const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),career=view(save.career),agenda=careerAgenda(save);
 career.setInt32(0x16c,agenda.nextDay,true);career.setInt32(0x88,1,true);
 const state=openCareer(save,{currentDate:agenda.nextDate}),subgroup=view(record(save,'records_0066afa0',agenda.fixtureId)).getInt32(0x38,true),context={competitionType:1,subgroup,currentDate:agenda.nextDate};
 let clock=2015;const rng=new OriginalRandom(2015,()=>clock+=7919);
 generateAILineup(state,11,rng);randomizeAITactics(state.clubs[11],rng);
 prepareRouteTeams(save,state,rng,{competitionType:1,subgroup,currentDate:agenda.nextDate});
 const renderer=createStubRenderer(),continuations=[];
 const session=await openRouteMatchSession(renderer,{save,state,rng,context,language,crestAssets:{},kitAssets:{},autoInteractions:true,continueCompetition:async route=>{continuations.push(route);}});
 // Force the original human modal boundaries on the first transient fixture,
 // which is the first random consumer of each tick, exactly as the existing
 // development instrumentation does. Its home flag is restored afterwards.
 const fixture=session.fixtures[0],humanTeam=session.teamsFor(fixture)[0],previousHuman=state.clubs[fixture.clubs[0]].human;
 state.clubs[fixture.clubs[0]].human=true;
 await session.advance();assert.equal(session.controller.flow.tick,1,'First tick');
 fixture.previousEvent=17;fixture.side=1;fixture.zone=11;rng.state=penaltySeed();
 await session.advance();
 fixture.previousEvent=17;fixture.side=2;fixture.zone=11;rng.state=penaltySeed();
 await session.advance();
 const {seed,injured}=injurySeed(humanTeam,state);rng.state=seed;
 fixture.previousEvent=12;fixture.side=1;fixture.zone=11;
 await session.advance();
 state.clubs[fixture.clubs[0]].human=previousHuman;
 assert.equal(state.players[injured].active,false,'Injury dialog dismissed the injured player');
 assert.equal(fixture.counters[0x160]??0,1,'Attacking penalty committed');
 assert.equal(fixture.counters[0x164]??0,1,'Defending penalty committed');
 assert.equal(session.snapshot().modal,false,'No modal left open after each automatic decision');
 const captured=session.snapshot().autoInteractions;
 assert.equal(captured.injury,1,'Injury modal auto-resolved');
 assert.equal(captured.penalty,2,'Attacking and defending penalty modals auto-resolved');
 let guard=0;
 while(!session.snapshot().finished){
  if(++guard>250)throw Error('Watched match did not reach full time');
  await session.advance();
 }
 const final=session.snapshot();
 assert.equal(final.finished,true,'Full time reached');
 assert.equal(final.modal,false,'No modal left open');
 assert.equal(final.error,undefined,'No latched failure');
 assert.ok(guard>=180,'Full regulation played after the forced modals');
 assert.ok(final.autoInteractions.tactics>=1,'Halftime Form88 prompt auto-closed');
 assert.ok(final.soundRequests.length>0,'Original sound requests still recorded without audio assets');
 commitCareerStats(save,state);
 return {bytes:Buffer.from(writeSave(save)).toString('hex'),events:JSON.stringify(state.events),scores:final.fixtures.map(f=>[f.homeScore,f.awayScore]),auto:final.autoInteractions,sound:[...final.soundRequests],continuations,ticks:guard};
}
assert.deepEqual(autoInjuryChoice({rows:[{playerId:7},{playerId:9}]}),{select:7,confirm:true,fallback:true});
assert.deepEqual(autoInjuryChoice({rows:[]}),{select:undefined,confirm:true,fallback:true});
assert.deepEqual(autoPenaltyChoice({rows:[{playerId:4}]},{humanAttacks:true}),{select:4,kick:true});
assert.deepEqual(autoPenaltyChoice({rows:[{playerId:4}]},{humanAttacks:false}),{});
const keeperDeadEnd=createInjuryDecision({lineup:{players:[1,2,0,0,0,0,0,0,0,0,0],bench:[3,0,0,0,0,0,0]},injured:2,fixture:{clubs:[9,10],substitutions:[3,3]},side:1,state:{players:{2:{role:0,active:true},3:{role:0,active:true}}},present(){}});
assert.equal(keeperDeadEnd.confirm(),false,'Original keeper-only empty dialog has no enabled option');
assert.equal(keeperDeadEnd.resolveDefault(),true,'Automatic continuation resolves the disabled dialog');
assert.equal(await keeperDeadEnd.result,-1,'Automatic continuation replaces nobody');
console.log('Automatic decisions pick the first original injury/penalty option deterministically, including the disabled keeper-only dialog.');
const first=await play();
console.log('Unattended watched match resolved injury/penalty/halftime modals and reached full time.');
const second=await play();
assert.equal(second.bytes,first.bytes,'Replay produced byte-identical saves');
assert.equal(second.events,first.events,'Replay produced identical event records');
assert.deepEqual(second.scores,first.scores,'Replay produced identical scores');
assert.deepEqual(second.auto,first.auto,'Replay produced identical automatic decision counts');
assert.deepEqual(second.sound,first.sound,'Replay produced identical sound requests');
assert.deepEqual(second.continuations,first.continuations,'Replay produced identical continuation routes');
console.log(`Match presentation: unattended ${first.continuations.length} route(s), ${first.ticks} offline ticks, byte-identical replay.`);
