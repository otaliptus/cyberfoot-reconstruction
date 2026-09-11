/** Form13 CreateForm targets (FUN_00487474 class pointers = VMT-0x4c).
 * Each menu/button opens that original form, not a dump dialog. */
import {financeView,originalMoney} from './finance-view.mjs';
import {loanWindowView} from './loan-window.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {record,shortString,writeSave} from './save-format.mjs';
import {originalPlayerValue} from './player-value.mjs';
import {careerAgenda} from './schedule.mjs';
import {leagueStandingsData} from './standings-data.mjs';
import {findCompetitionMetadata} from './champion-records.mjs';
import {writeStoredCareer,createCareerRecord,careerSaveSummary} from './career-menu.mjs';

export const FORM13_TARGET={
 Finanas1Click:'Form22',Image9Click:'Form22',
 Emprstimobancrio1Click:'Form28',
 Venderjogador1Click:'Form44',btvenderClick:'Form44',
 Aposentarjogador1Click:'Form48',btaposentaClick:'Form48',
 SalvarClick:'Form40',btjogaClick:'Form40',
 opcoesClick:'Form32',
 Sobreojogo1Click:'Form45',
 Label20Click:'Form80',
 MenuItem7Click:'Form63',
 mn_libClick:'Form69',mn_sulClick:'Form69',
 mn_copaClick:'Form35',abelaSulAmericana1Click:'Form35',
 Label323Click:'Form62',
 JogosAmistosos1Click:'Form81',
 Escolhernmero1Click:'Form82',
 HistricoJogos1Click:'Form16',Image4Click:'Form16',gridview1DblClick:'Form16',
 MenuItem5Click:'Form50',
 Label53Click:'Form19',
 Label51Click:'Form86',
 mn_timerodadaClick:'Form70',mn_timedoanoClick:'Form70',
 mn_boladeouroClick:'Form83',
 mundiaisClick:'Form78',
 Campees1Click:'Form29',
 Artilheiros1Click:'Form20',
 MenuItem3Click:'Form47',lb_tecClick:'Form47',
 RansfernciasJogadores1Click:'Form58',ltimascontrataesdetcnicos1Click:'Form58',
 Histricocompletodejogos1Click:'Form15',Label6Click:'Form15',
 Rankingdeclubes1Click:'Form71',
 mn_seutimeClick:'Form18',
 Label49Click:'Form55',
 Sedemitir1Click:'Form65',
 Comprarjogador1Click:'Form23',
 Label24Click:'Form42'
};

/** Top-bar Form13.barraMouseDown hit tests from 0063e934 (X,Y in the image). */
export function barraFormAt(x,y){
 if(y>0xcf&&y<0xf4&&x>7&&x<0x30)return 'Form36';
 if(y>0x103&&y<0x12a&&x>7&&x<0x30)return 'Form91';
 if(y>0x138&&y<0x16c&&x>7&&x<0x30)return 'Form8';
 if(y>0x17d&&y<0x1a6&&x>7&&x<0x30)return 'Form14';
 if(y>0x1d&&y<0x47&&x>7&&x<0x30)return 'Form27';
 return null;
}

export const HUB_CLOSE_OP={
 Form22:['bt3Click','XiButton1Click','XiButton2Click'],
 Form28:['bt3Click','bt2Click'],
 Form40:['XiButton1Click'],
 Form44:['XiButton1Click'],
 Form48:['XiButton1Click','CHButton1Click'],
 Form16:['XiButton1Click'],
 Form32:['Image2Click','XiButton2Click'],
 Form45:['XiButton2Click'],
 Form80:['FormClose'],
 Form63:['imgfecharClick','Image7Click'],
 // Form36 close (Image8) and the other close controls are owned per-open by
 // the standings host or the custom-championship modal; Image12 switches to
 // the lower-divisions view and must never close.
 Form36:[],
 Form69:['imgfecharClick','XiButton1Click','bt3Click'],
 Form35:['Image8Click','XiButton1Click','bt3Click'],
 Form62:['XiButton1Click','bt3Click'],
 Form81:['XiButton1Click','bt3Click'],
 Form82:['XiButton1Click','bt3Click'],
 Form50:['XiButton1Click','bt3Click'],
 Form19:['XiButton1Click','bt3Click'],
 Form86:['XiButton1Click','bt3Click'],
 Form70:['XiButton1Click','bt3Click','imgfecharClick'],
 Form83:['XiButton1Click','bt3Click'],
 Form78:['XiButton1Click','bt3Click','Image8Click'],
 Form29:['XiButton1Click','bt3Click'],
 Form20:['XiButton1Click','bt3Click'],
 Form47:['XiButton1Click','bt3Click'],
 Form58:['XiButton1Click','bt3Click'],
 Form15:['XiButton1Click','bt3Click'],
 Form71:['XiButton1Click','bt3Click'],
 Form18:['XiButton1Click','bt3Click'],
 Form55:['XiButton1Click','bt3Click'],
 Form65:['XiButton1Click','bt3Click','xibutton1Click','xibutton2Click'],
 Form31:['XiButton1Click','bt3Click'],
 Form59:['XiButton1Click','bt3Click'],
 Form14:['XiButton1Click','bt3Click'],
 Form91:['XiButton1Click','bt3Click','Image8Click'],
 Form8:['XiButton1Click','bt3Click'],
 Form27:['XiButton1Click','bt3Click']
};

