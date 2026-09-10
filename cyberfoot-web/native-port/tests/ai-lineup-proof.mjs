import {generateAILineup} from '../ai-lineup.mjs';
import {OriginalRandom} from '../match-core.mjs';
export function verifyAILineup(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const state={players:structuredClone(v.players),clubs:[{human:false},{human:false}],competitionType:v.competitionType,currentDate:v.currentDate},rng=new OriginalRandom(v.seed);
  const {lineup}=generateAILineup(state,v.clubId,rng);
  const mutations=state.players.map(p=>({specialty:p.specialty,condition:p.condition,active:p.active,selectedFlag:p.selectedFlag}));
  const actual={lineup,mutations,seed:rng.state,availableCount:state.clubs[v.clubId].availableCount,availableRoleCounts:state.availableRoleCounts};
  // Compare fields independently; object key order is not a game behavior.
  for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){
   if(key==='lineup'&&Object.keys(v.expected.lineup).every(k=>JSON.stringify(lineup[k])===JSON.stringify(v.expected.lineup[k])))continue;
   failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;
  }
 }
 return {cases:vectors.length,failures};
}
