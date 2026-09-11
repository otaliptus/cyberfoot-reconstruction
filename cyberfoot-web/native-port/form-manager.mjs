/** VCL-style form manager for the native Cyberfoot 2015 shell.
 *
 * Faithful, minimal reconstruction of the Delphi TForm Show/ShowModal/
 * ModalResult/Close semantics on top of the VclRenderer facade:
 *
 * - `open(view)` is modeless `Show`: it replaces the window stack with a
 *   single top-level form and returns the painted frame.
 * - `openModal(view)` is `ShowModal`: it pushes a modal form over the
 *   current stack and returns a Promise resolving to the Delphi
 *   `ModalResult` once the form closes.
 * - `close(result)` closes the top form (`mrCancel` by default), resolving
 *   a pending ShowModal promise with the given ModalResult.
 * - `closeAll()` empties the stack.
 *
 * The manager keeps its own `stack` (dev-visible for tests) in sync with
 * the renderer even when other hosts call `renderer.show/update/close`
 * directly: those methods are wrapped so every screen (menu, settings, team
 * select, hub, lineup, match Form46, match modals Form53/34/54/88, results
 * Form67, auction Form23, contract Form24/25, route screens
 * Form26/75/77/85, season screens Form30/57) flows through one place.
 *
 * While a modal form is on top, input for underlying forms is blocked
 * (`invoke` ignores operations that do not belong to the top form).
 * Escape activates the top modal's Cancel path and Enter activates its
 * Default button, mirroring TButton.Default/Cancel.
 */

/** Delphi TModalResult values (System.UITypes). */
export const ModalResults={
 mrNone:0,
 mrOk:1,
 mrCancel:2,
 mrAbort:3,
 mrRetry:4,
 mrIgnore:5,
 mrYes:6,
 mrNo:7,
 mrClose:8,
 mrAll:8,
 mrNoToAll:9,
 mrYesToAll:10
};

/** Fallback Default-button operations per form (DFMs carry no Default flags). */
const DEFAULT_BUTTON_OP={
 Form11:'button1Click',
 Form21:'BitBtn1Click',
 Form9:'XiButton2Click',
 Form87:'bt_irprojogoClick',
 Form13:'btjogarClick',
 Form67:'bt3Click',
 Form23:'CHButton1Click',
 Form24:'CHButton1Click',
 Form25:'button1Click',
 Form26:'bt3Click',
 Form30:'XiButton1Click',
 Form57:'XiButton2Click',
 Form75:'btjogarClick',
 Form77:'bt2Click',
 Form85:'XiButton1Click',
 Form88:'bt_irprojogoClick',
 Form34:'bt1Click',
 Form53:'bt1Click',
 Form54:'bt1Click'
};

/** Fallback Cancel-button operations per form. */
const CANCEL_BUTTON_OP={
 Form24:'bt3Click',
 Form25:'button2Click',
 Form67:'bt3Click',
 Form26:'bt3Click',
 Form30:'bt3Click',
 Form57:'XiButton2Click',
 Form75:'btjogarClick',
 Form77:'bt2Click',
 Form85:'XiButton2Click',
 Form88:'bt_irprojogoClick'
};

function childByDefault(formDef,wantDefault){
 if(!formDef)return null;
 const queue=[...(formDef.children??[])];
 while(queue.length){
  const node=queue.shift();
  if(node?.properties?.[wantDefault?'Default':'Cancel']===true&&node.properties?.OnClick)return node.properties.OnClick;
  if(node?.children?.length)queue.push(...node.children);
 }
 return null;
}

function normalizeView(viewOrName,extra){
 if(typeof viewOrName==='string'){
  const rest=(extra&&typeof extra==='object')?extra:{};
  return {form:viewOrName,...rest,properties:rest.properties??{}};
 }
  if(extra&&typeof extra==='object'&&Object.keys(extra).length){
   return {...viewOrName,...extra,properties:{...viewOrName.properties,...extra.properties}};
  }
 return viewOrName;
}