function dv(bytes){return new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);}
function text(language,id){return language[id]?.text??'';}

function playerName(save,id){
 try{return shortString(record(save,'players',id),0,25);}catch{return '';}
}

export function hubFormView(form,context={}){
 const {save,language,state,clubId,playerId=-1,crestAssets}=context;
 if(form==='Form22'&&save)return financeView(save,language);
 if(form==='Form28'&&save){
  const club=record(save,'clubs',clubId),cash=dv(club).getBigInt64(0x48,true);
  return {form,properties:{Label2:{Caption:originalMoney(Number(cash/10000n))},Label6:{Caption:originalMoney(0)},Label7:{Caption:originalMoney(0)},label32:{HTMLText:`<p align="center"><shad>${text(language,109)}</shad></p>`}}};
 }
 if(form==='Form40'){
  return {form,properties:{TntLabel1:{Caption:text(language,3)||'Salvar'},label1:{Caption:text(language,32)||''},Edit1:{Text:context.saveName??'career'}}};
 }
 if(form==='Form44'&&save){
  const id=playerId>=0?playerId:-1,name=id>=0?playerName(save,id):'',value=id>=0?originalPlayerValue(save,id):0;
  return {form,properties:{TntLabel1:{Caption:name},label6:{Caption:originalMoney(value)},TntLabel2:{Caption:originalMoney(Math.floor(value*0.12))},Edit1:{Text:String(value)},imagePaths:{escudo:clubCrestPath(save,clubId,crestAssets)}},playerId:id};
 }
 if(form==='Form48'&&save){
  const id=playerId>=0?playerId:-1;
  return {form,properties:{Label2:{Caption:' '+ (id>=0?playerName(save,id):'')},Edit1:{Text:''}}};
 }
 if(form==='Form14'&&save)return {...loanWindowView(save,{playerId,clubId,mode:'in'},language),form:'Form14'};
 if(form==='Form59'&&save)return {...loanWindowView(save,{playerId,clubId,mode:'out'},language),form:'Form59'};
 if(form==='Form45')return {form,properties:{}};
 if(form==='Form32')return {form,properties:{}};
 if(form==='Form80')return {form,properties:{}};
 if(form==='Form63'&&save){
  const agenda=careerAgenda(save),rows=(agenda?.fixtures??[]).slice(0,20).map((row,i)=>({cells:{NxTextColumn1:String(i+1),NxTextColumn2:state?.clubs?.[row.home]?.name??String(row.home),NxTextColumn3:'x',NxTextColumn4:state?.clubs?.[row.away]?.name??String(row.away)}}));
  return {form,properties:{Label2:{Caption:text(language,225)}},grids:{t1:rows}};
 }
 if(form==='Form36'&&save){
  try{
   const data=leagueStandingsData(save,0,1,language,crestAssets);
   const rows=(data?.rows??data??[]).slice?.(0,20)??[];
   return {form,properties:{labcamp:{HTMLText:`<p align="center"><shad>${text(language,225)}</shad></p>`}},standings:rows};
  }catch{return {form,properties:{}};}
 }
 if(form==='Form16'&&save){
  const id=playerId>=0?playerId:-1;
  return {form,properties:{HTMLabel1:{HTMLText:id>=0?playerName(save,id):''}}};
 }
 if(form==='Form91'&&save){
  const youth=[];
  try{
   const players=save.sections.find(s=>s.name==='players');
   for(let i=0;i<players.count&&youth.length<25;i++){
    const row=dv(record(save,'players',i));
    if(row.getInt32(0x20,true)===clubId&&row.getInt32(0x18,true)<18)youth.push({playerId:i,cells:{nome:shortString(record(save,'players',i),0,25),idade:String(row.getInt32(0x18,true))}});
   }
  }catch{}
  return {form,properties:{Label1:{Caption:text(language,67)}},grids:{gridview1:youth}};
 }
 return {form,properties:{}};
}

