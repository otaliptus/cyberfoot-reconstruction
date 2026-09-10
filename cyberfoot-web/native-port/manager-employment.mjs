import {record} from './save-format.mjs';
import {currentCareerDate} from './calendar.mjs';
import {appendRows} from './match-records.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
import {countHumanManagersInCountry,countHumanManagersInSubgroup} from './manager-participation.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const section=(save,name)=>save.sections.find(s=>s.name===name);

// 64901c uses signed subtraction in both comparisons. Preserve its ordering
// even for extreme IDs, rather than replacing it with a stable numeric sort.
function sortIds(a,left=0,right=9){
 do{
  const pivot=a[(left+right)>>>1];let i=left,j=right;
  do{
   while(((a[i]-pivot)|0)<0)i++;
   while(a[j]!==pivot&&((a[j]-pivot)|0)>=0)j--;
   if(i<=j){[a[i],a[j]]=[a[j],a[i]];i++;j--;}
  }while(i<=j);
  if(left<j)sortIds(a,left,j);
  left=i;
 }while(left<right);
}

/** Whole648ea0: sort all ten human club slots, using the configured count
 * only for sentinel replacement. Recompute each regional participation flag. */
export function refreshManagerParticipation(save,runtime){
 const c=view(save.career),count=runtime.nationalManagerCount;
 if(!Number.isInteger(count))throw Error('Original manager slot count66b57c required.');
 for(let i=0;i<count;i++)if(c.getInt32(0x140+i*4,true)===-1)c.setInt32(0x140+i*4,5000,true);
 const ids=Array.from({length:10},(_,i)=>c.getInt32(0x140+i*4,true));sortIds(ids);ids.forEach((n,i)=>c.setInt32(0x140+i*4,n,true));
 for(let i=0;i<count;i++)if(c.getInt32(0x140+i*4,true)===5000)c.setInt32(0x140+i*4,-1,true);
 if(c.getUint8(0x170)!==0){
  for(let i=0;i<27;i++)view(record(save,'records_0066ae98',i)).setUint8(0x52c,0);
  for(let i=0;i<27;i++){
   const group=view(record(save,'records_0066ae98',i)),rounds=(group.getInt32(0x510,true)+1)|0;
   for(let j=0;j<rounds;j++)for(let k=0;k<20;k++){
    const id=group.getInt32(j*80+k*4,true);
    if(id>=0&&view(record(save,'clubs',id)).getUint8(0x39)!==0)group.setUint8(0x52c,1);
   }
  }
 }
}

/** Whole6497c8. Only pending friendlies are removed. */
export function cancelManagerClubFriendlies(save,clubId){
 const s=section(save,'records_0066b0d4');
 for(let i=0;i<s.count;i++){
  const row=view(record(save,s.name,i));
  if(row.getUint8(8)===0&&(row.getInt32(0,true)===clubId||row.getInt32(4,true)===clubId)){
   row.setUint8(8,1);row.setInt32(0,-1,true);row.setInt32(4,-1,true);
  }
 }
}

/** Whole649ad4. Retain notification records, removing their club association. */
export function clearManagerClubNotifications(save,clubId){
 const s=section(save,'records_0066b770');
 for(let i=0;i<s.count;i++){const row=view(record(save,s.name,i));if(row.getInt32(0,true)===clubId)row.setInt32(0,-1,true);}
}

function resetPlayers(save,clubId,rng,date){
 const s=section(save,'players');
 for(let i=1;i<s.count;i++){
  const p=view(record(save,'players',i)),id=p.getInt32(0x20,true);
  if(id<0||id!==clubId)continue;
  p.setUint8(0x7d,0);p.setInt32(0xe4,3,true);p.setInt32(0xe8,1,true);
  if(p.getInt32(0x100,true)===1)p.setInt32(0x100,0,true);
  p.setFloat64(0x70,date+(rng.below(30)+10)*7,true);p.setInt32(0xfc,0,true);
 }
}

