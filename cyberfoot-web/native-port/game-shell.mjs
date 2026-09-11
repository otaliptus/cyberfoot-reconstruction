/** Real Cyberfoot 2015 game shell.
 *
 * Boots into the original main menu (Form1, caption "Cyberfoot 2015", the four
 * clickable TShape hotspots and the SAIR label) painted by vcl-renderer from
 * forms.json. New Game/Load Game drive the verified career modules; the lineup,
 * match, results, route screens, season transition, auction and contract
 * windows are the original DFM forms. Only the VCL windows are visible; a
 * hidden F12 dev overlay toggles the auxiliary windows.
 */
import {VclRenderer} from './vcl-renderer.mjs';
import {createCareerSave,careerSaveSummary,createCareerRecord,writeStoredCareer,listStoredCareers,readStoredCareerSave,playableClubIds,removeStoredCareer} from './career-menu.mjs';
import {readSave,record,shortString} from './save-format.mjs';
import {OriginalRandom} from './match-core.mjs';
import {openCareer} from './career-state.mjs';
import {careerAgenda,careerSchedule} from './schedule.mjs';
import {buildLineupRoster} from './lineup-roster.mjs';
import {autoSelectScreenLineup} from './lineup-screen.mjs';
import {setTactic} from './tactics.mjs';
import {saveScreenLineup} from './saved-lineup.mjs';
import {lineupView} from './lineup-view.mjs';
import {commitHumanLineup} from './human-lineup-commit.mjs';
import {openRouteMatchSession,prepareRouteTeams} from './route-match-session.mjs';
import {continueDomesticCompetition} from './domestic-competition-continuation.mjs';
import {nativeResultsCareerEffects} from './results-native-effects.mjs';
import {continueResultsCareer} from './results-career-continuation.mjs';
import {advanceCareerSeason,nextHumanFixtureDay,preSeasonFriendlyView,seasonTransitionView} from './season-transition.mjs';
import {createSeasonMoveHost} from './season-move-host.mjs';
import {selectResultHistory,resultDetailLabels,resultRows,resultLineupRows,resultSubstitutionChain} from './results-data.mjs';
import {settleAutomaticDecider} from './knockout-decider.mjs';
import {finalizeCupChampion} from './champion-finalization.mjs';
import {selectNationalPlayers} from './national-setup.mjs';
import {clubHubView,competitionTableView,nationalHubView,nationalAssignmentView,automaticNextScreens,nationalAssignmentCandidates} from './route-screens.mjs';
import {nationalManagerAssignmentIndex} from './results-routing.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {clubKitPath} from './club-kit.mjs';
import {originalMoney} from './finance-view.mjs';
import {matchMinute} from './match-score-plan.mjs';
import {createAuctionSession} from './auction-window.mjs';
import {createContractSession} from './contract-window.mjs';

const query=new URLSearchParams(location.search);
const [forms,language,template,kitAssets,crestAssets]=await Promise.all([
 fetch('forms.json').then(response=>response.json()),
 fetch('language.json').then(response=>response.json()),
 fetch('tests/original-career.s15').then(response=>response.arrayBuffer()),
 fetch('kit-assets.json').then(response=>response.json()),
 fetch('crest-assets.json').then(response=>response.json())
]);
const templateBytes=new Uint8Array(template);
const templateSave=readSave(templateBytes);
const playableSet=new Set(playableClubIds(templateSave));
const dataView=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
const manualClock=query.has('manualClock');
const autoInteractions=query.has('autoInteractions')||query.has('automaticInteractions');
const renderer=await new VclRenderer(document.getElementById('screen'),forms,{strict:false}).prepare();
const unhandled=[];
renderer.onUnhandled=operation=>{unhandled.push(operation);};

let save=null,career=null,rng=null,state=null,agenda=null,rows=null,slots=null,clubId=11;
let formation=4,checkedKit=1,shirtImage=null,kitPaths=[],opponentId=null,opponentKit=null;
let matchSession=null,starting=false,startMessage=null,fixtureCompetition=1,fixtureSubgroup=0;
let roundDay=0,roundDate=0,roundFixtureId=-1,routeScreen=null,routeSessionFixtures=[];
let rounds=0,continuations=[],seasonTransitions=[],playedCompetition=null,matchFailure=null;
let runtime={nationalManagerCount:0,nationalAssignmentsActive:false},temporary={lineups:[],matchTeams:[]};
let seasonMoveHost=null,auction=null,contractSession=null,auctionTimer=null,resultsActive=null;
let clock=2015;

const currentDate=()=>{if(!save)return undefined;const calendar=careerSchedule(save),day=career.getInt32(0x16c,true);return calendar[day-1]?.date;};
const opponent=()=>state.clubs[opponentId].name;

/* ------------------------------------------------------------- main menu */

