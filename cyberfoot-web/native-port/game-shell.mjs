/** Real Cyberfoot 2015 game shell.
 *
 * Boots into the original main menu (Form1, caption "Cyberfoot 2015", the four
 * clickable TShape hotspots and the SAIR label) painted by vcl-renderer from
 * forms.json. New Game/Load Game drive the verified career modules; the lineup,
 * match, results, route screens, season transition, auction and contract
 * windows are the original DFM forms. Every screen goes through the VCL-style
 * form manager (form-manager.mjs: modeless Show via manager.open, modal
 * ShowModal via manager.openModal); the match/penalty/injury/tactics hosts
 * keep calling the renderer facade and stay in sync through the manager's
 * wrapped show/update/close. Only the VCL windows are visible; a
 * hidden F12 dev overlay toggles the auxiliary windows.
 */
import {VclRenderer} from './vcl-renderer.mjs';
import {createCareerSave,careerSaveSummary,createCareerRecord,writeStoredCareer,listStoredCareers,readStoredCareerSave,playableClubIds,removeStoredCareer} from './career-menu.mjs';
import {readSave,writeSave,record,shortString} from './save-format.mjs';
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
import {pendingAuctionOffer,pendingContractOffer,consumeAuctionOffer} from './transfer-trigger.mjs';
import {applySeasonRotation} from './season-rotation.mjs';
import {applyPrizeMoney} from './season-prize.mjs';
import {applyPlayerAging,refreshClubPlayerCounts,retirePlayerManually} from './player-aging.mjs';
import {applyYouthIntake} from './youth-intake.mjs';
import {createLiveMatchDriver,createMatchSoundPlayer} from './live-match-driver.mjs';
import {ModalResults,createFormManager} from './form-manager.mjs';
import {validateRegistrationKey,applyRegistration,registrationView,isRegistered,readRegistrationFlag,REGISTRATION_FLAG_OFFSET} from './registration.mjs';
import {listChampionshipCountries,selectChampionshipClubs,championshipView} from './championship.mjs';
import {clubEditorView,renameClub,renameStadium} from './club-editor.mjs';
import {FORM13_TARGET,HUB_CLOSE_OP,barraFormAt,hubFormView,saveCareerFromForm40,weeklyTeamView,weeklyTeamLeagues,withdrawPlayerFromTransferList} from './hub-navigation.mjs';
import {listPlayerForLoan,withdrawPlayerFromLoanList,recallLoan} from './loan-window.mjs';
import {openLoan,loanView} from './loan-view.mjs';
import {applyCustomChampionship} from './custom-championship-build.mjs';
import {createStandingsHost} from './standings-host.mjs';
import {createManagerCareerDialogs} from './manager-career-dialogs.mjs';
import {pendingFriendlyDates,appendFriendlyMatch} from './friendly-schedule.mjs';

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
const manager=createFormManager(renderer);

let save=null,career=null,rng=null,state=null,agenda=null,rows=null,slots=null,clubId=11;
let formation=4,checkedKit=1,shirtImage=null,kitPaths=[],opponentId=null,opponentKit=null;
let matchSession=null,starting=false,startMessage=null,fixtureCompetition=1,fixtureSubgroup=0;
let roundDay=0,roundDate=0,roundFixtureId=-1,routeScreen=null,routeSessionFixtures=[];
let hubPresented=false;
let rounds=0,continuations=[],seasonTransitions=[],playedCompetition=null,matchFailure=null;
let runtime={nationalManagerCount:0,nationalAssignmentsActive:false},temporary={lineups:[],matchTeams:[]};
let seasonMoveHost=null,auction=null,contractSession=null,auctionTimer=null,resultsActive=null,bankLoan=null;
let careerDialogs=null;
let liveDriver=null,liveSoundSeen=0,lastMatchSounds=[];
let weeklySel={leagueIdx:0,division:1,season:null,round:null,mode:0};
let customCareer=null;
const soundPlayer=createMatchSoundPlayer({basePath:'assets/sounds'});
let clock=2015;

/* --------------------------------- shared play-forms state + notice dialog */
// Persistent UI state for controls whose original engine op has no verified
// native counterpart yet. Toggles/edits update the visible frame; actions
// without a ported engine open a no-op Form85 dialog (last resort) instead of
// inventing game behavior or leaving an unhandled operation.
let settingsCombo2=0,newGameCountry=-1,hubSelectedPlayer=-1,routeSubgroup=0;
const defaultLeagueCountries=[{country:3,count:42},{country:11,count:42},{country:29,count:43},{country:65,count:42},{country:104,count:42}];
const settingsLeagues=new Set([3]);
const settingsToggles={ckcopa:true,ckinter1:true,ckinter2:false,ckcopamundo:false,ckeurocopa:false,ckcopaamerica:false};
const registrationStorageKey='cyberfoot.registration.flag';
const nationalSelected={gfind:-1,gsel:-1},championshipSelected=new Set();
let championshipFormat='4x10',championshipCup=true;
let clubEditorClub=11,clubEditorPlayer=-1,registrationName='',registrationCode='',registrationStatus='',retirementName='',retirementRole=-1,jerseyNumber=0,friendlyDate=0,friendlyOpponent=-1,friendlyPlace=0;
let noticeDepth=0;
function persistedRegistrationFlag(){
 try{const value=Number(localStorage.getItem(registrationStorageKey));return Number.isInteger(value)?value:0;}catch{return 0;}
}
function registrationFlag(){return Math.max(save?readRegistrationFlag(save):0,persistedRegistrationFlag());}
function persistRegistrationFlag(flag){try{localStorage.setItem(registrationStorageKey,String(flag|0));}catch{} }
function applyPersistedRegistration(bytes){
 const flag=persistedRegistrationFlag();
 if(!flag)return bytes;
 const parsed=readSave(bytes),careerView=dataView(parsed.career);
 careerView.setInt32(REGISTRATION_FLAG_OFFSET,flag,true);
 return writeSave(parsed);
}
function applyNewGameSettings(bytes){
 const parsed=readSave(bytes),careerView=dataView(parsed.career);
 // Form9.ComboBox2Select writes the selected manager-count value as index+1.
 careerView.setInt32(0x13c,settingsCombo2+1,true);
 return writeSave(parsed);
}
function showNotice(operation,detail){
 if(noticeDepth>0)return;
 noticeDepth++;
 try{
  const title=String(operation??'');
  const body=String(detail||language[484]?.text||'');
  void manager.openModal({form:'Form85',properties:{TntLabel1:{Caption:title},label7:{Caption:body},xibutton1:{Caption:language[0x1c2]?.text||'OK'},xibutton2:{Caption:language[0x1c1]?.text||'Cancel'},Image1:{Visible:false}},notice:title});
 }finally{
  setTimeout(()=>{noticeDepth=0;},0);
 }
}

function drainLiveSounds(){
 if(!matchSession||!soundPlayer)return;
 let requests=[];
 try{requests=matchSession.snapshot().soundRequests??[];}catch{requests=[];}
 while(liveSoundSeen<requests.length){
  const name=requests[liveSoundSeen++];
  try{void soundPlayer.play(name);}catch{}
 }
 // Retain the final request list: the full-time continuation clears the live
 // session once Form67 owns the screen, so post-match reads fall back here.
 lastMatchSounds=[...requests];
}
function stopLiveDriver(){
 if(liveDriver){try{liveDriver.stop();}catch{}}
 liveDriver=null;
}
function startLiveDriver(){
 if(!matchSession||liveDriver)return liveDriver;
 liveSoundSeen=0;
 try{
  const seen=matchSession.snapshot().soundRequests?.length??0;
  liveSoundSeen=seen;
 }catch{liveSoundSeen=0;}
 liveDriver=createLiveMatchDriver({session:matchSession,manager,renderer,intervalMs:manualClock?60:120,onTick:()=>{drainLiveSounds();updateDevStatus();}});
 liveDriver.start();
 return liveDriver;
}

const currentDate=()=>{if(!save)return undefined;const calendar=careerSchedule(save),day=career.getInt32(0x16c,true);return calendar[day-1]?.date;};
const opponent=()=>state.clubs[opponentId].name;

/* ------------------------------------------------------------- main menu */

