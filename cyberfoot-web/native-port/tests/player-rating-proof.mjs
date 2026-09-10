import {playerRatingEvents,playerIncidentCounts,playerMatchRating,accumulatePlayerRating} from '../player-rating.mjs';import {OriginalRandom} from '../match-core.mjs';
export function verifyPlayerRatings(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  let actual;
  if(v.kind==='aggregate'){actual=structuredClone(v.rows);accumulatePlayerRating(actual,v.id,v.competition,v.position,v.rating,v.player);}
  else if(v.kind==='events')actual=playerRatingEvents(v.id,v.events);else if(v.kind==='incidents')actual=playerIncidentCounts(v.id,v.events);
  else{const rng=new OriginalRandom(v.seed);actual={rating:playerMatchRating(v.id,{clubs:[11,4],counters:v.counters},v.club,v.position,{players:{[v.id]:v.player},events:v.events},rng),seed:rng.state};}
  if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,kind:v.kind,actual,expected:v.expected});
 }
 return {cases:vectors.length,failures};
}
export async function checkPlayerRatings(){const [ratings,aggregates]=await Promise.all(['player-rating-vectors.json','rating-aggregate-vectors.json'].map(name=>fetch(new URL(name,import.meta.url)).then(r=>r.json())));const r=verifyPlayerRatings([...ratings,...aggregates.map(v=>({...v,kind:'aggregate'}))]);if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));const {checkRatingSave}=await import('./rating-save-integration.mjs');const integration=checkRatingSave(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()));return {...r,failures:0,integration};}
