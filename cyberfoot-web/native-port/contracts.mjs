import {currentCareerDate} from './calendar.mjs';
import {appendNotification} from './notifications.mjs';
import {addContractMonths} from './dates.mjs';
import {precision64,nearestEven,multiplyRound} from './x87.mjs';
import {record} from './save-format.mjs';
// Original 00652590. Unassigned players return an incoming machine register;
// callers must explicitly supply that value rather than fabricate a wage.
export function wageDemand(player,club,incoming={}){
 if(player.clubId<0){if(incoming.ebx===undefined)throw Error('Original unassigned-player wage requires caller EBX');return incoming.ebx|0;}
 const special=[3,72,104,97,65].includes(club.countryId),table=special?[450,750,550,500,450,450]:[400,600,500,450,400,400];
 let rate=table[club.category];if(rate===undefined){if(incoming.ecx===undefined)throw Error('Original unknown-category wage requires caller ECX');rate=incoming.ecx|0;}
 // The second original cash branch is unreachable for ordinary finite values.
 if(BigInt(club.cash)>100000000000n)rate=(rate+50)|0;else if(BigInt(club.cash)>200000000000n)rate=(rate+100)|0;
 if(club.field98>20)rate=(rate+50)|0;
 rate=(rate+({0:-70,1:-30,2:-40,4:50}[player.role]??0))|0;
 let wage=Math.imul(player.skill,rate);if(player.age>=32)wage=(wage-Math.imul((player.age-32)|0,300))|0;
 if(player.veteranFlag)wage=(wage+Math.imul(player.skill,250))|0;
 return Math.max(500,wage);
}
// Original 00652900 rounds each player's salary before adding, not the sum.
export function clubPayroll(clubId,players){let total=0;for(const player of players)if(player.clubId>=0&&player.clubId===clubId){const [a,b]=precision64(BigInt(player.salary),10000n);total=(total+Number(BigInt.asIntN(32,nearestEven(a,b))))|0;}return total;}
export function updateClubPayroll(save,clubId){
 const section=save.sections.find(s=>s.name==='players'),v=new DataView(section.data.buffer,section.data.byteOffset,section.data.byteLength),players=[];
 for(let i=0;i<section.data.length;i+=304)players.push({clubId:v.getInt32(i+0x20,true),salary:v.getBigInt64(i+0x38,true)});
 const result=clubPayroll(clubId,players),ledger=record(save,'records_0066afec',clubId);new DataView(ledger.buffer,ledger.byteOffset,ledger.byteLength).setInt32(4,result,true);return result;
}

const tenth=['14757395258967641293',-67],fifth=['14757395258967641293',-66],threeTenths=['11068046444225730970',-65],twoFifths=['14757395258967641293',-65],half=['1',-1],twentieth=['14757395258967641293',-68];
// Form24.CHButton1Click 005a1ad0, including the current-contract wage floor.
export function negotiateContract({baseWage,offer,durationIndex,rating,salary,currentDate,contractEnd}){
 let required=baseWage|0;const coeff=(rating<7?[tenth,fifth,threeTenths,twoFifths,half]:[tenth,twentieth,tenth,fifth,threeTenths])[durationIndex];
 if(coeff){const delta=multiplyRound(required,coeff);required=(required+(rating>=7&&durationIndex<2?-delta:delta))|0;}
 if(BigInt(required)*10000n<=BigInt(salary)&&contractEnd>currentDate&&contractEnd-30>currentDate){
  const delta=multiplyRound(required,tenth),[a,b]=precision64(BigInt(salary)+BigInt(delta)*10000n),[c,d]=precision64(a,b*10000n);required=Number(BigInt.asIntN(32,nearestEven(c,d)));
 }
 return {required,decision:offer>100000&&offer>Math.imul(required,5)?'excessive':offer<required?'reject':'accept'};
}

