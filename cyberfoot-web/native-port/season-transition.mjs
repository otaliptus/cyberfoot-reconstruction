import {record,shortString} from './save-format.mjs';
import {careerSchedule,savedFixtures,fixtureOnDate} from './schedule.mjs';
import {leagueStandingsData} from './standings-data.mjs';
import {managerOfferView} from './manager-offer-view.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const text=(language,id,fallback='')=>language?.[id]?.text??fallback;
const fixtureRecordSize=72;
/** FUN_005dfe10 season turn, restricted to the verified storage effects:
 * career0x704 reset (line24), career0x114/0x118 season flags (72/214), the
 * four 8-slot pairing arrays at0x648 (409..421), manager0x38/0x39 clears
 * (422..432), the season0xc0 increment (408) and the rebuilt calendar through
 * 00656abc/00653a40. New league fixture records are appended exactly as
 * 0065a2bc does, using the 0065a14c field set and the calendar dates that the
 * original copies from DAT_006d5334 (predicate leg/round). Player development
 * and retirement (00647f98), youth intake (00652be0), promotion/relegation
 * settlement (005deccc), prize money (005deb00) and pair regeneration
 * (00649b10/00643a40) remain unported and are deliberately not simulated. */
export function advanceCareerSeason(save,{calendar,competition=1}={}){
 if(!save?.career)throw Error('Original career save required.');
 const c=view(save.career);
 c.setInt32(0x704,0,true);c.setInt32(0x114,1,true);c.setInt32(0x118,1,true);
 for(let i=0;i<32;i++)c.setInt32(0x648+i*4,-1,true);
 const managers=save.sections.find(s=>s.name==='records_0066b718');
 if(!managers)throw Error('Original manager section required.');
 for(let i=0;i<managers.count;i++){managers.data[i*128+0x38]=0;managers.data[i*128+0x39]=0;}
 c.setInt32(0xc0,c.getInt32(0xc0,true)+1,true);
 const schedule=calendar??careerSchedule(save);
 return {season:c.getInt32(0xc0,true),calendar:schedule,fixtures:appendNextCompetitionFixtures(save,{calendar:schedule,competition})};
}
/** 0065a2bc appends the next season's fixtures (0065a14c/0065a1c0 records) to
 * the variable records_0066afa0 section. The original date pair index is
 * (leg-1)*roundsPerLeg+round into the calendar days whose competition matches.
 * The pairings themselves come from the ended season's records until
 * 00649b10/00643a40 is ported; only the 0065a14c field set is written. */
export function appendNextCompetitionFixtures(save,{calendar=careerSchedule(save),competition=1}={}){
 const section=save.sections.find(s=>s.name==='records_0066afa0');
 if(!section)throw Error('Original fixture section required.');
 const source=view(section.data),templates=[];
 for(let i=0;i<section.count;i++){
  const o=i*fixtureRecordSize;
  if(source.getInt32(o+0x18,true)!==competition)continue;
  templates.push({home:source.getInt32(o,true),away:source.getInt32(o+4,true),round:source.getInt32(o+0x1c,true),leg:source.getInt32(o+0x20,true),reserved:source.getInt32(o+0x24,true),subgroup:source.getInt32(o+0x38,true)});
 }
 if(!templates.length)return [];
 const firstLeg=templates.filter(t=>t.leg===1);
 const roundsPerLeg=firstLeg.length?Math.max(...firstLeg.map(t=>t.round)):Math.max(...templates.map(t=>t.round));
 const days=calendar.filter(row=>row.competition===competition),rows=[];
 for(const template of templates){
  const day=days[(template.leg-1)*roundsPerLeg+template.round-1];
  if(day)rows.push({...template,date:day.date,dayIndex:day.dayIndex});
 }
 const grown=new Uint8Array(section.data.length+rows.length*fixtureRecordSize);grown.set(section.data);
 const out=view(grown);
 rows.forEach((row,i)=>{
  const o=section.data.length+i*fixtureRecordSize;
  out.setInt32(o,row.home,true);out.setInt32(o+4,row.away,true);
  out.setInt32(o+0x18,competition,true);out.setInt32(o+0x1c,row.round,true);out.setInt32(o+0x20,row.leg,true);
  out.setInt32(o+0x24,row.reserved,true);out.setFloat64(o+0x30,row.date,true);out.setInt32(o+0x38,row.subgroup,true);
 });
 section.data=grown;section.count+=rows.length;section.marker=section.count;
 return rows;
}
/** First calendar day at/after fromDay on which the club has a saved fixture.
 * The play loop uses it to skip competition days the human does not play,
 * mirroring the original screen-by-screen cursor advance. */
