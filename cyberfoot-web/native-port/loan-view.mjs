import {record} from './save-format.mjs';
import {precision64,nearestEven,multiplyRound} from './x87.mjs';
import {originalMoney} from './finance-view.mjs';
// Form28: 005a4dd8, 005a51f4 and 005a5520. Limits indexed by club field +0x7c.
const cashStore=n=>n<-(1n<<63n)||n>=(1n<<63n)?-(1n<<63n):n;
export const loanLimits=[1500000,5000000,3000000,2000000,1500000];
export function loanEnabled(debt,category){return {bt1:debt<loanLimits[category],bt2:debt!==0};}
export function loanAction(state,action){
 const limit=loanLimits[state.category];if(limit===undefined)throw Error('Unknown original loan category');
 if(action==='borrow'){
  if(state.debt>=limit){state.enabled.bt1=false;return false;}
  state.debt=(state.debt+500000)|0;if(state.debt>=limit)state.enabled.bt1=false;
  state.cash=cashStore(state.cash+5000000000n);state.enabled.bt2=true;
 }else if(action==='repay'){
  state.debt=(state.debt-500000)|0;state.cash=cashStore(state.cash-5000000000n);
  if(state.debt<limit)state.enabled.bt1=true;if(state.debt<=0)state.enabled.bt2=false;
 }else throw Error('Unknown loan action');
 state.lastAction=action;return true;
}
export function openLoan(save){
 const c=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),id=c.getInt32(8,true);
 const bytes=record(save,'clubs',id),club=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),l=record(save,'records_0066afec',id),ledger=new DataView(l.buffer,l.byteOffset,l.byteLength);
 const state={category:club.getInt32(0x7c,true),debt:ledger.getInt32(0x20,true),cash:club.getBigInt64(0x48,true)};state.enabled=loanEnabled(state.debt,state.category);
 return {state,act(action){if(!state.enabled[action==='borrow'?'bt1':'bt2'])return false;const changed=loanAction(state,action);if(changed){ledger.setInt32(0x20,state.debt,true);club.setBigInt64(0x48,state.cash,true);}return changed;}};
}
export function loanView(state,language){
 const [a,b]=precision64(state.cash,10000n),cash=Number(BigInt.asIntN(32,nearestEven(a,b))),interest=multiplyRound(state.debt,['17708874310761169551',-69]);
 const properties={label32:{HTMLText:`<p align="center"><shad>${language[110].text}</shad></p>`},Label3:{Caption:language[402].text},Label4:{Caption:language[403].text},Label5:{Caption:language[307].text},bt1:{Caption:language[404].text,Enabled:state.enabled.bt1},bt2:{Caption:language[405].text,Enabled:state.enabled.bt2},Label7:{Caption:originalMoney(interest)},Label2:{Caption:state.lastAction==='borrow'?originalMoney(cash).slice(1):originalMoney(cash)}};
 if(state.debt>0||state.lastAction)properties.Label6={Caption:originalMoney(state.debt)};
 return {form:'Form28',properties,background:'assets/original-f01.jpg'};
}
