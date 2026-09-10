import {record} from './save-format.mjs';import {appendRows} from './match-records.mjs';import {countryGroups} from './score-tables.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const honourPoints=[[500,200,10,5000,40000,1000,0,0,0,1000],[90,50,5,1000,1000,500,0,0,0,500]];
/** Original 0064dee4: record zero is the unmatched/friendly sentinel. */
export function findCompetitionMetadata(save,{competition,country,division=-1,group=-1,subgroup=-1}){
 if(competition===0)return 0;let countryKey=country,roundKey=division;
 if(competition===2)roundKey=-1;
 if(competition===3){countryKey=subgroup;roundKey=group;}
 if([4,6,10].includes(competition)){countryKey=-1;roundKey=countryGroups[country]??0;}
 if([5,7,8,9].includes(competition)){countryKey=-1;roundKey=-1;}
 const s=save.sections.find(s=>s.name==='records_0066b6ac'),v=view(s.data);
 for(let i=1;i<s.count;i++)if(v.getInt32(i*12,true)===competition&&v.getInt32(i*12+4,true)===countryKey&&v.getInt32(i*12+8,true)===roundKey)return i;
 return 0;
}
/** Original 0064c27c. Reputation levels only increase. */
export function applyClubHonourPoints(save,clubId,competition,place){
 const club=view(record(save,'clubs',clubId));if(club.getInt32(0x58,true)>=5)return;
 const increment=honourPoints[place-1]?.[competition-1];if(increment===undefined)throw Error('Original honour point table requires competition1..10 and place1..2');
 const points=(club.getInt32(0x2e0,true)+increment)|0;club.setInt32(0x2e0,points,true);
 const level=points>=100000?5:points>=10000?4:points>=1000?3:points>=101?2:points>10?1:0;
 if(club.getInt32(0x58,true)<level)club.setInt32(0x58,level,true);
}
/** Original 0064c36c. */
export function recordClubHonour(save,{competition,clubId,country,place,division=-1,group=-1,subgroup=-1}){
 const metadataId=findCompetitionMetadata(save,{competition,country,division,group,subgroup}),club=view(record(save,'clubs',clubId));let manager=-1;
 if(competition<7||competition===10){manager=club.getInt32(0x44,true);if(place<3&&(![1,3].includes(competition)||division===1))applyClubHonourPoints(save,clubId,competition,place);}
 else if([7,8,9].includes(competition)){manager=club.getInt32(0x44,true);if(manager<0)manager=(club.getInt32(0x40,true)+50000)|0;}
 return appendRows(save,'records_0066b058',[[view(save.career).getInt32(0xc0,true),metadataId,clubId,place,manager]]);
}
/** Original 0064c4bc. */
export function recordManagerHonour(save,{competition,clubId,managerId,country,place,division=-1,activeSubgroup}){
 if([4,6].includes(competition)){if(!Number.isInteger(activeSubgroup))throw Error('Original active competition subgroup required');country=activeSubgroup;}
 return appendRows(save,'records_0066b3d0',[[view(save.career).getInt32(0xc0,true),competition,clubId,managerId,division,place,country]]);
}
/** Original 0064c58c. The two untouched fields remain zero in newly allocated rows. */
export function recordPlayerAward(save,metadataId,clubId,playerId,amount){return appendRows(save,'records_0066b560',[[view(save.career).getInt32(0xc0,true),metadataId,clubId,playerId,0,amount,0]]);}
