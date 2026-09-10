import {record} from './save-format.mjs';import {findLeagueConfiguration} from './weekly-team.mjs';
import {selectEmployedManagerOffer,selectUnemployedManagerOffers} from './manager-job-offers.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
function canPresent(save,runtime){const id=runtime.managerJobOffers[0];return id>=0&&findLeagueConfiguration(save,view(record(save,'clubs',id)).getInt32(0x3c,true))>=0;}
/** Whole5f9800. Each modal may alter state before the next manager slot. */
export async function processEmployedManagerOffers(save,runtime,{rng,showOffer}){
 if(typeof showOffer!=='function')throw Error('Original job-offer modal required.');
 const c=view(save.career),round=c.getInt32(0x4c,true);
 if(c.getInt32(0xc0,true)<=1||round<4||round>16||c.getInt32(0x50,true)<=1||(round&1)!==0)return;
 for(let slot=0;slot<10;slot++){
  const id=c.getInt32(0x14+slot*4,true);c.setInt32(0x10,id,true);if(id<0)continue;
  const manager=view(record(save,'records_0066b718',id)),club=manager.getInt32(0x1c,true);if(club<0)continue;
  selectEmployedManagerOffer(save,club,{rng,runtime});
  if(canPresent(save,runtime)){view(record(save,'records_0066b718',c.getInt32(0x10,true))).setUint8(0x30,0);await showOffer();}
 }
}
/** Whole5f9f2c. Its initial random draw occurs even in fast mode. */
export async function processUnemployedManagerOffers(save,runtime,{rng,showOffer}){
 if(typeof showOffer!=='function')throw Error('Original job-offer modal required.');
 const draw=rng.below(3),c=view(save.career);if(c.getUint8(0x6c8)!==0||draw<=0)return;
 for(let slot=0;slot<10;slot++){
  const id=c.getInt32(0x14+slot*4,true);c.setInt32(0x10,id,true);if(id<0)continue;
  const manager=view(record(save,'records_0066b718',id));if(manager.getInt32(0x1c,true)!==-1)continue;
  selectUnemployedManagerOffers(save,manager.getInt32(0x3c,true),id,{rng,runtime});
  if(canPresent(save,runtime))await showOffer();
 }
}
