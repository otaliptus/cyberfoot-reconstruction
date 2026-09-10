import {matchMinute} from './match-score-plan.mjs';
import {record,shortString} from './save-format.mjs';import {resultDetailLabels,resultRows,resultLineupRows,resultSubstitutionChain,selectResultHistory} from './results-data.mjs';import {clubCrestPath} from './club-crest.mjs';import {originalMoney} from './finance-view.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Form67 host under construction. Selection uses recovered archive rules;
 * navigation buttons require their original career controllers. */
export function createResultsHost(renderer,{save,state,language,crestAssets,onContinue,onTable,onWeeklyTeam}){
 let active=null;
 renderer.register('Form67.grid1SelectCell',historyId=>{if(active?.rows.some(r=>r.historyId===historyId)){active.selectedHistoryId=historyId;renderer.update(windowView());}});
 if(onContinue)renderer.register('Form67.bt3Click',onContinue);
 if(onTable)renderer.register('Form67.bt2Click',onTable);
 if(onWeeklyTeam)renderer.register('Form67.Button2Click',onWeeklyTeam);
 function windowView(){
  const current=active.rows.find(r=>r.historyId===active.selectedHistoryId),bytes=record(save,'records_0066b154',current.historyId),v=view(bytes),labels=resultDetailLabels(bytes,language,active.previousLabels);active.previousLabels=labels;
  const properties=Object.fromEntries(Object.entries(labels).map(([name,Caption])=>[name,{Caption}]));
  const captions={label6:711,label2:657,TntLabel1:658,TntLabel2:659,TntLabel3:660,TntLabel4:661,bt2:656,button2:991,bt3:484};for(const [name,id] of Object.entries(captions))properties[name]={Caption:language[id].text};
  Object.assign(properties,{Panel1:{Left:Math.trunc((renderer.canvas.width-793)/2)-1,Top:Math.trunc((renderer.canvas.height-629)/2)-1},Timer1:{Enabled:false},combopais:{Visible:false},combolib:{Visible:false},labg:{HTMLText:language[655].text},Label29:{Caption:''},lcamp:{Caption:active.caption},Label30:{Caption:current.names[0]},Label31:{Caption:current.names[1]},Label70:{Caption:shortString(record(save,'clubs',current.clubs[0]),0x1d0,35)},Label8:{Caption:String(v.getInt32(0x14,true))},Label26:{Caption:originalMoney(v.getInt32(0x10,true))}});
  const lineups=current.clubs.map(club=>resultLineupRows(save,current.historyId,club).map(row=>({...row,name:state.players[row.playerId].name,substitutions:resultSubstitutionChain(save,current.historyId,row.playerId).filter(id=>id>=0).map(id=>{const sub=view(record(save,'records_0066ae14',id));return {name:state.players[sub.getInt32(0,true)].name,tick:sub.getInt32(8,true),rating:sub.getFloat32(12,true),injuries:sub.getInt32(28,true)};})}))),panels={card1:[],card2:[],l_gols:[]};
  const events=save.sections.find(s=>s.name==='records_0066b160'),ev=view(events.data),full=!!view(save.career).getUint8(0xdd),score=[0,0];
  for(let i=0;i<events.count;i++){const o=i*24;if(ev.getInt32(o+20,true)!==current.historyId)continue;const type=ev.getInt32(o,true),club=ev.getInt32(o+4,true),player=ev.getInt32(o+8,true),detail=ev.getInt32(o+12,true),tick=ev.getInt32(o+16,true),side=club===current.clubs[0]?0:1,minute=matchMinute(tick,full)+(full?"'":tick<93?'/1º ':'/2º '),name=state.players[player]?.name??'';
   if([4,8,14,15].includes(type)){score[side]++;panels.l_gols.push({text:score.join('x')+' '+name+' '+minute,align:side?'right':'left'});}
   else if(type===13)panels['card'+(side+1)].push({icon:['','i_ca','i_cv','i_cacv'][detail],text:name+' '+minute});
  }
  return {form:'Form67',fullGameGauge:full,background:'assets/original-f01.jpg',properties,lineups,panels,resultGrid:active.grid,selectedHistoryId:current.historyId,imagePaths:{escudo:current.crests[0],escudo2:current.crests[1]}};
 }
 async function open({subgroup=0,caption=''}){
  const rows=resultRows(save,selectResultHistory(save,{subgroup})).map(row=>({...row,crests:row.clubs.map(id=>clubCrestPath(save,id,crestAssets))}));if(!rows.length)throw Error('No archived results for this competition day.');
  const c=view(save.career),league=view(record(save,'records_0066aca0',subgroup)),divisions=league.getInt32(0x144,true),grid=[...rows];
  // Header insertion positions from5f60a4. This host currently opens league results.
  if(c.getInt32(0x88,true)!==1)throw Error('Other results layouts remain unported.');
  const mode=c.getInt32(0x168,true);for(let division=1;division<=4;division++){if(mode===2?division>divisions:division>2&&division>divisions)continue;const index=(division-1)*(mode===2?11:6);if(index===0||grid.length>=index-1)grid.splice(index,0,{header:language[34+division].text});}
  await renderer.loadCrests(rows.flatMap(r=>r.crests));const original=renderer.forms.get('Form67');renderer.forms.set('Form67',{...original,properties:{...original.properties,ClientWidth:renderer.canvas.width-2,ClientHeight:renderer.canvas.height-2}});
  active={rows,grid,selectedHistoryId:rows[0].historyId,caption,previousLabels:{}};await renderer.show(windowView());
 }
 return {open,get active(){return active;},snapshot:()=>active?{selectedHistoryId:active.selectedHistoryId,rows:active.rows,lineups:windowView().lineups}:null};
}
