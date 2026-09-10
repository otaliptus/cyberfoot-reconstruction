import {prepareScorePlan,deliverPlannedGoals} from './match-score-plan.mjs';import {stepFixture} from './fixture-step.mjs';
/** Original 0061c5c0 has the same score mutations as 61c6f4, without presentation. */
export function deliverAutomaticGoals(plan,tick,fixture,teams,state,rng,recordEvent){return deliverPlannedGoals(plan,tick,fixture,teams,state,rng,recordEvent,()=>{});}
/** Original 00621ee0. Preparation and complete post-match finalization remain explicit controllers. */
export async function runAutomaticMatches({fixtures,teamsFor,state,rng,recordEvent,decisions={},runtime,prepare,finalize,steps={plan:prepareScorePlan,fixture:stepFixture,goals:deliverAutomaticGoals}}){
 for(const [name,fn] of Object.entries({teamsFor,recordEvent,prepare,finalize}))if(typeof fn!=='function')throw Error(`Automatic matches require ${name}`);
 runtime.counterB594=0;runtime.counterAF54=0;await prepare();
 if(fixtures.some((f,i)=>f.id!==i+1))throw Error('Original automatic fixture IDs must start at one');
 const plan=[];
 for(const fixture of fixtures){const teams=teamsFor(fixture);fixture.startingPlayers=teams.map(t=>[...t.players]);fixture.startingPositions=teams.map(t=>[...t.positions]);plan.push(...steps.plan(fixture,teams,state,rng));}
 runtime.tick=0;
 for(let tick=1;tick<=190;tick++)for(const fixture of fixtures){const teams=teamsFor(fixture);if(tick<=182||tick<=fixture.endTick)steps.fixture(fixture,teams,state,rng,recordEvent,decisions);steps.goals(plan,tick,fixture,teams,state,rng,recordEvent);}
 await finalize();return {ticks:190,plan};
}
