import {randomizeAITactics,setTactic} from '../tactics.mjs';import {OriginalRandom} from '../match-core.mjs';import {readSave,writeSave} from '../save-format.mjs';import {openCareer} from '../career-state.mjs';
export function verifyTactics(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const rng=new OriginalRandom(v.seed),club=randomizeAITactics({},rng),actual={...club,seed:rng.state};
  if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push(i);
 }
 return {cases:vectors.length,failures};
}
export function verifyTacticsSave(bytes){
 const save=readSave(bytes),state=openCareer(save),club=state.clubs[11];
 setTactic(club,'comboej',2);setTactic(club,'combomarc',1);setTactic(club,'combo_cataq',1);
 const reload=openCareer(readSave(writeSave(save))).clubs[11];
 if(reload.playStyle!==2||reload.marking!==1||reload.attackFocus!==1)throw Error('Original tactics did not survive save');
 return {saveReload:true};
}
export async function checkTactics(){
 const result=verifyTactics(await fetch(new URL('./tactics-vectors.json',import.meta.url)).then(r=>r.json()));if(result.failures.length)throw Error('Tactical choices differ');
 return {...result,failures:0,...verifyTacticsSave(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()))};
}
