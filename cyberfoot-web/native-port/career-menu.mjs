import {readSave,writeSave,record,shortString} from './save-format.mjs';
import {careerAgenda,fixtureOnDate} from './schedule.mjs';
import {baseCalendar} from './calendar.mjs';

const serialEpoch=Date.UTC(1899,11,30),dayMs=86400000;
const managerSection='records_0066b718',managerRecordSize=128,managerNameCapacity=127;
const b64Alphabet='ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
const b64Lookup=(()=>{const table=new Int16Array(256).fill(-1);for(let i=0;i<b64Alphabet.length;i++)table[b64Alphabet.charCodeAt(i)]=i;table['='.charCodeAt(0)]=0;return table;})();
const cp1252Extras=new Map([[0x20ac,0x80],[0x201a,0x82],[0x0192,0x83],[0x201e,0x84],[0x2026,0x85],[0x2020,0x86],[0x2021,0x87],[0x02c6,0x88],[0x2030,0x89],[0x0160,0x8a],[0x2039,0x8b],[0x0152,0x8c],[0x017d,0x8e],[0x2018,0x91],[0x2019,0x92],[0x201c,0x93],[0x201d,0x94],[0x2022,0x95],[0x2013,0x96],[0x2014,0x97],[0x02dc,0x98],[0x2122,0x99],[0x0161,0x9a],[0x203a,0x9b],[0x0153,0x9c],[0x017e,0x9e],[0x0178,0x9f]]);

export const CAREER_SAVE_STORAGE_KEY='cyberfoot.careerSave';
export const CAREER_INDEX_STORAGE_KEY='cyberfoot.career-menu.careers';
export function careerStorageKey(id){return `cyberfoot.career-menu.career.${id}`;}

export function encodeBase64(input){
 const bytes=input instanceof Uint8Array?input:new Uint8Array(input);
 let out='';
 for(let i=0;i<bytes.length;i+=3){
  const a=bytes[i],b=i+1<bytes.length?bytes[i+1]:0,c=i+2<bytes.length?bytes[i+2]:0;
  out+=b64Alphabet[a>>2]+b64Alphabet[((a&3)<<4)|(b>>4)]+(i+1<bytes.length?b64Alphabet[((b&15)<<2)|(c>>6)]:'=')+(i+2<bytes.length?b64Alphabet[c&63]:'=');
 }
 return out;
}
export function decodeBase64(value){
 const clean=String(value).replace(/\s+/g,'');
 if(clean.length%4!==0)throw Error('Invalid base64 length.');
 const padding=clean.endsWith('==')?2:clean.endsWith('=')?1:0,padded=clean.replace(/=+$/,'');
 const bytes=new Uint8Array(clean.length/4*3-padding);
 let offset=0;
 for(let i=0;i<padded.length;i+=4){
  const n=(b64Lookup[padded.charCodeAt(i)]<<18)|(b64Lookup[padded.charCodeAt(i+1)]<<12)|((padded.charCodeAt(i+2)===undefined?0:b64Lookup[padded.charCodeAt(i+2)])<<6)|(padded.charCodeAt(i+3)===undefined?0:b64Lookup[padded.charCodeAt(i+3)]);
  if(n<0)throw Error('Invalid base64 character.');
  bytes[offset++]=n>>16;
  if(offset<bytes.length)bytes[offset++]=n>>8;
  if(offset<bytes.length)bytes[offset++]=n;
 }
 return bytes;
}
export function serialToIso(serial){
 if(!Number.isFinite(serial))return null;
 const date=new Date(serialEpoch+Math.trunc(serial)*dayMs);
 return Number.isNaN(date.getTime())?null:date.toISOString().slice(0,10);
}
export async function compressCareerSave(input){
 const bytes=input instanceof Uint8Array?input:new Uint8Array(input);
 const stream=new Blob([bytes]).stream().pipeThrough(new CompressionStream('gzip'));
 return new Uint8Array(await new Response(stream).arrayBuffer());
}
export async function decompressCareerSave(input){
 const bytes=input instanceof Uint8Array?input:new Uint8Array(input);
 const stream=new Blob([bytes]).stream().pipeThrough(new DecompressionStream('gzip'));
 return new Uint8Array(await new Response(stream).arrayBuffer());
}
function saveFrom(value){
 if(value&&typeof value==='object'&&value.sections&&value.career)return value;
 return readSave(value);
}
function writeShortString(bytes,offset,capacity,value){
 const text=String(value);
 if(text.length>capacity)throw Error(`Short string exceeds ${capacity} characters.`);
 const mapped=new Uint8Array(text.length);
 for(let i=0;i<text.length;i++){
  const code=text.charCodeAt(i),mappedByte=code<0x100?code:cp1252Extras.get(code);
  if(mappedByte===undefined)throw Error(`Unsupported short-string character ${JSON.stringify(text[i])}.`);
  mapped[i]=mappedByte;
 }
 bytes[offset]=mapped.length;
 bytes.set(mapped,offset+1);
}
function languageText(language,id){
 const entry=language[id];
 if(!entry||typeof entry.text!=='string'||!entry.text)throw Error(`Missing language entry ${id}.`);
 return entry.text;
}
export function careerSaveSummary(saveOrBytes){
 const save=saveFrom(saveOrBytes);
 const career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);
 const clubs=save.sections.find(s=>s.name==='clubs'),managers=save.sections.find(s=>s.name===managerSection);
 const clubId=career.getInt32(8,true),managerId=career.getInt32(0x10,true),season=career.getInt32(0xc0,true),day=career.getInt32(0x16c,true);
 const clubName=clubs&&clubId>=0&&clubId<clubs.count?shortString(record(save,'clubs',clubId),0,25):'';
 const managerName=managers&&managerId>=0&&managerId<managers.count?shortString(record(save,managerSection,managerId),0,managerNameCapacity):'';
 const date=day>=1&&day<=366?baseCalendar(season)[day-1].date:null;
 return {clubId,clubName,managerId,managerName,season,day,date,dateIso:date===null?null:serialToIso(date),competitionType:career.getInt32(0x88,true)};
}
export function playableClubIds(saveOrBytes){
 const save=saveFrom(saveOrBytes);
 const clubs=save.sections.find(s=>s.name==='clubs');
 if(!clubs)throw Error('Save has no original club section.');
 const agenda=careerAgenda(save),ids=[];
 for(let id=0;id<clubs.count;id++)if(fixtureOnDate(agenda.fixtures,id,agenda.nextDate)>=0)ids.push(id);
 return ids;
}
/** Builds a new-game save from an original saved career: the chosen club becomes
 * the single human club, the chosen manager name is installed on that club's
 * manager record and the human manager slots are reset. Bytes in every other
 * original section stay untouched, so schedule, fixtures and league data remain
 * the genuine original data. */
