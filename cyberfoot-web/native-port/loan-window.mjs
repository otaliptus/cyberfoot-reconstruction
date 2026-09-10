import {record,shortString} from './save-format.mjs';
import {currentCareerDate} from './calendar.mjs';
import {completePlayerMove,schedulePlayerReturn,recallLoanedPlayer} from './player-move.mjs';

const dataView=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
/** Original TForm13 gates: out on loan + offered for loan must stay under two.
 * FUN_00650184 counts pending returns whose destination is the club;
 * FUN_006501cc counts squad players flagged 0x100==1. */
export const originalLoanListingLimit=2;
/** Original TForm14_bt4Click admits the loan while FUN_00650130 reports fewer
 * than three active loans at the club. */
export const originalLoanInLimit=3;
const playerClub=row=>row.getInt32(0x20,true),playerLoanFlag=row=>row.getInt32(0x100,true);

export function loanedOutCount(save,clubId){
 const section=save.sections.find(s=>s.name==='records_0066b05c'),v=dataView(section.data);let count=0;
 for(let i=0;i<section.count;i++){const offset=i*24;if(v.getInt32(offset,true)>=0&&v.getInt32(offset+0x10,true)===clubId)count++;}
 return count;
}
export function loanListedCount(save,clubId){
 const section=save.sections.find(s=>s.name==='players'),v=dataView(section.data);let count=0;
 for(let id=0;id<section.count;id++){const offset=id*section.recordSize;if(v.getInt32(offset+0x20,true)===clubId&&v.getInt32(offset+0x100,true)===1)count++;}
 return count;
}
export function loanedInCount(save,clubId){
 const pending=save.sections.find(s=>s.name==='records_0066b05c'),players=save.sections.find(s=>s.name==='players'),v=dataView(pending.data),p=dataView(players.data),playerCount=players.count;let count=0;
 for(let i=0;i<pending.count;i++){const id=v.getInt32(i*24,true);if(id>=0&&id<playerCount&&p.getInt32(id*players.recordSize+0x20,true)===clubId)count++;}
 return count;
}
/** Original FUN_0059bd18: lower-division clubs cannot borrow from a stronger
 * club of a higher division. career 0x168===2 selects the alternative league
 * system branch. */
export function loanDivisionAllowed(save,playerId,{clubId}={}){
 const career=dataView(save.career),humanClub=clubId??career.getInt32(8,true),player=record(save,'players',playerId),playerClubId=playerClub(dataView(player)),targetDivision=dataView(record(save,'clubs',playerClubId)).getInt32(0x7c,true),humanDivision=dataView(record(save,'clubs',humanClub)).getInt32(0x7c,true),strength=dataView(record(save,'clubs',playerClubId)).getInt32(0x98,true);
 if(targetDivision>=humanDivision)return true;
 if(career.getInt32(0x168,true)===2)return !(targetDivision===1&&strength>0x14);
 if(targetDivision===1){if(humanDivision===2)return strength<=0x13;if(humanDivision===3)return strength<=0x14;if(humanDivision===4)return false;}
 if(targetDivision===2){if(humanDivision===3)return strength<=0x14;if(humanDivision===4)return strength<=0x12;}
 return true;
}
export function canListPlayerForLoan(save,playerId,{clubId}={}){
 const career=dataView(save.career),humanClub=clubId??career.getInt32(8,true),row=dataView(record(save,'players',playerId));
 if(playerClub(row)!==humanClub||playerLoanFlag(row)!==0)return false;
 return loanedOutCount(save,humanClub)+loanListedCount(save,humanClub)<originalLoanListingLimit;
}
/** TForm13_Disponibilizarparaemprstimo1Click (00641638): flag 0x100=1. */
export function listPlayerForLoan(save,playerId,{clubId}={}){
 if(!canListPlayerForLoan(save,playerId,{clubId}))return false;
 dataView(record(save,'players',playerId)).setInt32(0x100,1,true);return true;
}
/** TForm13_Retirardoemprstimo1Click (0064172c): flag 0x100=0. */
export function withdrawPlayerFromLoanList(save,playerId){
 dataView(record(save,'players',playerId)).setInt32(0x100,0,true);return true;
}
/** TForm14_bt4Click (0059b910): schedule the original return to the parent club
 * and move the borrowed player with a 180-day contract. */
export function loanPlayerIn(save,playerId,{clubId,rng,runtime={},date=currentCareerDate(save)}={}){
 const humanClub=clubId??dataView(save.career).getInt32(8,true),parentClub=playerClub(dataView(record(save,'players',playerId)));
 if(parentClub===humanClub)return {completed:false,reason:'own-club'};
 if(loanedInCount(save,humanClub)>=originalLoanInLimit)return {completed:false,reason:'limit'};
 if(!loanDivisionAllowed(save,playerId,{clubId:humanClub}))return {completed:false,reason:'division'};
 schedulePlayerReturn(save,playerId,parentClub,date+180);
 completePlayerMove(save,playerId,humanClub,date+180,{rng,runtime,date});
 return {completed:true,playerId,from:parentClub,to:humanClub,loanEnd:date+180};
}
/** TForm59_bt3Click (005e1ac4): the human club lends a player out; the pending
 * return points back at the human club. */
