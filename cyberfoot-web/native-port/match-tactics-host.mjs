import {clubKitPath,selectMatchKit} from './club-kit.mjs';
import {matchStatistics,matchStatisticsRows} from './match-statistics.mjs';
import {matchEventLog} from './match-event-log.mjs';
import {initializeMatchShirts,swapMatchPitchPlayers,repositionMatchPlayer} from './manual-match-tactics.mjs';
import {substituteDuringMatch} from './manual-match-substitution.mjs';
import {setTactic,tacticalControlProperties} from './tactics.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {record,shortString} from './save-format.mjs';
function formationText(lineup){const n=[0,0,0];for(const p of lineup.positions.slice(0,10)){if(p>=1&&p<=9)n[0]++;else if(p>=10&&p<=17)n[1]++;else if(p>=18&&p<=25)n[2]++;}return n.join('-');}
export function matchTacticsView({save,state,language,assets,fixture,lineup,side,minute,period,benchOrdinals,shirtPath,statistics,showStatistics=false,busy=false,message=''}){
 const club=state.clubs[fixture.clubs[side-1]],roles=[143,147,145,149,151].map(i=>language[i].text),positionLabels=[roles[0],roles[1],...Array(6).fill(roles[2]),roles[1],...Array(8).fill(roles[3]),...Array(8).fill(roles[4])],properties={...tacticalControlProperties(club,language)};
 for(const [control,label] of [['comboej','lb_tat1'],['combomarc','lb_tat2'],['combo_cataq','lb_tat3']]){properties[control]={...properties[control],Visible:club.human,Enabled:!busy};properties[label]={HTMLText:properties[control].Items[properties[control].ItemIndex],Visible:!club.human};}
 for(let s=1;s<=2;s++){
  const id=fixture.clubs[s-1],bytes=record(save,'clubs',id),v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),name=state.clubs[id].name;
  properties['bck'+s]={'Fill.Color':v.getInt32(0xac,true)};properties['nometime'+s]={'Caption.Text':name,'Caption.ColorEnd':v.getInt32(0xb0,true)};properties['nometime_s'+s]={'Caption.Text':name};
  properties['sh'+s]={Visible:s!==side};properties['p'+s]={HTMLText:String(fixture.counters[0x44+s*4]??0)};
  let manager='';const section=save.sections.find(x=>x.name==='records_0066b718');const managerId=v.getInt32(0x44,true);if(section&&managerId>=0&&managerId<section.count)manager=shortString(record(save,section.name,managerId),0,127);
  properties['l_tec'+s]={HTMLText:manager};
 }
 Object.assign(properties,{info1:{HTMLText:message||`<shad>${club.name} - ${formationText(lineup)}</shad>`},bt_irprojogo:{Caption:language[710].text,Enabled:!busy},label7:{Caption:language[711].text},lb_jogo1:{Visible:false},lb_estadio:{HTMLText:fixture.stadium},lb_pub:{HTMLText:String(fixture.field28??0)},lb_renda:{HTMLText:String(fixture.income??0)},lb_tempo:{HTMLText:String(minute)},lb_tempo2:{HTMLText:language[period===1?504:505].text},teste:{HTMLText:message},labadvert:{Visible:false}});
 const fullGameGauge=!!new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength).getUint8(0xdd);
 const eventLog=matchEventLog(state.events,fixture,state,language,{fullGameGauge});
 return {form:'Form88',shirtPath,eventLog,statistics:showStatistics?matchStatisticsRows(statistics,language):null,background:'assets/original-f01.jpg',benchOrdinals,lineup,players:state.players,roleLabels:roles,positionLabels,editable:club.human,busy,crests:fixture.clubs.map(id=>clubCrestPath(save,id,assets)),properties};
}
/** Development host for the recovered manual operations. Full FormCreate,
 * full label fidelity and warning labels remain unported.
 */
export function createMatchTacticsHost(renderer,{save,state,language,assets,kitAssets,rng,recordEvent,presentEvent}){
 const benchLayout=lineup=>{let ordinal=0;return lineup.bench.map(id=>id>0?++ordinal:0);};
 let active=null;
 const view=()=>matchTacticsView({save,state,language,assets,...active});
 const update=()=>renderer.update(view());
 function close(){if(!active||active.busy)return false;if(active.showStatistics){active.showStatistics=false;update();return false;}const resolve=active.resolve;active=null;renderer.close();resolve();return true;}
 renderer.register('Form88.bt_irprojogoClick',close);
 renderer.register('Form88.Image4Click',()=>{if(active&&!active.busy){active.showStatistics=true;update();renderer.canvas.focus();}});
 renderer.register('Form88.closeStatistics',()=>{if(active){active.showStatistics=false;update();}});
 for(const side of [1,2])renderer.register(`Form88.nometime${side}Click`,()=>{if(!active||active.busy||active.showStatistics||active.side===side)return;active.side=side;active.lineup=active.teams[side-1];active.benchOrdinals=benchLayout(active.lineup);active.shirtPath=selectMatchKit(save,active.fixture,side,state,kitAssets,{previous:active.shirtPath});update();});
 for(const control of ['comboej','combomarc','combo_cataq'])renderer.register('Form88.'+control+'Change',index=>{if(!active||active.busy||active.showStatistics||!state.clubs[active.fixture.clubs[active.side-1]].human)return;setTactic(state.clubs[active.fixture.clubs[active.side-1]],control,index);update();});
 renderer.onMatchDrop=async({sourceSlot,targetSlot,x,y})=>{
  if(!active||active.busy||active.showStatistics||!state.clubs[active.fixture.clubs[active.side-1]].human)return;
  const a=active;a.busy=true;update();
  try{
   if(targetSlot){swapMatchPitchPlayers(a.lineup,sourceSlot,targetSlot,state,{render:update});const result=await substituteDuringMatch({...a,sourceSlot,targetSlot,state,rng,recordEvent,presentEvent,refresh:update});a.message=result.languageId?language[result.languageId].text:'';}
   else repositionMatchPlayer(a.lineup,sourceSlot,x,y,state,{render:update});
  }finally{a.busy=false;if(active===a)update();}
 };
 async function open({fixture,teams,side=1,minute=0,period=1}){
  if(active)throw Error('Match tactics already open.');
  const result=new Promise(resolve=>{active={fixture,teams,lineup:teams[side-1],benchOrdinals:benchLayout(teams[side-1]),side,minute,period,statistics:matchStatistics(fixture,state),showStatistics:false,busy:false,message:'',resolve};});
  initializeMatchShirts(rng);active.shirtPath=selectMatchKit(save,fixture,side,state,kitAssets);
  await Promise.all([...new Set([active.shirtPath,...fixture.clubs.flatMap(id=>[1,2,3].map(k=>clubKitPath(save,id,k,kitAssets))).filter(Boolean)])].map(path=>renderer.bitmap(path)));
  await renderer.loadCrests(fixture.clubs.map(id=>clubCrestPath(save,id,assets)));await renderer.show(view(),{modal:true});renderer.canvas.focus();return result;
 }
 return {open,close,get active(){return active;}};
}
