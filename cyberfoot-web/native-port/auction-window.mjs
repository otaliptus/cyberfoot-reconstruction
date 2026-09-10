import {record,shortString} from './save-format.mjs';
import {parseOriginalInteger} from './contract-view.mjs';
import {selectAuctionLot,auctionBid,auctionResolve,auctionFinalize,auctionStart,auctionNextLot} from './auction.mjs';
import {currentCareerDate} from './calendar.mjs';
import {precision64,nearestEven} from './x87.mjs';

const roleLanguageIds=[143,147,145,149,151],countryLanguageBase=786;
const cashUnit=10000n;
const dataView=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);

function languageEntryText(language,id){
 const entry=Array.isArray(language)?language[id]??language.find?.(row=>row?.index===id):language?.[id];
 const text=typeof entry==='string'?entry:entry?.text;
 return text===undefined||text===null?null:String(text);
}
export function auctionLanguageText(language,id){
 return languageEntryText(language,id)??String(id);
}
function countryLanguageText(language,countryId){
 if(!Number.isInteger(countryId)||countryId<0)return String(countryId);
 return languageEntryText(language,countryLanguageBase+countryId)??String(countryId);
}
export function auctionMoneyAmount(cash){
 const [q,r]=precision64(BigInt(cash),cashUnit);
 return Number(BigInt.asUintN(32,nearestEven(q,r)));
}
export function formatAuctionMoney(value){
 const n=Number(value)||0,s=String(Math.abs(n));
 return (n<0?'-':'')+s.replace(/\B(?=(\d{3})+(?!\d))/g,' ');
}
function formatCareerDate(serial){
 if(!Number.isFinite(serial))return '';
 const date=new Date(Date.UTC(1899,11,30)+Math.trunc(serial)*86400000),pad=n=>String(n).padStart(2,'0');
 return `${pad(date.getUTCDate())}/${pad(date.getUTCMonth()+1)}/${date.getUTCFullYear()}`;
}
function clubSnapshot(save,id){
 try{
  const bytes=record(save,'clubs',id),row=dataView(bytes);
  return {id,name:shortString(bytes,0,25),cash:row.getBigInt64(0x48,true)};
 }catch{return null;}
}
function playerStatus(row,competitionType,date,language){
 const suspensions=row.getInt32(0xb8+competitionType*4,true);
 if(suspensions>=1)return `${auctionLanguageText(language,0x3c)} ${suspensions} ${auctionLanguageText(language,0x3d)}`;
 const yellows=row.getInt32(0x8c+competitionType*4,true);
 if(yellows>=2)return auctionLanguageText(language,0x3b);
 const injuryUntil=row.getFloat64(0x68,true);
 if(Number.isFinite(injuryUntil)&&Number.isFinite(date)&&injuryUntil>date)return `${auctionLanguageText(language,0x3e)} ${formatCareerDate(injuryUntil)}`;
 return '';
}
/** Pure TForm23 view. Captions and detail fields follow 005a2d24/005a3014;
 * every value is a display string. runtime.auctionVisibility records from
 * auctionBid drive the Label7/Label17 error state and the typed-bid caption. */
