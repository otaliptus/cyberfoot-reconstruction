import {record,shortString} from './save-format.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
import {applyStandingsHighlights} from './standings-highlights.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Data portion of Form36 league display005b2960. League records are already
 * ranked by the game; displaying the table must not sort or mutate them. */
export function leagueStandingsData(save,leagueId,requestedDivision,language,crestAssets){
 const c=view(save.career),league=view(record(save,'records_0066aca0',leagueId)),mode=c.getInt32(0x168,true),division=requestedDivision===-1?1:requestedDivision,totalDivisions=league.getInt32(0x144,true);
 const teamCount=division>1||mode===2?20:10,lastDivision=division>1?division:mode===2?Math.min(2,Math.max(1,totalDivisions)):totalDivisions;
 const tables=[];let displayRow=division>1?21:1;
 for(let d=division;d<=lastDivision;d++){
  const rows=[];let previous=null;
  for(let position=1;position<=teamCount;position++){
   const clubId=league.getInt32(d*80+0xfc+position*4,true),bytes=record(save,'clubs',clubId),club=view(bytes),get=o=>club.getInt32(o,true);
   const points=get(0xb8),played=get(0xe0),wins=get(0x108),losses=get(0x130),goalsFor=get(0x158),goalsAgainst=get(0x180),goalDifference=(goalsFor-goalsAgainst)|0,draws=(played-((wins+losses)|0))|0;
   const tied=previous&&points===previous.points&&goalDifference===previous.goalDifference&&goalsFor===previous.goalsFor&&wins===previous.wins;
   const rank=tied?'':position+'º',name=(' '+shortString(bytes,0,25)).slice(0,26),row={clubId,division:d,position,displayRow:displayRow++,rank,name,points,played,wins,draws,losses,goalsFor,goalsAgainst,goalDifference,crest:clubCrestPath(save,clubId,crestAssets)};
   row.cells=[rank,name,...[points,played,wins,draws,losses,goalsFor,goalsAgainst,goalDifference].map(String)];rows.push(row);previous=row;
  }
  tables.push({division:d,title:language[d+34].text,rows});
 }
 return applyStandingsHighlights(save,{leagueId,country:league.getInt32(0x140,true),division,totalDivisions,teamCount,tables,headers:[86,84,79,80,81,82,83,85].map(id=>language[id].text),countryPickerVisible:save.sections.find(s=>s.name==='records_0066aca0').count>=2,divisionTabsVisible:mode===2&&totalDivisions>=3});
}
/** Initial FormCreate5ae400 and country selection from5b18a4. Runtime
 * state only; the original does not change career competition on opening. */
export function initialStandingsState(save,{subgroup=0,subgroupOverride=-1}={}){
 const c=view(save.career),clubId=c.getInt32(8,true),regional=c.getUint8(0x170)!==0;
 let competition=c.getInt32(0x88,true),leagueId=0;if(![1,3,4].includes(competition))competition=1;
 if(regional){
  subgroup=view(record(save,'clubs',clubId)).getInt32(0x40,true);
  if(view(record(save,'records_0066ae98',subgroup)).getUint8(0x52d)===0){for(let i=0;i<27;i++)if(view(record(save,'records_0066ae98',i)).getUint8(0x52d)!==0)subgroup=i;}
 }
 if(subgroupOverride>=0)subgroup=subgroupOverride;
 const leagues=save.sections.find(s=>s.name==='records_0066aca0');
 if(leagues.count>=2){const country=clubId<0?29:view(record(save,'clubs',clubId)).getInt32(0x3c,true),found=findLeagueConfiguration(save,country);if(found>=0&&found<leagues.count)leagueId=found;}
 return {competition,leagueId,subgroup,stage:0,division:1};
}
