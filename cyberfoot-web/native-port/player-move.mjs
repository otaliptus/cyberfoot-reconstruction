import {record} from './save-format.mjs';import {currentCareerDate} from './calendar.mjs';import {precision64,nearestEven} from './x87.mjs';import {appendRows} from './match-records.mjs';import {appendNotification} from './notifications.mjs';import {chooseClubSetPiecePlayer,refreshClubRoster} from './club-roster-update.mjs';
// Original initialized value at665220, referenced through66b610.
export const originalSeniorSquadLimit=30;
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole650218 for valid player/club records. This is the move/contract and
 * payroll transaction used by returns; transfer-fee settlement is separate. */
export function completePlayerMove(save,playerId,toClubId,contractEnd,{rng,runtime={},date=currentCareerDate(save)}={}){
 const players=save.sections.find(s=>s.name==='players');if(playerId>=players.count)return;
 if(!rng||typeof rng.below!=='function')throw Error('Original random generator required for transfer news.');
 const p=view(record(save,'players',playerId)),fromClubId=p.getInt32(0x20,true),from=view(record(save,'clubs',fromClubId)),to=view(record(save,'clubs',toClubId)),c=view(save.career);
 p.setInt32(0x20,toClubId,true);p.setInt32(0x54,0,true);p.setFloat64(0x70,contractEnd,true);p.setInt32(0x100,2,true);
 const [a,b]=precision64(p.getBigInt64(0x38,true),10000n),salary=Number(BigInt.asIntN(32,nearestEven(a,b))),addPayroll=(id,amount)=>{const ledger=view(record(save,'records_0066afec',id));ledger.setInt32(4,(ledger.getInt32(4,true)+amount)|0,true);};
 addPayroll(toClubId,salary);addPayroll(fromClubId,-salary);
 const bothHuman=()=>from.getUint8(0x39)!==0&&to.getUint8(0x39)!==0;if(bothHuman())p.setUint8(0x85,1);
 const historyId=appendRows(save,'records_0066b070',[[playerId,0,0,0,fromClubId,toClubId,0,0]]);view(record(save,'records_0066b070',historyId)).setFloat64(8,date,true);
 if(p.getUint8(0x15)!==0&&c.getInt32(8,true)!==toClubId&&to.getInt32(0x98,true)>22)appendNotification(save,date,rng,c.getInt32(8,true),9,0,0,toClubId,playerId);
 p.setInt32(0xe4,3,true);for(const off of [0xec,0xf5,0x7d])p.setUint8(off,0);for(const off of [0xf8,0xe8])p.setInt32(off,0,true);p.setBigInt64(0x48,p.getBigInt64(0x40,true),true);
 if(from.getInt32(0xa8,true)===playerId)chooseClubSetPiecePlayer(save,fromClubId);
 if(bothHuman())p.setUint8(0x85,1);
 refreshClubRoster(save,fromClubId,runtime,date);refreshClubRoster(save,toClubId,runtime,date);
}
/** Whole64fdf0. Expired loan returns retain their row until the destination
 * has room, so failed returns can produce another original notification. */
export function processScheduledPlayerReturns(save,date,{rng,runtime={},maxSeniorPlayers=originalSeniorSquadLimit,currentDate=currentCareerDate(save)}={}){
 if(!Number.isInteger(maxSeniorPlayers))throw Error('Original senior-player limit66b610 required.');
 if(!rng||typeof rng.below!=='function')throw Error('Original random generator required for return news.');
 const section=save.sections.find(s=>s.name==='records_0066b05c'),v=view(section.data),count=section.count,contractEnd=currentDate+120;
 for(let i=0;i<count;i++){const o=i*24,id=v.getInt32(o,true);if(id<0||v.getFloat64(o+8,true)>date)continue;const clubId=v.getInt32(o+16,true),club=view(record(save,'clubs',clubId));
  if(club.getInt32(0x64,true)<maxSeniorPlayers){completePlayerMove(save,id,clubId,contractEnd,{rng,runtime,date:currentDate});view(record(save,'players',id)).setInt32(0x100,0,true);v.setInt32(o,-1,true);}
  else appendNotification(save,currentDate,rng,clubId,14,0,-1,-1,id);
 }
}
/** Whole64fd84: append a pending return without changing the player yet. */
export function schedulePlayerReturn(save,playerId,clubId,dueDate){
 const id=appendRows(save,'records_0066b05c',[[playerId,0,0,0,clubId,0]]);view(record(save,'records_0066b05c',id)).setFloat64(8,dueDate,true);return id;
}
/** Whole64ff24: recall the first matching loan immediately, without the
 * scheduled capacity/date gates, with a180-day contract instead of120. */
export function recallLoanedPlayer(save,playerId,{rng,runtime={},date=currentCareerDate(save)}={}){
 if(playerId<0)throw RangeError('A valid player is required for recall.');
 const section=save.sections.find(s=>s.name==='records_0066b05c'),v=view(section.data);
 for(let i=0;i<section.count;i++)if(v.getInt32(i*24,true)===playerId){completePlayerMove(save,playerId,v.getInt32(i*24+16,true),date+180,{rng,runtime,date});view(record(save,'players',playerId)).setInt32(0x100,0,true);v.setInt32(i*24,-1,true);return;}
}