export function createFormManager(renderer,{escapeResult=ModalResults.mrCancel}={}){
 const stack=[];
 const originals={
  show:renderer.show.bind(renderer),
  update:renderer.update.bind(renderer),
  close:renderer.close.bind(renderer),
  invoke:renderer.invoke.bind(renderer)
 };
 const top=()=>stack[stack.length-1]??null;

 function open(viewOrName,extra){
  const view=normalizeView(viewOrName,extra);
  renderer.formFor(view.form);
  stack.length=0;
  stack.push({form:view.form,modal:false,resolve:null,result:ModalResults.mrNone,view,external:false});
  return originals.show(view);
 }

 function openModal(viewOrName,extra){
  const view=normalizeView(viewOrName,extra);
  renderer.formFor(view.form);
  let resolveEntry=null;
  const promise=new Promise(resolve=>{resolveEntry=resolve;});
  stack.push({form:view.form,modal:true,resolve:resolveEntry,result:ModalResults.mrNone,view,external:false});
  void originals.show(view,{modal:true});
  try{renderer.canvas?.focus?.();}catch{}
  return promise;
 }

 function update(viewOrName,extra){
  const view=normalizeView(viewOrName,extra);
  if(stack.length){
   const entry=stack[stack.length-1];
   entry.form=view.form??entry.form;
   entry.view=view;
  }else{
   stack.push({form:view.form,modal:false,resolve:null,result:ModalResults.mrNone,view,external:false});
  }
  return originals.update(view);
 }

 function close(result=ModalResults.mrCancel){
  if(!stack.length){
   originals.close();
   return ModalResults.mrNone;
  }
  const entry=stack.pop();
  entry.result=result;
  originals.close();
  if(entry.modal&&typeof entry.resolve==='function')entry.resolve(result);
  return result;
 }

 function closeAll(){
  let last=ModalResults.mrNone;
  while(stack.length)last=close(ModalResults.mrCancel);
  let more=true;
  while(more)more=originals.close();
  return last;
 }

 function defaultOp(form){
  const scanned=childByDefault(renderer.forms?.get(form),true);
  if(scanned)return scanned;
  return DEFAULT_BUTTON_OP[form]??null;
 }

 function cancelOp(form){
  const scanned=childByDefault(renderer.forms?.get(form),false);
  if(scanned)return scanned;
  return CANCEL_BUTTON_OP[form]??null;
 }

 function hasHandler(form,operation){
  if(!operation)return false;
  return renderer.handlers.has(`${form}.${operation}`);
 }

 function onKeyDown(event){
  const entry=top();
  if(!entry)return;
  if(event.key==='Escape'){
   if(!entry.modal)return;
   event.preventDefault();
   const operation=cancelOp(entry.form);
   if(operation&&hasHandler(entry.form,operation)){
    originals.invoke(operation,undefined);
    return;
   }
   if(typeof entry.resolve==='function')close(escapeResult);
   return;
  }
  if(event.key==='Enter'){
   const target=event.target;
   const tag=target?.tagName;
   if(tag==='INPUT'||tag==='SELECT'||tag==='TEXTAREA')return;
   const operation=defaultOp(entry.form);
   if(operation&&hasHandler(entry.form,operation)){
    event.preventDefault();
    originals.invoke(operation,undefined);
   }
  }
 }

 if(typeof document!=='undefined'&&document.addEventListener){
  document.addEventListener('keydown',onKeyDown);
 }

 renderer.show=(view,options={})=>{
  const modal=!!options.modal;
  renderer.formFor(view.form);
  if(modal&&stack.length){
   stack.push({form:view.form,modal:true,resolve:null,result:ModalResults.mrNone,view,external:true});
  }else{
   stack.length=0;
   stack.push({form:view.form,modal:false,resolve:null,result:ModalResults.mrNone,view,external:true});
  }
  return originals.show(view,options);
 };

 renderer.update=view=>{
  if(stack.length){
   const entry=stack[stack.length-1];
   entry.form=view.form??entry.form;
   entry.view=view;
  }else{
   stack.push({form:view.form,modal:false,resolve:null,result:ModalResults.mrNone,view,external:true});
  }
  return originals.update(view);
 };

 renderer.close=()=>{
  if(!stack.length)return originals.close();
  const entry=stack.pop();
  const outcome=originals.close();
  if(entry.modal&&typeof entry.resolve==='function')entry.resolve(ModalResults.mrCancel);
  return outcome;
 };

 renderer.invoke=(operation,value)=>{
  const entry=top();
  if(entry?.modal){
   const current=renderer.frame?.form??entry.form;
   const key=String(operation??'').includes('.')?String(operation):`${current}.${String(operation??'')}`;
   if(!key.startsWith(`${entry.form}.`))return undefined;
  }
  return originals.invoke(operation,value);
 };

 return {
  open,
  openModal,
  update,
  close,
  closeAll,
  get stack(){return stack;},
  get top(){return top();},
  get depth(){return stack.length;},
  defaultOp,
  cancelOp,
  dispose(){
   renderer.show=originals.show;
   renderer.update=originals.update;
   renderer.close=originals.close;
   renderer.invoke=originals.invoke;
   document?.removeEventListener?.('keydown',onKeyDown);
  }
 };
}
