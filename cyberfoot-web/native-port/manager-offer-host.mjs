import {managerOfferView,selectManagerOfferView} from './manager-offer-view.mjs';
import {acceptManagerOffer} from './manager-offer-actions.mjs';
import {UnportedOperationError} from './ui-surface.mjs';
export function createManagerOfferHost(renderer,{save,runtime,rng,language,crestAssets,date,showStandings}){
 let active=null,opening=false;
 function close(accepted=false){if(!active||renderer.frame?.form!=='Form30')return false;const pending=active;active=null;
  // Original FormClose005d60c4 clears the four offers after either button.
  runtime.managerJobOffers=[-1,-1,-1,-1];renderer.close();pending.resolve({accepted});return true;
 }
 function accept(){if(!active||renderer.frame?.form!=='Form30')return false;const accepted=acceptManagerOffer(save,runtime,renderer.frame.selected,{rng,...(date?{date:date()}: {})});if(accepted)close(true);return accepted;}
 function select(tag){if(!active||renderer.frame?.form!=='Form30')return false;const changed=selectManagerOfferView(renderer.frame,save,runtime,language,tag);if(changed)renderer.paint();return changed;}
 const keydown=e=>{if(active&&renderer.frame?.form==='Form30'&&e.altKey&&e.key==='F4')e.preventDefault();};document.addEventListener('keydown',keydown);
 renderer.register('Form30.r1Click',select);renderer.register('Form30.bt3Click',accept);renderer.register('Form30.XiButton1Click',()=>close(false));
 renderer.register('Form30.bt2Click',()=>{if(!active||renderer.frame?.form!=='Form30')return;if(!showStandings)throw new UnportedOperationError('Form36 standings');return showStandings();});
 async function open(){
  if(active||opening)throw Error('Manager offer already open.');opening=true;
  try{const frame=managerOfferView(save,runtime,language,crestAssets);await Promise.all([frame.background,'assets/Form30-ImageList1-Bitmap.png',...new Set(Object.values(frame.imagePaths).filter(Boolean))].map(path=>renderer.bitmap(path)));
   const result=new Promise(resolve=>{active={resolve};});await renderer.show(frame,{modal:true});renderer.canvas.focus();return result;
  }finally{opening=false;}
 }
 return {open,close,accept,select,get active(){return active;},snapshot:()=>{if(!active)return null;const frame=renderer.frame?.form==='Form30'?renderer.frame:renderer.parents.findLast(f=>f.form==='Form30');return frame?{form:'Form30',selected:frame.selected,choices:frame.choices,roster:frame.offerRoster}:null;},dispose:()=>document.removeEventListener('keydown',keydown)};
}