// Original 005a1eb4 business effects; grid text is rendered by the caller.
export function renewContract(player,{offer,entryOffer=offer,durationIndex,date,clubId=player.clubId}){
 if(player.field7D){player.field7D=false;player.field48=player.field40;}
 player.contractEnd=addContractMonths(date,[6,12,24,36][durationIndex]??6);player.fieldFC=0;
 if(player.fieldF4)player.fieldE4=(player.fieldE4+1)|0;player.fieldE4=Math.min(3,player.fieldE4);player.fieldF0=0;player.fieldF4=false;
 const oldSalary=BigInt(player.salary),newSalary=BigInt(offer|0)*10000n;
 const [a,b]=precision64(oldSalary*11068046444225730970n,1n<<65n),[c,d]=precision64(a,b*10000n),threshold=nearestEven(c,d)*10000n,notifications=[];
 if(BigInt(entryOffer|0)*10000n-oldSalary>threshold){player.fieldE4=(player.fieldE4+1)|0;notifications.push([clubId,2,1]);}
 player.fieldE4=Math.min(3,player.fieldE4);player.salary=String(newSalary);
 return notifications;
}
export function renewalPlayer(save,id){
 const bytes=record(save,'players',id),v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
 return {clubId:v.getInt32(0x20,true),salary:String(v.getBigInt64(0x38,true)),field40:String(v.getBigInt64(0x40,true)),field48:String(v.getBigInt64(0x48,true)),contractEnd:v.getFloat64(0x70,true),field7D:!!v.getUint8(0x7d),fieldE4:v.getInt32(0xe4,true),fieldF0:v.getInt32(0xf0,true),fieldF4:!!v.getUint8(0xf4),fieldFC:v.getInt32(0xfc,true)};
}
export function applyContractRenewal(save,id,options,notify){
 const player=renewalPlayer(save,id),notifications=renewContract(player,options);
 if(notifications.length&&typeof notify!=='function')throw Error('Original renewal notification delivery requires a handler');
 const bytes=record(save,'players',id),v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
 for(const [key,offset] of [['salary',0x38],['field40',0x40],['field48',0x48]])v.setBigInt64(offset,BigInt(player[key]),true);
 for(const [key,offset] of [['fieldE4',0xe4],['fieldF0',0xf0],['fieldFC',0xfc]])v.setInt32(offset,player[key],true);
 v.setFloat64(0x70,player.contractEnd,true);v.setUint8(0x7d,+player.field7D);v.setUint8(0xf4,+player.fieldF4);
 for(const args of notifications)notify(...args,0,0,id);
 updateClubPayroll(save,options.clubId??player.clubId);return player;
}

export function submitContractOffer(save,id,{offer,durationIndex,currentDate},rng){
 currentDate??=currentCareerDate(save);
 if(!Number.isFinite(currentDate))throw Error('Original calendar date is required for contract negotiation');
 const bytes=record(save,'players',id),p=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),currentClub=career.getInt32(8,true),playerClub=p.getInt32(0x20,true);
 const cb=record(save,'clubs',playerClub),c=new DataView(cb.buffer,cb.byteOffset,cb.byteLength),mb=record(save,'clubs',currentClub),m=new DataView(mb.buffer,mb.byteOffset,mb.byteLength);
 const baseWage=wageDemand({clubId:playerClub,skill:p.getInt32(0x28,true),age:p.getInt32(0x18,true),role:p.getInt32(0x24,true),veteranFlag:!!p.getUint8(0x15)},{countryId:c.getInt32(0x3c,true),category:c.getInt32(0x7c,true),field98:c.getInt32(0x98,true),cash:c.getBigInt64(0x48,true)});
 const result=negotiateContract({baseWage,offer,durationIndex,rating:m.getInt32(0x1a8,true),salary:p.getBigInt64(0x38,true),currentDate,contractEnd:p.getFloat64(0x70,true)});
 if(result.decision==='accept'){
  if(!rng)throw Error('Original random state is required for renewal notification selection');
  applyContractRenewal(save,id,{offer,durationIndex,date:currentDate,clubId:currentClub},(...args)=>appendNotification(save,currentDate,rng,...args));
 }
 return result;
}
