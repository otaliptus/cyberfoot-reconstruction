import {openContract,counterofferView,parseOriginalInteger,stepContractOffer} from './contract-view.mjs';
import {currentCareerDate} from './calendar.mjs';
import {originalMoney} from './finance-view.mjs';

const pad=n=>String(n).padStart(2,'0');
export function formatContractDate(serial){
 if(!Number.isFinite(serial))return '';
 const date=new Date(Date.UTC(1899,11,30)+Math.trunc(serial)*86400000);
 return `${pad(date.getUTCDate())}/${pad(date.getUTCMonth()+1)}/${date.getUTCFullYear()}`;
}

/** Form24/Form25 as a headless state machine over the verified contract
 * routines. offer()=005a1ad0 via submitContractOffer; acceptCounter()=005a1eb4
 * via applyContractRenewal; the pure view model itself lives in contract-view.mjs. */
export function createContractSession({save,id,rng,language,currentDate,formatDate,onEvent,onFinished}={}){
 if(!Number.isInteger(id)||id<0)throw RangeError('A valid original player is required for the contract window.');
 const date=currentDate??currentCareerDate(save);
 const events=[];
 let finished=false,result=null,counteroffer=null;
 const emit=(event,payload={})=>{const entry={event,...payload};events.push(entry);onEvent?.(entry);return entry;};
 const inner=openContract(save,id,date,rng,typeof formatDate==='function'?formatDate:formatContractDate);
 const view=()=>({
  ...inner.view(language),
  form:'Form24',
  contract:{id:inner.state.id,name:inner.state.name,salary:inner.state.salary,offer:inner.state.offer,durationIndex:inner.state.durationIndex,currentDate:inner.state.currentDate,contractEnd:inner.state.player.contractEnd,result:inner.state.result,finished},
  counteroffer:counteroffer?{...counterofferView(counteroffer.required,language),required:counteroffer.required}:null
 });
 function setOffer(text){inner.state.offer=String(text??'');emit('offer',{offer:inner.state.offer});return view();}
 function setDuration(index){inner.state.durationIndex=Math.max(0,Math.min(3,Number(index)|0));emit('duration',{durationIndex:inner.state.durationIndex});return view();}
 function stepOffer(direction){inner.state.offer=stepContractOffer(inner.state.offer,direction);emit('offer',{offer:inner.state.offer,reason:'step'});return view();}
 function submitOffer(){
  const parsed=parseOriginalInteger(inner.state.offer);
  if(parsed===null||parsed<=0){emit('invalid',{offer:inner.state.offer});return {decision:'invalid',required:null};}
  counteroffer=null;
  result=inner.offer();
  emit('result',result);
  if(result.decision==='accept'){finished=true;emit('finish',result);onFinished?.(result);}
  else if(result.decision==='reject')counteroffer={required:result.required};
  return result;
 }
 function acceptCounter(){
  if(counteroffer===null)throw Error('No original counteroffer is pending.');
  const previous=parseOriginalInteger(inner.state.offer),player=inner.acceptCounter();
  result={decision:'accept',required:counteroffer.required,previousOffer:previous,player};
  counteroffer=null;finished=true;
  emit('counter',{offer:result.required,entryOffer:previous,player});
  emit('finish',result);onFinished?.(result);
  return result;
 }
 function refuseCounter(){counteroffer=null;emit('refuse',{});return view();}
 function cancel(){finished=true;emit('cancel',{});return view();}
 return {state:inner.state,view,setOffer,setDuration,stepOffer,submitOffer,acceptCounter,refuseCounter,cancel,get events(){return events;},get finished(){return finished;},get result(){return result;},get counteroffer(){return counteroffer;}};
}

function element(document,tag,attributes={}){
 const node=document.createElement(tag);
 for(const [key,value] of Object.entries(attributes))node.setAttribute(key,value);
 return node;
}
const plain=value=>String(value??'').replace(/<[^>]*>/g,'');