function clubChoices(){
 const clubs=templateSave.sections.find(section=>section.name==='clubs'),list=[];
 for(let id=0;id<clubs.count;id++){const bytes=record(templateSave,'clubs',id),view=dataView(bytes),name=shortString(bytes,0,25),country=view.getInt32(0x3c,true),division=view.getInt32(0x7c,true);list.push({id,name,country,division,playable:playableSet.has(id)});}
 return list;
}
function menuFrame(){
 const menuFont=color=>({name:'Arial',height:14,bold:true,italic:false,underline:false,strikeout:false,color});
 const smallFont=color=>({name:'Arial',height:11,bold:false,italic:false,underline:false,strikeout:false,color});
 const dynamic=[];
 [1,2,3,4].forEach((id,index)=>dynamic.push({kind:'text',x:398,y:109+47*index,w:185,h:20,text:language[id].text,lines:null,font:menuFont('#ffff00'),color:'#ffff00',align:'center',wordWrap:false,shadow:{offset:1,color:'#000000'},background:null,vAlign:'top'}));
 dynamic.push({kind:'text',x:15,y:204,w:220,h:16,text:language[5].text,lines:null,font:smallFont('#ffffff'),color:'#ffffff',align:'left',wordWrap:false,shadow:null,background:null,vAlign:'top'});
 dynamic.push({kind:'text',x:25,y:238,w:180,h:16,text:'www.cyberfoot.net',lines:null,font:{...smallFont('#ffff00'),bold:true},color:'#ffff00',align:'left',wordWrap:false,shadow:null,background:null,vAlign:'top'});
 return {form:'Form1',properties:{comboi2:{Items:[language[0].text],ItemIndex:0}},dynamic};
}
function showMenu(){selector='menu';stopClubEditor();void renderer.show(menuFrame());updateDevStatus();}

let newGameName='New Manager',newGameClub=11,loadSelection=0,selector='menu';
function newGameFrame(){
 const clubs=clubChoices(),playable=clubs.filter(club=>club.playable),list=playable.length?playable:clubs;
 if(!list.some(club=>club.id===newGameClub))newGameClub=list[0]?.id??0;
 const index=Math.max(0,list.findIndex(club=>club.id===newGameClub));
 const countryNames=[...new Set(clubs.map(club=>club.country))].sort((a,b)=>a-b);
 return {form:'Form11',properties:{
  Edit1:{Text:newGameName},
  combo1:{Items:list.map(club=>`${club.name} · div ${club.division}`),ItemIndex:index},
  combonac:{Items:countryNames.map(id=>language[786+id]?.text??`${id}`),ItemIndex:0},
  button1:{Caption:language[41].text,Enabled:true},
  Label9:{Caption:language[34].text},
  label11:{Caption:language[32].text},
  Label12:{Caption:language[395].text},
  Label3:{Caption:language[43].text},
  Label4:{Caption:language[44].text},
  Label1:{Caption:language[45].text},
  Label2:{Caption:language[141].text},
  UniHTMLabel7:{HTMLText:'<shad>'+language[11].text+'</shad>'},
  Label5:{Caption:language[35].text},Label6:{Caption:language[36].text},Label7:{Caption:language[37].text},Label8:{Caption:language[38].text}
 },clubs:list};
}
function showNewGame(){selector='new-game';void renderer.show(newGameFrame());updateDevStatus();}

function loadGameFrame(){
 const careers=listStoredCareers(localStorage),selected=careers[loadSelection];
 const grid=careers.map((entry,index)=>({cells:{nxstatus:'',nxarquivo:`${entry.managerName??''} — ${entry.clubName??''} (${entry.dateIso??''})`},historyId:index}));
 const properties={BitBtn1:{Caption:language[2].text},BitBtn2:{Caption:'<<'},BitBtn3:{Caption:'X'}};
 if(selected)Object.assign(properties,{
  Label1:{Visible:true,Caption:language[4].text},Label2:{Visible:true,Caption:selected.managerName??''},
  Label3:{Visible:true,Caption:language[32].text},Label4:{Visible:true,Caption:selected.clubName??''},
  Label6:{Visible:true,Caption:language[67].text},Label8:{Visible:true,Caption:selected.dateIso??''}
 });
 return {form:'Form21',properties,grids:{grid1:grid},careers};
}
function showLoadGame(){selector='load-game';loadSelection=Math.min(loadSelection,Math.max(listStoredCareers(localStorage).length-1,0));void renderer.show(loadGameFrame());updateDevStatus();}

function showStaticMenuWindow(form){selector='message';void renderer.show({form,properties:{}});updateDevStatus();}

/* ------------------------------------- original new-game settings (Form9) */