function sectionInts(save,name,size){
 const s=save.sections.find(x=>x.name===name);
 if(!s)return [];
 const v=dv(s.data),rows=[];
 for(let i=0;i<s.count;i++){const r=[];for(let k=0;k<size/4;k++)r.push(v.getInt32(i*size+k*4,true));rows.push(r);}
 return rows;
}

function clubName(save,id){
 try{return shortString(record(save,'clubs',id),0,25);}catch{return '';}
}

/** TForm13_Button4Click: withdraw a selected player from the transfer list. */
export function withdrawPlayerFromTransferList(save,playerId){
 if(!save||!Number.isInteger(playerId)||playerId<0)return false;
 const player=record(save,'players',playerId),v=dv(player);
 v.setUint8(0x7d,0);
 v.setInt32(0x48,0,true);
 v.setInt32(0x4c,0,true);
 return true;
}

/** Leagues from records_0066aca0 for the Form70 combopais selector. */
export function weeklyTeamLeagues(save,language){
 const s=save.sections.find(x=>x.name==='records_0066aca0');
 if(!s)return [];
 const v=dv(s.data),out=[];
 for(let i=0;i<s.count;i++){
  const country=v.getInt32(i*660+0x140,true);
  if(country<0)continue;
  out.push({index:i,country,name:language[786+country]?.text??String(country),divisions:Math.max(1,v.getInt32(i*660+0x144,true))});
 }
 return out;
}

/** Original 005d8068 display: last weekly/year team row for the selection.
 * League combos: combopais=league, combo1=division, comboano=season,
 * combobox1=round (offsets 0x314/0x310/0x308/0x30c in field order).
 * Title 0x3df team-of-week / 0x3e0 team-of-year from TForm70_FormCreate. */
export function weeklyTeamView(save,{language,leagueIdx=0,division=1,season=null,round=null,mode=0}={}){
 const leagues=weeklyTeamLeagues(save,language);
 const league=leagues.length?leagues[Math.min(Math.max(0,leagueIdx),leagues.length-1)]:null;
 const metadata=league?findCompetitionMetadata(save,{competition:1,country:league.country,division}):0;
 const yearMode=mode===2;
 const rows=sectionInts(save,yearMode?'records_0066acd8':'records_0066b578',yearMode?104:100);
 const seasons=[...new Set(rows.map(r=>yearMode?dv(save.career).getInt32(0xc0,true):r[0]))].sort((a,b)=>a-b);
 const selSeason=season??seasons[seasons.length-1]??dv(save.career).getInt32(0xc0,true);
 const match=r=>yearMode?(r[1]===metadata&&r[0]===round):(r[2]===metadata&&r[0]===selSeason&&(round===null||r[1]===round));
 const rounds=[...new Set(rows.filter(r=>yearMode?r[1]===metadata:(r[2]===metadata&&r[0]===selSeason)).map(r=>yearMode?r[0]:r[1]))].sort((a,b)=>a-b);
 const selRound=round??rounds[rounds.length-1]??null;
 const team=[];
 for(let i=rows.length-1;i>=0;i--){
  const r=rows[i];
  if(!match(r))continue;
  const players=yearMode?r.slice(2,13):r.slice(3,14),clubs=yearMode?r.slice(13,24):r.slice(14,25);
  for(let s=0;s<11;s++){
   const pid=players[s];
   if(pid>0)team.push({player:playerName(save,pid),club:clubName(save,clubs[s])});
  }
  break;
 }
 const font={name:'Arial',height:12,bold:true,italic:false,underline:false,strikeout:false,color:'#ffffff'};
 const dynamic=team.map((entry,i)=>({kind:'text',x:28,y:78+i*33,w:585,h:30,text:`${i+1}. ${entry.player} — ${entry.club}`,lines:null,font,color:'#ffffff',align:'left',wordWrap:false,shadow:{offset:1,color:'#000000'},background:null,vAlign:'top'}));
 const divCount=league?.divisions??1;
 return {form:'Form70',
  properties:{
   labtitulo:{Caption:language[yearMode?992:991]?.text??''},
   combopais:{Items:leagues.map(l=>l.name),ItemIndex:leagues.length?leagues.indexOf(league):-1,OnChange:'combopaisChange'},
   combo1:{Items:Array.from({length:divCount},(_,d)=>language[34+d+1]?.text??String(d+1)),ItemIndex:Math.min(Math.max(0,division-1),divCount-1),OnChange:'combo1Change'},
   comboano:{Items:seasons.map(String),ItemIndex:Math.max(0,seasons.indexOf(selSeason)),OnChange:'comboanoChange'},
   combobox1:{Items:rounds.map(String),ItemIndex:Math.max(0,rounds.indexOf(selRound)),OnChange:'combobox1Change'}
  },
  dynamic,selection:{leagueIdx:league?leagues.indexOf(league):0,division,season:selSeason,round:selRound,mode},
  leagues:leagues.map(l=>l.name),seasons,rounds};
}

