import {selectHumanCandidate,sortHumanCandidates} from '../ai-selection.mjs';import {saveScreenLineup,readScreenLineup} from '../saved-lineup.mjs';
const fromHex=s=>Uint8Array.from(s.match(/../g)??[],n=>parseInt(n,16));
const toHex=a=>Array.from(a,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyHumanLineup(selection,sort,saved){
 const failures=[];
 for(const [i,v] of selection.entries()){
  const c=structuredClone(v.candidates),result=selectHumanCandidate(c,v.priority,v.position);
  if(result!==v.expected.result||JSON.stringify(c.map(r=>r.selected))!==JSON.stringify(v.expected.selected))failures.push({kind:'selection',i,result,expected:v.expected});
 }
 for(const [i,v] of sort.entries())if(JSON.stringify(sortHumanCandidates(structuredClone(v.rows)).map(r=>r.id))!==JSON.stringify(v.expected))failures.push({kind:'sort',i});
 for(const [i,v] of saved.entries()){
  const save={sections:[{name:'records_0066b754',recordSize:120,count:v.rows.length,marker:v.rows.length,data:fromHex(v.rows.join(''))}]};
  saveScreenLineup(save,v.clubId,v.slots);
  if(toHex(save.sections[0].data)!==v.expected)failures.push({kind:'save',i});
  const slots=readScreenLineup(save,v.clubId);
  if(slots.some((s,j)=>s.playerId!==v.slots[j].playerId||s.position!==(j<11?v.slots[j].position:-1)))failures.push({kind:'read',i});
 }
 return {cases:selection.length+sort.length+saved.length,failures};
}
export async function checkHumanLineup(){
 const vectors=await Promise.all(['human-selection-vectors.json','human-sort-vectors.json','saved-lineup-vectors.json'].map(n=>fetch(new URL(n,import.meta.url)).then(r=>r.json())));
 const result=verifyHumanLineup(...vectors);if(result.failures.length)throw Error(JSON.stringify(result.failures.slice(0,2)));return {...result,failures:0};
}