function gameSettingsFrame(){
 const clubs=clubChoices(),grouped=new Map();
 for(const club of clubs)grouped.set(club.country,(grouped.get(club.country)??0)+1);
 const countryName=id=>language[786+id]?.text??String(id);
 const rows=[...grouped.entries()].sort((a,b)=>countryName(a[0]).localeCompare(countryName(b[0]))).map(([country,count])=>({cells:{nxpais:'',NxImageColumn2:'',NxTextColumn1:countryName(country),nxtimes:String(count),NxTextColumn3:''},value:country}));
 const countries=[...grouped.keys()].sort((a,b)=>a-b).map(id=>({text:countryName(id),value:id}));
 return {form:'Form9',properties:{
  UniHTMLabel7:{HTMLText:'<p align="left"><shad>'+language[10].text+'</shad></p>'},
  HTMLabel2:{HTMLText:language[11].text},
  HTMLabel5:{HTMLText:language[23].text},
  HTMLabel1:{HTMLText:language[33].text},
  HTMLabel3:{HTMLText:language[18].text},
  HTMLabel4:{HTMLText:language[27].text},
  HTMLabel6:{HTMLText:'<p align="left">'+language[28].text+'</p>',WordWrap:true},
  UniHTMLabel1:{HTMLText:language[19].text},
  UniHTMLabel2:{HTMLText:language[21].text},
  UniHTMLabel3:{HTMLText:language[22].text},
  UniHTMLabel4:{HTMLText:language[15].text},
  UniHTMLabel5:{HTMLText:language[16].text},
  UniHTMLabel6:{HTMLText:language[17].text},
  ComboBox1:{Items:countries.map(country=>country.text),ItemIndex:0},
  ComboBox2:{ItemIndex:0},
  ckcopa:{Checked:true,Enabled:true,Caption:''},
  ckinter1:{Checked:true,Enabled:true,Caption:''},
  ckinter2:{Checked:false,Enabled:true,Caption:''},
  ckcopamundo:{Checked:false,Enabled:false,Caption:''},
  ckeurocopa:{Checked:false,Enabled:false,Caption:''},
  ckcopaamerica:{Checked:false,Enabled:false,Caption:''},
  ckgruposcopamundo:{Visible:false},
  ckestadual:{Visible:false},
  xibutton1:{Caption:language[30].text},
  xibutton2:{Caption:language[29].text}
 },grids:{list1:rows},headers:{NxTextColumn1:language[744].text,nxtimes:language[739].text},countries,settingsCountry:countries[0]?.value??-1};
}
function showGameSettings(){selector='new-game-settings';void renderer.show(gameSettingsFrame());updateDevStatus();}
renderer.register('Form9.XiButton1Click',()=>showMenu());
renderer.register('Form9.XiButton2Click',()=>showNewGame());
renderer.register('Form9.list1CellClick',index=>{
 const frame=gameSettingsFrame(),row=frame.grids.list1[Number(index)||0];
 if(!row)return;
 const selected=row.value===frame.settingsCountry?frame.countries[0]?.value:row.value;
 const next={...frame,settingsCountry:selected,properties:{...frame.properties,ComboBox1:{Items:frame.countries.map(country=>country.text),ItemIndex:Math.max(0,frame.countries.findIndex(country=>country.value===selected))}}};
 void renderer.show(next);updateDevStatus();
});

/* --------------------------------- original club-editor loading (Form2) */

let clubEditorTimer=null;
function clubEditorFrame(progress,total){
 return {form:'Form2',properties:{
  Label5:{Caption:language[3].text},
  Label6:{Caption:language[9].text},
  Label4:{Caption:language[738].text},
  Label3:{Caption:String(total)},
  barra:{Position:progress,Max:100}
 }};
}
function showClubEditor(){
 selector='club-editor';stopClubEditor();
 const total=clubChoices().length;let progress=0;
 void renderer.show(clubEditorFrame(0,total));
 clubEditorTimer=setInterval(()=>{
  progress=Math.min(100,progress+10);
  if(renderer.frame?.form==='Form2')renderer.update(clubEditorFrame(progress,total));
  if(progress>=100){stopClubEditor();setTimeout(()=>{if(renderer.frame?.form==='Form2')showMenu();},350);}
 },70);
 updateDevStatus();
}
function stopClubEditor(){if(clubEditorTimer){clearInterval(clubEditorTimer);clubEditorTimer=null;}}

/* ------------------------------------------------------ new game creation */

function storeCareerBytes(bytes,managerName,clubId){
 const summary=careerSaveSummary(bytes),promise=createCareerRecord(bytes,{managerName,clubId,language:language[0].text,summary}).then(entry=>{try{writeStoredCareer(localStorage,entry);}catch{}return entry;});
 return promise;
}
async function newGame({managerName=newGameName,clubId=newGameClub}={}){
 newGameName=String(managerName||'New Manager').slice(0,25);
 const clubs=clubChoices(),chosen=clubs.find(club=>club.id===clubId&&club.playable)??clubs.find(club=>club.id===newGameClub)??clubs[0];
 newGameClub=chosen.id;
 const bytes=createCareerSave({managerName:newGameName,clubId:newGameClub,language:[language[0].text],seed:2015,template:templateBytes});
 await storeCareerBytes(bytes,newGameName,newGameClub);
 await enterCareer(bytes);
 return careerSaveSummary(bytes);
}

/* --------------------------------------------------------- career driving */