export function auctionWindowView(save,runtime,{language={}}={}){
 const state=runtime??{},career=dataView(save.career);
 const pid=state.auctionPlayer??-1,sellerId=state.auctionSellerClub??-1,currentId=state.auctionCurrentClub??-1;
 const seller=clubSnapshot(save,sellerId),current=clubSnapshot(save,currentId),moneyClub=current??seller;
 const money=formatAuctionMoney(moneyClub?auctionMoneyAmount(moneyClub.cash):0);
 let player=null,row=null;
 if(pid>=0){const bytes=record(save,'players',pid);row=dataView(bytes);player=bytes;}
 let date=NaN;
 try{date=currentCareerDate(save);}catch{date=NaN;}
 const competitionType=career.getInt32(0x88,true);
 const name=player?shortString(player,0,20):'';
 const role=row?row.getInt32(0x24,true):-1,countryId=row?row.getInt32(0x1c,true):-1;
 const condition=row?row.getInt32(0x78,true):0;
 const status=row?playerStatus(row,competitionType,date,language):'';
 const base=state.auctionBasePrice??0;
 const visibility={Label7:false,Label17:false};
 let typedBid='';
 for(const entry of state.auctionVisibility??[]){
  if(entry[0]==='0x388')visibility.Label7=!!entry[1];
  else if(entry[0]==='0x390')visibility.Label17=!!entry[1];
  else if(entry[0]==='0x394'&&entry[1]==='caption')typedBid=entry[2]??'';
 }
 const salary=row?auctionMoneyAmount(row.getBigInt64(0x38,true)):0;
 const details={
  jlnome:name,
  jlpos:auctionLanguageText(language,roleLanguageIds[role]??0),
  jlforca:row?String(row.getInt32(0x28,true)):'',
  jlage:row?String(row.getInt32(0x18,true)):'',
  jlpais:countryLanguageText(language,countryId),
  jlsalario:formatAuctionMoney(salary),
  jlj:row?String(row.getInt32(0x10c,true)):'',
  jlstatus:status,
  jlpasse:formatAuctionMoney(base),
  jlg:row?String(row.getInt32(0x104,true)):'',
  jlca:row?String(row.getInt32(0x8c+competitionType*4,true)):'',
  jlenergia:`${condition}%`
 };
 const captions={
  l1:seller?`${seller.name} ${auctionLanguageText(language,0x172)}`:auctionLanguageText(language,0x172),
  Label12:auctionLanguageText(language,0x170),
  Label8:`${auctionLanguageText(language,0x31)}:`,
  Label14:`${auctionLanguageText(language,0x32)}:`,
  Label1:`${auctionLanguageText(language,0x36)}:`,
  Label9:`${auctionLanguageText(language,0x33)}:`,
  Label11:`${auctionLanguageText(language,0x35)}:`,
  Label19:`${auctionLanguageText(language,0x84)}:`,
  Label3:`${auctionLanguageText(language,0x133)}:`,
  Label10:auctionLanguageText(language,0x171),
  Label2:auctionLanguageText(language,0x173),
  Label4:auctionLanguageText(language,0x176),
  Label7:auctionLanguageText(language,0x178),
  Label17:auctionLanguageText(language,0x179),
  Label15:`${auctionLanguageText(language,0x133)} ${money}`,
  Label18:typedBid,
  Label16:auctionLanguageText(language,0x172),
  chbutton1:auctionLanguageText(language,0x177),
  Edit1:state.auctionEditText??''
 };
 return {
  form:'Form23',title:captions.Label12,
  ...details,...captions,
  visibility,
  sellerClubId:sellerId,sellerClubName:seller?.name??'',sellerName:seller?.name??'',sellerCash:formatAuctionMoney(seller?auctionMoneyAmount(seller.cash):0),
  currentClubId:currentId,currentClubName:current?.name??'',money,
  startCaption:`${auctionLanguageText(language,0x38c)} ${money}`,startCaptionControl:0x38c,
  player:player?{id:pid,name,position:details.jlpos,role,strength:row.getInt32(0x28,true),age:row.getInt32(0x18,true),countryId,country:details.jlpais,salary,games:row.getInt32(0x10c,true),goals:row.getInt32(0x104,true),cards:row.getInt32(0x8c+competitionType*4,true),passes:0,condition,status,injuryUntil:row.getFloat64(0x68,true)}:null
 };
}
/** Original Form23 flow as a headless state machine. start()=005a3014/005a3ac8,
 * bid()=005a4648 plus 005a3d1c/005a4354, tick()=005a4ae0/005a42e0. */