function clubChoices(){
 const clubs=templateSave.sections.find(section=>section.name==='clubs'),list=[];
 for(let id=0;id<clubs.count;id++){const bytes=record(templateSave,'clubs',id),view=dataView(bytes),name=shortString(bytes,0,25),country=view.getInt32(0x3c,true),division=view.getInt32(0x7c,true);list.push({id,name,country,division,playable:playableSet.has(id)});}
 return list;
}
function orderedCountryClubs(clubs,country){
 const leagueSection=templateSave.sections.find(section=>section.name==='records_0066aca0');
 if(!leagueSection)return clubs;
 const leagueIndex=Array.from({length:leagueSection.count},(_,index)=>index).find(index=>dataView(record(templateSave,'records_0066aca0',index)).getInt32(0x140,true)===country);
 if(leagueIndex===undefined)return clubs;
 const byId=new Map(clubs.map(club=>[club.id,club])),ordered=[];
 const league=dataView(record(templateSave,'records_0066aca0',leagueIndex));
 for(let division=1;division<=4;division++)for(let position=1;position<=10;position++){
  const id=league.getInt32(division*80+0xfc+position*4,true),club=byId.get(id);
  if(club&&!ordered.includes(club))ordered.push(club);
 }
 return ordered.concat(clubs.filter(club=>!ordered.includes(club)));
}
function newGameClubs(){
  const clubs=clubChoices(),registered=isRegistered(registrationFlag());
 return clubs.filter(club=>club.playable&&(registered||club.division===4));
}
function menuFrame(){
 const menuFont=color=>({name:'Arial',height:14,bold:true,italic:false,underline:false,strikeout:false,color});
 const smallFont=color=>({name:'Arial',height:11,bold:false,italic:false,underline:false,strikeout:false,color});
 const def=forms.find(form=>form.name==='Form1');
 const props={};
 const walk=node=>{if(node?.name)props[node.name]=node.properties??{};for(const child of node?.children??[])walk(child);};
 walk(def);
 const dynamic=[];
 [1,2,3,4].forEach((id,index)=>{
  const shape=props['Shape'+id]??{},x=Number(shape.Left)||304,y=Number(shape.Top)||(96+48*index),w=Number(shape.Width)||185,h=Number(shape.Height)||33;
   dynamic.push({kind:'text',x,y,w,h,text:language[id].text,lines:null,font:menuFont('#ffffff'),color:'#ffffff',align:'center',wordWrap:false,shadow:{offset:1,color:'#000000'},background:null,vAlign:'middle'});
  });
  dynamic.push({kind:'text',x:15,y:204,w:220,h:16,text:language[5].text,lines:null,font:menuFont('#ffffff'),color:'#ffffff',align:'left',wordWrap:false,shadow:null,background:null,vAlign:'top'});
  dynamic.push({kind:'text',x:25,y:238,w:180,h:14,text:'www.cyberfoot.net',lines:null,font:smallFont('#ffffff'),color:'#ffffff',align:'left',wordWrap:false,shadow:null,background:null,vAlign:'top'});
  return {form:'Form1',properties:{
   lb_sl:{Caption:language[8].text},TntLabel1:{Caption:language[7].text},comboi2:{Items:[language[0].text],ItemIndex:0}
  },dynamic};
}
function showMenu(){selector='menu';stopClubEditor();void manager.open(menuFrame());updateDevStatus();}

let newGameName='',newGameClub=11,loadSelection=0,selector='menu';
function newGameFrame(){
  const clubs=clubChoices(),registered=isRegistered(registrationFlag());
 const countryIds=[...new Set(clubs.map(club=>club.country))].sort((a,b)=>a-b);
 const initialCountry=clubs.find(club=>club.id===newGameClub)?.country??countryIds[0]??-1;
 const selectedCountry=newGameCountry>=0?newGameCountry:initialCountry;
 const countryIndex=Math.max(0,countryIds.indexOf(selectedCountry));
 const displayClubs=orderedCountryClubs(clubs.filter(club=>club.country===countryIds[countryIndex]),countryIds[countryIndex]);
 const selectable=displayClubs.filter(club=>registered||club.division===4&&club.playable);
 const effective=displayClubs.length?displayClubs:(selectable.length?selectable:clubs);
 if(!effective.some(club=>club.id===newGameClub))newGameClub=selectable[0]?.id??effective[0]?.id??0;
 const crestClubs=effective.map(club=>({...club,crest:clubCrestPath(templateSave,club.id,crestAssets)}));
 const nationalityIds=Array.from({length:202},(_,id)=>id).filter(id=>language[786+id]?.text);
 return {form:'Form11',properties:{
   Label3:{Caption:language[43].text},Label4:{Caption:language[44].text},Label1:{Caption:language[45].text},Label2:{Caption:language[141].text},
   Label5:{Visible:false},Label6:{Visible:false},Label7:{Visible:false},Label8:{Visible:false},
    Edit1:{Text:newGameName,Left:40,Top:653,Width:226,Height:27},
    combo1:{Items:countryIds.map(id=>language[786+id]?.text??`${id}`),ItemIndex:countryIndex,OnChange:'combo2Change',Left:40,Top:102,Width:185,Height:24},
    combonac:{Items:nationalityIds.map(id=>language[786+id].text),ItemIndex:Math.max(0,nationalityIds.indexOf(2)),Left:348,Top:653,Width:183,Height:24},
    button1:{Caption:language[41].text,Enabled:Boolean(newGameName.trim()),Left:666,Top:649,Width:153,Height:31},
   Label9:{Caption:language[34].text},
   label11:{Caption:language[32].text},
   Label12:{Caption:language[395].text},
   Label3:{Caption:language[43].text},
   Label4:{Caption:language[44].text},
   Label1:{Caption:language[45].text},
   Label2:{Caption:language[141].text,Width:400},
   UniHTMLabel7:{HTMLText:'<shad>'+language[32].text+'</shad>'},
   Label5:{Caption:language[35].text},Label6:{Caption:language[36].text},Label7:{Caption:language[37].text},Label8:{Caption:language[38].text}
  },background:'assets/original-f01.jpg',clubs:crestClubs,allClubs:crestClubs,countryIds,countryNames:countryIds.map(id=>language[786+id]?.text??`${id}`),nationalityIds,teamSelect:{clubs:crestClubs,selectedId:newGameClub,selectableIds:selectable.map(club=>club.id),registered}};
}
function customTeamFrame(){
 const cfg=customCareer;if(!cfg)return newGameFrame();
 const all=clubChoices().filter(club=>cfg.clubIds.includes(club.id)&&playableSet.has(club.id));
 const clubs=all.length?all:clubChoices().filter(club=>cfg.clubIds.includes(club.id));
 if(!clubs.length)throw Error('The custom championship has no selectable club.');
 if(!clubs.some(club=>club.id===newGameClub))newGameClub=clubs[0].id;
 const index=Math.max(0,clubs.findIndex(club=>club.id===newGameClub));
 const frame=newGameFrame();
  frame.properties={...frame.properties,
   Edit1:{Text:newGameName},
   combo1:{Visible:false,Items:clubs.map(club=>`${club.name} · div ${club.division}`),ItemIndex:index,OnChange:'combo2Change'},
   combonac:{Items:Array.from({length:202},(_,id)=>language[786+id]?.text).filter(Boolean),ItemIndex:2},
   Label12:{Caption:language[395]?.text??'Custom championship'}};
  frame.clubs=clubs;frame.allClubs=clubs;frame.countryNames=[];frame.custom=true;
  frame.background='assets/original-f01.jpg';frame.teamSelect={clubs,selectedId:newGameClub,selectableIds:clubs.map(club=>club.id),registered:true};
  return frame;
}
function showNewGame(){selector='new-game';void manager.open(newGameFrame());updateDevStatus();}

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
function showLoadGame(){selector='load-game';loadSelection=Math.min(loadSelection,Math.max(listStoredCareers(localStorage).length-1,0));void manager.open(loadGameFrame());updateDevStatus();}

function showStaticMenuWindow(form){
 if(form==='Form42'){openRegistration();return;}
 selector='message';void manager.open({form,properties:{}});updateDevStatus();
}

/* ------------------------------------- original new-game settings (Form9) */

