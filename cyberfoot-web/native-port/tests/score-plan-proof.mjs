import {scoreProbabilities,planScore,lineupDifference,matchMinute,prepareScorePlan,deliverPlannedGoals} from '../match-score-plan.mjs';
import {OriginalRandom} from '../match-core.mjs';
export function verifyScorePlan(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  let actual;
  if(v.kind==='delivery'){const rng=new OriginalRandom(v.seed),fixture={id:1,counters:Object.fromEntries([0x48,0x4c,0x90,0x94].map(n=>[n,0]))},records=[],shown=[];deliverPlannedGoals(v.plan,v.tick,fixture,v.teams,{players:v.players},rng,(side,player,f,detail,type)=>{records.push([side,player,f.id,detail,type]);return v.returns[records.length-1];},index=>shown.push(index));actual={records,shown,counters:fixture.counters,seed:rng.state};}
  else if(v.kind==='schedule'){const rng=new OriginalRandom(v.seed,()=>v.seed+rng.clockReads*v.stride),fixture={id:1,clubs:[0,1]},state={clubs:v.clubs,competitionType:v.competitionType};const plan=prepareScorePlan(fixture,v.teams,state,rng);actual={plan,difference:fixture.plannedDifference,neutral:fixture.neutralScorePlan??0,alternate:0,seed:rng.state,clockReads:rng.clockReads};}
  else if(v.kind==='probabilities')actual=scoreProbabilities(v.difference,v.neutral,v.alternate);
  else if(v.kind==='difference')actual=lineupDifference(v.teams,v.clubs,v.neutral);
  else if(v.kind==='minute')actual=matchMinute(v.tick,v.full);
  else{const rng=new OriginalRandom(v.seed,()=>v.seed),p=planScore(v.difference,v.neutral,v.alternate,rng);actual={result:[p.outcome,p.home,p.away],seed:rng.state,clockReads:rng.clockReads};}
  if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,kind:v.kind,actual,expected:v.expected});
 }
 return {cases:vectors.length,failures};
}
export async function checkScorePlan(){const lists=await Promise.all(['score-plan-vectors.json','score-schedule-vectors.json','planned-goal-vectors.json'].map(f=>fetch(new URL(f,import.meta.url)).then(r=>r.json())));const r=verifyScorePlan([...lists[0],...lists[1].map(v=>({...v,kind:'schedule'})),...lists[2].map(v=>({...v,kind:'delivery'}))]);if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));const {checkRegulationFlow}=await import('./regulation-flow-integration.mjs');const integration=await checkRegulationFlow(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()));return {...r,failures:0,integration};}