export function createAuctionSession({save,runtime={},rng,language,onEvent,onFinished}={}){
 const events=[];
 let started=false,finished=false,result=null;
 const emit=(event,payload)=>{const entry={event,...payload};events.push(entry);onEvent?.(entry);return entry;};
 const view=()=>auctionWindowView(save,runtime,{language});
 function finish(payload){
  if(finished)return result;
  finished=true;result=payload;emit('finish',payload);onFinished?.(payload);return result;
 }
 function applyResolution(records){
  const finalize=records.find(row=>row[0]==='finalize');
  if(!finalize)return false;
  const [, ,accept,buyer,price,player]=finalize;
  const outcome=auctionFinalize(save,runtime,{accept:!!accept,buyer:Number.isInteger(buyer)?buyer:-1,price:Number.isInteger(price)?price:0,player:Number.isInteger(player)?player:runtime.auctionPlayer??-1,rng});
  emit('finalize',{accept:!!accept,buyer,price,player,records:outcome.records});
  finish({sold:!!accept,buyer:accept?buyer:-1,price:accept?price:0,player,records:outcome.records});
  return true;
 }
 function start(){
  if(started||finished)return {started:false};
  started=true;
  if((runtime.auctionPlayer??-1)<0)selectAuctionLot(save,runtime,{rng,previousClub:runtime.auctionPreviousClub??-1});
  const outcome=auctionStart(save,runtime,{rng});
  emit('start',{started:outcome.started,player:runtime.auctionPlayer??-1,seller:runtime.auctionSellerClub??-1,current:runtime.auctionCurrentClub??-1,index:runtime.auctionIndex??0,base:runtime.auctionBasePrice??0});
  if(!outcome.started)applyResolution(outcome.resolution);
  return outcome;
 }
 function bid(text){
  if(finished)return {outcome:'finished'};
  const raw=String(text??''),parsed=raw===''?0:parseOriginalInteger(raw);
  if(parsed===null)return {outcome:'invalid'};
  const outcome=auctionBid(save,runtime,{text:String(parsed)});
  emit('bid',{text:raw,value:parsed,outcome:outcome.outcome,highestBid:runtime.auctionHighestBid??0,highestBidder:runtime.auctionHighestBidder??0,current:runtime.auctionCurrentClub??-1});
  if(outcome.outcome==='resolved'){
   const records=auctionResolve(save,runtime,{rng});
   emit('resolve',{records});
   applyResolution(records);
  }
  return outcome;
 }
 function tick(){
  if(finished)return {finished:true};
  const turn=auctionNextLot(save,runtime,{rng});
  emit('nextLot',{player:turn.player??-1,seller:turn.seller??-1,records:turn.records});
  if((turn.player??-1)<0){finish({sold:false,buyer:-1,price:0,player:-1,reason:'no-lot',records:turn.records});return {finished:true};}
  return {finished:false,player:turn.player,seller:turn.seller};
 }
 return {start,bid,tick,view,get started(){return started;},get finished(){return finished;},get result(){return result;},get events(){return events;},runtime};
}
/** DOM host. All controls live inside `container`; the page clock drives the
 * tick when auto is true (setInterval), otherwise the caller calls tick(). */