export function createCareerSave({managerName,clubId,language,seed=0,template,day}={}){
 const name=String(managerName??'').trim();
 if(!name)throw Error('A manager name is required.');
 if(name.length>25)throw Error('Manager names are limited to 25 characters.');
 if(language!==undefined&&typeof language!=='string'&&!Array.isArray(language))throw Error('Invalid language selection.');
 if(!template)throw Error('An original save template is required.');
 const save=saveFrom(template);
 const clubs=save.sections.find(s=>s.name==='clubs'),managers=save.sections.find(s=>s.name===managerSection);
 if(!clubs||!managers)throw Error('Template is missing the original club or manager section.');
 if(!Number.isInteger(clubId)||clubId<0||clubId>=clubs.count)throw Error(`Club ${clubId} is not in the template.`);
 const career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);
 const club=record(save,'clubs',clubId),clubView=new DataView(club.buffer,club.byteOffset,club.byteLength);
 let managerId=clubView.getInt32(0x44,true);
 if(managerId<0||managerId>=managers.count){
  const candidates=[];
  for(let i=0;i<managers.count;i++)if(managers.data[i*managerRecordSize+0x40]===0)candidates.push(i);
  if(candidates.length)managerId=candidates[(seed>>>0)%candidates.length];
  else{const grown=new Uint8Array(managers.data.length+managerRecordSize);grown.set(managers.data);managers.data=grown;managers.count+=1;managerId=managers.count-1;}
 }
 for(let i=0;i<clubs.count;i++)clubs.data[i*760+0x39]=0;
 for(let i=0;i<managers.count;i++)managers.data[i*managerRecordSize+0x31]=0;
 clubView.setUint8(0x39,1);
 clubView.setInt32(0x44,managerId,true);
 const manager=record(save,managerSection,managerId),managerView=new DataView(manager.buffer,manager.byteOffset,manager.byteLength);
 writeShortString(manager,0,managerNameCapacity,name);
 managerView.setInt32(0x1c,clubId,true);
 managerView.setInt32(0x24,clubView.getInt32(0x7c,true),true);
 managerView.setInt32(0x3c,clubView.getInt32(0x3c,true),true);
 managerView.setUint8(0x31,1);
 managerView.setUint8(0x40,1);
 managerView.setInt32(0x34,5,true);
 career.setInt32(8,clubId,true);
 career.setInt32(0x10,managerId,true);
 career.setInt32(0x13c,1,true);
 for(let i=0;i<10;i++)career.setInt32(0x140+i*4,i===0?clubId:-1,true);
 if(day!==undefined){
  if(!Number.isInteger(day)||day<1||day>366)throw Error('Invalid original calendar day.');
  career.setInt32(0x16c,day,true);
 }
 const agenda=careerAgenda(save);
 if(agenda.fixtureId<0||!agenda.fixtures[agenda.fixtureId].clubs.includes(clubId))throw Error(`Club ${clubId} has no fixture on the original schedule.`);
 return writeSave(save);
}
export function careerMenuView({language,careers=[]}={}){
 if(!Array.isArray(language))throw Error('language.json entries are required.');
 const list=(Array.isArray(careers)?careers:[]).map((entry,index)=>{
  const dateIso=entry&&entry.dateIso!==undefined&&entry.dateIso!==null?entry.dateIso:(entry&&Number.isFinite(entry.date)?serialToIso(entry.date):null);
  return {id:String(entry&&entry.id!==undefined?entry.id:index),managerName:String(entry&&entry.managerName!==undefined?entry.managerName:''),clubName:String(entry&&entry.clubName!==undefined?entry.clubName:''),dateIso,dateLabel:dateIso??'',savedAt:entry&&entry.savedAt!==undefined?entry.savedAt:null,language:entry&&entry.language!==undefined?entry.language:null,size:entry&&entry.size!==undefined?entry.size:null};
 });
 return {
  title:'Cyberfoot 2015',
  version:languageText(language,5),
  options:[
   {id:'new-game',label:languageText(language,1),enabled:true},
   {id:'load-game',label:languageText(language,2),enabled:list.length>0},
   {id:'club-editor',label:languageText(language,3),enabled:false},
   {id:'register-game',label:languageText(language,4),enabled:true},
   {id:'exit',label:languageText(language,7),enabled:true}
  ],
  newGame:{title:languageText(language,1),nameLabel:languageText(language,34),clubLabel:languageText(language,32),clubHint:languageText(language,33),startLabel:languageText(language,41),backLabel:languageText(language,30),missingName:languageText(language,34),missingClub:languageText(language,32),failed:languageText(language,31)},
  loadGame:{title:languageText(language,2),emptyLabel:languageText(language,2),careers:list},
  dialogs:{settings:languageText(language,10),about:languageText(language,97)}
 };
}
export async function createCareerRecord(saveBytes,{id,managerName,clubId,language,savedAt=Date.now(),summary,compress=true}={}){
 const bytes=saveBytes instanceof Uint8Array?saveBytes:new Uint8Array(saveBytes);
 const info=summary??careerSaveSummary(bytes);
 const encoded=compress?await compressCareerSave(bytes):bytes;
 return {id:id??`career-${savedAt.toString(36)}-${Math.random().toString(36).slice(2,8)}`,managerName:String(managerName??info.managerName),clubId:clubId??info.clubId,clubName:info.clubName,managerId:info.managerId,season:info.season,day:info.day,date:info.date,dateIso:info.dateIso,language:language??null,savedAt,size:bytes.length,encoding:compress?'gzip+base64':'base64',save:encodeBase64(encoded)};
}
function careerMetadata(recordValue){
 const {save:_encoded,...metadata}=recordValue;
 return metadata;
}
export function listStoredCareers(storage){
 const store=requireStorage(storage),raw=store.getItem(CAREER_INDEX_STORAGE_KEY);
 if(!raw)return [];
 try{const parsed=JSON.parse(raw);return Array.isArray(parsed)?parsed:[];}catch{return [];}
}
export function writeStoredCareer(storage,recordValue){
 const store=requireStorage(storage);
 if(!recordValue||typeof recordValue.save!=='string')throw Error('Career record requires an encoded save.');
 const previous=listStoredCareers(store).filter(entry=>entry.id!==recordValue.id);
 for(;;){
  try{
   store.setItem(careerStorageKey(recordValue.id),JSON.stringify(recordValue));
   store.setItem(CAREER_INDEX_STORAGE_KEY,JSON.stringify([careerMetadata(recordValue),...previous]));
   store.setItem(CAREER_SAVE_STORAGE_KEY,JSON.stringify({id:recordValue.id,encoding:recordValue.encoding,size:recordValue.size,savedAt:recordValue.savedAt}));
   return recordValue;
  }catch(error){
   if(!error||error.name!=='QuotaExceededError'||!previous.length)throw error;
   const oldest=previous.pop();
   store.removeItem(careerStorageKey(oldest.id));
  }
 }
}
export function readStoredCareer(storage,id){
 const store=requireStorage(storage),raw=store.getItem(careerStorageKey(id));
 if(!raw)return null;
 try{const recordValue=JSON.parse(raw);return recordValue&&String(recordValue.id)===String(id)?recordValue:null;}catch{return null;}
}
export async function decodeCareerSave(recordValue){
 const base64=typeof recordValue==='string'?recordValue:recordValue&&recordValue.save;
 if(typeof base64!=='string')throw Error('Career record has no save data.');
 const bytes=decodeBase64(base64);
 const encoding=typeof recordValue==='object'&&recordValue.encoding?recordValue.encoding:'gzip+base64';
 if(encoding==='gzip+base64')return decompressCareerSave(bytes);
 if(encoding==='base64')return bytes;
 throw Error(`Unsupported career save encoding ${encoding}.`);
}
export async function readStoredCareerSave(storage,id){
 const recordValue=readStoredCareer(storage,id);
 if(!recordValue)throw Error(`Unknown stored career ${id}.`);
 return decodeCareerSave(recordValue);
}
export async function readActiveCareerSave(storage){
 const store=requireStorage(storage),raw=store.getItem(CAREER_SAVE_STORAGE_KEY);
 if(!raw)return null;
 let parsed;
 try{parsed=JSON.parse(raw);}catch{parsed=raw;}
 if(parsed&&typeof parsed==='object'&&parsed.id&&!parsed.save)return readStoredCareerSave(store,parsed.id);
 return decodeCareerSave(parsed);
}
export function removeStoredCareer(storage,id){
 const store=requireStorage(storage);
 store.removeItem(careerStorageKey(id));
 store.setItem(CAREER_INDEX_STORAGE_KEY,JSON.stringify(listStoredCareers(store).filter(entry=>String(entry.id)!==String(id))));
 const raw=store.getItem(CAREER_SAVE_STORAGE_KEY);
 if(!raw)return;
 try{const parsed=JSON.parse(raw);if(parsed&&typeof parsed==='object'&&String(parsed.id)===String(id))store.removeItem(CAREER_SAVE_STORAGE_KEY);}catch{}
}
function requireStorage(storage){
 const store=storage??(typeof localStorage==='undefined'?null:localStorage);
 if(!store||typeof store.getItem!=='function'||typeof store.setItem!=='function')throw Error('Career storage requires a localStorage-compatible object.');
 return store;
}
export function mountCareerMenu(container,{language,onStart,clubs=[],template,storage,seed=2015,defaultManager='',onLog}={}){
 if(!container||typeof container.appendChild!=='function')throw Error('A container element is required.');
 if(typeof onStart!=='function')throw Error('mountCareerMenu requires an onStart callback.');
 if(!Array.isArray(language))throw Error('language.json entries are required.');
 const store=storage??(typeof localStorage==='undefined'?null:localStorage);
 const clubList=Array.isArray(clubs)?clubs:[];
 const log=typeof onLog==='function'?onLog:()=>{};
 const state={screen:'menu',career:null,storageError:null,clubs:clubList};
 const root=document.createElement('div');
 root.className='career-menu';
 container.appendChild(root);
 const text=id=>{const entry=language[id];return entry&&typeof entry.text==='string'?entry.text:`[${id}]`;};
 const list=()=>store?listStoredCareers(store):[];
 const view=()=>careerMenuView({language,careers:list()});
 const add=(parent,tag,className,content)=>{const element=document.createElement(tag);if(className)element.className=className;if(content!==undefined)element.textContent=content;parent.appendChild(element);return element;};
 const button=(parent,label,action,dataset)=>{const element=add(parent,'button','cm-button',label);element.type='button';if(dataset)element.dataset.careerMenu=dataset;element.addEventListener('click',action);return element;};
 const clear=()=>{root.replaceChildren();};
 function renderMenu(){
  clear();
  const current=view();
  add(root,'h2','cm-title',current.title);
  add(root,'p','cm-version',current.version);
  const options=add(root,'div','cm-options');
  for(const option of current.options){
   const element=button(options,option.label,()=>onOption(option.id),option.id);
   element.disabled=!option.enabled;
  }
  if(state.career)add(root,'p','cm-current',`${state.career.record.managerName} — ${state.career.record.clubName} (${state.career.record.dateIso??''})`);
  if(state.storageError)add(root,'p','cm-error',state.storageError);
 }
 function onOption(id){
  if(id==='new-game')renderNewGame();
  else if(id==='load-game')renderLoadGame();
  else if(id==='club-editor')renderMessage(text(3));
  else if(id==='register-game')renderMessage(text(4));
  else if(id==='exit')renderMessage(text(7));
 }
 function renderNewGame(){
  clear();
  const current=view(),form=add(root,'div','cm-form');
  add(root,'h2','cm-title',current.newGame.title);
  add(form,'label','cm-label',current.newGame.nameLabel);
  const nameInput=document.createElement('input');
  nameInput.type='text';
  nameInput.value=defaultManager;
  nameInput.maxLength=25;
  nameInput.dataset.careerMenu='manager-name';
  form.appendChild(nameInput);
  add(form,'label','cm-label',current.newGame.clubLabel);
  const select=document.createElement('select');
  select.dataset.careerMenu='club';
  for(const club of clubList){
   const option=document.createElement('option');
   option.value=String(club.id);
   option.textContent=club.label??`${club.name} (${club.id})`;
   select.appendChild(option);
  }
  form.appendChild(select);
  const errorLine=add(root,'p','cm-error','');
  const actions=add(root,'div','cm-actions');
  button(actions,current.newGame.startLabel,async()=>{
   const name=nameInput.value.trim(),selectedClub=Number(select.value);
   if(!name){errorLine.textContent=current.newGame.missingName;return;}
   if(!Number.isInteger(selectedClub)){errorLine.textContent=current.newGame.missingClub;return;}
   try{await create(name,selectedClub);}catch(error){errorLine.textContent=error.message;state.storageError=error.message;}
  },'start');
  button(actions,current.newGame.backLabel,renderMenu,'back');
 }
 function renderLoadGame(){
  clear();
  const current=view();
  add(root,'h2','cm-title',current.loadGame.title);
  if(!current.loadGame.careers.length)add(root,'p','cm-empty',current.loadGame.emptyLabel);
  for(const career of current.loadGame.careers){
   const row=add(root,'div','cm-career');
   add(row,'span','cm-career-name',`${career.managerName} — ${career.clubName}`);
   add(row,'span','cm-career-date',career.dateLabel);
   const element=button(row,current.loadGame.title,async()=>{try{await load(career.id);}catch(error){state.storageError=error.message;renderMenu();}},'load');
   element.dataset.careerId=career.id;
  }
  button(root,current.newGame.backLabel,renderMenu,'back');
 }
 function renderMessage(message){
  clear();
  add(root,'p','cm-message',message);
  button(root,text(30),renderMenu,'back');
 }
 async function create(managerName,clubId){
  const bytes=createCareerSave({managerName,clubId,language,seed,template});
  const summary=careerSaveSummary(bytes);
  const recordValue=await createCareerRecord(bytes,{managerName,clubId,language:language[0]?.text??null,summary});
  state.storageError=null;
  let stored=false;
  if(store){
   try{writeStoredCareer(store,recordValue);stored=true;}
   catch(error){state.storageError=String(error.message??error);log(`Storage error: ${state.storageError}`);}
  }
  state.career={bytes,record:recordValue,stored};
  log(`Created career for ${recordValue.managerName} at ${recordValue.clubName} (${recordValue.dateIso}).`);
  await onStart(bytes,recordValue);
  renderMenu();
  return recordValue;
 }
 async function load(id){
  const recordValue=readStoredCareer(store,id);
  if(!recordValue)throw Error(`Unknown stored career ${id}.`);
  const bytes=await decodeCareerSave(recordValue);
  state.career={bytes,record:recordValue,stored:true};
  store?.setItem(CAREER_SAVE_STORAGE_KEY,JSON.stringify({id:recordValue.id,encoding:recordValue.encoding,size:recordValue.size,savedAt:recordValue.savedAt}));
  log(`Loaded career for ${recordValue.managerName} at ${recordValue.clubName}.`);
  await onStart(bytes,recordValue);
  renderMenu();
  return bytes;
 }
 renderMenu();
 return {element:root,render:renderMenu,newGame:renderNewGame,loadGame:renderLoadGame,create,load,view,get state(){return state;}};
}