/** DOM host for the human contract negotiation/renewal screen. */
export function mountContractWindow(container,{save,id,rng,language,currentDate,formatDate,onEvent,onFinished}={}){
 if(!container||typeof container.replaceChildren!=='function')throw TypeError('A container element is required.');
 const document=container.ownerDocument??globalThis.document;
 if(!document)throw TypeError('A document is required.');
 const session=createContractSession({save,id,rng,language,currentDate,formatDate,onEvent,onFinished});
 const root=element(document,'section',{'data-contract-window':'Form24'});
 root.style.cssText='font:13px/1.35 Arial,sans-serif;color:#111;background:#d4d0c8;border:1px solid #444;padding:10px;max-width:640px';
 const heading=element(document,'h2');heading.style.cssText='margin:0 0 6px;font-size:16px';
 const playerLine=element(document,'p');playerLine.style.margin='0 0 6px';
 const info=element(document,'p');info.style.margin='0 0 8px';
 const controls=element(document,'div');controls.style.cssText='display:flex;gap:6px;align-items:center;flex-wrap:wrap;margin:8px 0';
 const salaryLabel=element(document,'label');
 const offerInput=element(document,'input',{'data-contract-control':'Edit1'});
 offerInput.type='text';offerInput.style.cssText='width:110px;font:13px Arial';
 const lengthLabel=element(document,'label');
 const duration=element(document,'select',{'data-contract-control':'combom'});
 duration.style.font='13px Arial';
 const up=element(document,'button',{'data-contract-control':'UpDown1:up'});up.type='button';up.textContent='▲';
 const down=element(document,'button',{'data-contract-control':'UpDown1:down'});down.type='button';down.textContent='▼';
 const offerButton=element(document,'button',{'data-contract-control':'CHButton1'});offerButton.type='button';
 const cancelButton=element(document,'button',{'data-contract-control':'bt3'});cancelButton.type='button';
 const status=element(document,'p',{'data-contract-field':'status'});status.style.cssText='margin:8px 0 0;font-weight:bold;min-height:1em';
 const counter=element(document,'section',{'data-contract-window':'Form25'});
 counter.style.cssText='margin-top:10px;border:1px solid #666;background:#c0bdb4;padding:8px;display:none';
 const counterMessage=element(document,'p',{'data-contract-field':'required'});counterMessage.style.margin='0 0 6px';
 const counterButtons=element(document,'div');counterButtons.style.cssText='display:flex;gap:6px';
 const acceptButton=element(document,'button',{'data-contract-control':'button1'});acceptButton.type='button';
 const refuseButton=element(document,'button',{'data-contract-control':'button2'});refuseButton.type='button';
 salaryLabel.append(document.createTextNode(''),offerInput);
 lengthLabel.append(document.createTextNode(''),duration);
 counterButtons.append(acceptButton,refuseButton);
 counter.append(counterMessage,counterButtons);
 controls.append(salaryLabel,lengthLabel,up,down,offerButton,cancelButton);
 root.append(heading,playerLine,info,controls,counter,status);
 container.replaceChildren(root);
 function parsedOffer(){const raw=offerInput.value.trim();return raw===''?null:parseOriginalInteger(raw);}
 function render(){
  const view=session.view(),properties=view.properties;
  heading.textContent=plain(properties.label32.HTMLText);
  playerLine.textContent=properties.Label1.Caption;
  info.textContent=`${properties.Label2.Caption} ${properties.Label3.Caption} · ${properties.Label7.Caption}`;
  salaryLabel.firstChild.textContent=properties.Label4.Caption+' ';
  lengthLabel.firstChild.textContent=properties.Label6.Caption+' ';
  if(offerInput.value!==String(view.contract.offer))offerInput.value=String(view.contract.offer);
  const items=properties.combom.Items;
  if(duration.dataset.items!==items.join('\u0000')){
   duration.replaceChildren(...items.map(text=>{const option=document.createElement('option');option.textContent=text;return option;}));
   duration.dataset.items=items.join('\u0000');
  }
  duration.selectedIndex=view.contract.durationIndex;
  offerButton.textContent=properties.CHButton1.Caption;
  cancelButton.textContent=properties.bt3.Caption;
  if(view.counteroffer){
   counter.style.display='block';
   counterMessage.textContent=`${view.counteroffer.properties.label1.Caption} ${view.counteroffer.properties.Label2.Caption}`;
   acceptButton.textContent=view.counteroffer.properties.button1.Caption;
   refuseButton.textContent=view.counteroffer.properties.button2.Caption;
  }else counter.style.display='none';
  if(session.finished){
   const final=session.result;
   const agreed=final?.player?Math.floor(Number(final.player.salary)/10000):final?.required;
   status.textContent=final?.decision==='accept'&&agreed!==undefined?`${plain(properties.label32.HTMLText)}: ${originalMoney(agreed)}`:'';
   offerInput.disabled=true;duration.disabled=true;up.disabled=true;down.disabled=true;
  }
  offerButton.disabled=session.finished||parsedOffer()===null||parsedOffer()<=0;
 }
 offerInput.addEventListener('input',()=>{session.setOffer(offerInput.value);render();});
 duration.addEventListener('change',()=>{session.setDuration(duration.selectedIndex);render();});
 up.addEventListener('click',()=>{session.stepOffer(0);render();});
 down.addEventListener('click',()=>{session.stepOffer(1);render();});
 offerButton.addEventListener('click',()=>{
  const outcome=session.submitOffer();
  if(outcome.decision==='excessive')status.textContent=`${language?.[389]?.text??'This player has a salary limit of'} ${originalMoney(Math.imul(outcome.required,5)).slice(1)}`;
  render();
 });
 acceptButton.addEventListener('click',()=>{session.acceptCounter();render();});
 refuseButton.addEventListener('click',()=>{session.refuseCounter();render();});
 cancelButton.addEventListener('click',()=>{session.cancel();render();});
 render();
 return {session,render,element:root};
}
