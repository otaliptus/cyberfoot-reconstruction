import {regionalFormats} from './regional-formats.mjs';import {standingsPalette} from './standings-highlights.mjs';
/** Original005b0f2a..005b138f. Qualifier count is format[5], despite the
 * decompiler sometimes presenting the adjacent color argument as count4. */
export function regionalStandingsColorCalls({formatId,divisions,grouped,lowerDivisions,counts,relegationRows}){
 const format=regionalFormats[formatId-1],size=format[2],promote=Math.min(counts.second,format[3]),calls=[],paint=(a,b,c)=>calls.push([a,b,c]);
 if(!grouped){
  if(formatId===1){paint(1,2,4);paint(6,6,5);}else if(!lowerDivisions){if(promote>0)paint(size-promote+1,size,5);paint(1,format[5],4);}
  if(!lowerDivisions){if(divisions>1){paint(size+1,size+promote,4);paint(size+6,size+6,5);}if(divisions>2){paint(size+7,size+7,4);paint(size+12,size+12,5);}if(divisions>3){paint(size+13,size+13,4);paint(size+18,size+18,5);}}
  else{if(divisions>1){paint(1,promote,4);paint(6,6,5);}if(divisions>2){paint(7,7,4);paint(12,12,5);}if(divisions>3){paint(13,13,4);paint(18,18,5);}}
 }else{
  for(let group=0;group<format[1];group++)paint(group*size+1,group*size+format[5],4);
  const relegated=Math.min(divisions===1?counts.bottom:6,format[3]);for(let i=0;i<Math.min(4,relegated);i++)paint(relegationRows[i],relegationRows[i],5);
 }
 return calls;
}
export function applyRegionalStandingsHighlights(data){const calls=regionalStandingsColorCalls(data);for(const table of data.tables)for(const row of table.rows){row.color=standingsPalette[0];for(const [a,b,index] of calls)if(row.displayRow>=a&&row.displayRow<=b)row.color=standingsPalette[index-1];}return {...data,colorCalls:calls};}
