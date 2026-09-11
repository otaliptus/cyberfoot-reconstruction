import {record,shortString} from './save-format.mjs';
import {careerSchedule,savedFixtures,fixtureOnDate} from './schedule.mjs';
import {leagueStandingsData} from './standings-data.mjs';
import {managerOfferView} from './manager-offer-view.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const text=(language,id,fallback='')=>language?.[id]?.text??fallback;
const fixtureRecordSize=72;
/** FUN_005dfe10 calendar/cursor turn. The browser shell runs the surrounding
 * season settlement (promotion/relegation, prize money, aging and youth
 * intake) before calling this helper; this function resets the verified
 * season fields, clears manager slot flags, increments the season, rebuilds
 * the calendar and appends the next league fixtures. */
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
 * the variable records_0066afa0 section. 00649b10/00643a40 use the same
 * circle schedule for ten- and twenty-team divisions, but visit the pivots in
 * alternating halves; this preserves the original home/away ordering. */
export function appendNextCompetitionFixtures(save,{calendar=careerSchedule(save),competition=1}={}){
  const section=save.sections.find(s=>s.name==='records_0066afa0');
  if(!section)throw Error('Original fixture section required.');
  const source=view(section.data),existing=[];
  for(let i=0;i<section.count;i++){
   const o=i*fixtureRecordSize;
   if(source.getInt32(o+0x18,true)===competition)existing.push({reserved:source.getInt32(o+0x24,true),subgroup:source.getInt32(o+0x38,true)});
  }
  if(!existing.length)return [];
  const leagueSection=save.sections.find(s=>s.name==='records_0066aca0');
  const career=view(save.career),mode=career.getInt32(0x168,true),teamsPerDivision=mode===2?20:10;
  const leagueView=leagueSection?view(leagueSection.data):null,days=calendar.filter(row=>row.competition===competition),rows=[];
  const pairings=(teams,round,leg)=>{
   const count=teams.length,ring=count-1,pivot=round%2===0?round/2:Math.floor(count/2)+(round-1)/2,out=[];
   for(let i=0;i<count/2;i++){
    const a=teams[(pivot+i)%ring],b=i===0?teams[ring]:teams[(pivot-i+ring)%ring];
    const reverse=((round%2===1 && i===0) !== (leg===2));
    out.push(reverse?{home:b,away:a}:{home:a,away:b});
   }
   return out;
  };
  if(leagueView){
   for(let leagueIndex=0;leagueIndex<leagueSection.count;leagueIndex++){
     const base=leagueIndex*660,divisions=leagueView.getInt32(base+0x144,true);
    const divisionSchedules=[];
    for(let division=1;division<=divisions;division++){
      const teams=[];
      for(let position=1;position<=teamsPerDivision;position++){
       const id=leagueView.getInt32(base+division*80-0x54+position*4,true);
       if(id>=0)teams.push(id);
      }
      if(teams.length!==teamsPerDivision)continue;
      divisionSchedules.push({teams});
    }
    const roundsPerLeg=teamsPerDivision-1;
    for(let leg=1;leg<=2;leg++)for(let round=0;round<roundsPerLeg;round++){
     const day=days[(leg-1)*roundsPerLeg+round];if(!day)continue;
     for(const schedule of divisionSchedules)for(const match of pairings(schedule.teams,round,leg))rows.push({home:match.home,away:match.away,round:round+1,leg,reserved:0,subgroup:leagueIndex,date:day.date,dayIndex:day.dayIndex});
    }
   }
  }
  if(!rows.length){
   const sourceRows=[];
   for(let i=0;i<section.count;i++){
    const o=i*fixtureRecordSize;if(source.getInt32(o+0x18,true)!==competition)continue;
    sourceRows.push({home:source.getInt32(o,true),away:source.getInt32(o+4,true),round:source.getInt32(o+0x1c,true),leg:source.getInt32(o+0x20,true),reserved:source.getInt32(o+0x24,true),subgroup:source.getInt32(o+0x38,true)});
   }
   const roundsPerLeg=Math.max(...sourceRows.filter(row=>row.leg===1).map(row=>row.round),...sourceRows.map(row=>row.round));
   for(const row of sourceRows){const day=days[(row.leg-1)*roundsPerLeg+row.round-1];if(day)rows.push({...row,date:day.date,dayIndex:day.dayIndex});}
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