/** Whole649824, including original human-manager departure effects. */
export function removeManager(save,clubId,managerId,{rng,runtime,date=currentCareerDate(save)}={}){
 const c=view(save.career),club=view(record(save,'clubs',clubId)),manager=view(record(save,'records_0066b718',managerId)),human=manager.getUint8(0x31)!==0,division=club.getInt32(0x7c,true),country=club.getInt32(0x3c,true);
 if(human&&(!rng||!Number.isInteger(runtime?.nationalManagerCount)))throw Error('Original RNG and manager slot count required.');
 manager.setInt32(0x24,division,true);
 if(human&&c.getInt32(0x168,true)===4){
  const league=findLeagueConfiguration(save,country);
  if(view(record(save,'records_0066aca0',league)).getInt32(0x144,true)===2&&division===2)manager.setInt32(0x24,4,true);
 }
 manager.setInt32(0x1c,-1,true);manager.setInt32(0x20,clubId,true);club.setInt32(0x44,-1,true);manager.setUint8(0x40,0);
 if(!human)return;
 resetPlayers(save,clubId,rng,date);
 runtime.currentLeagueConfiguration=findLeagueConfiguration(save,country);
 club.setUint8(0x39,0);c.setInt32(0x13c,(c.getInt32(0x13c,true)-1)|0,true);
 for(let i=0;i<runtime.nationalManagerCount;i++)if(c.getInt32(0x140+i*4,true)===clubId)c.setInt32(0x140+i*4,-1,true);
 refreshManagerParticipation(save,runtime);
 if(c.getInt32(0x88,true)!==0)cancelManagerClubFriendlies(save,clubId);
 clearManagerClubNotifications(save,clubId);
 if(countHumanManagersInCountry(save,country)===0){const league=findLeagueConfiguration(save,country);if(league>=0)view(record(save,'records_0066aca0',league)).setUint8(0x14c,0);}
 if(c.getUint8(0x170)!==0&&country===29){const subgroup=club.getInt32(0x40,true);if(countHumanManagersInSubgroup(save,subgroup)===0)view(record(save,'records_0066ae98',subgroup)).setUint8(0x52c,0);}
}

/** Whole649138. Original appointments reset cash as well as ticket prices,
 * performance and contracts; this is not a simple manager-ID reassignment. */
export function appointManager(save,clubId,managerId,{rng,runtime,date=currentCareerDate(save)}={}){
 const c=view(save.career),club=view(record(save,'clubs',clubId)),manager=view(record(save,'records_0066b718',managerId)),human=manager.getUint8(0x31)!==0,division=club.getInt32(0x7c,true);
 if(!rng||(human&&!Number.isInteger(runtime?.nationalManagerCount)))throw Error('Original RNG and manager slot count required.');
 club.setInt32(0x44,managerId,true);manager.setInt32(0x1c,clubId,true);manager.setUint8(0x40,1);club.setInt32(0x50,100,true);club.setInt32(0x54,80,true);manager.setInt32(0x34,5,true);
 view(record(save,'records_0066afec',clubId)).setInt32(0x20,0,true);
 const reference=view(record(save,'records_0066b608',division));for(let i=0;i<4;i++)club.setInt32(0x1f4+i*4,reference.getInt32(i*4,true),true);
 if(human){
  club.setUint8(0x39,1);c.setInt32(0x13c,(c.getInt32(0x13c,true)+1)|0,true);
  for(let i=0;i<runtime.nationalManagerCount;i++)if(c.getInt32(0x140+i*4,true)===-1){c.setInt32(0x140+i*4,clubId,true);break;}
  refreshManagerParticipation(save,runtime);
  const country=club.getInt32(0x3c,true),league=findLeagueConfiguration(save,country);
  if(league>=0)view(record(save,'records_0066aca0',league)).setUint8(0x14c,1);
  if(c.getUint8(0x170)!==0&&country===29){const group=view(record(save,'records_0066ae98',club.getInt32(0x40,true)));if(group.getUint8(0x52d)!==0)group.setUint8(0x52c,1);}
  resetPlayers(save,clubId,rng,date);
 }
 const finances=[[200000,500000],[2000000,6000000],[1000000,4000000],[1000000,2000000],[500000,1000000]][division];
 if(finances)club.setBigInt64(0x48,BigInt(rng.below(finances[0])+finances[1])*10000n,true);
 appendRows(save,'records_0066b2b8',[[managerId,c.getInt32(0xc0,true),clubId]]);
}
