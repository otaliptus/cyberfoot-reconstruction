import {createAttackingPenalty,createDefendingPenalty} from './human-penalty.mjs';
import {clubCrestPath} from './club-crest.mjs';
export function attackingPenaltyView(current,state,language,crest){
 const roles=[143,147,145,149,151].map(i=>language[i].text),positions=[roles[0],roles[1],...Array(6).fill(roles[2]),roles[1],...Array(8).fill(roles[3]),...Array(8).fill(roles[4])],traits=Array.from({length:14},(_,i)=>language[157+i*2].text);
 const headers=Object.fromEntries(Object.entries({posicaojog:128,nome:129,forca:131,energia:132,habilidades:136}).map(([k,i])=>[k,language[i].text]));
 return {form:'Form34',background:'assets/original-f01.jpg',crest,headers,phase:current.phase,selectedId:current.selectedId,rows:current.rows.map(r=>{const p=state.players[r.playerId];return {...r,cells:{posicaojog:positions[r.position-1],nome:p.name,forca:p.skill,energia:p.condition,habilidades:traits[p.trait1]+' '+traits[p.trait2]}};}),properties:{label32:{HTMLText:'<p align="center"><shad>'+language[458].text+'</shad></p>'},UniHTMLabel1:{HTMLText:language[459].text},bt1:{Caption:language[460].text,Enabled:current.selectedId!==null,Visible:current.phase==='selection'},info1:{Visible:current.phase!=='selection','Font.Color':'clWhite',Alignment:'taCenter',HTMLText:current.languageId===null?'':(current.includeName?state.players[current.selectedId].name+' ':'')+language[current.languageId].text}}};
}
export function defendingPenaltyView(current,state,language,crest){
 return {form:'Form54',background:'assets/original-f01.jpg',crest,phase:current.phase,properties:{label32:{HTMLText:'<p align="center"><shad>'+language[458].text+'</shad></p>'},Label2:{Caption:(current.includeName?state.players[current.selectedId].name+' ':'')+language[current.languageId].text}}};
}
/** Host one original modal decision over an existing match frame. The returned
 * decision promise is consumed directly by stepFixtureAsync; never replay a step.
 */
export function createPenaltyDialogHost(renderer,{save,state,language,assets,playSound}){
 if(typeof playSound!=='function')throw TypeError('Penalty sound delivery must be supplied.');
 let active=null,opening=false,previousKeeper=0;
 renderer.register('Form34.gridview1SelectCell',id=>active?.select(id));
 renderer.register('Form34.bt1Click',()=>active?.kick());
 async function decide(context){
  if(active||opening)throw Error('A penalty dialog is already open.');
  opening=true;let shown=false;
  try{
   const crest=clubCrestPath(save,context.fixture.clubs[context.side-1],assets);if(crest)await renderer.bitmap(crest);
   const view=current=>(context.humanAttacks?attackingPenaltyView:defendingPenaltyView)(current,state,language,crest);
   active=(context.humanAttacks?createAttackingPenalty:createDefendingPenalty)({...context,state,previousKeeper,nominee:state.clubs[context.fixture.clubs[context.side-1]].setPiecePlayer,present:current=>{
    if(shown)renderer.update(view(current));
    if(current.phase==='result')for(const name of current.outcome.sounds)playSound(name);
   }});
   if(context.humanAttacks)previousKeeper=active.view.keeperId;renderer.firstRow=0;
   await renderer.show(view(active.view),{modal:true});shown=true;opening=false;playSound('penalty');renderer.canvas.focus();
   return await active.result;
  }finally{if(shown)renderer.close();active=null;opening=false;}
 }
 return {decide,get active(){return active;},get opening(){return opening;},advanceTime(ms){active?.advanceTime(ms);}};
}
