import {prepareManagerDismissal} from './manager-dismissal.mjs';
import {clubCrestPath} from './club-crest.mjs';
/** Original6421a8 caption composition, including short-string limits. */
export function managerDismissalView(notice,language,crest){
 const prefix=((notice.outgoingName+', ').slice(0,27)+notice.clubName).slice(0,52)+' ';
 return {form:'Form31',background:'assets/original-f01.jpg',imagePaths:{escudo:crest},properties:{
  Label2:{Caption:language[423].text},Label1:{Caption:language[422].text},Label3:{Caption:notice.outgoingName},
  Label4:{Caption:prefix.slice(0,53)+language[415].text+' '+language[notice.reason].text+'.'},
  Label5:{Caption:language[421].text+' '+notice.replacementName}
 }};
}
export function createManagerDismissalHost(renderer,{save,runtime,rng,language,crestAssets,date}){
 let active=null,opening=false;
 function close(){if(!active)return false;const pending=active;active=null;renderer.close();pending.resolve(pending.notice);return true;}
 const keydown=e=>{if(active&&renderer.frame?.form==='Form31'&&(e.key==='Enter'||e.key==='Escape')){e.preventDefault();close();}};
 document.addEventListener('keydown',keydown);renderer.register('Form31.XiButton2Click',close);
 async function open(clubId){
  if(active||opening)throw Error('Manager dismissal already open.');opening=true;
  try{
   const crest=clubCrestPath(save,clubId,crestAssets);await Promise.all(['assets/original-f01.jpg',crest].filter(Boolean).map(path=>renderer.bitmap(path)));
   const notice=prepareManagerDismissal(save,clubId,{rng,runtime,...(date?{date:date()}: {})});if(notice.closed)return notice;
   const result=new Promise(resolve=>{active={notice,resolve};});
   await renderer.show(managerDismissalView(notice,language,crest),{modal:true});renderer.canvas.focus();return result;
  }finally{opening=false;}
 }
 return {open,close,get active(){return active;},snapshot:()=>active?{...active.notice,form:'Form31'}:null,dispose:()=>document.removeEventListener('keydown',keydown)};
}
