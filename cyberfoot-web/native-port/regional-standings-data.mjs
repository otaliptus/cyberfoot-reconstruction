import {record,shortString} from './save-format.mjs';import {originalCandidateSort} from './ai-selection.mjs';import {clubCrestPath} from './club-crest.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
import {regionalFormats} from './regional-formats.mjs';
export {regionalFormats} from './regional-formats.mjs';
import {applyRegionalStandingsHighlights} from './regional-standings-highlights.mjs';
/** Whole005ae390: points, WINS, goal difference, goals for, all descending. */
export function compareRegionalCandidates(a,b){for(const i of [1,3,8,6])if(a[i]!==b[i])return a[i]>b[i]?-1:1;return 0;}
export function sortRegionalCandidates(rows){return originalCandidateSort(rows,compareRegionalCandidates);}
/** Whole64a9b0 and64a9f4: count nonnegative IDs in fixed20-slot lists. */
export function regionalDivisionCounts(save,subgroup){const region=view(record(save,'records_0066ae98',subgroup)),last=region.getInt32(0x510,true);let bottom=0,second=0;for(let i=0;i<20;i++){if(region.getInt32(last*80+i*4,true)>=0)bottom++;if(region.getInt32(80+i*4,true)>=0)second++;}return {bottom,second};}
/** Sorted regional row data from005b00e8. Layout, color rules and knockout
 * panels are separate; no persistent save state is changed for display. */
export function regionalStandingsData(save,subgroup,lowerDivisions,crestAssets){
 const region=view(record(save,'records_0066ae98',subgroup)),formatId=region.getInt32(0x530,true),format=regionalFormats[formatId-1];if(!format)throw Error('Unknown original regional format '+formatId);
 const divisions=region.getInt32(0x510,true),grouped=format[1]>1&&!lowerDivisions,count=grouped?format[1]:divisions,tables=[];let displayRow=1;
 const candidate=id=>{const p=view(record(save,'clubs',id)),get=o=>p.getInt32(o,true),played=get(0xe8),wins=get(0x110),losses=get(0x138),gf=get(0x160),ga=get(0x188);return [id,get(0xc0),played,wins,(played-wins-losses)|0,losses,gf,ga,(gf-ga)|0,0];};
 let relegationCandidates=[];if(grouped){const all=Array.from({length:format[0]},(_,i)=>candidate(region.getInt32(i*4,true)));sortRegionalCandidates(all);relegationCandidates=all.slice(-4).reverse().map(r=>r[0]);}
 for(let group=lowerDivisions?2:1;group<=count;group++){
  const teamCount=grouped||group===1?format[2]:6,offset=grouped?360+group*40:(group-1)*80,sorted=Array.from({length:teamCount},(_,i)=>candidate(region.getInt32(offset+i*4,true)));sortRegionalCandidates(sorted);
  const rows=sorted.map((r,i)=>{const previous=sorted[i-1],tied=previous&&[1,8,6,3].every(k=>r[k]===previous[k]),clubId=r[0],rank=tied?'':(i+1)+'º',name=(' '+shortString(record(save,'clubs',clubId),0,25)).slice(0,26);return {clubId,group,position:i+1,displayRow:displayRow++,rank,name,points:r[1],played:r[2],wins:r[3],draws:r[4],losses:r[5],goalsFor:r[6],goalsAgainst:r[7],goalDifference:r[8],cells:[rank,name,...r.slice(1,9).map(String)],crest:clubCrestPath(save,clubId,crestAssets)};});
  tables.push({group,rows});
 }
 return applyRegionalStandingsHighlights({subgroup,formatId,format,divisions,grouped,lowerDivisions,tables,relegationCandidates,relegationRows:relegationCandidates.map(id=>tables.flatMap(t=>t.rows).findLast(r=>r.clubId===id)?.displayRow??-1),counts:regionalDivisionCounts(save,subgroup)});
}
