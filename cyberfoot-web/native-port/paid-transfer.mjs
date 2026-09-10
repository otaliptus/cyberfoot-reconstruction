import {record} from './save-format.mjs';import {currentCareerDate} from './calendar.mjs';import {precision64,nearestEven,multiplyRound} from './x87.mjs';import {appendRows} from './match-records.mjs';import {appendNotification} from './notifications.mjs';import {chooseClubSetPiecePlayer,refreshClubRoster} from './club-roster-update.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),int64Min=-(1n<<63n),int64Max=(1n<<63n)-1n;
const cashStore=n=>n<int64Min||n>int64Max?int64Min:n;
function roundDayCount(value){
 if(!Number.isFinite(value))return 0;
 const b=new DataView(new ArrayBuffer(8));b.setFloat64(0,value,true);const bits=b.getBigUint64(0,true),exp=Number(bits>>52n&2047n),sig=((bits&0xfffffffffffffn)+(exp?0x10000000000000n:0n))*(bits>>63n?-1n:1n),e=(exp||1)-1075;
 const n=e<0?nearestEven(sig,1n<<BigInt(-e)):sig<<BigInt(e);return n<int64Min||n>int64Max?0:Number(BigInt.asIntN(32,n));
}
const compensationCoefficients=[['17708874310761169551',-67],['11068046444225730970',-66],['14757395258967641293',-66],['16233134784864405422',-66],['1',-2],['11068046444225730970',-65]];
/** Compensation block650f79..65106d; ranges use the rounded day count,
 * original extended constants and signed32 subtraction. */
export function transferCompensation(fee,remainingDays){
 const days=roundDayCount(remainingDays),index=days<0?-1:days<=30?0:days<=60?1:days<=90?2:days<=180?3:days<=360?4:days<=1000000?5:-1;
 return index<0?0:multiplyRound(fee|0,compensationCoefficients[index]);
}
/** Whole650ec4. Cash uses original Int64 units; each store is separate,
 * including the original unconditional4100-unit credit to the seller. */
export function completePaidTransfer(save,playerId,toClubId,fee,{rng,runtime={},date=currentCareerDate(save)}={}){
 const players=save.sections.find(s=>s.name==='players');if(playerId>=players.count)return;
 if(!rng||typeof rng.below!=='function')throw Error('Original random generator required for transfer news.');
 fee|=0;const p=view(record(save,'players',playerId)),fromClubId=p.getInt32(0x20,true),from=view(record(save,'clubs',fromClubId)),to=view(record(save,'clubs',toClubId)),c=view(save.career),ledger=id=>view(record(save,'records_0066afec',id));
 const addLedger=(id,off,n)=>{const l=ledger(id);l.setInt32(off,(l.getInt32(off,true)+n)|0,true);},addCash=(club,amount)=>club.setBigInt64(0x48,cashStore(club.getBigInt64(0x48,true)+amount),true),bothHuman=()=>from.getUint8(0x39)!==0&&to.getUint8(0x39)!==0;
 p.setInt32(0x20,toClubId,true);p.setInt32(0x54,0,true);p.setInt32(0x100,0,true);
 let compensation=0,net=0;
 if(!runtime.transferCompensationWaived&&from.getUint8(0x39)!==0&&p.getFloat64(0x70,true)>date){compensation=transferCompensation(fee,p.getFloat64(0x70,true)-date);net=(fee-compensation)|0;}
 p.setFloat64(0x70,date+(c.getInt32(0x168,true)===2?24:10)*7,true);p.setInt32(0xfc,0,true);
 const [a,b]=precision64(p.getBigInt64(0x38,true),10000n),salary=Number(BigInt.asIntN(32,nearestEven(a,b)));addLedger(toClubId,4,salary);addLedger(fromClubId,4,-salary);
 addLedger(fromClubId,0x18,fee);addCash(from,BigInt(net>0?net:fee)*10000n);addCash(from,4100n);addLedger(toClubId,0x1c,fee);addCash(to,-BigInt(fee)*10000n);if(net>0)addLedger(fromClubId,0x34,compensation);
 if(bothHuman())p.setUint8(0x85,1);
 const row=appendRows(save,'records_0066b070',[[playerId,0,0,0,fromClubId,toClubId,fee,0]]);view(record(save,'records_0066b070',row)).setFloat64(8,date,true);
 if(p.getUint8(0x15)!==0&&toClubId!==c.getInt32(8,true)&&to.getInt32(0x98,true)>22)appendNotification(save,date,rng,c.getInt32(8,true),9,0,0,toClubId,playerId);
 p.setInt32(0xe4,3,true);for(const off of [0xec,0xf5,0x7d])p.setUint8(off,0);for(const off of [0xf8,0xe8])p.setInt32(off,0,true);p.setBigInt64(0x48,p.getBigInt64(0x40,true),true);
 if(from.getInt32(0xa8,true)===playerId)chooseClubSetPiecePlayer(save,fromClubId);if(bothHuman())p.setUint8(0x85,1);
 refreshClubRoster(save,fromClubId,runtime,date);refreshClubRoster(save,toClubId,runtime,date);
 if(p.getUint8(0x15)!==0&&to.getUint8(0x39)!==0){let stars=0;for(let id=1;id<players.count;id++){const other=view(record(save,'players',id));if(other.getInt32(0x20,true)>=0&&other.getInt32(0x20,true)===toClubId&&other.getUint8(0x15)!==0)stars++;}if(stars>3&&rng.below(100)>20){to.setInt32(0x22c,(to.getInt32(0x22c,true)-1)|0,true);appendNotification(save,date,rng,toClubId,11,0,0,0,playerId);}}
 runtime.transferCompensationWaived=false;
}