renderer.register('Form1.Shape1MouseDown',()=>showGameSettings());
renderer.register('Form1.Shape2MouseDown',()=>showLoadGame());
renderer.register('Form1.Shape3MouseDown',()=>showClubEditor());
renderer.register('Form1.Shape4MouseDown',()=>showStaticMenuWindow('Form42'));
renderer.register('Form1.TntLabel1Click',()=>showMenu());
renderer.register('Form1.comboi2Change',()=>showMenu());
renderer.register('Form11.Edit1Change',value=>{newGameName=String(value??'').slice(0,25);});
renderer.register('Form11.button1Click',async()=>{
 const edit=renderer.fieldValues['Form11.Edit1']?.value??newGameName;
 const combo=renderer.fieldValues['Form11.combo1']?.value??0;
 const list=newGameFrame().clubs;
 newGameClub=list[combo]?.id??newGameClub;
 await newGame({managerName:edit,clubId:newGameClub});
});
renderer.register('Form21.grid1SelectCell',index=>{loadSelection=Number(index)||0;renderer.update(loadGameFrame());});
renderer.register('Form21.BitBtn1Click',async()=>{const entry=listStoredCareers(localStorage)[loadSelection];if(!entry)return;const bytes=await readStoredCareerSave(localStorage,entry.id);await enterCareer(bytes);});
renderer.register('Form21.BitBtn2Click',()=>showMenu());
renderer.register('Form21.BitBtn3Click',()=>{const entry=listStoredCareers(localStorage)[loadSelection];if(entry){removeStoredCareer(localStorage,entry.id);loadSelection=0;}renderer.update(loadGameFrame());});

function managerDialogsHost(){return {humanDismissal:async()=>{},showChanges:async()=>{},showOffer:async()=>{},humanNext,automaticNext,showMove:move=>seasonMoveHost?seasonMoveHost.open(move):Promise.resolve()};}

function prepareRound(fromCursor=false){
 agenda=careerAgenda(save);
 let day=agenda.nextDay,date=agenda.nextDate,fixtureId=agenda.fixtureId;
 const onCursor=agenda.currentFixtureId>=0?agenda.fixtures[agenda.currentFixtureId]:null;
 if(fromCursor&&onCursor&&!onCursor.complete){day=agenda.currentDay;date=agenda.currentDate;fixtureId=agenda.currentFixtureId;}
 if(fixtureId<0){
  const skip=nextHumanFixtureDay(save,careerSchedule(save),clubId,agenda.nextDay);
  if(skip>agenda.nextDay){career.setInt32(0x16c,skip-1,true);agenda=careerAgenda(save);day=agenda.nextDay;date=agenda.nextDate;fixtureId=agenda.fixtureId;}
 }
 if(fixtureId<0)return false;
 roundDay=day;roundDate=date;roundFixtureId=fixtureId;
 const scheduled=dataView(record(save,'records_0066afa0',fixtureId));
 fixtureCompetition=scheduled.getInt32(0x18,true);fixtureSubgroup=scheduled.getInt32(0x38,true);
 career.setInt32(0x16c,day,true);career.setInt32(0x88,fixtureCompetition,true);career.setInt32(0x6c8,1,true);
 state=openCareer(save,{currentDate:date});if(query.has('automaticInteractions'))state.automaticInteractions=true;
 rows=buildLineupRoster(state,clubId);
 slots=autoSelectScreenLineup(state,rows,formation,save,clubId).slots;
 opponentId=agenda.fixtures[fixtureId].clubs.find(id=>id!==clubId);
 kitPaths=[1,2,3].map(kit=>clubKitPath(save,clubId,kit,kitAssets));opponentKit=clubKitPath(save,opponentId,1,kitAssets);
 checkedKit=[2,3].includes(state.clubs[clubId].selectedKit)&&kitPaths[state.clubs[clubId].selectedKit-1]?state.clubs[clubId].selectedKit:1;
 shirtImage=kitPaths[checkedKit-1]??null;
 return true;
}
function viewModel(){
 const result=lineupView(state,rows,slots,formation,clubId,language,{remember:!!career.getUint8(0xde),opponent:opponent()});
 result.shirtImage=shirtImage;
 result.kitImagePaths={Image13:opponentKit,Image2:kitPaths[0]??'assets/original-shirt-1.png',Image4:kitPaths[1],Image5:kitPaths[2]};
 for(const k of [1,2,3])result.properties['rd'+k]={Visible:k===1||!!kitPaths[k-1],Checked:checkedKit===k,Caption:''};
 result.properties.ckescalacao={Caption:language[281].text};
 return result;
}
function showHub(){
 const frame=clubHubView(save,language,{state,date:currentDate()});
 void renderer.show(frame);updateDevStatus();
}
for(const k of [1,2,3])renderer.register('Form87.rd'+k+'Click',()=>{checkedKit=k;if(kitPaths[k-1]){state.clubs[clubId].selectedKit=k;shirtImage=kitPaths[k-1];}renderer.update(viewModel());});
renderer.register('Form87.combtatClick',index=>{formation=index+1;slots=autoSelectScreenLineup(state,rows,formation,save,clubId).slots;renderer.update(viewModel());});
for(const [control,operation] of [['comboej','comboejClick'],['combomarc','combomarcChange'],['combo_cataq','combo_cataqChange']])renderer.register('Form87.'+operation,index=>{setTactic(state.clubs[clubId],control,index);renderer.update(viewModel());});
renderer.register('Form87.combo1Change',index=>{state.clubs[clubId].captain=rows[index].playerId;renderer.update(viewModel());});
renderer.register('Form87.combo2Change',index=>{state.clubs[clubId].setPiecePlayer=rows[index].playerId;renderer.update(viewModel());});
renderer.register('Form87.ckescalacaoClick',checked=>{career.setUint8(0xde,checked?1:0);renderer.update(viewModel());});
renderer.register('Form87.bt_voltarClick',()=>{if(career.getUint8(0xde))saveScreenLineup(save,clubId,slots);showHub();});
renderer.onLineupDrop=({source,targetSlot})=>{
 if(starting||matchSession)return;
 if(targetSlot!==undefined&&targetSlot!==null){
  if(source.playerId!==undefined){const row=rows.find(entry=>entry.playerId===source.playerId);if(row)slots[targetSlot-1]=row;}
  else if(source.slot){const swap=slots[source.slot-1];slots[source.slot-1]=slots[targetSlot-1];slots[targetSlot-1]=swap;}
 }
 renderer.update(viewModel());
};

