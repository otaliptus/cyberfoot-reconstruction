import {record,shortString} from './save-format.mjs';
import {currentCareerDate} from './calendar.mjs';
import {selectDismissalReplacement} from './manager-dismissal-selection.mjs';
import {removeManager,appointManager} from './manager-employment.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Non-rendering state effects of Form31.FormCreate6421a8. The host opens
 * the original notice using this model and closes it on acknowledgement. */
export function prepareManagerDismissal(save,clubId,{rng,runtime,date=currentCareerDate(save)}={}){
 const club=view(record(save,'clubs',clubId)),outgoing=club.getInt32(0x44,true);
 let reason=club.getInt32(0x54,true)<15?0x1a0:club.getBigInt64(0x48,true)<0n?0x1a1:0x1a2;
 if(club.getInt32(0x7c,true)===0)reason=0x1a3;
 if(runtime.dismissalSpecialReason)reason=0x1a4; //66af2c, read but not cleared.
 const outgoingName=shortString(record(save,'records_0066b718',outgoing),0,25),clubName=shortString(record(save,'clubs',clubId),0,25);
 const replacement=selectDismissalReplacement(save,clubId,rng);
 if(replacement===-1)return {closed:true,clubId,outgoing,outgoingName,clubName,reason,replacement};
 const replacementName=shortString(record(save,'records_0066b718',replacement),0,25);
 removeManager(save,clubId,outgoing,{rng,runtime,date});
 const prior=view(record(save,'records_0066b718',replacement)).getInt32(0x1c,true);
 if(prior>=0)removeManager(save,prior,replacement,{rng,runtime,date});
 appointManager(save,clubId,replacement,{rng,runtime,date});
 return {closed:false,clubId,outgoing,outgoingName,clubName,reason,replacement,replacementName};
}
