import {record} from './save-format.mjs';
import {countryGroups} from './score-tables.mjs';
import {qualificationSlots} from './qualification-slots.mjs';
import {findCompetitionMetadata} from './champion-records.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
export const standingsPalette=[16777215,2972452,6875643,12639424,7303167,4689208];
/** Whole6454a8: newest first-place honour matching season and competition. */
export function standingsChampion(save,competition,country,season){
 const metadata=findCompetitionMetadata(save,{competition,country,division:1,group:-1,subgroup:-1}),section=save.sections.find(s=>s.name==='records_0066b058'),v=view(section.data);
 for(let i=section.count-1;i>=0;i--){const o=i*20;if(v.getInt32(o,true)===season&&v.getInt32(o+4,true)===metadata&&v.getInt32(o+12,true)===1)return v.getInt32(o+8,true);}
 return -1;
}
/** Original005b31a3..005b3431 color calls, preserving overlap and call order. */
export function standingsColorCalls({country,mode,totalDivisions,division,primaryEnabled,secondaryEnabled,cupWinnerRow=-1,continentalWinnerRow=-1}){
 const group=countryGroups[country]??0,quotaGroup=({0:2,2:3,3:4})[group]??group;
 let primary=qualificationSlots(country,4,quotaGroup),secondary=qualificationSlots(country,6,quotaGroup);if(primary>1)primary--;
 const calls=[],paint=(start,end,color)=>calls.push([start,end,color]);
 if(mode===2){if(totalDivisions>0)paint(17,20,5);if(totalDivisions>1){paint(21,24,4);paint(37,40,5);}}
 else if(mode===4){for(const start of [9,19,29,39])paint(start,start+1,5);for(const start of [11,21,31])paint(start,start+1,4);}
 for(const row of [cupWinnerRow,continentalWinnerRow===cupWinnerRow?-1:continentalWinnerRow]){if(row>0){if(row<=secondary+primary)secondary++;if(row<=primary)primary++;}}
 if(division===1){if(primaryEnabled&&primary>0)for(let row=1;row<=primary;row++)paint(1,row,6);if(secondaryEnabled&&secondary>0)paint(primary+1,primary+secondary,3);}
 if(cupWinnerRow>0)paint(cupWinnerRow,cupWinnerRow,6);
 if(continentalWinnerRow>0&&continentalWinnerRow!==cupWinnerRow)paint(continentalWinnerRow,continentalWinnerRow,6);
 return {primary,secondary,calls};
}
export function applyStandingsHighlights(save,data){
 const c=view(save.career),country=data.country,group=countryGroups[country]??0,season=c.getInt32(0xc0,true);
 let cup=-1,continental=-1;if(group<4){if(c.getInt32(0x110,true)>5)cup=standingsChampion(save,2,country,season);if(group===1)continental=standingsChampion(save,4,country,season);}
 const rows=data.tables.flatMap(t=>t.rows),lastRowForClub=id=>id<0?-1:(rows.findLast(row=>row.clubId===id)?.displayRow??-1);
 const highlights=standingsColorCalls({country,mode:c.getInt32(0x168,true),totalDivisions:data.totalDivisions,division:data.division,primaryEnabled:c.getUint8(0x171)!==0,secondaryEnabled:c.getUint8(0x172)!==0,cupWinnerRow:lastRowForClub(cup),continentalWinnerRow:lastRowForClub(continental)});
 for(const row of rows){row.color=standingsPalette[0];for(const [start,end,index] of highlights.calls)if(row.displayRow>=start&&row.displayRow<=end)row.color=standingsPalette[index-1];}
 return {...data,highlights};
}
