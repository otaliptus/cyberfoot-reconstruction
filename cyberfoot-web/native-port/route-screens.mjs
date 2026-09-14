import {record,shortString} from './save-format.mjs';
import {careerAgenda,careerSchedule} from './schedule.mjs';
import {nationalEligibility} from './national-setup.mjs';
import {automaticNextState,nationalManagerAssignmentIndex} from './results-routing.mjs';
import {originalMoney} from './finance-view.mjs';
import {originalPlayerValue} from './player-value.mjs';
import {leagueTitle} from './league-title.mjs';
import {buildLineupRoster} from './lineup-roster.mjs';
import {selectResultHistory,resultRows} from './results-data.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const text=(language,id,fallback='')=>language?.[id]?.text??fallback;
const pad=n=>String(n).padStart(2,'0');
export function formatCareerDate(serial){
 if(!Number.isFinite(serial))return '';
 const date=new Date(Date.UTC(1899,11,30)+Math.trunc(serial)*86400000);
 return `${pad(date.getUTCDate())}/${pad(date.getUTCMonth()+1)}/${date.getUTCFullYear()}`;
}
const roleIds=[143,147,145,149,151];
const competitionCaptions={1:225,2:342,3:324,4:220,5:224,6:221,7:326,8:327,9:328,10:224};
export const resultsRoutes={0:'otherNext',1:'leagueNext',2:'cupNext',3:'nationalNext',4:'cupNext',5:'cupNext',6:'cupNext',7:'otherNext',8:'otherNext',9:'otherNext',10:'cupNext'};
export const matchRoutes={0:'friendly',1:'batch',2:'batch',3:'national',4:'batch',5:'competition5',6:'batch',7:'competition7',8:'competition89',9:'competition89',10:'competition10'};
export const routeScreens=['Form13','Form26','Form75','Form77'];
/** Same dispatch table as continueResultsCareer's previousCompetition switch. */
export function resultsRoute(competition){return resultsRoutes[competition]??null;}
/** Same route names as finalizeMatchBatch. */
export function matchRoute(competition){return matchRoutes[competition]??null;}
export function competitionCaption(competition,language){return text(language,competitionCaptions[competition]??342,text(language,342,'Cup'));}
export function careerDate(save){const c=view(save.career),calendar=careerSchedule(save),day=c.getInt32(0x16c,true);return calendar[day-1]?.date;}
export function nationalClubId(career,index){const direct=career.getInt32(0x600+index*4,true);return direct>=0?direct:career.getInt32(0x604+(index-1)*4,true);}
/** 5f98f4 scan plus 64d890 eligibility; index is the original 1-based 66b710 value. */
export function nationalAssignmentCandidates(save,{date}={}){
 if(!Number.isFinite(date))throw Error('Original calendar date required.');
 const c=view(save.career),rows=[];
 for(let slot=0;slot<c.getInt32(0x5fc,true);slot++){
  const clubId=c.getInt32(0x604+slot*4,true);
  if(clubId<0)continue;
  const country=view(record(save,'clubs',clubId)).getInt32(0x3c,true);
  rows.push({index:slot+1,slot,clubId,nationalClubId:nationalClubId(c,slot+1),country,eligible:nationalEligibility(save,country,date)});
 }
 return rows;
}
export function nextFixture(save){const agenda=careerAgenda(save),fixture=agenda.fixtureId>=0?agenda.fixtures[agenda.fixtureId]:null;return {agenda,fixture};}
function squadRows(save,state,clubId,language){
 if(!state)return [];
 const rows=buildLineupRoster(state,clubId);
 return rows.map(row=>{
  const p=state.players[row.playerId];
  return {...row,cells:{id:String(row.playerId),status:'',posicaojog:text(language,roleIds[p.role]??roleIds[0]),condicao:'',nome:p.name,funcaojog:text(language,roleIds[p.role]??roleIds[0]),forca:p.skill,energia:p.condition,salario:'',passe:'',gols:p.seasonGoals??0,habilidades:'',idade:p.age,moral:'',passet:'',salariot:'',nxstatus:''}};
 });
}
export function clubHubView(save,language,{state,date,selectedPlayerId=-1}={}){
   const c=view(save.career),clubId=c.getInt32(8,true),bytes=record(save,'clubs',clubId),club=view(bytes),name=shortString(bytes,0,25);
   const {fixture}=nextFixture(save),opponent=fixture?fixture.clubs.find(id=>id!==clubId):null,competition=fixture?fixture.competition:-1;
   const managerId=club.getInt32(0x44,true),manager=managerId>=0?shortString(record(save,'records_0066b718',managerId),0,25):'';
   const squad=squadRows(save,state,clubId,language),selected=squad.find(row=>row.playerId===selectedPlayerId)??squad[0],firstPlayer=selected&&state?.players?.[selected.playerId];
   const playerName=firstPlayer?.name??text(language,129,'Name'),playerRole=firstPlayer?text(language,roleIds[firstPlayer.role]??roleIds[0]):'P';
   const playerBytes=firstPlayer?record(save,'players',selected.playerId):null,playerView=playerBytes?view(playerBytes):null;
   const playerValue=firstPlayer?originalPlayerValue(save,selected.playerId):0;
   const playerSalary=playerView?Number(playerView.getBigInt64(0x38,true)/10000n):0;
   const contractEnd=playerView?.getFloat64(0x70,true),traits=firstPlayer?[firstPlayer.trait1,firstPlayer.trait2].map(id=>text(language,157+id*2)).filter(Boolean).join(' / '):'';
   const situation=firstPlayer?.unavailableFlag?text(language,58,'Unavailable'):'-';
   const contract=Number.isFinite(contractEnd)?`${text(language,55,'Contract expires on')}: ${formatCareerDate(contractEnd)}`:'-';
   const info=`<P align="left"><SHAD><B>${text(language,49,'Skill')}:</B> ${firstPlayer?.skill??0}<IND x="150"><B>${text(language,50,'Age')}:</B> ${firstPlayer?.age??0}<BR><B>${text(language,51,'Value')}:</B> ${originalMoney(playerValue)}<IND x="150"><B>${text(language,52,'Salary')}:</B> ${originalMoney(playerSalary)}<BR><B>${text(language,53,'Matches Played')}:</B> ${firstPlayer?.seasonAppearances??0}    <B>${text(language,339,'Goals')}:</B> ${firstPlayer?.seasonGoals??0}    <B>Cards:</B> ${firstPlayer?.seasonCards??0}<BR><B>${text(language,54,'Characteristics')}:</B> ${traits||'-'}<BR><B>Contract:</B> ${contract}<BR><B>Situation:</B> ${situation}</SHAD></P>`;
   const squadValue=squad.reduce((total,row)=>total+originalPlayerValue(save,row.playerId),0);
   const managementRating=Math.max(0,Math.min(100,club.getInt32(0x54,true))),supportersRating=Math.max(0,Math.min(100,club.getInt32(0x50,true)));
   const properties={
    Gradient1:{ColorBegin:'clNavy',ColorEnd:'clBlack',Width:1024,Height:768},
    nometime:{Caption:name,'Caption.ColorEnd':'#ffffff',Left:89,Top:48},
    nometime_shad:{Caption:name,'Caption.ColorEnd':'#000000',Left:88,Top:32},
    escudo:{Left:24,Top:56},
    lb_infonext:{HTMLText:fixture?`<P align="center">${text(language,67,'Next Match')}: ${shortString(record(save,'clubs',opponent),0,25)}</P>`:'',Left:80,Top:440,Width:169},
    TntLabel1:{Left:24,Top:416,Caption:opponent!==null?shortString(record(save,'clubs',opponent),0,25):''},
    Image12:{Left:0,Top:400},
    f13esc1:{Left:16,Top:434},
    Image13:{Left:184,Top:408},
    icon_arbitro:{Left:216,Top:408},
    btjogar:{Left:64,Top:504},
    labmoney:{HTMLText:`<SHAD>${originalMoney(Number(club.getBigInt64(0x48,true)/10000n))}</SHAD>`,Left:288,Top:504},
    lb_total:{HTMLText:`<SHAD>${originalMoney(squadValue)}</SHAD>`,Left:416,Top:504},
    label32:{HTMLText:`<SHAD>${text(language,72,'No new messages')}</SHAD>`,Left:552,Top:504},
    lb_cores:{HTMLText:`<SHAD>${text(language,69,'Team colors')}</SHAD>`,Left:720,Top:504},
    Image5:{Left:392,Top:493},
    imgj:{Left:520,Top:496},
    Image9:{Left:264,Top:496},
    Image10:{Left:689,Top:497},
    lab_data:{HTMLText:Number.isFinite(date)?`<B><SHAD>${formatCareerDate(date)}</SHAD></B>`:''},
    lb_infot:{HTMLText:`<B><SHAD>${text(language,47,'Management Rating:')}</SHAD></B>`},
    lb_tec:{HTMLText:`<B><SHAD><U>${manager}</U></SHAD></B>`},
    lb_cd:{HTMLText:`<B><SHAD>${text(language,47,'Management Rating:')}</SHAD></B>`},
    lb_ct:{HTMLText:`<B><SHAD>${text(language,48,'Supporters Rating:')}</SHAD></B>`},
    bar1:{Position:managementRating,Max:100,Maximum:100},
    bar2:{Position:supportersRating,Max:100,Maximum:100},
    lb_infojogn:{HTMLText:`<B><SHAD>${playerName}<IND x="200">${playerRole}</SHAD></B>`},
    lb_infojog:{HTMLText:info},
   };
  // These labels sit on the dark club background, while the player details
  // sit on a light panel. Keep their foregrounds explicit and shadow-free.
  for(const key of ['lb_infonext','labmoney','lb_total','label32','lb_cores','lab_data','lb_infot','lb_tec','lb_cd','lb_ct']){
   properties[key]['Font.Color']='#ffffff';
   properties[key].HTMLText=properties[key].HTMLText.replace(/<\/?SHAD>/gi,'');
  }
  for(const key of ['lb_infojogn','lb_infojog']){
   properties[key]['Font.Color']='#000000';
   properties[key]['Font.Style']=[];
   properties[key].HTMLText=properties[key].HTMLText.replace(/<\/?SHAD>/gi,'');
  }
  const headers={posicaojog:text(language,128),nome:text(language,129),lado:text(language,130),funcaojog:text(language,130),forca:text(language,131),energia:text(language,132),salario:text(language,133),passe:text(language,134),gols:text(language,135),habilidades:text(language,136),idade:text(language,50)};
  return {form:'Form13',properties,roster:squad,grids:{gridview1:squad},headers,competition,clubId,opponentClubId:opponent};
}
export function competitionTableView(save,language,{subgroup=0,currentDate}={}){
 const c=view(save.career),competition=c.getInt32(0x88,true),kind=c.getInt32(0x168,true),leagues=save.sections.find(s=>s.name==='records_0066aca0'),league=view(record(save,'records_0066aca0',subgroup<leagues.count?subgroup:0));
 const properties={
  label32:{Caption:competitionCaption(competition,language)},
  bt3:{Caption:text(language,391)},
  TntBitBtn1:{Caption:text(language,992)},
  combopais:{Visible:leagues.count>1}
 };
 const countries=Array.from({length:leagues.count},(_,i)=>({text:leagueTitle(view(record(save,'records_0066aca0',i)).getInt32(0x140,true),language),value:i}));
 const rows=Number.isFinite(currentDate)?resultRows(save,selectResultHistory(save,{subgroup,currentDate})).map(row=>({cells:{nximg1:'',nxinfo1:`${row.names[0]} ${row.score[0]}x${row.score[1]} ${row.names[1]}`},historyId:row.historyId})):[];
 return {form:'Form26',properties,grids:{gridc:rows,gridi:[]},roster:rows,headers:{nxinfo1:text(language,86)},countries,competition,subgroup,leagueCountry:league.getInt32(0x140,true),kind};
}
export function nationalHubView(save,runtime,language,{state}={}){
 const c=view(save.career),index=runtime.routeNationalIndex??runtime.nextNationalManagerIndex??1,clubId=nationalClubId(c,index),bytes=record(save,'clubs',clubId),club=view(bytes),name=shortString(bytes,0,25);
 const managerId=club.getInt32(0x44,true),manager=managerId>=0?shortString(record(save,'records_0066b718',managerId),0,25):'';
 const next=nationalNextFixture(save,clubId);
 const properties={
  nometime:{Caption:name},
  nometime_shad:{Caption:name},
  Label3:{Caption:text(language,321,text(language,394))},
  TntLabel1:{Caption:next?next.text:text(language,67)},
  label21:{Caption:manager},
  label22:{Caption:text(language,69)},
  label5:{Caption:text(language,128)},
  label6:{Caption:text(language,129)},
  btjogar:{Caption:text(language,68)}
 };
 return {form:'Form75',properties,roster:squadRows(save,state,clubId,language),grids:{gridview1:squadRows(save,state,clubId,language)},headers:{posicaojog:text(language,128),nome:text(language,129),forca:text(language,131),energia:text(language,132),idade:text(language,50)},nationalClubId:clubId,managerIndex:index,manager};
}
function nationalNextFixture(save,clubId){
 const agenda=careerAgenda(save),fixture=agenda.fixtureId>=0?agenda.fixtures[agenda.fixtureId]:null;
 if(!fixture||!fixture.clubs.includes(clubId))return null;
 const opponent=fixture.clubs.find(id=>id!==clubId);
 return {fixture,opponent,text:`${shortString(record(save,'clubs',opponent),0,25)} (${formatCareerDate(fixture.date)})`};
}
export function nationalAssignmentView(save,runtime,language,{index,state}={}){
 const c=view(save.career),managerIndex=index??runtime.routeNationalIndex??runtime.nextNationalManagerIndex??1,clubId=nationalClubId(c,managerIndex),club=view(record(save,'clubs',clubId)),country=club.getInt32(0x3c,true);
 const players=save.sections.find(s=>s.name==='players'),raw=view(players.data),candidates=[];
 for(let id=1;id<players.count;id++){
  const p=state?.players?.[id];if(!p||raw.getInt32(id*304+0x1c,true)!==country||p.clubId===clubId)continue;
  if(p.unavailableFlag)continue;
  candidates.push({playerId:id,cells:{nximg:'',nxnome:p.name,nxposicao:text(language,roleIds[p.role]??roleIds[0]),nxclube:shortString(record(save,'clubs',Math.max(0,p.clubId)),0,25),nxforca:p.skill,nxidade:p.age,nxhabilidade:text(language,144+p.role*2,text(language,49)),nxid:String(id),nxlado:''}});
 }
 const selected=[];
 for(let i=0;i<save.sections.find(s=>s.name==='records_0066b544').count;i++){
   const row=view(record(save,'records_0066b544',i)),playerId=row.getInt32(0,true);
   if(state?.players?.[playerId]?.clubId!==clubId)continue;
  const p=state?.players?.[playerId];if(!p)continue;
  selected.push({playerId,cells:{nximg2:'',nxnome2:p.name,nxposicao2:text(language,roleIds[p.role]??roleIds[0]),nxforca2:p.skill,nxidade2:p.age,nxid2:String(playerId),nxlado2:''}});
 }
 const properties={
  TntLabel1:{Caption:text(language,321,text(language,394))},
  TntLabel2:{Caption:shortString(record(save,'clubs',clubId),0,25)},
  TntLabel3:{Caption:text(language,394)},
  TntLabel4:{Caption:text(language,51)},
  TntLabel5:{Caption:text(language,54)},
  TntLabel6:{Caption:text(language,49)},
  TntLabel7:{Caption:text(language,50)},
  TntLabel8:{Caption:text(language,129)},
  TntLabel9:{Caption:text(language,128)},
  Label16:{Caption:text(language,677)},
  label14:{Caption:text(language,398)},
   bt2:{Caption:text(language,484),Enabled:true},
  XiButton1:{Caption:'>>'},XiButton2:{Caption:'<<'},xibutton3:{Caption:text(language,484)},
  c1:{Caption:text(language,128)},c2:{Caption:text(language,129)},c3:{Caption:text(language,131)},c4:{Caption:text(language,132)},c5:{Caption:text(language,50)},c6:{Caption:text(language,54)}
 };
 return {form:'Form77',properties,grids:{gfind:candidates,gsel:selected},headers:{nxnome:text(language,129),nxclube:text(language,321),nxforca:text(language,49),nxidade:text(language,50)},candidates,selected,nationalClubId:clubId,managerIndex,country};
}
/** Original humanNext 5f99c4 branch structure. Returns the ordered screens for
 * the current career competition; the caller supplies the verified predicates. */
