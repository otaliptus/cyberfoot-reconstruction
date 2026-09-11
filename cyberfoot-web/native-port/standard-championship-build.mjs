/** Standard Form9 mode-2 rebuild: 00630654 + 00631974.
 * The original collects the selected country teams, sorts them by strength and
 * a native random tie-break, lays them into 20-team divisions, then rebuilds
 * the domestic fixture rows for the new 38-round calendar.
 */
import {originalCandidateSort} from './ai-selection.mjs';
import {careerSchedule} from './schedule.mjs';

const LEAGUE_RECORD_SIZE=660,CLUB_RECORD_SIZE=760,FIXTURE_RECORD_SIZE=72;
const view=bytes=>new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);

function divisionCount(total){
 if(total>=0x52)return 4;
 if(total>=0x3e)return 3;
 if(total>=0x2a)return 2;
 return 1;
}
function compareTeams(a,b){return b.strength!==a.strength?Math.sign(b.strength-a.strength):Math.sign(a.random-b.random);}
function pairings(teams,round,leg){
 const count=teams.length,ring=count-1,pivot=round%2===0?round/2:Math.floor(count/2)+(round-1)/2,rows=[];
 for(let i=0;i<count/2;i++){
  const a=teams[(pivot+i)%ring],b=i===0?teams[ring]:teams[(pivot-i+ring)%ring];
  const reverse=((round%2===1&&i===0)!==(leg===2));
  rows.push(reverse?{home:b,away:a}:{home:a,away:b});
 }
 return rows;
}
function fixtureRow(home,away,round,leg,leagueIndex,date){
 const bytes=new Uint8Array(FIXTURE_RECORD_SIZE),row=view(bytes);
 row.setInt32(0,home,true);row.setInt32(4,away,true);row.setInt32(0x18,1,true);
 row.setInt32(0x1c,round,true);row.setInt32(0x20,leg,true);row.setInt32(0x38,leagueIndex,true);
 row.setFloat64(0x30,date,true);return bytes;
}
function leagueTeams(save,country){
 const clubs=save.sections.find(section=>section.name==='clubs'),teams=[];
 for(let id=0;id<clubs.count;id++){
  const bytes=clubs.data.subarray(id*CLUB_RECORD_SIZE,(id+1)*CLUB_RECORD_SIZE),club=view(bytes);
  if(club.getInt32(0x3c,true)===country)teams.push({id,strength:club.getUint8(0x98)});
 }
 return teams;
}
function leagueRecord(save,country){
 const section=save.sections.find(entry=>entry.name==='records_0066aca0'),data=view(section.data);
 for(let index=0;index<section.count;index++)if(data.getInt32(index*LEAGUE_RECORD_SIZE+0x140,true)===country)return data.buffer.slice(data.byteOffset+index*LEAGUE_RECORD_SIZE,data.byteOffset+(index+1)*LEAGUE_RECORD_SIZE);
 return null;
}
function setSlots(record,divisions,perDivision,teams){
 const row=view(record),max=4*20;
 for(let i=0;i<max;i++){
  row.setInt32(Math.floor(i/perDivision+1)*0x50-0x54+(i%perDivision+1)*4,-1,true);
  row.setInt32(Math.floor(i/perDivision+1)*0x50+0xfc+(i%perDivision+1)*4,-1,true);
 }
 let at=0;
 for(let division=1;division<=divisions;division++)for(let position=1;position<=perDivision;position++){
  const id=teams[at++]?.id??-1;
  row.setInt32(division*0x50-0x54+position*4,id,true);row.setInt32(division*0x50+0xfc+position*4,id,true);
 }
 return teams.slice(0,divisions*perDivision).map(team=>team.id);
}

