import {record} from './save-format.mjs';
import {currentCareerDate} from './calendar.mjs';
import {selectManagerReplacement} from './manager-selection.mjs';
import {removeManager,appointManager} from './manager-employment.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);

/** Whole656410 controller. The human dismissal notice and the recap retain
 * their original modal boundaries, and must be supplied by the UI host. */
export async function processManagerChanges(save,runtime,{rng,date=currentCareerDate(save),humanDismissal,showChanges}={}){
 if(typeof humanDismissal!=='function'||typeof showChanges!=='function')throw Error('Original manager-change dismissal and recap handlers required.');
 const c=view(save.career),count=c.getInt32(0x3c,true);
 runtime.managerChanges=[];
 for(let id=0;id<count;id++){
  const club=view(record(save,'clubs',id));
  if(club.getInt32(0x7c,true)<=0||club.getInt32(0x50,true)>=10)continue;
  if(club.getUint8(0x39)!==0){runtime.managerChangeClub=id;await humanDismissal();continue;}
  if(club.getInt32(0x1a4+c.getInt32(0x88,true)*4,true)<=5)continue;
  runtime.managerChangeClub=id;
  if(!selectManagerReplacement(save,runtime.managerChangeClub,{rng,runtime})||runtime.outgoingManager<0)continue;
  const options={rng,runtime,date};
  if(runtime.replacementSourceClub===-1){
   removeManager(save,runtime.managerChangeClub,runtime.outgoingManager,options);
   const previous=view(record(save,'records_0066b718',runtime.replacementManager)).getInt32(0x1c,true);
   if(previous>=0)removeManager(save,previous,runtime.replacementManager,options);
   appointManager(save,runtime.managerChangeClub,runtime.replacementManager,options);
   runtime.managerChanges.push([runtime.managerChangeClub,runtime.outgoingManager,runtime.replacementManager,rng.below(4)+1]);
  }else{
   removeManager(save,runtime.managerChangeClub,runtime.outgoingManager,options);
   removeManager(save,runtime.replacementSourceClub,runtime.replacementManager,options);
   appointManager(save,runtime.managerChangeClub,runtime.replacementManager,options);
   appointManager(save,runtime.replacementSourceClub,runtime.outgoingManager,options);
   runtime.managerChanges.push([runtime.managerChangeClub,runtime.outgoingManager,runtime.replacementManager,0]);
   runtime.managerChanges.push([runtime.replacementSourceClub,runtime.replacementManager,runtime.outgoingManager,0]);
  }
  runtime.replacementManager=-1;runtime.outgoingManager=-1;runtime.replacementSourceClub=-1;
 }
 if(runtime.managerChanges.length>0&&c.getUint8(0xd8)!==0)await showChanges();
 runtime.managerChanges=[];
}
