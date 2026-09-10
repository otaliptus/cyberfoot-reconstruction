import {sortRosterCandidates} from '../ai-selection.mjs';import {resetScreenSelections,autoSelectScreenLineup} from '../lineup-screen.mjs';import {buildLineupRoster} from '../lineup-roster.mjs';import {readSave,writeSave} from '../save-format.mjs';import {openCareer} from '../career-state.mjs';import {readScreenLineup} from '../saved-lineup.mjs';
export function verifyRosterParts(sort,filter){
 const failures=[];
 for(const [i,v] of sort.entries())if(JSON.stringify(sortRosterCandidates(structuredClone(v.rows)).map(r=>r.id))!==JSON.stringify(v.expected))failures.push({kind:'sort',i});
 for(const [i,v] of filter.entries()){
  const rows=v.statuses.map(status=>({status})),eligible=resetScreenSelections(rows);
  if(JSON.stringify({statuses:rows.map(r=>r.status),eligible})!==JSON.stringify(v.expected))failures.push({kind:'filter',i});
 }
 return {cases:sort.length+filter.length,failures};
}
export function checkRosterIntegration(bytes){
 const save=readSave(bytes),state=openCareer(save),rows=buildLineupRoster(state,11),unavailable=rows.filter(r=>r.status===3||r.status===4).map(r=>r.playerId);
 for(let formation=1;formation<=10;formation++){
  const {slots}=autoSelectScreenLineup(state,rows,formation,save,11),ids=slots.map(s=>s.playerId).filter(id=>id>0);
  if(ids.some(id=>unavailable.includes(id)))throw Error('Unavailable player selected');
  if(new Set(ids).size!==ids.length)throw Error('Duplicate selected player');
  const loaded=readScreenLineup(readSave(writeSave(save)),11);
  if(loaded.some((s,i)=>s.playerId!==slots[i].playerId||(i<11&&s.position!==slots[i].position)))throw Error('Saved formation differs');
 }
 return {scope:'native integration; complete screen controller original parity pending',rosterPlayers:rows.length,unavailable:unavailable.length,formations:10,selectionAndSaveReload:true};
}
export async function checkRoster(){
 const [sort,filter,bytes]=await Promise.all([fetch(new URL('./roster-sort-vectors.json',import.meta.url)).then(r=>r.json()),fetch(new URL('./human-roster-filter-vectors.json',import.meta.url)).then(r=>r.json()),fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer())]);
 const proof=verifyRosterParts(sort,filter);if(proof.failures.length)throw Error(JSON.stringify(proof.failures.slice(0,2)));return {...proof,failures:0,integration:checkRosterIntegration(bytes)};
}
