import {precision64,nearestEven} from './x87.mjs';
import {scoreCoefficients,scoreTables,countryGroups} from './score-tables.mjs';
import {selectScorer} from './match-players.mjs';
const integer=n=>[BigInt(n),1n];
const coefficient=address=>{const [s,e]=scoreCoefficients[address];return e<0?[BigInt(s),1n<<BigInt(-e)]:[BigInt(s)<<BigInt(e),1n];};
const mul=([a,b],[c,d])=>precision64(a*c,b*d);
const add=([a,b],[c,d])=>precision64(a*d+c*b,b*d);
const sub=(a,[c,d])=>add(a,[-c,d]);
const round=([a,b])=>Number(BigInt.asIntN(32,nearestEven(a,b)));
const divideRound=(n,d)=>round(precision64(BigInt(n),BigInt(d)));
const clamp=n=>Math.max(-30,Math.min(30,n));
/** 0060cb40 / 0060cc6c. Original x87 operations, including rounded intermediates. */
export function scoreProbabilities(difference,neutral=false,alternate=false){
 const n=neutral?Math.abs(difference):difference;
 let win=round(add(mul(integer(n),coefficient(neutral?'0x60cd34':'0x60cc24')),neutral?integer(35):coefficient(alternate?'0x60cc3c':'0x60cc30')));
 let draw=round(add(sub(mul(integer(Math.imul(n,n)),coefficient(neutral?'0x60cd44':'0x60cc48')),mul(integer(n),coefficient(neutral?'0x60cd50':'0x60cc54'))),neutral?integer(30):coefficient('0x60cc60')));
 win=Math.max(0,win);draw=Math.max(0,draw);if(!neutral&&difference>24)draw=5;
 const lose=Math.max(0,100-((win+draw)|0));
 return neutral&&difference<0?[lose,draw,win]:[win,draw,lose];
}
/** 0060c85c. This result plans the extra goal events; it is not the final score. */
export function planScore(difference,neutral,alternate,rng){
 rng.randomize();const chance=rng.below(100)+1,[win,draw]=scoreProbabilities(difference,neutral,alternate);
 const outcome=chance<=win?1:chance<=win+draw?0:2,abs=Math.abs(difference);
 let winning=0,losing=0;
 if(outcome!==0){
  const tier=abs<6?0:abs<11?1:abs<16?2:abs<26?3:4;
  const upset=difference>=0?outcome===2:outcome===1;
  const n=rng.below(100)+1,row=scoreTables[upset?'upset':'favoured'][tier];
  for(let i=0;i<10;i++)if(n<row[i]){winning=i+1;break;}
  const m=rng.below(100)+1;losing=m<41?0:m<71?1:m<91?2:m<97?3:4;
  if(abs>9&&abs<16&&losing>3)losing--;else if(abs>14&&abs<31&&losing>2)losing-=2;
  if(winning<=losing)losing=0;if(losing<0)losing=-1;
 }else{
  const m=rng.below(800)+1;losing=m<201?0:m<501?1:m<701?2:m<791?3:m<800?4:5;
  if(abs>14&&losing>3)losing=rng.below(3);winning=losing;
 }
 return {outcome,home:outcome===1?winning:losing,away:outcome===1?losing:winning};
}
/** 0060cd60. Club field58 retains its offset name until its meaning is confirmed. */
export function lineupDifference(teams,clubs,neutral=false){
 const a=divideRound(teams[0].attackTotal,10),b=divideRound(teams[1].attackTotal,10),delta=(a-b)|0;
 let base=neutral?divideRound(delta,3):a>b?divideRound(delta,2):a<b?divideRound(delta,3):0;
 let extra=(clubs[0].field58-clubs[1].field58)|0;
 const x=countryGroups[clubs[0].country]??0,y=countryGroups[clubs[1].country]??0;
 if(x===0&&y!==1)extra+=5;if(y===0&&x!==1)extra-=5;
 if(x===1&&y!==0)extra+=5;if(y===1&&x!==0)extra-=5;
 return clamp((base+extra)|0);
}
/** 0061c174. Produces ordered, unique tick assignments without sorting them. */
export function prepareScorePlan(fixture,teams,state,rng){
 const clubs=fixture.clubs.map(id=>state.clubs[id]),neutral=state.competitionType===5||state.competitionType>6;
 let difference=lineupDifference(teams,clubs,neutral);
 if(!clubs[0].human&&!clubs[1].human){if(clubs[0].field98>clubs[1].field98)difference+=3;else if(clubs[0].field98<clubs[1].field98)difference-=2;}
 if(clubs[0].human&&!clubs[1].human){if(clubs[0].field98>clubs[1].field98)difference+=4;else if(clubs[0].field98<clubs[1].field98)difference+=2;}
 difference=clamp(difference);const score=planScore(difference,neutral,false,rng);
 fixture.plannedDifference=difference;if(neutral)fixture.neutralScorePlan=1;
 const ticks=new Array(score.home+score.away).fill(0);rng.randomize();
 for(let i=0;i<ticks.length;i++){let tick;do{tick=rng.below(190)+1;}while(ticks.includes(tick));ticks[i]=tick;}
 return ticks.map((tick,i)=>({fixtureId:fixture.id,side:i<score.home?1:2,tick}));
}
/** 0061c6f4. Called even after this fixture's live-event clock has stopped. */
function* plannedGoalEvents(plan,tick,fixture,teams,state,rng,recordEvent){
 for(const entry of plan){
  if(entry.tick!==tick||entry.fixtureId!==fixture.id)continue;
  const ownGoal=rng.below(40)<2,teamIndex=ownGoal?2-entry.side:entry.side-1;
  const player=selectScorer(teams[teamIndex],-1,ownGoal?-2:-1,state,rng);
  if(player>0){
   const index=recordEvent(entry.side,player,fixture,-1,4,state,rng);
   for(const base of [0x44,0x8c]){const off=base+entry.side*4;fixture.counters[off]=((fixture.counters[off]??0)+1)|0;}
   if(index>=0)yield index;
  }
 }
}
// Both runners suspend at the same event boundary; the async runner never
// computes another goal while a manager-facing presentation is pending.
export function deliverPlannedGoals(plan,tick,fixture,teams,state,rng,recordEvent,presentEvent){
 for(const index of plannedGoalEvents(plan,tick,fixture,teams,state,rng,recordEvent))presentEvent(index);
}
export async function deliverPlannedGoalsAsync(plan,tick,fixture,teams,state,rng,recordEvent,presentEvent){
 for(const index of plannedGoalEvents(plan,tick,fixture,teams,state,rng,recordEvent))await presentEvent(index);
}
export function matchMinute(tick,fullGameGauge){ // 00651e70
 if(tick===1)return 1;return divideRound(!fullGameGauge&&tick>92?(tick-92)|0:tick,2);
}