export function humanNextScreens(save,runtime,language,{state,date,assignments}={}){
 const competition=view(save.career).getInt32(0x88,true);
 if(competition>=7&&competition<=9){
  const screens=[];
  for(const candidate of assignments??[])if(candidate.eligible)screens.push(nationalAssignmentView(save,runtime,language,{index:candidate.index,state}));
  screens.push(nationalHubView(save,runtime,language,{state}));
  return screens;
 }
 return [clubHubView(save,language,{state,date})];
}
/** Original automaticNext 5f9bcc state block plus its generic table screen. */
export function automaticNextScreens(save,runtime,language,{state,subgroup=0,currentDate,date}={}){
 automaticNextState(save,runtime);
 return [competitionTableView(save,language,{subgroup,currentDate,state,date})];
}
export function assignScreens(save,runtime,language,{state,date}={}){
 const c=view(save.career),competition=c.getInt32(0x88,true);
 if(competition>=7&&competition<=9){
  const assigned=nationalManagerAssignmentIndex(save,runtime,{date});
  const candidates=assigned?nationalAssignmentCandidates(save,{date}):[];
  runtime.routeAssignments=candidates;
  return humanNextScreens(save,runtime,language,{state,date,assignments:candidates});
 }
 return humanNextScreens(save,runtime,language,{state,date});
}
