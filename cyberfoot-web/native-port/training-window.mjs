import {record,shortString} from './save-format.mjs';
import {developSeniorPlayer,developYouthPlayer,declineOlderPlayer,canImprovePlayer} from './player-development.mjs';

const dataView=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
const fround=Math.fround;
/** Development routines exposed by the training screen. 'automatic' mirrors the
 * original developRoundPlayers routing (youth flag first, then age 32). */
export const trainingFocuses=['automatic','senior','youth','decline'];
export const maxTrainingSessions=52;

function languageText(language,id,fallback){
 const entry=Array.isArray(language)?language[id]:language?.[id];
 const text=typeof entry==='string'?entry:entry?.text;
 return text===undefined||text===null?fallback:String(text);
}
/** Mirrors developRoundPlayers' per-player choice without touching the save. */
export function trainingFocusFor(save,id){
 const row=dataView(record(save,'players',id));
 if(row.getUint8(0x120)!==0&&row.getInt32(0x18,true)<21)return 'youth';
 return row.getInt32(0x18,true)<32?'senior':'decline';
}
export function trainingSnapshot(save,id){
 const row=dataView(record(save,'players',id));
 return {id,name:shortString(record(save,'players',id),0,20),clubId:row.getInt32(0x20,true),age:row.getInt32(0x18,true),skill:row.getInt32(0x28,true),progress:row.getFloat32(0x80,true),youth:row.getUint8(0x120)!==0,youthRating:row.getInt32(0x128,true),youthProgress:row.getFloat32(0x12c,true),potential:row.getInt32(0x128,true),talent:row.getInt32(0x30,true),selected:row.getUint8(0x7c)!==0,morale:row.getInt32(0xe4,true),canImprove:canImprovePlayer(save,id)};
}
export function trainingRoster(save,clubId){
 const section=save.sections.find(s=>s.name==='players'),v=dataView(section.data),ids=[];
 for(let id=1;id<section.count;id++)if(v.getInt32(id*section.recordSize+0x20,true)===clubId)ids.push(id);
 return ids.map(id=>trainingSnapshot(save,id));
}
/** Apply one original development routine for a chosen player. The routines are
 * deterministic; `sessions` repeats them like consecutive weekly rounds. */
export function applyTraining(save,id,focus,{sessions=1}={}){
 if(!trainingFocuses.includes(focus))throw RangeError(`Unknown training focus ${focus}.`);
 if(!Number.isInteger(sessions)||sessions<1||sessions>maxTrainingSessions)throw RangeError(`sessions must be 1..${maxTrainingSessions}.`);
 const resolved=focus==='automatic'?trainingFocusFor(save,id):focus,before=trainingSnapshot(save,id);
 const routine=resolved==='senior'?developSeniorPlayer:resolved==='youth'?developYouthPlayer:declineOlderPlayer;
 for(let i=0;i<sessions;i++)routine(save,id);
 const after=trainingSnapshot(save,id);
 return {id,focus:resolved,sessions,before,after,changed:after.skill!==before.skill||after.youthRating!==before.youthRating||after.progress!==before.progress||after.youthProgress!==before.youthProgress};
}
/** Headless training plan: per-player focus and number of sessions. */
export function createTrainingSession({save,clubId,onEvent,onFinished}={}){
 if(!Number.isInteger(clubId))throw RangeError('A club id is required for the training window.');
 const plan=new Map(),events=[],reports=[];
 const emit=(event,payload={})=>{const entry={event,...payload};events.push(entry);onEvent?.(entry);return entry;};
 const view=()=>({clubId,rows:trainingRoster(save,clubId).map(row=>({...row,plan:plan.get(row.id)??null,automatic:trainingFocusFor(save,row.id)})),reports:reports.slice()});
 function setFocus(id,focus){if(!trainingFocuses.includes(focus))throw RangeError(`Unknown training focus ${focus}.`);const current=plan.get(id)??{focus:'automatic',sessions:1};plan.set(id,{...current,focus});emit('focus',{id,focus});return view();}
 function setSessions(id,sessions){if(!Number.isInteger(sessions)||sessions<1||sessions>maxTrainingSessions)throw RangeError(`sessions must be 1..${maxTrainingSessions}.`);const current=plan.get(id)??{focus:'automatic',sessions:1};plan.set(id,{...current,sessions});emit('sessions',{id,sessions});return view();}
 function train(id,focus,sessions){const report=applyTraining(save,id,focus??plan.get(id)?.focus??'automatic',{sessions:sessions??plan.get(id)?.sessions??1});reports.push(report);emit('train',report);onFinished?.(report);return report;}
 function applyPlan(){const ids=[...plan.keys()].sort((a,b)=>a-b),results=ids.map(id=>train(id));emit('plan',{ids,results});return results;}
 return {plan,view,setFocus,setSessions,train,applyPlan,get events(){return events;},get reports(){return reports;}};
}
/** Pure view model for the training table. */
export function trainingWindowView(state,language={}){
 const captions={title:languageText(language,1032,'First Team'),name:languageText(language,129,'Name'),age:languageText(language,50,'Age'),skill:languageText(language,49,'Skill'),progress:languageText(language,1036,'Progress'),talent:languageText(language,1037,'Talent'),focus:'Focus',apply:languageText(language,391,'Continue >>>')};
 const rows=state.rows.map(row=>{const progress=row.youth?row.youthProgress:row.progress;return {...row,focus:row.plan?.focus??'automatic',sessions:row.plan?.sessions??1,skillText:String(row.youth?row.youthRating:row.skill),progressText:`${fround(progress*100).toFixed(1)}%`,talentText:String(row.talent)};});
 return {form:'TrainingWindow',clubId:state.clubId,captions,focuses:trainingFocuses,rows,reports:state.reports};
}

