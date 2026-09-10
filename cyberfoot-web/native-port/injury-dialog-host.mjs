import {createInjuryDecision} from './injury-dialog.mjs';
export function injuryDialogView(current,context,state,language){
 const p=state.players[context.injured],club=state.clubs[context.fixture.clubs[context.side-1]],roles=[143,147,145,149,151].map(i=>language[i].text),roleNames=[142,146,144,148,150].map(i=>language[i].text);
 return {form:'Form53',background:'assets/original-f01.jpg',phase:current.phase,selectedId:current.selectedId,headers:Object.fromEntries(Object.entries({posicaojog:128,nome:129,forca:131,energia:132}).map(([k,i])=>[k,language[i].text])),rows:current.rows.map(id=>{const p=state.players[id];return {playerId:id,cells:{posicaojog:roles[p.role],nome:p.name,forca:p.skill,energia:p.condition}};}),properties:{label32:{HTMLText:'<p align="center"><shad>'+language[535].text+'</shad></p>'},Label2:{Caption:p.name+' - '+roleNames[p.role]+' - '+club.name},Label3:{Caption:current.improvise?'Improvise as goalkeeper:':language[536].text},bt1:{Enabled:current.selectedId!==null||current.canContinueEmpty}}};
}
export function createInjuryDialogHost(renderer,{state,language,playSound}){
 if(typeof playSound!=='function')throw TypeError('Injury sound delivery must be supplied.');
 let active=null,opening=false;
 renderer.register('Form53.gridview1SelectCell',id=>active?.select(id));renderer.register('Form53.bt1Click',()=>active?.confirm());
 async function decide(context){
  if(active||opening)throw Error('An injury decision is already pending.');
  opening=true;let shown=false;
  try{
   await renderer.bitmap('assets/Form53-Image1-Picture-Data.png');
   const view=current=>injuryDialogView(current,context,state,language);
   active=createInjuryDecision({...context,state,present:current=>{if(shown)renderer.update(view(current));}});
   renderer.firstRow=0;await renderer.show(view(active.view),{modal:true});shown=true;opening=false;
   for(const name of active.view.sounds)playSound(name);renderer.canvas.focus();
   return await active.result;
  }finally{if(shown)renderer.close();active=null;opening=false;}
 }
 return {decide,get active(){return active;},get opening(){return opening;}};
}