function presentScreen(screen){return new Promise(resolve=>{routeScreen={view:screen,resolve};void renderer.show(screen);});}
function resolveScreen(){if(!routeScreen){renderer.close();return false;}const entry=routeScreen;routeScreen=null;entry.resolve();return true;}
for(const key of ['Form26.bt3Click','Form75.btjogarClick','Form77.bt2Click','Form85.XiButton1Click','Form85.XiButton2Click'])renderer.register(key,resolveScreen);
renderer.register('Form13.btjogarClick',()=>{if(routeScreen)resolveScreen();else void renderer.show(viewModel());});
renderer.register('Form13.lb_infonextClick',()=>{if(routeScreen)resolveScreen();else void renderer.show(viewModel());});
async function presentScreens(screens){for(const screen of screens){await presentScreen(screen);if(screen.form==='Form77'){runtime.routeNationalIndex=screen.managerIndex;selectNationalPlayers(save,screen.country,screen.nationalClubId,{rng});}}}
async function humanNext(){
 const competition=career.getInt32(0x88,true),date=currentDate();
 if(competition>=7&&competition<=9){
  const assigned=nationalManagerAssignmentIndex(save,runtime,{date}),candidates=assigned?nationalAssignmentCandidates(save,{date}):[];
  runtime.routeAssignments=candidates;
  const screens=[];
  for(const candidate of candidates)if(candidate.eligible)screens.push(nationalAssignmentView(save,runtime,language,{index:candidate.index,state}));
  screens.push(nationalHubView(save,runtime,language,{state}));
  return presentScreens(screens);
 }
 return presentScreen(clubHubView(save,language,{state,date}));
}
async function automaticNext(){return presentScreens(automaticNextScreens(save,runtime,language,{state,subgroup:fixtureSubgroup,currentDate:currentDate(),date:currentDate()}));}

function showResults({subgroup=0,caption=''}){
 const history=selectResultHistory(save,{subgroup}),resultList=resultRows(save,history).map(row=>({...row,crests:row.clubs.map(id=>clubCrestPath(save,id,crestAssets))}));
 if(!resultList.length)return null;
 const league=dataView(record(save,'records_0066aca0',subgroup)),divisions=league.getInt32(0x144,true),grid=[...resultList];
 if(career.getInt32(0x88,true)!==1)throw Error('Other results layouts remain unported.');
 const mode=career.getInt32(0x168,true);
 for(let division=1;division<=4;division++){if(mode===2?division>divisions:division>2&&division>divisions)continue;const index=(division-1)*(mode===2?11:6);if(index===0||grid.length>=index-1)grid.splice(index,0,{header:language[34+division].text});}
 let selectedHistoryId=resultList[0].historyId,previousLabels={};
 const windowView=()=>{
  const current=resultList.find(row=>row.historyId===selectedHistoryId),bytes=record(save,'records_0066b154',current.historyId),view=dataView(bytes),labels=resultDetailLabels(bytes,language,previousLabels);previousLabels=labels;
  const properties=Object.fromEntries(Object.entries(labels).map(([name,Caption])=>[name,{Caption}]));
  const captions={label6:711,label2:657,TntLabel1:658,TntLabel2:659,TntLabel3:660,TntLabel4:661,bt2:656,button2:991,bt3:484};
  for(const [name,id] of Object.entries(captions))properties[name]={Caption:language[id].text};
  Object.assign(properties,{Label29:{Caption:''},lcamp:{Caption:caption},labg:{HTMLText:language[339].text},Label30:{Caption:current.names[0]},Label31:{Caption:current.names[1]},Label70:{Caption:shortString(record(save,'clubs',current.clubs[0]),0x1d0,35)},Label8:{Caption:String(view.getInt32(0x14,true))},Label26:{Caption:originalMoney(view.getInt32(0x10,true))}});
  const lineups=current.clubs.map(club=>resultLineupRows(save,current.historyId,club).map(row=>({...row,name:state.players[row.playerId].name,substitutions:resultSubstitutionChain(save,current.historyId,row.playerId).filter(id=>id>=0).map(id=>{const sub=dataView(record(save,'records_0066ae14',id));return {name:state.players[sub.getInt32(0,true)].name,tick:sub.getInt32(8,true),rating:sub.getFloat32(12,true),injuries:sub.getInt32(28,true)};})})));
  const panels={card1:[],card2:[],l_gols:[]},full=!!career.getUint8(0xdd),score=[0,0];
  const events=save.sections.find(section=>section.name==='records_0066b160'),eventView=dataView(events.data);
  for(let i=0;i<events.count;i++){
   const offset=i*24;if(eventView.getInt32(offset+20,true)!==current.historyId)continue;
   const type=eventView.getInt32(offset,true),club=eventView.getInt32(offset+4,true),player=eventView.getInt32(offset+8,true),detail=eventView.getInt32(offset+12,true),tick=eventView.getInt32(offset+16,true),side=club===current.clubs[0]?0:1,minute=matchMinute(tick,full)+(full?"'":tick<93?'/1º ':'/2º '),name=state.players[player]?.name??'';
   if([4,8,14,15].includes(type)){score[side]++;panels.l_gols.push({text:score.join('x')+' '+name+' '+minute,align:side?'right':'left'});}
   else if(type===13)panels['card'+(side+1)].push({icon:['','i_ca','i_cv','i_cacv'][detail],text:name+' '+minute});
  }
  return {form:'Form67',fullGameGauge:full,properties,lineups,panels,resultGrid:grid,selectedHistoryId:current.historyId,imagePaths:{escudo:current.crests[0],escudo2:current.crests[1]},crestPaths:{0:current.crests[0],1:current.crests[1]}};
 };
 return new Promise(resolve=>{
  const done=()=>{if(resultsActive){resultsActive=null;renderer.close();resolve();}};
  renderer.register('Form67.grid1SelectCell',historyId=>{if(!resultList.some(row=>row.historyId===historyId))return;selectedHistoryId=historyId;renderer.update(windowView());});
  renderer.register('Form67.bt3Click',done);
  renderer.register('Form67.bt2Click',()=>{});
  renderer.register('Form67.Button2Click',()=>{});
  void renderer.loadCrests(resultList.flatMap(row=>row.crests)).then(()=>{resultsActive={history,resultList};void renderer.show(windowView());});
 });
}

