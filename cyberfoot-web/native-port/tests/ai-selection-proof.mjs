import {playerSpecialty,selectLineupCandidate,sortLineupCandidates} from '../ai-selection.mjs';
export function verifyAISelection(vectors,sortVectors=[]){
 const failures=[];
 for(const [i,v] of vectors.specialty.entries())if(playerSpecialty(v)!==v.expected)failures.push({kind:'specialty',i});
 for(const [i,v] of vectors.selection.entries()){
  const candidates=structuredClone(v.candidates),result=selectLineupCandidate(candidates,v.priority,v.position);
  if(result!==v.expected.result||JSON.stringify(candidates.map(c=>c.selected))!==JSON.stringify(v.expected.selected))failures.push({kind:'selection',i,result,expected:v.expected});
 }
 for(const [i,v] of sortVectors.entries()){
  const ids=sortLineupCandidates(structuredClone(v.rows)).map(c=>c.id);
  if(JSON.stringify(ids)!==JSON.stringify(v.expected))failures.push({kind:'sort',i,ids,expected:v.expected});
 }
 return {cases:sortVectors.length+vectors.specialty.length+vectors.selection.length,failures};
}