/** Rebuild a mode-2 standard career from the selected Form9 countries. */
export function applyStandardModeTwo(save,{countries=[],rng}={}){
 if(!save?.career||!save?.sections)throw Error('Original career save required.');
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const selected=[...new Set(countries)].filter(Number.isInteger);
 if(!selected.length)throw Error('Select at least one league.');
 const clubs=save.sections.find(section=>section.name==='clubs'),leagues=save.sections.find(section=>section.name==='records_0066aca0'),fixtures=save.sections.find(section=>section.name==='records_0066afa0');
 if(!clubs||!leagues||!fixtures)throw Error('Save is missing standard league sections.');
 const countryTeams=selected.map(country=>({country,teams:leagueTeams(save,country)}));
 if(countryTeams.some(entry=>entry.teams.length<20))throw Error('Standard 2x20 mode requires at least 20 bundled teams per selected league.');
 const career=view(save.career),records=[],groups=[];
 let totalTeams=0;
 for(const {country,teams} of countryTeams){
  for(let index=0;index<teams.length;index++)void rng.below(0x32);
  for(const team of teams)team.random=rng.below(0x32);
  originalCandidateSort(teams,compareTeams);
  const divisions=divisionCount(teams.length),recordBytes=new Uint8Array(leagueRecord(save,country)??LEAGUE_RECORD_SIZE);
  const league=view(recordBytes);league.setInt32(0x140,country,true);league.setInt32(0x144,divisions,true);league.setInt32(0x148,teams.length,true);league.setInt32(0x14c,1,true);
  const slots=setSlots(recordBytes,divisions,20,teams);
  records.push(recordBytes);groups.push({country,divisions,slots});totalTeams+=teams.length;
  for(const team of teams){const club=view(clubs.data.subarray(team.id*CLUB_RECORD_SIZE,(team.id+1)*CLUB_RECORD_SIZE));club.setInt32(0x7c,0,true);}
  for(let index=0;index<slots.length;index++){const clubId=slots[index],club=view(clubs.data.subarray(clubId*CLUB_RECORD_SIZE,(clubId+1)*CLUB_RECORD_SIZE));club.setInt32(0x7c,Math.floor(index/20)+1,true);}
 }
 if(!records.length)throw Error('Selected leagues have no teams.');
 const leagueData=new Uint8Array(records.length*LEAGUE_RECORD_SIZE);records.forEach((recordBytes,index)=>leagueData.set(recordBytes,index*LEAGUE_RECORD_SIZE));leagues.data=leagueData;leagues.count=records.length;leagues.marker=records.length;
 career.setInt32(0x168,2,true);career.setInt32(0x3c,totalTeams,true);
 const calendar=careerSchedule(save),leagueDates=calendar.filter(row=>row.competition===1).map(row=>row.date),kept=[];
 for(let offset=0;offset<fixtures.data.length;offset+=FIXTURE_RECORD_SIZE){const row=new Uint8Array(fixtures.data.subarray(offset,offset+FIXTURE_RECORD_SIZE));if(view(row).getInt32(0x18,true)!==1)kept.push(row);}
 const generated=[];
 groups.forEach((group,leagueIndex)=>{
  const divisions=group.divisions;
  for(let division=0;division<divisions;division++){
   const teams=group.slots.slice(division*20,(division+1)*20);
   for(let leg=1;leg<=2;leg++)for(let round=0;round<19;round++)for(const match of pairings(teams,round,leg))generated.push(fixtureRow(match.home,match.away,round+1,leg,leagueIndex,leagueDates[(leg-1)*19+round]??0));
  }
 });
 const fixtureData=new Uint8Array((kept.length+generated.length)*FIXTURE_RECORD_SIZE);kept.forEach((row,index)=>fixtureData.set(row,index*FIXTURE_RECORD_SIZE));generated.forEach((row,index)=>fixtureData.set(row,(kept.length+index)*FIXTURE_RECORD_SIZE));fixtures.data=fixtureData;fixtures.count=kept.length+generated.length;fixtures.marker=fixtures.count;
 return {countries:selected,leagues:records.length,totalTeams,divisions:groups.map(group=>group.divisions),leagueFixtures:generated.length};
}