export function nextHumanFixtureDay(save,calendar=careerSchedule(save),clubId=view(save.career).getInt32(8,true),fromDay=1){
 const fixtures=savedFixtures(save);
 for(let day=Math.max(1,fromDay);day<=366;day++){
  const row=calendar[day-1];if(!row)break;
  if(fixtureOnDate(fixtures,clubId,row.date)>=0)return day;
 }
 return -1;
}
function gridRow(row,suffix){
 return {clubId:row.clubId,cells:{['nximg1'+suffix]:'',['nximg2'+suffix]:'',['nxinfo1'+suffix]:`${row.position}. ${row.name.trim()} — ${row.points}`}};
}
function classify(row,calls){
 if(row.division===1&&row.position===1)return 'champion';
 for(const [start,end,color] of calls){
  if(row.displayRow<start||row.displayRow>end)continue;
  if(color===4)return 'promoted';
  if(color===5)return 'relegated';
  if(color===6)return 'continental';
 }
 return 'midtable';
}
/** Pure Form26 season-review view. Champion, promoted and relegated rows all
 * come from the verified native leagueStandingsData/standingsColorCalls
 * classification; language captions use the original review ids390/391/992. */
export function seasonTransitionView(save,{language,crestAssets,leagueId=0,division=1}={}){
 const data=leagueStandingsData(save,leagueId,division,language,crestAssets),c=view(save.career),humanClub=c.getInt32(8,true);
 const rows=data.tables.flatMap(t=>t.rows),classifyRow=row=>classify(row,data.highlights.calls);
 const champion=rows.find(r=>r.division===1&&r.position===1)??null;
 const promoted=rows.filter(r=>classifyRow(r)==='promoted'),relegated=rows.filter(r=>classifyRow(r)==='relegated');
 const humanRow=rows.find(r=>r.clubId===humanClub)??null;
 const describe=row=>row?{clubId:row.clubId,name:row.name.trim(),division:row.division,position:row.position,points:row.points,outcome:classifyRow(row)}:null;
 return {form:'Form26',
  properties:{label32:{Caption:champion?`${text(language,390,'Champions')}: ${champion.name.trim()} (${champion.points})`:text(language,390,'Champions')},bt3:{Caption:text(language,391,'Continue >>>')},TntBitBtn1:{Caption:text(language,992,'Team of the year')}},
  grids:{gridc:promoted.map(row=>gridRow(row,'')),gridi:relegated.map(row=>gridRow(row,'i'))},
  headers:{},
  summary:{season:c.getInt32(0xc0,true),champion:describe(champion),promoted:promoted.map(describe),relegated:relegated.map(describe),human:describe(humanRow)}};
}
/** Form85 captions 0x2ad/0x2bf/0x1c2/0x1c1 as TForm85_FormCreate assigns
 * them. The original then opens the friendly scheduler; the preview host only
 * acknowledges the choice. */
export function preSeasonFriendlyView(language){
 return {form:'Form85',background:'assets/original-f01.jpg',properties:{TntLabel1:{Caption:text(language,0x2ad)},label7:{Caption:text(language,0x2bf)},xibutton1:{Caption:text(language,0x1c2)},xibutton2:{Caption:text(language,0x1c1)},Image1:{Visible:false}}};
}
/** Form30 invitation for a cleared season-end manager slot. The view is the
 * verified managerOfferView with the destination as the sole offer; the
 * original Form30 FormCreate reads the same career0x10 manager name. */
export function seasonMoveView(save,move,language,crestAssets){
 const synthetic={managerJobOffers:[move.destination,-1,-1,-1]},frame=managerOfferView(save,synthetic,language,crestAssets);
 const manager=view(save.career).getInt32(0x10,true),offer=frame.choices.find(choice=>choice.clubId===move.destination);
 // The route-screen renderer keeps Form30 unsupported controls out of the
 // frame; the invitation text carries the offered club from the native view.
 const hidden=Object.fromEntries(['image0','Image1','Image2','Image3','r1','r2','r3','r4','ljog','ImageList1'].map(name=>[name,{Visible:false}]));
 return {...frame,properties:{...frame.properties,...hidden,label1:{Caption:`${text(language,0x19c)}${offer?.caption?` ${offer.caption}`:''}`},...(manager>=0?{Label2:{Caption:shortString(record(save,'records_0066b718',manager),0,25)}}:{})},move:{slot:move.slot,destination:move.destination}};
}
