import {createManagerDismissalHost} from './manager-dismissal-host.mjs';
import {createManagerRecapHost} from './manager-recap-host.mjs';
/** Both original manager-change modal boundaries, backed by native hosts. */
export function createManagerDialogs(renderer,options){
 const dismissal=createManagerDismissalHost(renderer,options),recap=createManagerRecapHost(renderer,options);
 return {dismissal,recap,humanDismissal:()=>dismissal.open(options.runtime.managerChangeClub),showChanges:()=>recap.open(),advanceTime:ms=>recap.advanceTime(ms),dispose:()=>{dismissal.dispose();recap.dispose();}};
}