function element(document,tag,attributes={}){
 const node=document.createElement(tag);
 for(const [key,value] of Object.entries(attributes))node.setAttribute(key,value);
 return node;
}
/** DOM host: pick a focus and session count per player, then apply the native
 * development routine to the real save. */
export function mountTrainingWindow(container,{save,clubId,language,onEvent,onFinished}={}){
 if(!container||typeof container.replaceChildren!=='function')throw TypeError('A container element is required.');
 const document=container.ownerDocument??globalThis.document;
 if(!document)throw TypeError('A document is required.');
 const session=createTrainingSession({save,clubId,language,onEvent,onFinished});
 const root=element(document,'section',{'data-training-window':'TrainingWindow'});
 root.style.cssText='font:12px/1.3 Arial,sans-serif;color:#111;background:#d4d0c8;border:1px solid #444;padding:10px;max-width:820px';
 const heading=element(document,'h2');heading.style.cssText='margin:0 0 6px;font-size:15px';
 const table=element(document,'table');table.style.cssText='border-collapse:collapse;width:100%';
 const logBox=element(document,'pre',{'data-training-field':'log'});logBox.style.cssText='background:#111;color:#8f8;padding:6px;max-height:160px;overflow:auto;white-space:pre-wrap;margin:8px 0 0';
 const planButton=element(document,'button',{'data-training-control':'apply-plan'});planButton.type='button';
 const controls=element(document,'div');controls.style.cssText='display:flex;gap:6px;margin-top:8px';
 const rows=new Map(),lines=[];
 let view=session.view();
 const formatReport=report=>`#${report.id} ${report.focus} x${report.sessions}: skill ${report.before.skill}→${report.after.skill} progress ${report.before.progress.toFixed(2)}→${report.after.progress.toFixed(2)} youth ${report.before.youthRating}→${report.after.youthRating}`;
 function buildRows(){
  rows.clear();
  const head=element(document,'tr');
  for(const label of ['Player','Age','Skill','Progress','Focus','Sessions','']){const th=element(document,'th');th.textContent=label;th.style.cssText='border:1px solid #999;padding:2px 4px;text-align:left';head.append(th);}
  table.replaceChildren(head);
  for(const row of view.rows){
   const tr=element(document,'tr',{'data-training-row':String(row.id)});
   const nameCell=element(document,'td');nameCell.textContent=`${row.name} #${row.id}${row.youth?' (youth)':''}`;nameCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   const ageCell=element(document,'td');ageCell.textContent=String(row.age);ageCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   const skillCell=element(document,'td',{'data-training-field':'skill'});skillCell.textContent=String(row.skill);skillCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   const progressCell=element(document,'td');progressCell.textContent=`${row.progress.toFixed(2)} / ${row.youthProgress.toFixed(2)}`;progressCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   const focusCell=element(document,'td');const focus=element(document,'select',{'data-training-control':'focus'});
   focus.replaceChildren(...trainingFocuses.map(value=>{const option=document.createElement('option');option.value=value;option.textContent=value;return option;}));
   focus.value=row.plan?.focus??'automatic';focus.addEventListener('change',()=>{session.setFocus(row.id,focus.value);render();});
   focusCell.append(focus);focusCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   const sessionsCell=element(document,'td');const sessions=element(document,'input',{'data-training-control':'sessions'});
   sessions.type='number';sessions.min='1';sessions.max=String(maxTrainingSessions);sessions.value=String(row.plan?.sessions??1);sessions.style.width='48px';
   sessions.addEventListener('change',()=>{session.setSessions(row.id,Number(sessions.value));render();});
   sessionsCell.append(sessions);sessionsCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   const actionCell=element(document,'td');const apply=element(document,'button',{'data-training-control':'apply'});apply.type='button';apply.textContent='Train';
   apply.addEventListener('click',()=>{const report=session.train(row.id);logBox.textContent=lines.push(formatReport(report))&&lines.slice(-40).join('\n');render();});
   actionCell.append(apply);actionCell.style.cssText='border:1px solid #bbb;padding:2px 4px';
   tr.append(nameCell,ageCell,skillCell,progressCell,focusCell,sessionsCell,actionCell);
   table.append(tr);rows.set(row.id,{tr,skillCell,progressCell,focus,sessions});
  }
 }
 function render(){
  view=session.view();
  heading.textContent=`Training (${languageText(language,1032,'First Team')}) · club ${view.clubId}`;
  planButton.textContent='Apply plan';
  if(rows.size!==view.rows.length)buildRows();
  else for(const row of view.rows){const nodes=rows.get(row.id);if(!nodes)continue;nodes.skillCell.textContent=String(row.skill);nodes.progressCell.textContent=`${row.progress.toFixed(2)} / ${row.youthProgress.toFixed(2)}`;nodes.focus.value=row.plan?.focus??'automatic';}
 }
 planButton.addEventListener('click',()=>{const results=session.applyPlan();logBox.textContent=lines.concat(results.map(formatReport)).slice(-40).join('\n');render();});
 controls.append(planButton);
 root.append(heading,table,controls,logBox);
 container.replaceChildren(root);
 render();
 return {session,render,element:root,get view(){return session.view();}};
}
