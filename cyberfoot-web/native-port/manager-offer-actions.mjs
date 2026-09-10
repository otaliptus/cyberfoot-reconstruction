import {record} from './save-format.mjs';
import {currentCareerDate} from './calendar.mjs';
import {removeManager,appointManager} from './manager-employment.mjs';
import {appendNotification} from './notifications.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole5d6b3c state changes. selected is the first checked radio (0..3),
 * or -1. Return true only when the original would close the offer form. */
export function acceptManagerOffer(save,runtime,selected,{rng,date=currentCareerDate(save)}={}){
 if(selected<0||selected>3||runtime.managerJobOffers[selected]===-1)return false;
 const destination=runtime.managerJobOffers[selected],c=view(save.career),managerId=c.getInt32(0x10,true),manager=view(record(save,'records_0066b718',managerId)),source=manager.getInt32(0x1c,true),outgoing=view(record(save,'clubs',destination)).getInt32(0x44,true),options={rng,runtime,date};
 removeManager(save,destination,outgoing,options);
 if(source!==-1){
  removeManager(save,view(record(save,'records_0066b718',managerId)).getInt32(0x1c,true),managerId,options);
  appointManager(save,source,outgoing,options);
 }
 appointManager(save,destination,managerId,options);
 const players=save.sections.find(s=>s.name==='players');
 for(let id=1;id<players.count;id++){
  const p=view(record(save,'players',id)),club=p.getInt32(0x20,true);if(club<0||club!==destination)continue;
  p.setInt32(0xe4,3,true);p.setInt32(0xe8,1,true);p.setFloat64(0x70,date+(rng.below(30)+10)*7,true);p.setInt32(0xfc,0,true);
 }
 appendNotification(save,date,rng,destination,0,1,0,0,0);return true;
}