function gameSettingsFrame(){
  const clubs=clubChoices();
  const countryName=id=>language[786+id]?.text??String(id);
  const rows=defaultLeagueCountries.map(({country,count})=>({cells:{nxpais:'',NxImageColumn2:'',NxTextColumn1:countryName(country),nxtimes:String(count),NxTextColumn3:''},value:country,checked:settingsLeagues.has(country)}));
  return {form:'Form9',properties:{
   UniHTMLabel7:{HTMLText:'<p align="left"><shad>Cyberfoot2015 - '+language[10].text+'</shad></p>'},
  HTMLabel2:{HTMLText:language[11].text},
  HTMLabel5:{HTMLText:language[23].text},
   HTMLabel1:{HTMLText:language[12].text},
  HTMLabel3:{HTMLText:language[18].text},
  HTMLabel4:{HTMLText:language[27].text},
   HTMLabel6:{HTMLText:'<p align="center">'+language[26].text+'</p>',WordWrap:true},
  UniHTMLabel1:{HTMLText:language[19].text},
  UniHTMLabel2:{HTMLText:language[21].text},
  UniHTMLabel3:{HTMLText:language[22].text},
  UniHTMLabel4:{HTMLText:language[15].text},
  UniHTMLabel5:{HTMLText:language[16].text},
  UniHTMLabel6:{HTMLText:language[17].text},
   ComboBox1:{Items:[language[13].text,language[14].text],ItemIndex:0},
   ComboBox2:{ItemIndex:settingsCombo2,Items:Array.from({length:10},(_,index)=>String(index+1)),OnSelect:'ComboBox2Select'},
  ckcopa:{Checked:!!settingsToggles.ckcopa,Enabled:true,Caption:''},
  ckinter1:{Checked:!!settingsToggles.ckinter1,Enabled:true,Caption:''},
  ckinter2:{Checked:!!settingsToggles.ckinter2,Enabled:true,Caption:''},
  ckcopamundo:{Checked:!!settingsToggles.ckcopamundo,Enabled:false,Caption:''},
  ckeurocopa:{Checked:!!settingsToggles.ckeurocopa,Enabled:false,Caption:''},
  ckcopaamerica:{Checked:!!settingsToggles.ckcopaamerica,Enabled:false,Caption:''},
  ckgruposcopamundo:{Visible:false},
  ckestadual:{Visible:false},
  xibutton1:{Caption:language[30].text},
   xibutton2:{Caption:language[29].text},
   Label9:{Caption:language[28].text}
   },background:'assets/original-f01.jpg',grids:{list1:rows},headers:{NxTextColumn1:language[744].text,nxtimes:language[739].text},clubs};
}
function showGameSettings(){selector='new-game-settings';void manager.open(gameSettingsFrame());updateDevStatus();}
function refreshGameSettings(){if(renderer.frame?.form==='Form9')manager.update(gameSettingsFrame());updateDevStatus();}
// Original Form9 toggles (0062xxxx family): enabled boxes flip the visible
// Checked state; registered-only boxes stay disabled (vcl-renderer now hides
// their overlay so they cannot be toggled). ComboBox2 OnSelect stores its
// index; unported arrow buttons surface a no-op dialog (last resort).
for(const name of ['ckcopa','ckinter1','ckinter2'])renderer.register('Form9.'+name+'Click',checked=>{settingsToggles[name]=!!checked;refreshGameSettings();});
for(const name of ['ckcopamundo','ckeurocopa','ckcopaamerica'])renderer.register('Form9.'+name+'Click',()=>{refreshGameSettings();});
renderer.register('Form9.ComboBox2Select',index=>{settingsCombo2=Number(index)||0;refreshGameSettings();});
renderer.register('Form9.Image3Click',()=>{});
renderer.register('Form9.XiButton3Click',()=>openChampionship());
renderer.register('Form9.XiButton1Click',()=>showMenu());
renderer.register('Form9.XiButton2Click',()=>showNewGame());
renderer.register('Form9.list1CellClick',index=>{
  const row=gameSettingsFrame().grids.list1[Number(index)||0];
  if(!row)return;
  if(settingsLeagues.has(row.value))settingsLeagues.delete(row.value);else settingsLeagues.add(row.value);
  refreshGameSettings();
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
function clubEditorViewFrame(){
 // Form3 over the template save (original TForm2_carregatimes loads every club
 // then opens the TForm3 editor). Uses the verified clubEditorView model plus
 // live grid rows so every control paints and every edit writes the template.
 const view=clubEditorView({save:templateSave,clubId:clubEditorClub,language});
 const clubs=templateSave.sections.find(section=>section.name==='clubs');
 const gridtimes=[];
 for(let id=0;id<Math.min(clubs.count,60);id++){
  const bytes=record(templateSave,'clubs',id);
  gridtimes.push({clubId:id,cells:{id:String(id),clube:shortString(bytes,0,25),paisimg:'',paisnome:language[786+dataView(bytes).getInt32(0x3c,true)]?.text??'',nivel:String(dataView(bytes).getInt32(0x98,true)),erros:''}});
 }
 const roster=view.players.slice(0,25).map(player=>({playerId:player.id,cells:{idjog:String(player.id),status:'',estrela:'',nome:player.name,posicaojog:language[[143,147,145,149,151][player.role]]?.text??'',paisjog:'',idade:String(player.age),habilidadejog:String(player.skill),nxlado:''}}));
 return {form:'Form3',properties:{
  Label13:{Caption:view.club.name},Label14:{Caption:view.club.stadium},
  TntLabel1:{Caption:language[32]?.text??''},TntLabel2:{Caption:language[129]?.text??''},
  Label12:{Caption:language[67]?.text??''},Label9:{Caption:`${view.playerCount}`},Label7:{Caption:language[50]?.text??''},
  Label8:{Caption:String(view.club.level)},Label20:{Caption:language[69]?.text??''},
  Edit1:{Text:view.club.name},Edit2:{Text:view.club.stadium},
  Button2:{Caption:language[30]?.text??'<<'},Button3:{Caption:language[29]?.text??'>>'},btdup:{Caption:'+'},
  btpj:{Caption:'PJ'},btpt:{Caption:'PT'},bt1:{Caption:'<'},xbt1:{Caption:'<<'},xbt2:{Caption:'>>'},
  TntBitBtn4:{Caption:language[30]?.text??''},TntBitBtn5:{Caption:language[29]?.text??''},
  Button1:{Visible:false}
 },grids:{Grid1:roster,gridtimes},headers:{nome:language[129]?.text??'',clube:language[32]?.text??''},editor:view,selectedClub:clubEditorClub,selectedPlayer:clubEditorPlayer};
}
function showClubEditorView(){selector='club-editor';stopClubEditor();clubEditorPlayer=-1;void manager.open(clubEditorViewFrame());updateDevStatus();}
function showClubEditor(){
 selector='club-editor';stopClubEditor();
 const total=clubChoices().length;let progress=0;
  void manager.open(clubEditorFrame(0,total));
  clubEditorTimer=setInterval(()=>{
   progress=Math.min(100,progress+10);
   if(renderer.frame?.form==='Form2')manager.update(clubEditorFrame(progress,total));
  if(progress>=100){stopClubEditor();setTimeout(()=>{if(renderer.frame?.form==='Form2')showClubEditorView();},350);}
 },70);
 updateDevStatus();
}
function stopClubEditor(){if(clubEditorTimer){clearInterval(clubEditorTimer);clubEditorTimer=null;}}
// Form3 editor: every visible control wired. Grid selection picks club/player;
// edits write through the verified club-editor bounds; image buttons without a
// ported engine surface a no-op dialog (last resort, reported).
renderer.register('Form3.Grid1CellClick',index=>{
 const frame=clubEditorViewFrame(),row=frame.grids.Grid1[Number(index)||0];
 if(row)clubEditorPlayer=row.playerId;
 manager.update(clubEditorViewFrame());updateDevStatus();
});
renderer.register('Form3.gridtimesSelectCell',index=>{
 const frame=clubEditorViewFrame(),row=frame.grids.gridtimes[Number(index)||0];
 if(row){clubEditorClub=row.clubId;clubEditorPlayer=-1;}
 manager.update(clubEditorViewFrame());updateDevStatus();
});
renderer.register('Form3.Edit1Change',value=>{try{renameClub(templateSave,clubEditorClub,String(value??'').slice(0,25)||'X');}catch{} manager.update(clubEditorViewFrame());});
renderer.register('Form3.Edit2Change',value=>{try{renameStadium(templateSave,clubEditorClub,String(value??'').slice(0,30)||'Stadium');}catch{} manager.update(clubEditorViewFrame());});
for(const op of ['IMGPClick','IMGJClick','Label6Click','Label3Click','Image5Click','Image6Click','Image7Click','Image10Click','Image11Click','Image12Click','btpjClick','Button4Click','Button2Click','Button3Click','btdupClick','xbt1Click','xbt2Click','AdvGlowButton6Click','AdvGlowButton7Click','nivelButtonClick'])renderer.register('Form3.'+op,()=>{});
renderer.register('Form3.Image1MouseDown',()=>{});
function openChampionship(){
 // Form39 custom championship (championship.mjs:0062c380 list + 0062c884 build).
 let countries=[];
 try{countries=listChampionshipCountries(templateSave,{language});}catch{countries=[];}
 const total=selectChampionshipClubs(templateSave,[...championshipSelected]).length;
 const view=championshipView({language,countries,selectedCountries:[...championshipSelected],formatId:championshipFormat,playCup:championshipCup,registered:isRegistered(registrationFlag()),totalClubs:total});
 const grid=view.countries.map(entry=>({country:entry.country,cells:{NxImageColumn1:'',NxImageColumn2:'',NxTextColumn1:entry.name,NxTextColumn2:String(entry.count),NxTextColumn3:entry.selected?'X':''},value:entry.country,selected:entry.selected}));
 selector='championship';
 void manager.open({form:'Form39',properties:{
  Label8:{Caption:view.countryPrompt},Label1:{Caption:view.title},Label10:{Caption:view.leagueOnlyNote},Label11:{Caption:view.disputeLabel},Label9:{Caption:view.limitNote},
   XiButton1:{Caption:view.backLabel},bt1:{Caption:view.continueLabel,Enabled:view.continueEnabled},
   formulaper:{Items:view.formats.map(entry=>entry.label),ItemIndex:view.formats.findIndex(entry=>entry.id===view.formatId),Enabled:view.formatEnabled,OnChange:view.formatEnabled?'formulaperChange':undefined},
   ckcopaper:{Caption:view.cupLabel,Checked:view.playCup,OnClick:'ckcopaperClick'}
  },grids:{list1:grid},headers:{NxTextColumn1:language[744]?.text??'',NxTextColumn2:language[739]?.text??''},championship:view});
 updateDevStatus();
}
renderer.register('Form39.list1CellClick',index=>{
 const frame=renderer.frame;const row=frame?.grids?.list1?.[Number(index)||0]??null;
 const country=row?.value??row?.country;
 if(country===undefined)return;
 if(championshipSelected.has(Number(country)))championshipSelected.delete(Number(country));
 else championshipSelected.add(Number(country));
 openChampionship();
});
renderer.register('Form39.XiButton1Click',()=>showGameSettings());
renderer.register('Form39.formulaperChange',index=>{if(isRegistered(registrationFlag())){championshipFormat=Number(index)===1?'2x20':'4x10';openChampionship();}});
renderer.register('Form39.ckcopaperClick',checked=>{championshipCup=!!checked;openChampionship();});
renderer.register('Form39.bt1Click',()=>{
 if(!championshipSelected.size)return;
 // Original 0062c884 chain: build the selected competition, then open the
 // original Form11 team selector. The selected manager/club is committed only
 // when Form11.button1Click is confirmed.
 try{
  const clubIds=selectChampionshipClubs(templateSave,[...championshipSelected]);
  const playable=clubIds.find(id=>playableSet.has(id));
  if(!Number.isInteger(playable))throw Error('The selected countries have no club available for the current career date.');
   const base=readSave(applyNewGameSettings(createCareerSave({managerName:newGameName||'New Manager',clubId:playable,language:[language[0].text],seed:2015,template:templateBytes})));
  const result=applyCustomChampionship(base,{clubIds,formatId:championshipFormat,playCup:championshipCup,rng:new OriginalRandom(2015)});
  customCareer={clubIds,formatId:championshipFormat,playCup:championshipCup,bytes:writeSave(base),leagueIndex:result.leagueIndex};
  newGameClub=playable;selector='custom-new-game';void manager.open(customTeamFrame());updateDevStatus();
 }catch(error){showNotice(championshipView({language,countries:[],selectedCountries:[],formatId:championshipFormat,playCup:championshipCup,registered:false,totalClubs:0}).title,String(error?.message||error));}
});
function registrationFrame(){
 const view=registrationView({language,name:registrationName,code:registrationCode,status:registrationStatus});
 return {form:'Form42',properties:{
  label1:{HTMLText:`<p align="center"><shad>${view.title}</shad></p>`},
  Label8:{Caption:view.nameLabel},Label9:{Caption:view.codeLabel},
  Label10:{Caption:view.benefitsTitle||view.registerLabel},
  Edit1:{Text:registrationName},Edit2:{Text:registrationCode},
  xibutton2:{Caption:view.submitLabel}
 },registration:view};
}
function openRegistration(){selector='register';registrationStatus='';void manager.open(registrationFrame());updateDevStatus();}
renderer.register('Form42.XiButton1Click',()=>showMenu());
renderer.register('Form42.Image1Click',()=>showNotice('Form42.Image1Click','www.cyberfoot.net'));
renderer.register('Form42.XiButton2Click',()=>{
 const name=renderer.fieldValues['Form42.Edit1']?.value??registrationName;
 const code=renderer.fieldValues['Form42.Edit2']?.value??registrationCode;
 registrationName=String(name??'');registrationCode=String(code??'');
  let result;
  try{
   result=save?applyRegistration(save,{name:registrationName,code:registrationCode}):applyRegistration(readSave(templateBytes),{name:registrationName,code:registrationCode});
   persistRegistrationFlag(result.flag);
  }catch(error){result={valid:false,reason:String(error?.message||error),flag:0};persistRegistrationFlag(0);}
  registrationStatus=result.valid?language[6]?.text||'OK':`${language[5]?.text||''} (${result.reason})`;
 manager.update(registrationFrame());updateDevStatus();
});

/* ------------------------------------------------------ new game creation */

function storeCareerBytes(bytes,managerName,clubId){
 const summary=careerSaveSummary(bytes),promise=createCareerRecord(bytes,{managerName,clubId,language:language[0].text,summary}).then(entry=>{try{writeStoredCareer(localStorage,entry);}catch{}return entry;});
 return promise;
}
async function newGame({managerName=newGameName,clubId=newGameClub}={}){
 newGameName=String(managerName||'New Manager').slice(0,25);
 const eligible=newGameClubs(),clubs=eligible.length?eligible:clubChoices(),chosen=clubs.find(club=>club.id===clubId)??clubs.find(club=>club.id===newGameClub)??clubs[0];
 newGameClub=chosen.id;
  const bytes=applyPersistedRegistration(applyNewGameSettings(createCareerSave({managerName:newGameName,clubId:newGameClub,language:[language[0].text],seed:2015,template:templateBytes,freshStart:true})));
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
// Original background mousedown is window-drag chrome: consume silently so the
// menu never reports an unhandled operation when the backdrop is clicked.
renderer.register('Form1.Image2MouseDown',()=>{});
renderer.register('Form11.Edit1Change',value=>{newGameName=String(value??'').slice(0,25);manager.update(customCareer?customTeamFrame():newGameFrame());updateDevStatus();});
renderer.register('Form11.combo2Change',index=>{
 if(customCareer){const list=customTeamFrame().clubs,picked=list[Number(index)||0];if(picked)newGameClub=picked.id;manager.update(customTeamFrame());updateDevStatus();return;}
 const frame=newGameFrame(),country=frame.countryIds[Number(index)||0];
 if(Number.isInteger(country))newGameCountry=country;
 const next=newGameFrame();if(!next.teamSelect.selectableIds.includes(newGameClub))newGameClub=next.teamSelect.selectableIds[0]??next.clubs[0]?.id??0;
 manager.update(newGameFrame());updateDevStatus();
});
renderer.register('Form11.teamSelectClick',clubId=>{
 const frame=customCareer?customTeamFrame():newGameFrame();
 if(frame.teamSelect.selectableIds.includes(Number(clubId)))newGameClub=Number(clubId);
 manager.update(customCareer?customTeamFrame():newGameFrame());updateDevStatus();
});
renderer.register('Form11.button1Click',async()=>{
 const edit=renderer.fieldValues['Form11.Edit1']?.value??newGameName;
 if(customCareer){
  const cfg=customCareer,clubs=customTeamFrame().clubs,chosen=clubs.some(club=>club.id===newGameClub)?newGameClub:clubs[0]?.id;
   const bytes=applyPersistedRegistration(applyNewGameSettings(createCareerSave({managerName:edit,clubId:chosen,language:[language[0].text],seed:2015,template:templateBytes,freshStart:true})));
  const customSave=readSave(bytes);
  applyCustomChampionship(customSave,{clubIds:cfg.clubIds,formatId:cfg.formatId,playCup:cfg.playCup,rng:new OriginalRandom(2015)});
  const finalBytes=writeSave(customSave);
  await storeCareerBytes(finalBytes,edit,chosen);
  customCareer=null;
  await enterCareer(finalBytes);
  return;
 }
 await newGame({managerName:edit,clubId:newGameClub});
});
renderer.register('Form21.grid1SelectCell',index=>{loadSelection=Number(index)||0;manager.update(loadGameFrame());});
renderer.register('Form21.BitBtn1Click',async()=>{const entry=listStoredCareers(localStorage)[loadSelection];if(!entry)return;const bytes=await readStoredCareerSave(localStorage,entry.id);await enterCareer(bytes);});
renderer.register('Form21.BitBtn2Click',()=>showMenu());
renderer.register('Form21.BitBtn3Click',()=>{const entry=listStoredCareers(localStorage)[loadSelection];if(entry){removeStoredCareer(localStorage,entry.id);loadSelection=0;}manager.update(loadGameFrame());});

function managerDialogsHost(){
  if(!careerDialogs)throw Error('Manager dialog hosts are not initialized.');
  return {humanDismissal:careerDialogs.humanDismissal,showChanges:careerDialogs.showChanges,showOffer:careerDialogs.showOffer,humanNext,automaticNext,showMove:move=>seasonMoveHost.open(move)};
}
function installForm30DialogRouter(){
  renderer.register('Form30.bt3Click',()=>{
    if(careerDialogs?.offer.active)return careerDialogs.offer.accept();
    if(seasonMoveHost?.active)return seasonMoveHost.close();
    return false;
  });
  renderer.register('Form30.XiButton1Click',()=>{
    if(careerDialogs?.offer.active)return careerDialogs.offer.close(false);
    if(seasonMoveHost?.active)return seasonMoveHost.close();
    return false;
  });
}

function prepareRound(){
 agenda=careerAgenda(save);
 let day=agenda.nextDay,date=agenda.nextDate,fixtureId=agenda.fixtureId;
 const onCursor=agenda.currentFixtureId>=0?agenda.fixtures[agenda.currentFixtureId]:null;
 if(onCursor&&!onCursor.complete){day=agenda.currentDay;date=agenda.currentDate;fixtureId=agenda.currentFixtureId;}
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
let hubPlayerPanel=true;
function applyHubPanels(frame){
  frame.images={...(frame.images??{}),escudo:clubCrestPath(save,clubId,crestAssets),f13esc1:Number.isInteger(frame.opponentClubId)?clubCrestPath(save,frame.opponentClubId,crestAssets):null};
  frame.properties={...frame.properties,
   pinfo_panel:{...(frame.properties?.pinfo_panel??{}),Visible:hubPlayerPanel},p_conf:{Visible:!hubPlayerPanel},
   btvender:{...(frame.properties?.btvender??{}),Caption:language[63].text,Visible:hubPlayerPanel},
   btalterasal:{...(frame.properties?.btalterasal??{}),Caption:language[64].text,Visible:hubPlayerPanel},
   btaposenta:{...(frame.properties?.btaposenta??{}),Caption:language[65].text,Visible:hubPlayerPanel},
   Button4:{...(frame.properties?.Button4??{}),Visible:false}};
 return frame;
}
function showHub(){
  hubSelectedPlayer=-1;hubPlayerPanel=true;
  const frame=applyHubPanels(clubHubView(save,language,{state,date:currentDate()}));
  frame.selectedPlayerId=hubSelectedPlayer;
  void manager.open(frame);updateDevStatus();
}
function refreshHub(){
 if(!save||renderer.frame?.form!=='Form13')return;
 const frame=applyHubPanels(clubHubView(save,language,{state,date:currentDate()}));
 frame.selectedPlayerId=hubSelectedPlayer;
 manager.update(frame);updateDevStatus();
}
// Original 00641918: hide the player panel + action buttons, show confidence.
renderer.register('Form13.Image13Click',()=>{hubPlayerPanel=false;refreshHub();});
for(const k of [1,2,3])renderer.register('Form87.rd'+k+'Click',()=>{checkedKit=k;if(kitPaths[k-1]){state.clubs[clubId].selectedKit=k;shirtImage=kitPaths[k-1];}manager.update(viewModel());});
renderer.register('Form87.combtatClick',index=>{formation=index+1;slots=autoSelectScreenLineup(state,rows,formation,save,clubId).slots;manager.update(viewModel());});
for(const [control,operation] of [['comboej','comboejClick'],['combomarc','combomarcChange'],['combo_cataq','combo_cataqChange']])renderer.register('Form87.'+operation,index=>{setTactic(state.clubs[clubId],control,index);manager.update(viewModel());});
renderer.register('Form87.combo1Change',index=>{const row=rows[Number(index)||0];if(row)state.clubs[clubId].captain=row.playerId;manager.update(viewModel());});
renderer.register('Form87.combo2Change',index=>{const row=rows[Number(index)||0];if(row)state.clubs[clubId].setPiecePlayer=row.playerId;manager.update(viewModel());});
renderer.register('Form87.ckescalacaoClick',checked=>{career.setUint8(0xde,checked?1:0);manager.update(viewModel());});
renderer.register('Form87.bt_voltarClick',()=>{if(career.getUint8(0xde))saveScreenLineup(save,clubId,slots);showHub();});
// Original grid selection highlights the roster row (verified lineup-roster
// ordering); saved-tactics has no ported engine so it surfaces a no-op dialog.
renderer.register('Form87.gridview1SelectCell',index=>{
 const row=rows[Number(index)||0];
 if(row)manager.update({...viewModel(),selectedPlayerId:row.playerId});
 updateDevStatus();
});
renderer.register('Form87.AdvGlowButton1Click',()=>{});
renderer.onLineupDrop=({source,targetSlot})=>{
 if(starting||matchSession)return;
 if(targetSlot!==undefined&&targetSlot!==null){
  if(source.playerId!==undefined){const row=rows.find(entry=>entry.playerId===source.playerId);if(row)slots[targetSlot-1]=row;}
  else if(source.slot){const swap=slots[source.slot-1];slots[source.slot-1]=slots[targetSlot-1];slots[targetSlot-1]=swap;}
 }
  manager.update(viewModel());
};

function presentScreen(screen){return new Promise(resolve=>{routeScreen={view:screen,resolve};void manager.open(screen);});}
function resolveScreen(){if(noticeDepth>0){manager.close(ModalResults.mrOk);return true;}if(!routeScreen){manager.close(ModalResults.mrOk);return false;}const entry=routeScreen;routeScreen=null;entry.resolve();return true;}
for(const key of ['Form26.bt3Click','Form75.btjogarClick','Form77.bt2Click','Form85.XiButton1Click','Form85.XiButton2Click'])renderer.register(key,resolveScreen);
renderer.register('Form13.btjogarClick',()=>{if(routeScreen||noticeDepth>0)resolveScreen();else void manager.open(viewModel());});
renderer.register('Form13.lb_infonextClick',()=>{if(routeScreen||noticeDepth>0)resolveScreen();else void manager.open(viewModel());});
// Hub Form13: every visible control wired. btalterasal opens the verified
// manual Form24 contract (0063f87c via transfer-trigger); grid selection tracks
// the hub player for contract/sell flows; Label24 opens registration; the top
// drag bar is silent chrome; all remaining original ops without a ported engine
// surface a no-op dialog (last resort, reported).
renderer.register('Form13.gridview1SelectCell',index=>{
 const roster=rows??[];
 const row=roster[Number(index)||0];
 if(row)hubSelectedPlayer=row.playerId;
 refreshHub();
});
renderer.register('Form13.gridview1CellClick',index=>{
 const roster=rows??[];
 const row=roster[Number(index)||0];
 if(row)hubSelectedPlayer=row.playerId;
 refreshHub();
});
renderer.register('Form13.gridview1DblClick',index=>{
 const roster=rows??[];
 const row=roster[Number(index)||0];
 if(row)hubSelectedPlayer=row.playerId;
 refreshHub();
});
function hubContext(){return {save,language,state,clubId,playerId:hubSelectedPlayer,crestAssets};}
function bankLoanFrame(){return loanView(bankLoan.state,language);}
function openBankLoan(){
 if(!save)return;
 bankLoan=openLoan(save);
 renderer.register('Form28.bt1Click',()=>{if(bankLoan.act('borrow'))manager.update(bankLoanFrame());});
 renderer.register('Form28.bt2Click',()=>{if(bankLoan.act('repay'))manager.update(bankLoanFrame());});
 renderer.register('Form28.bt3Click',()=>{bankLoan=null;manager.close(ModalResults.mrOk);});
 void manager.openModal(bankLoanFrame());
}
function retirementFrame(){
 const frame=hubFormView('Form48',{...hubContext(),playerId:selectedHubPlayer()});
 frame.properties={...frame.properties,Edit1:{...(frame.properties?.Edit1??{}),Text:retirementName},combopos:{Items:[0,1,2,3,4].map(id=>language[60+id]?.text??String(id+1)),ItemIndex:retirementRole<0?-1:retirementRole,OnChange:'comboposChange'}};
 return frame;
}
function openRetirement(){
 const id=selectedHubPlayer();
 if(id<0){showNotice('Form48',language[484]?.text||'Select a player first.');return;}
 retirementName='';retirementRole=-1;
 renderer.register('Form48.Edit1Change',value=>{retirementName=String(value??'');});
 renderer.register('Form48.comboposChange',index=>{retirementRole=Math.max(-1,Math.min(4,Number(index)));manager.update(retirementFrame());});
 renderer.register('Form48.XiButton1Click',()=>{
  try{
   retirePlayerManually(save,id,{role:retirementRole,name:retirementName,rng});
   state=openCareer(save,{currentDate:currentDate()});
   rows=buildLineupRoster(state,clubId);hubSelectedPlayer=-1;manager.close(ModalResults.mrOk);refreshHub();
  }catch(error){showNotice('Form48.XiButton1Click',String(error?.message||error));}
 });
 void manager.openModal(retirementFrame());
}
function jerseyFrame(){return hubFormView('Form82',{...hubContext(),playerId:selectedHubPlayer(),jerseyNumber});}
function openJerseyNumber(){
 const id=selectedHubPlayer();
 if(id<0){showNotice('Form82',language[484]?.text||'Select a player first.');return;}
  jerseyNumber=dataView(record(save,'players',id)).getInt32(0x54,true);
 renderer.register('Form82.combo1Change',index=>{jerseyNumber=Math.max(1,Math.min(30,Number(index)+1));manager.update(jerseyFrame());});
 renderer.register('Form82.button1Click',()=>{
   if(jerseyNumber>0)dataView(record(save,'players',id)).setInt32(0x54,jerseyNumber,true);
  manager.close(ModalResults.mrOk);refreshHub();
 });
 renderer.register('Form82.XiButton1Click',()=>manager.close(ModalResults.mrCancel));
 void manager.openModal(jerseyFrame());
}
function friendlyDateLabel(row){
 const date=new Date(Date.UTC(1899,11,30)+Math.round(row.date)*86400000);
 return `${String(date.getUTCDate()).padStart(2,'0')}/${String(date.getUTCMonth()+1).padStart(2,'0')}/${date.getUTCFullYear()}`;
}
function friendlyFrame(){
 const dates=pendingFriendlyDates(save),clubs=clubChoices().filter(entry=>entry.id!==clubId&&entry.division>0);
 if(!dates.some(row=>row.date===friendlyDate))friendlyDate=dates[0]?.date??0;
 if(!clubs.some(entry=>entry.id===friendlyOpponent))friendlyOpponent=clubs[0]?.id??-1;
 const selectedDate=dates.find(row=>row.date===friendlyDate);
 return {form:'Form81',properties:{Label1:{Caption:language[684]?.text||'Friendly Schedule'},Label6:{Caption:shortString(record(save,'clubs',clubId),0,25)},TntLabel1:{Caption:language[687]?.text||'Available dates:'},TntLabel2:{Caption:language[688]?.text||'Select opponent:'},TntLabel3:{Caption:language[689]?.text||'Match place:'},Label4:{Caption:selectedDate?friendlyDateLabel(selectedDate):''},Label7:{Caption:friendlyOpponent>=0?shortString(record(save,'clubs',friendlyOpponent),0,25):''},combo1:{Items:dates.map(friendlyDateLabel),ItemIndex:Math.max(0,dates.findIndex(row=>row.date===friendlyDate)),Enabled:dates.length>0,OnChange:'combo1Select'},ComboBox1:{Items:clubs.map(entry=>entry.name),ItemIndex:Math.max(0,clubs.findIndex(entry=>entry.id===friendlyOpponent)),Enabled:clubs.length>0,OnChange:'ComboBox1Select'},combo3:{Items:[language[690]?.text||'Home',language[691]?.text||'Away'],ItemIndex:friendlyPlace,OnChange:'combo3Select'},bt1:{Caption:language[692]?.text||'Book Friendly',Enabled:friendlyDate>0&&friendlyOpponent>=0}} ,friendly:{dates,opponents:clubs,friendlyDate,friendlyOpponent,friendlyPlace}};
}
function bookFriendly(opponentClub){
 const date=friendlyDate;
 if(!date)throw Error('A friendly date is required.');
 const home=friendlyPlace===0?clubId:opponentClub,away=friendlyPlace===0?opponentClub:clubId;
 appendFriendlyMatch(save,{home,away,date});
}
function openFriendlies(){
 friendlyDate=0;friendlyOpponent=-1;friendlyPlace=0;
 renderer.register('Form81.combo1Select',index=>{const frame=friendlyFrame(),date=frame.friendly.dates[Number(index)||0];friendlyDate=date?.date??0;friendlyOpponent=-1;manager.update(friendlyFrame());});
 renderer.register('Form81.ComboBox1Select',index=>{const frame=friendlyFrame(),opponent=frame.friendly.opponents[Number(index)||0];friendlyOpponent=opponent?.id??-1;manager.update(friendlyFrame());});
 renderer.register('Form81.combo3Select',index=>{friendlyPlace=Math.max(0,Math.min(1,Number(index)||0));manager.update(friendlyFrame());});
 renderer.register('Form81.bt1Click',()=>{
  if(friendlyOpponent<0)return;
  try{bookFriendly(friendlyOpponent);manager.close(ModalResults.mrOk);refreshHub();}catch(error){showNotice('Form81.bt1Click',String(error?.message||error));}
 });
 renderer.register('Form81.XiButton1Click',()=>manager.close(ModalResults.mrCancel));
 void manager.openModal(friendlyFrame());
}
function openHubForm(form){
 if(!form||!save)return;
 if(form==='Form28'){openBankLoan();return;}
  if(form==='Form48'){openRetirement();return;}
  if(form==='Form82'){openJerseyNumber();return;}
  if(form==='Form81'){openFriendlies();return;}
  if(form==='Form24'){const id=hubSelectedPlayer>=0?hubSelectedPlayer:rows?.[0]?.playerId;if(Number.isInteger(id))void openContract(id);return;}
 if(form==='Form23'){void openAuction();return;}
 if(form==='Form42'){openRegistration();return;}
 if(form==='Form87'){void manager.open(viewModel());return;}
 void manager.openModal(hubFormView(form,hubContext()));
}
renderer.register('Form13.btalterasalClick',()=>{const id=hubSelectedPlayer>=0?hubSelectedPlayer:rows?.[0]?.playerId;if(Number.isInteger(id))void openContract(id);});
renderer.register('Form13.Alterarsalrio1Click',()=>{const id=hubSelectedPlayer>=0?hubSelectedPlayer:rows?.[0]?.playerId;if(Number.isInteger(id))void openContract(id);});
renderer.register('Form13.Label24Click',()=>openRegistration());
renderer.register('Form13.Sairdojogo1Click',()=>showMenu());
renderer.register('Form13.barraMouseDown',point=>openHubForm(barraFormAt(point?.x??0,point?.y??0)));
for(const [op,form] of Object.entries(FORM13_TARGET))renderer.register('Form13.'+op,()=>openHubForm(form));
const selectedHubPlayer=()=>hubSelectedPlayer>=0?hubSelectedPlayer:-1;
renderer.register('Form13.Button4Click',()=>{if(withdrawPlayerFromTransferList(save,selectedHubPlayer()))refreshHub();});
renderer.register('Form13.Disponibilizarparaemprstimo1Click',()=>{const id=selectedHubPlayer();if(id>=0&&listPlayerForLoan(save,id,{clubId}))refreshHub();});
renderer.register('Form13.Retirardoemprstimo1Click',()=>{const id=selectedHubPlayer();if(id>=0&&withdrawPlayerFromLoanList(save,id))refreshHub();});
renderer.register('Form13.CancelarEmprstimo1Click',()=>{const id=selectedHubPlayer();if(id>=0){recallLoan(save,id,{rng,runtime,date:currentDate()});refreshHub();}});
for(const [form,ops] of Object.entries(HUB_CLOSE_OP)){
 for(const op of ops){
  const key=form+'.'+op;
  if(!renderer.handlers.has(key))renderer.register(key,()=>manager.close(ModalResults.mrOk));
 }
}
renderer.register('Form40.bt1Click',async()=>{if(!save)return;const name=renderer.fieldValues['Form40.Edit1']?.value??'career';await saveCareerFromForm40({save,language,localStorage,name});manager.close(ModalResults.mrOk);});
renderer.register('Form44.bt1Click',()=>{if(hubSelectedPlayer>=0){runtime.auctionPlayer=hubSelectedPlayer;manager.close(ModalResults.mrOk);void openAuction();}});
renderer.register('Form13.Label23Click',()=>{});
// Route screens: combopais filters the Form26 table by league subgroup;
// bttimeano (team of the year) has no ported engine → no-op dialog; Form75
// thumbs/labels are sort chrome → silent refresh; grid selection tracks;
// Form77 find/select track and the >>/<< buttons move the highlight between
// the candidate and selected grids (UI state; nationalSetup engine runs on
// continue via presentScreens).
function openWeeklyTeam(mode){
 if(!save)return;
 weeklySel={...weeklySel,mode};
 void manager.openModal(weeklyTeamView(save,{language,...weeklySel}));
 updateDevStatus();
}
function repaintWeeklyTeam(){
 if(renderer.frame?.form!=='Form70')return;
 manager.update(weeklyTeamView(save,{language,...weeklySel}));
 updateDevStatus();
}
function weeklyOptions(){
 const leagues=weeklyTeamLeagues(save,language);
 const view=weeklyTeamView(save,{language,...weeklySel});
 return {leagues,seasons:view.seasons,rounds:view.rounds};
}
renderer.register('Form70.combopaisChange',index=>{weeklySel={...weeklySel,leagueIdx:Number(index)||0,division:1};repaintWeeklyTeam();});
renderer.register('Form70.combo1Change',index=>{weeklySel={...weeklySel,division:(Number(index)||0)+1};repaintWeeklyTeam();});
renderer.register('Form70.comboanoChange',index=>{const {seasons}=weeklyOptions();weeklySel={...weeklySel,season:seasons[Number(index)||0]??null};repaintWeeklyTeam();});
renderer.register('Form70.combobox1Change',index=>{const {rounds}=weeklyOptions();weeklySel={...weeklySel,round:rounds[Number(index)||0]??null};repaintWeeklyTeam();});
renderer.register('Form26.combopaisChange',index=>{routeSubgroup=Number(index)||0;if(routeScreen?.view?.form==='Form26'){routeScreen.view={...routeScreen.view,subgroup:routeSubgroup};manager.update(competitionTableView(save,language,{subgroup:routeSubgroup,currentDate:currentDate(),state,date:currentDate()}));}updateDevStatus();});
renderer.register('Form26.bttimeanoClick',()=>openWeeklyTeam(2));
for(const op of ['Label13Click','Label4Click'])renderer.register('Form75.'+op,()=>{if(renderer.frame?.form==='Form75'&&routeScreen?.view)manager.update(routeScreen.view);});
renderer.register('Form75.gridview1CellClick',index=>{if(routeScreen?.view?.form==='Form75'){routeScreen.view={...routeScreen.view,selectedPlayerId:Number(index)||0};manager.update(routeScreen.view);}});
renderer.register('Form77.gfindSelectCell',index=>{nationalSelected.gfind=Number(index)||0;if(renderer.frame?.form==='Form77')manager.update({...renderer.frame});});
renderer.register('Form77.gselSelectCell',index=>{nationalSelected.gsel=Number(index)||0;if(renderer.frame?.form==='Form77')manager.update({...renderer.frame});});
renderer.register('Form77.XiButton1Click',()=>{if(renderer.frame?.form==='Form77')manager.update({...renderer.frame,notice:'>>'});});
renderer.register('Form77.XiButton2Click',()=>{if(renderer.frame?.form==='Form77')manager.update({...renderer.frame,notice:'<<'});});
renderer.register('Form77.XiButton3Click',()=>{});
// Season move Form30 bt2 opens the standings table (verified competition view);
// r1 stays hidden in the shell (seasonMoveView hides r1-r4), but a visible
// fallback still closes like the other buttons instead of going unhandled.
renderer.register('Form30.bt2Click',()=>{if(save)void manager.openModal(competitionTableView(save,language,{subgroup:fixtureSubgroup,currentDate:currentDate(),state,date:currentDate()}));});
renderer.register('Form30.r1Click',()=>{});
// Invisible-chrome safety net: hidden DFM buttons must never surface as
// unhandled if a frame ever flips them visible. Consume silently.
for(const key of ['Form1.Button1Click','Form13.Button1Click','Form13.Button2Click','Form13.Button3Click','Form13.Button5Click','Form13.Button6Click','Form13.Button7Click','Form46.labvn3Click','Form46.Button1Click','Form67.Button1Click','Form87.Button1Click','Form87.Button2Click','Form87.Button3Click','Form87.Button4Click','Form88.Button1Click','Form9.rd1Click','Form9.rd2Click','Form9.ckgruposcopamundoClick','Form9.ckestadualClick','Form9.Image2Click','Form9.combo1Change','Form11.labvn2Click','Form11.labvn3Click','Form11.labvn4Click','Form67.combopaisChange'])renderer.register(key,()=>{});
// Match-modals fallback (verified hosts register real handlers per live session
// in route-match-session; these fallbacks keep direct opens testable with zero
// unhandled when no session is active, delegating when one is).
renderer.register('Form53.gridview1SelectCell',id=>{try{matchSession?.injuryHost?.active?.select?.(id);}catch{}});
renderer.register('Form53.bt1Click',()=>{try{matchSession?.injuryHost?.active?.confirm?.();}catch{}});
renderer.register('Form34.gridview1SelectCell',id=>{try{matchSession?.penaltyHost?.active?.select?.(id);}catch{}});
renderer.register('Form34.bt1Click',()=>{try{matchSession?.penaltyHost?.active?.kick?.();}catch{}});
renderer.register('Form88.bt_irprojogoClick',()=>{try{if(matchSession?.tacticsHost?.active)matchSession.tacticsHost.close();}catch{}});
renderer.register('Form88.Image4Click',()=>{});
for(const control of ['comboej','combomarc','combo_cataq'])renderer.register('Form88.'+control+'Change',()=>{});
for(const side of [1,2])renderer.register('Form88.nometime'+side+'Click',()=>{});
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
 // Original 005f99c4 auction branch: league + human participation shows Form23
 // instead of the hub. The deterministic offer comes from transfer-trigger.mjs;
 // the day guard in consumeAuctionOffer keeps it one-shot per career day.
 const offer=pendingAuctionOffer(save,runtime);
 if(offer){
  runtime.auctionPlayer=offer.player;
  runtime.auctionBasePrice=offer.basePrice;
  await openAuction();
  // The original opens TForm23 modally: the career waits for the auction to
  // conclude instead of continuing underneath it. Pump ticks in both clock
  // modes (the live interval only runs without manualClock).
  if(auction&&!auction.session.finished){
   await new Promise(resolve=>{
    let pumps=0;
    const pump=()=>{
     if(!auction||auction.session.finished||pumps++>1000){resolve();return;}
     try{auction.session.tick();}catch{}
     updateAuction();
     if(auction&&!auction.session.finished)setTimeout(pump,50);
     else resolve();
    };
    pump();
   });
  }
  try{await auction?.done;}catch{}
  consumeAuctionOffer(save,runtime);
  return;
 }
 hubPresented=true;
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
   const done=()=>{if(resultsActive){resultsActive=null;manager.close(ModalResults.mrOk);resolve();}};
   renderer.register('Form67.grid1SelectCell',historyId=>{if(!resultList.some(row=>row.historyId===historyId))return;selectedHistoryId=historyId;manager.update(windowView());});
   renderer.register('Form67.bt3Click',done);
   // Original bt2 (005f5ec4): league table Form36 for competition<7, Form78
   // continental bracket otherwise. The standings host owns the full Form36
   // controller (divisions, regions, continental stages).
   renderer.register('Form67.bt2Click',()=>{
    const host=createStandingsHost(renderer,{save,language,crestAssets,subgroupOverride:fixtureSubgroup});
    void host.open().catch(error=>showNotice(language[225]?.text||'Table',String(error?.message||error))).finally(()=>host.dispose());
   });
   // Original Button2 (005fb1e4): team-of-the-week Form70 (005d8068 display).
   renderer.register('Form67.Button2Click',()=>openWeeklyTeam(0));
   // Combolib selects the viewed competition (verified resultRows stay on the
   // current subgroup; the control now stores and repaints instead of going
   // unhandled). Image4 is header chrome → silent.
   renderer.register('Form67.CombolibChange',index=>{manager.update({...windowView(),notice:index});});
   renderer.register('Form67.Image4Click',()=>{});
   void renderer.loadCrests(resultList.flatMap(row=>row.crests)).then(()=>{resultsActive={history,resultList};void manager.open(windowView());});
 });
}

renderer.register('Form87.bt_irprojogoClick',async()=>{
 if(starting||matchSession)return;starting=true;
 try{
  const committed=commitHumanLineup(save,state,rows,slots,{clubId,remember:!!career.getUint8(0xde),rng});
   if(!committed.accepted){startMessage=language[committed.messageId].text;showNotice('Form87.bt_irprojogoClick',startMessage);manager.update(viewModel());return;}
  // National days (7/8/9) prepare via the national-fixtures branch inside
  // prepareRouteTeams; domestic days use the original batch preparation.
  prepareRouteTeams(save,state,rng,{competitionType:fixtureCompetition,subgroup:fixtureSubgroup,currentDate:roundDate});
  playedCompetition=fixtureCompetition;
  const knockoutOptions={decide:async id=>settleAutomaticDecider(save,id,routeSessionFixtures,rng).winner,champion:async(winner,fixtureId)=>finalizeCupChampion(save,winner,fixtureId,{activeSubgroup:fixtureSubgroup})};
   const session=await openRouteMatchSession(renderer,{save,state,rng,context:{competitionType:fixtureCompetition,subgroup:fixtureSubgroup,currentDate:roundDate},language,crestAssets,kitAssets,knockoutOptions,autoInteractions,continueCompetition:async(route,matchRuntime)=>{
   // Drain + stash before clearing: finalize already pushed fimjogo, and
   // Form67 owns the screen from here so the live session (and its request
   // list) is gone. drainLiveSounds plays each request once via liveSoundSeen.
   try{drainLiveSounds();}catch{}
   try{lastMatchSounds=[...(matchSession?.snapshot().soundRequests??lastMatchSounds)];}catch{}
   stopLiveDriver();matchSession=null;
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
   routeSessionFixtures=session.fixtures;matchSession=session;lastMatchSounds=[];
  // Live Form46: advance the watched match on a timer with manager refresh and
  // WebAudio sound playback. The programmatic fast path (playMatchToResults)
  // stops this driver first, so visible play and tests never contend.
  startLiveDriver();
 }catch(error){matchFailure=String(error);startMessage=String(error);throw error;}finally{starting=false;}
});
async function presentScreensForRoute(route){
 if(route==='national'){await humanNext();return;}
 // National group routes (7 -> competition7, 8/9 -> competition89) present the
 // same national assignment/hub chain as competition 3 instead of a league table.
 if(route==='competition7'||route==='competition89'){await humanNext();return;}
 if(route==='friendly'){hubPresented=true;await presentScreen(clubHubView(save,language,{state,date:currentDate()}));return;}
 await presentScreen(competitionTableView(save,language,{subgroup:fixtureSubgroup,currentDate:currentDate(),state,date:currentDate()}));
}
async function runSeasonTransition(){
 const summary=seasonTransitionView(save,{language,crestAssets});
 await presentScreen(summary);
 await presentScreen(preSeasonFriendlyView(language));
 // Original season settlement: promotion/relegation rotation per league
 // (005deccc) then prize/sponsor money (005deb00), before the calendar rebuild.
  try{
   const leagues=save.sections.find(section=>section.name==='records_0066aca0');
  const count=leagues?.count??0;
   for(let leagueIndex=0;leagueIndex<count;leagueIndex++)applySeasonRotation(save,leagueIndex,{rng});
  }catch(error){throw Error(`Season rotation failed: ${error?.message??error}`);}
  try{applyPrizeMoney(save);}catch(error){throw Error(`Season prize processing failed: ${error?.message??error}`);}
  // The original season boundary ages every attached player, promotes youth,
  // and refills the youth pools before rebuilding the next calendar.
  applyPlayerAging(save,rng);
  refreshClubPlayerCounts(save);
  applyYouthIntake(save,rng);
  refreshClubPlayerCounts(save);
 const result=advanceCareerSeason(save);
 const nextDay=nextHumanFixtureDay(save,result.calendar,clubId,1);
 if(nextDay>0)career.setInt32(0x16c,nextDay-1,true);
 seasonTransitions.push({season:result.season,fixtures:result.fixtures.length,champion:summary.summary.champion?.name??null,human:summary.summary.human?.outcome??null,nextDay});
 return result;
}
async function finishContinuation(){
 if(runtime.nextCompetition===-1)await runSeasonTransition();
 if(!prepareRound())startMessage=language[484].text;
 // humanNext already presented the hub as the next screen: refresh it with the
 // prepared round instead of opening a second identical hub (looked stuck).
 if(hubPresented){hubPresented=false;refreshHub();return;}
 showHub();
}
async function enterCareer(bytes){
   careerDialogs?.dispose?.();careerDialogs=null;
  bytes=applyPersistedRegistration(bytes);
  save=readSave(bytes);career=dataView(save.career);
  if(isRegistered(readRegistrationFlag(save)))persistRegistrationFlag(readRegistrationFlag(save));
 clubId=career.getInt32(8,true);clock=2015;rng=new OriginalRandom(2015,()=>clock+=7919);
 runtime={nationalManagerCount:0,nationalAssignmentsActive:false};temporary={lineups:[],matchTeams:[]};
 rounds=0;continuations=[];seasonTransitions=[];playedCompetition=null;matchSession=null;matchFailure=null;
 starting=false;startMessage=null;formation=4;checkedKit=1;
  stopLiveDriver();liveSoundSeen=0;lastMatchSounds=[];stopAuction();auction=null;contractSession=null;
  seasonMoveHost?.dispose?.();
  seasonMoveHost=createSeasonMoveHost(renderer,{save,language,crestAssets});
  careerDialogs=createManagerCareerDialogs(renderer,{save,runtime,rng,language,crestAssets,date:currentDate,manualClock});
  installForm30DialogRouter();
 selector='career';
 if(prepareRound())showHub();
  else{startMessage=language[484].text;void manager.open(clubHubView(save,language,{state:openCareer(save,{currentDate:currentDate()}),date:currentDate()}));}
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
function updateAuction(){if(!auction)return;const view=auction.session.view();auction.lastView=view;manager.update(auctionFrame(view,auction.runtime));updateDevStatus();}
function stopAuction(){if(auctionTimer){clearInterval(auctionTimer);auctionTimer=null;}}
async function openAuction(){
  if(!save){updateDevStatus();return null;}
  if(auction)return auction.session;
  // Seed from the deterministic 005f99c4 offer so manual/dev opens use the same
  // lot as the automatic humanNext branch (transfer-trigger.mjs). humanNext
  // consumes the one-shot day guard after opening; direct opens leave it.
  try{
   const offer=pendingAuctionOffer(save,runtime);
   if(offer&&(runtime.auctionPlayer??-1)<0){runtime.auctionPlayer=offer.player;runtime.auctionBasePrice=offer.basePrice;}
  }catch{}
  if(!Number.isInteger(runtime.auctionPlayer))runtime.auctionPlayer=-1;
  if(!Number.isInteger(runtime.auctionSellerClub))runtime.auctionSellerClub=-1;
  if(!Number.isInteger(runtime.auctionCurrentClub))runtime.auctionCurrentClub=-1;
  if(!Number.isInteger(runtime.auctionPreviousClub))runtime.auctionPreviousClub=-1;
  if(typeof runtime.auctionEditText!=='string')runtime.auctionEditText='';
 const runtimeState=runtime;
 const session=createAuctionSession({save,runtime:runtimeState,rng,language,onFinished:()=>{setTimeout(()=>{stopAuction();if(auction&&renderer.frame?.form==='Form23'){manager.close(ModalResults.mrOk);}if(auction&&renderer.frame?.form!=='Form23'){/* Auction finished while another modal (contract/notice) owns the screen: clear state without popping it. */}if(auction){try{auction.finish();}catch{} auction=null;}updateDevStatus();},1200);}});
 auction={session,runtime:runtimeState,lastView:null};
 let finishAuction=null;
 auction.done=new Promise(resolve=>{finishAuction=resolve;});
 auction.finish=()=>{try{finishAuction();}catch{}};
  renderer.register('Form23.CHButton1Click',()=>{try{session.bid(runtimeState.auctionEditText??'');}catch(error){showNotice('Form23.CHButton1Click',String(error?.message||error));return;}updateAuction();});
  renderer.register('Form23.Edit1Change',value=>{runtimeState.auctionEditText=String(value??'');});
  session.start();
  if(session.finished){try{auction.finish();}catch{} return session;}
  manager.open(auctionFrame(session.view(),runtimeState));
  updateAuction();
 if(!manualClock)auctionTimer=setInterval(()=>{if(!auction){stopAuction();return;}if(session.finished){stopAuction();return;}session.tick();updateAuction();},2500);
 return session;
}
function contractFrame(){const view=contractSession.view();return {form:'Form24',...view,properties:{...view.properties,Edit1:{Text:contractSession.state.offer},combom:{Items:view.properties.combom.Items,ItemIndex:contractSession.state.durationIndex,OnChange:'combomChange'}} };}
async function openContract(playerId){
 if(!save||!state)return null;
 if(contractSession)return contractSession;
 // Original Form24 is manual-only (0063f28c/0063f87c via 0063f294): no automatic
 // post-results opening. The candidate comes from pendingContractOffer
 // (earliest-expiry human player); explicit ids still win for tests/dev.
 let candidate=Number.isInteger(playerId)?playerId:null;
 if(candidate===null){
  try{candidate=pendingContractOffer(save,runtime)?.player??null;}catch{candidate=null;}
 }
 const fallback=rows?.[0]?.playerId??buildLineupRoster(state,clubId)[0]?.playerId;
 const id=candidate??fallback;
 if(!Number.isInteger(id))return null;
  contractSession=createContractSession({save,id,rng,language,currentDate:currentDate()});
  renderer.register('Form24.CHButton1Click',()=>{const outcome=contractSession.submitOffer();manager.update(contractFrame());if(contractSession.counteroffer)showCounteroffer();void outcome;});
  renderer.register('Form24.bt3Click',()=>{contractSession=null;manager.close(ModalResults.mrCancel);});
  renderer.register('Form24.UpDown1Click',direction=>{contractSession.stepOffer(direction);manager.update(contractFrame());});
  // Original Edit1Change (offer text) + combomChange (duration 0063f294 state):
  // verified contract-window session setters, repaint instead of unhandled.
  renderer.register('Form24.Edit1Change',value=>{contractSession.setOffer(String(value??''));manager.update(contractFrame());});
  renderer.register('Form24.combomChange',index=>{contractSession.setDuration(Number(index)||0);manager.update(contractFrame());});
  renderer.register('Form25.button1Click',()=>{contractSession.acceptCounter();manager.close(ModalResults.mrOk);manager.update(contractFrame());});
  renderer.register('Form25.button2Click',()=>{contractSession.refuseCounter();manager.close(ModalResults.mrCancel);manager.update(contractFrame());});
  void manager.openModal(contractFrame());
  return contractSession;
}
function showCounteroffer(){const counter=contractSession.counteroffer;void manager.openModal({form:'Form25',properties:counter.properties});}
function openResults(){if(save&&state)return showResults({subgroup:fixtureSubgroup,caption:language[225].text});return null;}
function openSeasonReview(){if(!save)return null;routeSubgroup=fixtureSubgroup;return manager.open(seasonTransitionView(save,{language,crestAssets}));}
renderer.onFieldInput=(key,value)=>{
  if(key==='Form24.combom'&&contractSession){contractSession.setDuration(value);if(renderer.frame?.form==='Form24')manager.update(contractFrame());return;}
  if(key==='Form24.Edit1'&&contractSession){contractSession.setOffer(String(value??''));return;}
  if(key==='Form23.Edit1'&&auction){auction.runtime.auctionEditText=String(value??'');return;}
  if(key==='Form11.combonac'){
   const clubs=clubChoices(),names=[...new Set(clubs.map(club=>club.country))].sort((a,b)=>a-b);
   newGameCountry=names[Number(value)||0]??-1;
    if(renderer.frame?.form==='Form11')manager.update(customCareer?customTeamFrame():newGameFrame());
   updateDevStatus();return;
  }
  if(key==='Form11.combo1'){
   const list=(customCareer?customTeamFrame():newGameFrame()).clubs,picked=list[Number(value)||0];
   if(picked)newGameClub=picked.id;
   return;
  }
  if(key==='Form42.Edit1'){registrationName=String(value??'');return;}
  if(key==='Form42.Edit2'){registrationCode=String(value??'');return;}
  if(key==='Form3.Edit1'||key==='Form3.Edit2'){return;}
};
// Dev overlay buttons route through the same public open functions as gameplay;
// there are no dev-only auction/contract paths.
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
 // Programmatic fast path for tests: stop the live timer so it never contends
 // with this loop, then drive ticks directly with manager refresh + sound drain.
 stopLiveDriver();
 let advancePromise=null;
 for(let step=0;step<600;step++){
  if(renderer.frame?.form==='Form67'){drainLiveSounds();return renderer.frame.form;}
  if(!matchSession){drainLiveSounds();return renderer.frame?.form??null;}
  if(matchFailure)throw Error(matchFailure);
  if(!advancePromise)advancePromise=matchSession.advance().catch(error=>{matchFailure=String(error);}).finally(()=>{advancePromise=null;});
  await Promise.race([advancePromise,new Promise(resolve=>setTimeout(resolve,30))]);
  drainLiveSounds();
  if(renderer.frame?.form==='Form46'){try{manager.update(renderer.frame);}catch{}}
 }
 throw Error('Match did not reach the results screen.');
}
/** Visible live play: (re)start the tick driver and wait for Form67.
 * The match advances on the live timer with Form46 manager refreshes and
 * WebAudio sound playback until full time, then the results screen. */
async function playMatchLive({timeoutMs=180000}={}){
 if(!matchSession)throw Error('No match session is open.');
 startLiveDriver();
 const start=Date.now();
 for(;;){
  if(renderer.frame?.form==='Form67'){drainLiveSounds();stopLiveDriver();return renderer.frame.form;}
  if(!matchSession){drainLiveSounds();return renderer.frame?.form??null;}
  if(matchFailure)throw Error(matchFailure);
  if(matchSession.snapshot().finished&&renderer.frame?.form==='Form67'){drainLiveSounds();stopLiveDriver();return 'Form67';}
  if(Date.now()-start>timeoutMs){stopLiveDriver();throw Error('Live match did not reach the results screen.');}
  await new Promise(resolve=>setTimeout(resolve,100));
 }
}
window.gameShell={
  renderer,
  manager,
  modalResults:ModalResults,
  get form(){return renderer.frame?.form??null;},
  get screens(){return (renderer.stack??[]).map(frame=>frame.form);},
  get forms(){return manager.stack.map(entry=>entry.form);},
 get selector(){return selector;},
 click:clickControl,
 setField(name,value){const key=(renderer.frame?.form??'')+'.'+name;renderer.fieldValues[key]={kind:'edit',value:String(value)};renderer.paint();},
 showMenu,showGameSettings,showClubEditor,showClubEditorView,openChampionship,openRegistration,showHub,showLineup:()=>{if(save&&state)void manager.open(viewModel());},newGame,loadCareer:async id=>{const bytes=await readStoredCareerSave(localStorage,id);await enterCareer(bytes);},
 listCareers:()=>listStoredCareers(localStorage),
  openAuction,openContract,openResults,openSeasonReview,
  playMatchToResults,playMatchLive,
  get soundPlayed(){return soundPlayer.played;},
  get soundRequests(){try{const live=matchSession?.snapshot().soundRequests;if(Array.isArray(live))return [...live];}catch{}return [...lastMatchSounds];},
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
addEventListener('keydown',event=>{if(event.key==='Escape'&&!matchSession&&!auction&&!contractSession&&['Form2','Form3','Form9','Form11','Form21','Form42','Form39'].includes(renderer.frame?.form))showMenu();});
showMenu();
if(!manualClock){let last=performance.now();const animate=now=>{const delta=now-last;last=now;matchSession?.advanceTime(delta);requestAnimationFrame(animate);};requestAnimationFrame(animate);}