renderer.register('Form87.bt_irprojogoClick',async()=>{
 if(starting||matchSession)return;starting=true;
 try{
  const committed=commitHumanLineup(save,state,rows,slots,{clubId,remember:!!career.getUint8(0xde),rng});
  if(!committed.accepted){startMessage=language[committed.messageId].text;renderer.update(viewModel());return;}
  prepareRouteTeams(save,state,rng,{competitionType:fixtureCompetition,subgroup:fixtureSubgroup,currentDate:roundDate});
  playedCompetition=fixtureCompetition;
  const knockoutOptions={decide:async id=>settleAutomaticDecider(save,id,routeSessionFixtures,rng).winner,champion:async(winner,fixtureId)=>finalizeCupChampion(save,winner,fixtureId,{activeSubgroup:fixtureSubgroup})};
  const session=await openRouteMatchSession(renderer,{save,state,rng,context:{competitionType:fixtureCompetition,subgroup:fixtureSubgroup,currentDate:roundDate},language,crestAssets,kitAssets,knockoutOptions,autoInteractions,continueCompetition:async(route,matchRuntime)=>{
   matchSession=null;
   if(route!=='batch'){playedCompetition=route;await presentScreensForRoute(route);rounds++;continuations.push({day:career.getInt32(0x16c,true),competition:runtime.nextCompetition,human:runtime.humanParticipation??null,played:playedCompetition});await finishContinuation();return;}
   await continueDomesticCompetition(save,matchRuntime,{close:async()=>{
    if(career.getInt32(0x88,true)===1)await showResults({subgroup:fixtureSubgroup,caption:language[225].text});
    else if(selectResultHistory(save,{subgroup:fixtureSubgroup,currentDate:currentDate()}).length)await presentScreen(competitionTableView(save,language,{subgroup:fixtureSubgroup,currentDate:currentDate(),state,date:currentDate()}));
    const effects=nativeResultsCareerEffects(save,runtime,{rng,temporary,calendar:careerSchedule(save),managerDialogs:managerDialogsHost()});
    await continueResultsCareer(save,runtime,effects,careerSchedule(save));
    rounds++;continuations.push({day:career.getInt32(0x16c,true),competition:runtime.nextCompetition,human:runtime.humanParticipation??null,played:playedCompetition});
    await finishContinuation();
   }});
  }});
  routeSessionFixtures=session.fixtures;matchSession=session;
 }catch(error){matchFailure=String(error);startMessage=String(error);throw error;}finally{starting=false;}
});
async function presentScreensForRoute(route){
 if(route==='national'){await humanNext();return;}
 if(route==='friendly'){await presentScreen(clubHubView(save,language,{state,date:currentDate()}));return;}
 await presentScreen(competitionTableView(save,language,{subgroup:fixtureSubgroup,currentDate:currentDate(),state,date:currentDate()}));
}
async function runSeasonTransition(){
 const summary=seasonTransitionView(save,{language,crestAssets});
 await presentScreen(summary);
 await presentScreen(preSeasonFriendlyView(language));
 const result=advanceCareerSeason(save);
 const nextDay=nextHumanFixtureDay(save,result.calendar,clubId,1);
 if(nextDay>0)career.setInt32(0x16c,nextDay-1,true);
 seasonTransitions.push({season:result.season,fixtures:result.fixtures.length,champion:summary.summary.champion?.name??null,human:summary.summary.human?.outcome??null,nextDay});
 return result;
}
async function finishContinuation(){
 if(runtime.nextCompetition===-1)await runSeasonTransition();
 if(!prepareRound(true))startMessage=language[484].text;
 showHub();
}
async function enterCareer(bytes){
 save=readSave(bytes);career=dataView(save.career);
 clubId=career.getInt32(8,true);clock=2015;rng=new OriginalRandom(2015,()=>clock+=7919);
 runtime={nationalManagerCount:0,nationalAssignmentsActive:false};temporary={lineups:[],matchTeams:[]};
 rounds=0;continuations=[];seasonTransitions=[];playedCompetition=null;matchSession=null;matchFailure=null;
 starting=false;startMessage=null;formation=4;checkedKit=1;
 seasonMoveHost?.dispose?.();
 seasonMoveHost=createSeasonMoveHost(renderer,{save,language,crestAssets});
 selector='career';
 if(prepareRound())showHub();
 else{startMessage=language[484].text;void renderer.show(clubHubView(save,language,{state:openCareer(save,{currentDate:currentDate()}),date:currentDate()}));}
 updateDevStatus();
}

