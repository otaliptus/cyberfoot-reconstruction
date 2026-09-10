import {record,shortString} from './save-format.mjs';
import {clubCrestPath} from './club-crest.mjs';
/** Form57.FormCreate5ef8b4: original reason order and label/scroll heights. */
export function managerRecapView(save,changes,language,crestAssets){
 const reasonIds=[545,1025,1026,1027,1026],rows=changes.map(([club,outgoing,incoming,reason])=>({club,outgoing,incoming,reason,clubName:shortString(record(save,'clubs',club),0,25),outgoingName:shortString(record(save,'records_0066b718',outgoing),0,25),incomingName:shortString(record(save,'records_0066b718',incoming),0,25),reasonText:language[reasonIds[reason]].text,crest:clubCrestPath(save,club,crestAssets)}));
 const rowHeight=rows.length*20,labelHeight=rowHeight>200?rowHeight+40:312;
 return {form:'Form57',background:'assets/original-f01.jpg',recapRows:rows,recapScroll:9,recapRange:labelHeight+2,properties:{Label2:{Caption:language[544].text},lab1:{HTMLText:language[515].text},lab2:{HTMLText:language[514].text},lab3:{HTMLText:language[547].text},lab4:{HTMLText:language[1024].text},p_camp:{Height:labelHeight},Timer1:{Enabled:false}}};
}
export function createManagerRecapHost(renderer,{save,runtime,language,crestAssets,manualClock=false}){
 let active=null,timer=null,opening=false;
 function close(){if(!active)return false;const pending=active;active=null;if(timer!==null){clearTimeout(timer);timer=null;}renderer.close();pending.resolve();return true;}
 const keydown=e=>{if(active&&renderer.frame?.form==='Form57'&&(e.key==='Enter'||e.key==='Escape')){e.preventDefault();close();}};
 document.addEventListener('keydown',keydown);renderer.register('Form57.XiButton2Click',close);
 async function open(){
  if(active||opening)throw Error('Manager recap already open.');opening=true;
  try{
  const frame=managerRecapView(save,runtime.managerChanges,language,crestAssets);await Promise.all(['assets/original-f01.jpg',...new Set(frame.recapRows.map(r=>r.crest).filter(Boolean))].map(path=>renderer.bitmap(path)));
  const automatic=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength).getUint8(0x6c8)!==0,result=new Promise(resolve=>{active={frame,automatic,elapsed:0,resolve};});
  await renderer.show(frame,{modal:true});renderer.canvas.focus();if(automatic&&!manualClock)timer=setTimeout(close,1000);return result;
  }finally{opening=false;}
 }
 function advanceTime(ms){if(active?.automatic){active.elapsed+=ms;if(active.elapsed>=1000)close();}}
 return {open,close,advanceTime,get active(){return active;},snapshot:()=>active?{form:'Form57',automatic:active.automatic,elapsed:active.elapsed,rows:active.frame.recapRows,scroll:renderer.frame.recapScroll}:null,dispose:()=>{document.removeEventListener('keydown',keydown);if(timer!==null)clearTimeout(timer);}};
}