/** Custom-championship result on the Form36 tables screen.
 * Reads the built pairing slots (00631974 layout: league stride 0x294,
 * division d slots at d*0x50-0x54+pos*4) — real output of
 * applyCustomChampionship, zero stats because nothing has been played. */
export function customChampionshipTableView(buildSave,leagueIndex,{language,cupTies=[]}={}){
 const section=buildSave.sections.find(s=>s.name==='records_0066aca0');
 const base=buildSave.sections.find(s=>s.name==='clubs');
 const v=dv(section.data);
 const divCount=v.getInt32(leagueIndex*660+0x144,true);
 const mode=dv(buildSave.career).getInt32(0x168,true);
 const perDiv=mode===2?20:10;
 const font={name:'Arial',height:12,bold:true,italic:false,underline:false,strikeout:false,color:'#ffffff'};
 const dynamic=[];
 let y=64;
 for(let d=1;d<=divCount;d++){
  dynamic.push({kind:'text',x:28,y,w:585,h:24,text:`${language[34+d]?.text??('Division '+d)}`,lines:null,font,color:'#ffff00',align:'left',wordWrap:false,shadow:{offset:1,color:'#000000'},background:null,vAlign:'top'});
  y+=26;
  for(let pos=1;pos<=perDiv;pos++){
   const id=v.getInt32(leagueIndex*660+d*0x50-0x54+pos*4,true);
   const name=(id>=0&&id<base.count)?clubName(buildSave,id):'?';
   dynamic.push({kind:'text',x:44,y,w:569,h:22,text:`${pos}. ${name}`,lines:null,font:{...font,bold:false},color:'#ffffff',align:'left',wordWrap:false,shadow:{offset:1,color:'#000000'},background:null,vAlign:'top'});
   y+=22;
   if(y>560)break;
  }
  if(y>560)break;
 }
 for(const tie of cupTies.slice(0,8)){
  if(y>560)break;
  dynamic.push({kind:'text',x:28,y,w:585,h:22,text:`${tie}`,lines:null,font:{...font,bold:false},color:'#ffffff',align:'left',wordWrap:false,shadow:{offset:1,color:'#000000'},background:null,vAlign:'top'});
  y+=22;
 }
 return {form:'Form36',properties:{labcamp:{HTMLText:`<p align="center"><shad>Copa Internacional</shad></p>`}},dynamic,custom:{leagueIndex,divCount,perDiv}};
}

export async function saveCareerFromForm40({save,language,localStorage,name}){
 const bytes=writeSave(save);
 const summary=careerSaveSummary(bytes);
 const entry=await createCareerRecord(bytes,{managerName:name||summary?.manager||'career',clubId:new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength).getInt32(8,true),language:language[0]?.text,summary});
 writeStoredCareer(localStorage,entry);
 return entry;
}
