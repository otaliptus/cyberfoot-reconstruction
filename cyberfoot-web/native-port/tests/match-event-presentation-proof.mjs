import {matchEventPresentation} from '../match-event-presentation.mjs';
export function verifyMatchEventPresentation(vectors,language){const failures=[];for(const [i,v] of vectors.entries()){
 const actual=matchEventPresentation(v.event,{id:1,clubs:[0,1],counters:{0x48:v.scores[0],0x4c:v.scores[1]}},{players:v.players,clubs:v.humans.map(human=>({human}))},language,v),comparison={scores:actual.score.map(String),html:actual.html,icon:actual.icon,sounds:actual.sounds,redCardPrompt:actual.redCardPrompt};if(JSON.stringify(comparison)!==JSON.stringify(v.expected))failures.push({i,actual:comparison,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkMatchEventPresentation(language){const r=verifyMatchEventPresentation(await fetch(new URL('./match-event-presentation-vectors.json',import.meta.url)).then(r=>r.json()),language);if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