/* ------------------------------------------------- dev overlay and tests */

const devPanel=document.getElementById('dev'),devStatus=document.getElementById('dev-status');
if(query.has('debug')||query.has('debugPanel'))devPanel.hidden=false;
addEventListener('keydown',event=>{if(event.key==='F12'){event.preventDefault();devPanel.hidden=!devPanel.hidden;}});
function updateDevStatus(){
 if(!devStatus)return;
 devStatus.textContent=`form: ${renderer.frame?.form??'-'}\nrounds: ${rounds} · day: ${career?career.getInt32(0x16c,true):'-'} · season: ${career?career.getInt32(0xc0,true):'-'}\nclub: ${save?state?.clubs?.[clubId]?.name??clubId:'-'}\nmatch: ${matchSession?(matchSession.snapshot().finished?'finished':'playing'):'-'}`;
}
setInterval(updateDevStatus,1000);

function auctionFrame(view,runtimeState){
 const properties={};
 const labels=['l1','Label12','Label8','Label14','Label1','Label9','Label11','Label19','Label3','Label10','Label2','Label4','Label7','Label17','Label15','Label18','Label16','chbutton1','jlnome','jlpos','jlforca','jlage','jlpais','jlsalario','jlj','jlstatus','jlpasse','jlg','jlca','jlenergia'];
 for(const name of labels)if(view[name]!==undefined)properties[name]={Caption:view[name]};
 properties.Edit1={Text:runtimeState.auctionEditText??view.Edit1??''};
 properties.Label7={Visible:!!view.visibility?.Label7,Caption:view.Label7};
 properties.Label17={Visible:!!view.visibility?.Label17,Caption:view.Label17};
 const imagePaths={};
 if(Number.isInteger(view.sellerClubId)&&view.sellerClubId>=0)imagePaths.escudo=clubCrestPath(save,view.sellerClubId,crestAssets);
 if(Number.isInteger(view.currentClubId)&&view.currentClubId>=0)imagePaths.escudo2=clubCrestPath(save,view.currentClubId,crestAssets);
 return {form:'Form23',properties,imagePaths,activePage:view.activePage??0};
}
function updateAuction(){if(!auction)return;const view=auction.session.view();auction.lastView=view;renderer.update(auctionFrame(view,auction.runtime));updateDevStatus();}
function stopAuction(){if(auctionTimer){clearInterval(auctionTimer);auctionTimer=null;}}
async function openAuction(){
 if(!save){updateDevStatus();return null;}
 if(auction)return auction.session;
 const runtimeState={auctionPlayer:-1,auctionSellerClub:-1,auctionCurrentClub:-1,auctionPreviousClub:-1,auctionEditText:''};
 const session=createAuctionSession({save,runtime:runtimeState,rng,language,onFinished:()=>{setTimeout(()=>{stopAuction();if(auction){renderer.close();auction=null;}updateDevStatus();},1200);}});
 auction={session,runtime:runtimeState,lastView:null};
 renderer.register('Form23.CHButton1Click',()=>{session.bid(runtimeState.auctionEditText??'');updateAuction();});
 renderer.register('Form23.Edit1Change',value=>{runtimeState.auctionEditText=String(value??'');});
 session.start();
 if(session.finished)return session;
 updateAuction();
 if(!manualClock)auctionTimer=setInterval(()=>{if(!auction){stopAuction();return;}if(session.finished){stopAuction();return;}session.tick();updateAuction();},2500);
 return session;
}
function contractFrame(){const view=contractSession.view();return {form:'Form24',...view,properties:view.properties??{}};}
async function openContract(){
 if(!save||!state)return null;
 if(contractSession)return contractSession;
 const playerId=rows?.[0]?.playerId??buildLineupRoster(state,clubId)[0]?.playerId;
 if(!Number.isInteger(playerId))return null;
 contractSession=createContractSession({save,id:playerId,rng,language,currentDate:currentDate()});
 renderer.register('Form24.CHButton1Click',()=>{const outcome=contractSession.submitOffer();renderer.update(contractFrame());if(contractSession.counteroffer)showCounteroffer();void outcome;});
 renderer.register('Form24.bt3Click',()=>{contractSession=null;renderer.close();});
 renderer.register('Form24.UpDown1Click',direction=>{contractSession.stepOffer(direction);renderer.update(contractFrame());});
 renderer.register('Form25.button1Click',()=>{contractSession.acceptCounter();renderer.close();renderer.update(contractFrame());});
 renderer.register('Form25.button2Click',()=>{contractSession.refuseCounter();renderer.close();renderer.update(contractFrame());});
 void renderer.show(contractFrame(),{modal:true});
 return contractSession;
}
function showCounteroffer(){const counter=contractSession.counteroffer;void renderer.show({form:'Form25',properties:counter.properties},{modal:true});}
function openResults(){if(save&&state)return showResults({subgroup:fixtureSubgroup,caption:language[225].text});return null;}
function openSeasonReview(){if(!save)return null;return renderer.show(seasonTransitionView(save,{language,crestAssets}));}
renderer.onFieldInput=(key,value)=>{
 if(key==='Form24.combom'&&contractSession){contractSession.setDuration(value);renderer.update(contractFrame());}
 if(key==='Form23.Edit1'&&auction){auction.runtime.auctionEditText=String(value??'');}
};
document.getElementById('dev-auction').addEventListener('click',()=>{void openAuction();});
document.getElementById('dev-contract').addEventListener('click',()=>{void openContract();});
document.getElementById('dev-results').addEventListener('click',()=>{void openResults();});
document.getElementById('dev-season').addEventListener('click',()=>{void openSeasonReview();});

