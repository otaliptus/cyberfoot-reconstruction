import {record,shortString} from './save-format.mjs';import {currentCareerDate} from './calendar.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole65156c. The original explicitly prefers Rogério Ceni before trait
 * priorities9,4,11, then the first field50=1 player. No candidate preservesA8. */
export function chooseClubSetPiecePlayer(save,clubId){
 const players=save.sections.find(s=>s.name==='players'),club=view(record(save,'clubs',clubId)),candidates=[];
 for(let id=0;id<players.count;id++){const bytes=record(save,'players',id),p=view(bytes);if(p.getInt32(0x20,true)===clubId&&p.getInt32(0x50,true)===1)candidates.push({id,bytes,p});}
 const candidate=candidates.find(row=>clubId>=0&&shortString(row.bytes,0,20)==='Rogério Ceni')??[9,4,11].map(trait=>candidates.find(row=>row.p.getInt32(0x5c,true)===trait)).find(Boolean)??candidates[0];
 if(candidate)club.setInt32(0xa8,candidate.id,true);
 return club.getInt32(0xa8,true);
}
/** Whole64fbb8. Eligibility count excludes sentinel0 and youth records.
 * The original x87 JA skips only greater dates, so unordered dates pass. */
export function refreshClubAvailability(save,clubId,runtime={},date=currentCareerDate(save)){
 const players=save.sections.find(s=>s.name==='players'),c=view(save.career),competition=c.getInt32(0x88,true),club=view(record(save,'clubs',clubId)),counts=Array(6).fill(0);let available=0;
 for(let id=1;id<players.count;id++){const p=view(record(save,'players',id));if(p.getInt32(0x20,true)<0||p.getInt32(0x20,true)!==clubId||p.getUint8(0x120)!==0||p.getInt32(0x8c+competition*4,true)>=3||p.getInt32(0xb8+competition*4,true)!==0||p.getFloat64(0x68,true)>date)continue;
  const role=p.getInt32(0x24,true);available++;counts[role]++;if(role===3&&p.getInt32(0x58,true)===0)counts[5]++;
 }
 club.setInt32(0xa0,available,true);runtime.availableRoleCounts=counts;return counts;
}
/** Whole652988 including64fbb8. Club64..78 hold senior totals by role;
 * youth total2ec is separate. Both scans deliberately exclude player0. */
export function refreshClubRoster(save,clubId,runtime={},date=currentCareerDate(save)){
 if(clubId===-1)return;
 const players=save.sections.find(s=>s.name==='players'),club=view(record(save,'clubs',clubId)),roles=Array(5).fill(0);let senior=0,youth=0;
 for(let id=1;id<players.count;id++){const p=view(record(save,'players',id));if(p.getInt32(0x20,true)<0||p.getInt32(0x20,true)!==clubId)continue;if(p.getUint8(0x120)!==0)youth++;else{senior++;roles[p.getInt32(0x24,true)]++;}}
 club.setInt32(0x64,senior,true);roles.forEach((n,i)=>club.setInt32(0x68+i*4,n,true));club.setInt32(0x2ec,youth,true);
 return refreshClubAvailability(save,clubId,runtime,date);
}