export function mountAuctionWindow(container,{save,runtime={},rng,language,onFinished,onEvent,interval=2500,auto=true}={}){
 if(!container||typeof container.replaceChildren!=='function')throw TypeError('A container element is required.');
 const document=container.ownerDocument??globalThis.document;
 if(!document)throw TypeError('A document is required.');
 const session=createAuctionSession({save,runtime,rng,language,onEvent,onFinished});
 const root=document.createElement('section');
 root.dataset.auctionWindow='Form23';
 root.style.cssText='font:13px/1.35 Arial,sans-serif;color:#111;background:#d4d0c8;border:1px solid #444;padding:10px;max-width:760px';
 const heading=document.createElement('h2');
 heading.style.cssText='margin:0 0 6px;font-size:16px';
 const sellerLine=document.createElement('p');
 sellerLine.style.margin='0 0 8px';
 const details=document.createElement('dl');
 details.style.cssText='display:grid;grid-template-columns:auto 1fr auto 1fr;gap:2px 8px;margin:0 0 8px';
 const fieldNodes={};
 const addField=(key,label)=>{
  const dt=document.createElement('dt'),dd=document.createElement('dd');
  dt.textContent=label;dt.style.fontWeight='bold';dd.style.margin='0';
  details.append(dt,dd);fieldNodes[key]=dd;
 };
 const fieldLabels=['jlnome','jlpos','jlforca','jlage','jlpais','jlsalario','jlj','jlstatus','jlpasse','jlg','jlca','jlenergia'];
 for(const key of fieldLabels)addField(key,'');
 const bidRow=document.createElement('div');
 bidRow.style.cssText='display:flex;gap:6px;align-items:center;margin:8px 0;flex-wrap:wrap';
 const hint=document.createElement('span');
 const bidLabel=document.createElement('label');
 const input=document.createElement('input');
 input.type='text';input.dataset.auctionEdit='Edit1';input.setAttribute('aria-label','Bid');
 input.style.cssText='width:120px;font:13px Arial';
 const button=document.createElement('button');
 button.type='button';button.dataset.auctionButton='chbutton1';
 const error7=document.createElement('span'),error17=document.createElement('span');
 error7.style.color='#800000';error17.style.color='#800000';
 const currentLine=document.createElement('p'),typedLine=document.createElement('p'),statusLine=document.createElement('p');
 currentLine.style.margin='4px 0';typedLine.style.margin='4px 0';statusLine.style.cssText='margin:8px 0 0;font-weight:bold';
 bidLabel.append(document.createTextNode(''),input);
 bidRow.append(hint,bidLabel,button,error7,error17);
 root.append(heading,sellerLine,details,bidRow,currentLine,typedLine,statusLine);
 container.replaceChildren(root);
 function render(){
  const view=session.view();
  heading.textContent=view.title;
  sellerLine.textContent=`${view.sellerName} ${view.Label16}`.trim();
  for(const key of fieldLabels){const node=fieldNodes[key];node.dataset.auctionField=key;node.textContent=key==='jlstatus'&&!view.jlstatus?'':view[key]??'';}
  const detailLabels={jlnome:'',jlpos:'',jlforca:view.Label8,jlage:view.Label14,jlpais:'',jlsalario:view.Label9,jlj:view.Label11,jlstatus:'',jlpasse:view.Label10,jlg:'',jlca:'',jlenergia:view.Label19};
  const dts=details.querySelectorAll('dt');
  fieldLabels.forEach((key,index)=>{dts[index].textContent=detailLabels[key]??'';});
  hint.textContent=view.Label2;bidLabel.firstChild.textContent=view.Label4+' ';
  button.textContent=view.chbutton1;
  error7.textContent=view.visibility.Label7?view.Label7:'';
  error17.textContent=view.visibility.Label17?view.Label17:'';
  currentLine.textContent=view.Label15;
  typedLine.textContent=view.Label18?`${view.Label4} ${view.Label18}`:'';
  if(session.finished){
   const r=session.result,buyerName=r.sold?(()=>{try{return shortString(record(save,'clubs',r.buyer),0,25);}catch{return String(r.buyer);}})():'';
   statusLine.textContent=r.sold?`${auctionLanguageText(language,0x175)} ${buyerName} ${formatAuctionMoney(r.price)}`:auctionLanguageText(language,0x174);
  }else statusLine.textContent='';
  updateBidState();
 }
 function parsedBid(){
  const raw=input.value.trim();
  if(raw==='')return null;
  return parseOriginalInteger(raw);
 }
 function updateBidState(){
  button.disabled=session.finished||parsedBid()===null;
 }
 input.addEventListener('input',updateBidState);
 button.addEventListener('click',()=>{
  const value=parsedBid();
  if(value===null)return;
  bidSinceTick=true;
  const outcome=session.bid(String(value));
  if(outcome.outcome==='next'||outcome.outcome==='resolved')input.value='';
  render();
 });
 let timer=null,bidSinceTick=false;
 session.start();
 render();
 if(auto&&!session.finished)timer=setInterval(()=>{
  if(session.finished){clearInterval(timer);timer=null;return;}
  if(bidSinceTick){bidSinceTick=false;return;}
  session.tick();render();
 },interval);
 return {session,render,get element(){return root;},bid(value){const outcome=session.bid(value);render();return outcome;},tick(){const outcome=session.tick();render();return outcome;},dispose(){if(timer)clearInterval(timer);timer=null;}};
}