/* ---------------------------------------------------------- window hooks */

function clickControl(name){
 const entry=renderer.lastLayout?.interactions.find(candidate=>candidate.name===name&&candidate.operation);
 if(!entry)throw Error(`No interactive control ${name} on ${renderer.frame?.form}`);
 return renderer.invoke(entry.operation,entry.value);
}
async function playMatchToResults(){
 if(!matchSession)throw Error('No match session is open.');
 let advancePromise=null;
 for(let step=0;step<600;step++){
  if(renderer.frame?.form==='Form67')return renderer.frame.form;
  if(!matchSession)return renderer.frame?.form??null;
  if(matchFailure)throw Error(matchFailure);
  if(!advancePromise)advancePromise=matchSession.advance().catch(error=>{matchFailure=String(error);}).finally(()=>{advancePromise=null;});
  await Promise.race([advancePromise,new Promise(resolve=>setTimeout(resolve,30))]);
 }
 throw Error('Match did not reach the results screen.');
}
window.gameShell={
 renderer,
 get form(){return renderer.frame?.form??null;},
 get screens(){return (renderer.stack??[]).map(frame=>frame.form);},
 get selector(){return selector;},
 click:clickControl,
 setField(name,value){const key=(renderer.frame?.form??'')+'.'+name;renderer.fieldValues[key]={kind:'edit',value:String(value)};renderer.paint();},
 showMenu,showGameSettings,showClubEditor,newGame,loadCareer:async id=>{const bytes=await readStoredCareerSave(localStorage,id);await enterCareer(bytes);},
 listCareers:()=>listStoredCareers(localStorage),
 openAuction,openContract,openResults,openSeasonReview,
 playMatchToResults,
 get match(){return matchSession?.snapshot()??null;},
 get auction(){return auction?{finished:auction.session.finished,result:auction.session.result}:null;},
 get contract(){return contractSession?{finished:contractSession.finished}:null;},
 get status(){return {form:renderer.frame?.form??null,selector,rounds,continuations:continuations.map(entry=>entry.played??null),startMessage,matchFailure,unhandled:[...new Set(unhandled)].slice(0,20)};}
};
window.render_game_to_text=()=>JSON.stringify({
 ui:'vcl',
 form:renderer.frame?.form??null,
 screens:(renderer.stack??[]).map(frame=>frame.form),
 selector,
 career:save?careerSaveSummary(save) : null,
 round:career?career.getInt32(0x4c,true):null,
 season:career?career.getInt32(0xc0,true):null,
 day:career?career.getInt32(0x16c,true):null,
 agenda:agenda?{nextDay:agenda.nextDay,fixtureId:agenda.fixtureId}:null,
 rounds,continuations,seasonTransitions,startMessage,matchFailure,roundDay,roundFixtureId,
 match:matchSession?.snapshot()??null,
 results:resultsActive?{active:true}:null,
 auction:auction?{finished:auction.session.finished}:null,
 unhandled:[...new Set(unhandled)].slice(0,20)
});
addEventListener('keydown',event=>{if(event.key==='Escape'&&!matchSession&&!auction&&!contractSession&&['Form2','Form3','Form9','Form11','Form21','Form42'].includes(renderer.frame?.form))showMenu();});
showMenu();
if(!manualClock){let last=performance.now();const animate=now=>{const delta=now-last;last=now;matchSession?.advanceTime(delta);requestAnimationFrame(animate);};requestAnimationFrame(animate);}