export function loanPlayerOut(save,playerId,toClubId,{clubId,rng,runtime={},date=currentCareerDate(save)}={}){
 const humanClub=clubId??dataView(save.career).getInt32(8,true);
 if(toClubId===humanClub)throw Error('A loan destination different from the player club is required.');
 if(playerClub(dataView(record(save,'players',playerId)))!==humanClub)return {completed:false,reason:'club'};
 schedulePlayerReturn(save,playerId,humanClub,date+180);
 completePlayerMove(save,playerId,toClubId,date+180,{rng,runtime,date});
 return {completed:true,playerId,from:humanClub,to:toClubId,loanEnd:date+180};
}
/** TForm13_CancelarEmprstimo1Click (00641340) via FUN_0064ff24. */
export function recallLoan(save,playerId,{rng,runtime={},date=currentCareerDate(save)}={}){
 recallLoanedPlayer(save,playerId,{rng,runtime,date});
 return {completed:true,playerId,to:playerClub(dataView(record(save,'players',playerId)))};
}

function clubName(save,id){
 try{return shortString(record(save,'clubs',id),0,25);}catch{return String(id);}
}
function languageText(language,id,fallback){
 const entry=Array.isArray(language)?language[id]:language?.[id];
 const text=typeof entry==='string'?entry:entry?.text;
 return text===undefined||text===null?fallback:String(text);
}
/** Pure TForm59 loan-offer view. mode 'in' borrows a foreign player, 'out'
 * lends a squad player; both share the original title/message/buttons. */
export function loanWindowView(save,{playerId,toClubId=-1,clubId,mode='in'}={},language={}){
 const career=dataView(save.career),humanClub=clubId??career.getInt32(8,true),player=record(save,'players',playerId),row=dataView(player),parentClub=playerClub(row);
 return {
  form:'Form59',mode,playerId,clubId:humanClub,toClubId,
  title:languageText(language,704,'Loan Offer'),
  message:languageText(language,705,'Want to loan this player?'),
  confirm:languageText(language,491,'Yes'),
  cancel:languageText(language,492,'No'),
  playerName:shortString(player,0,20),
  clubName:clubName(save,parentClub),
  destinationName:toClubId>=0?clubName(save,toClubId):'',
  counts:{listed:loanListedCount(save,humanClub),out:loanedOutCount(save,humanClub),inLoaned:loanedInCount(save,humanClub)},
  flags:{loanFlag:playerLoanFlag(row)}
 };
}
/** Headless Form59 offer flow: confirm() performs the same two original calls
 * as the button handlers, then reports the moved player. */
export function createLoanSession({save,playerId,toClubId,clubId,rng,runtime={},language,date,onEvent,onFinished}={}){
 const humanClub=clubId??dataView(save.career).getInt32(8,true),parentClub=playerClub(dataView(record(save,'players',playerId))),mode=parentClub===humanClub?'out':'in';
 const events=[];
 let finished=false,result=null;
 const emit=(event,payload={})=>{const entry={event,...payload};events.push(entry);onEvent?.(entry);return entry;};
 const view=()=>loanWindowView(save,{playerId,toClubId,clubId:humanClub,mode},language);
 function confirm(){
  if(finished)return result;
  result=mode==='out'?loanPlayerOut(save,playerId,toClubId,{clubId:humanClub,rng,runtime,date}):loanPlayerIn(save,playerId,{clubId:humanClub,rng,runtime,date});
  emit('confirm',result);
  if(result.completed){finished=true;emit('finish',result);onFinished?.(result);}
  return result;
 }
 function refuse(){finished=true;emit('refuse',{playerId,mode});return result;}
 return {playerId,mode,view,confirm,refuse,get events(){return events;},get finished(){return finished;},get result(){return result;}};
}

function element(document,tag,attributes={}){
 const node=document.createElement(tag);
 for(const [key,value] of Object.entries(attributes))node.setAttribute(key,value);
 return node;
}
/** DOM host for the TForm59 loan in/out offer screen. */
export function mountLoanWindow(container,options={}){
 if(!container||typeof container.replaceChildren!=='function')throw TypeError('A container element is required.');
 const document=container.ownerDocument??globalThis.document;
 if(!document)throw TypeError('A document is required.');
 const session=createLoanSession(options);
 const root=element(document,'section',{'data-loan-window':'Form59'});
 root.style.cssText='font:13px/1.35 Arial,sans-serif;color:#111;background:#d4d0c8;border:1px solid #444;padding:10px;max-width:620px';
 const heading=element(document,'h2',{'data-loan-field':'title'});heading.style.cssText='margin:0 0 6px;font-size:16px';
 const message=element(document,'p',{'data-loan-field':'message'});message.style.margin='0 0 6px';
 const detail=element(document,'p',{'data-loan-field':'detail'});detail.style.margin='0 0 8px';
 const actions=element(document,'div');actions.style.cssText='display:flex;gap:6px';
 const confirmButton=element(document,'button',{'data-loan-control':'bt3'});confirmButton.type='button';
 const cancelButton=element(document,'button',{'data-loan-control':'xibutton1'});cancelButton.type='button';
 const status=element(document,'p',{'data-loan-field':'status'});status.style.cssText='margin:8px 0 0;font-weight:bold;min-height:1em';
 actions.append(confirmButton,cancelButton);
 root.append(heading,message,detail,actions,status);
 container.replaceChildren(root);
 function render(){
  const view=session.view();
  heading.textContent=view.title;message.textContent=view.message;
  detail.textContent=view.mode==='out'?`${view.playerName} → ${view.destinationName||'?'}`:`${view.playerName} (${view.clubName})`;
  confirmButton.textContent=view.confirm;cancelButton.textContent=view.cancel;
  confirmButton.disabled=session.finished;
  status.textContent=session.finished?(session.result?.completed?`loan ${session.result.from} → ${session.result.to} ${session.result.loanEnd}`:''):`listed ${view.counts.listed} · out ${view.counts.out} · in ${view.counts.inLoaned}`;
 }
 confirmButton.addEventListener('click',()=>{session.confirm();render();});
 cancelButton.addEventListener('click',()=>{session.refuse();render();});
 render();
 return {session,render,element:root};
}
