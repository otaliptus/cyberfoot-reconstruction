import {seasonMoveView} from './season-transition.mjs';
/** Form30 season-end manager invitation host. Mirrors the existing
 * manager-dismissal/recap modal pattern: the promise resolves only after the
 * player acknowledges the original invitation panel. */
export function createSeasonMoveHost(renderer,{save,language,crestAssets}){
 let active=null,opening=false;
 function close(){
  if(!active)return false;
  const pending=active;active=null;renderer.close();pending.resolve(pending.move);return true;
 }
 const keydown=e=>{if(active&&renderer.frame?.form==='Form30'&&(e.key==='Enter'||e.key==='Escape')){e.preventDefault();close();}};
 document.addEventListener('keydown',keydown);
 renderer.register('Form30.bt3Click',close);renderer.register('Form30.XiButton1Click',close);
 async function open(move){
  if(active||opening)throw Error('Season move invitation already open.');opening=true;
  try{
   const frame=seasonMoveView(save,move,language,crestAssets);
   await Promise.all([frame.background,...Object.values(frame.imagePaths).filter(Boolean)].map(path=>renderer.bitmap(path)));
   const result=new Promise(resolve=>{active={move,frame,resolve};});
   await renderer.show(frame,{modal:true});renderer.canvas.focus();return result;
  }finally{opening=false;}
 }
 return {open,close,get active(){return active;},snapshot:()=>active?{form:'Form30',...active.move,choices:active.frame.choices}:null,dispose:()=>document.removeEventListener('keydown',keydown)};
}
