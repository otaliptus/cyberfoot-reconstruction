import {archiveSubstitutedPlayers,archiveFinalPlayers} from '../player-history.mjs';import {OriginalRandom} from '../match-core.mjs';
const hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyPlayerHistory(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const save={sections:[['records_0066ae14',32],['records_0066b128',32],['records_0066b1b8',24]].map(([name,recordSize])=>({name,recordSize,count:0,marker:0,data:new Uint8Array()}))},state={players:v.players,events:v.events},fixture={id:1,clubs:[11,4],competition:v.competition,field4:v.field4,counters:v.counters},rng=new OriginalRandom(v.seed),calls=[],options={writeStats:(id,club,competition,kind)=>calls.push([id,club,competition,kind])};
  archiveSubstitutedPlayers(save,v.historyId,fixture,state,rng,options);archiveFinalPlayers(save,v.historyId,fixture,v.teams,state,rng,options);
  const candidates=new Uint8Array(state.ratingCandidates.length*28),cv=new DataView(candidates.buffer);state.ratingCandidates.forEach((row,i)=>row.forEach((n,j)=>cv.setInt32(i*28+j*4,n,true)));
  const actual={sub:hex(save.sections[0].data),final:hex(save.sections[1].data),candidates:hex(candidates),aggregates:hex(save.sections[2].data),calls,seed:rng.state};
  for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }
 return {cases:vectors.length,failures};
}
export async function checkPlayerHistory(){const r=verifyPlayerHistory(await fetch(new URL('./player-history-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));const matchRecords=await(await import('./match-history-proof.mjs')).checkMatchHistory();const {checkRegulationFlow}=await import('./regulation-flow-integration.mjs');const integration=await checkRegulationFlow(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()),{settle:true,history:true});return {...r,failures:0,matchRecords,integration};}
