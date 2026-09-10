import {record} from './save-format.mjs';
import {originalSeniorSquadLimit} from './player-move.mjs';
import {nationalEligibility} from './national-setup.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const requireHosts=(hosts,names)=>{for(const name of names)if(typeof hosts?.[name]!=='function')throw Error(`Original next-screen host ${name} required.`);};
/** Whole005f996c: a human-controlled club is below the original senior limit. */
export function hasUnderLimitHumanClub(save,{maxSeniorPlayers=originalSeniorSquadLimit}={}){
 const c=view(save.career),club=id=>view(record(save,'clubs',id));
 for(let i=0;i<c.getInt32(0x13c,true);i++){const id=c.getInt32(0x140+i*4,true);if(id>=0&&club(id).getInt32(0x64,true)<maxSeniorPlayers)return true;}
 return false;
}
/** Whole005f98f4: first eligible national association manager. The original
 * writes the index before the one-shot career708 gate decides the result. */
export function nationalManagerAssignmentIndex(save,runtime,{date}={}){
 if(!Number.isFinite(date))throw Error('Original calendar date required.');
 const c=view(save.career),state=runtime??{};let result=false;
 for(let i=0;i<c.getInt32(0x5fc,true);i++){
  const id=c.getInt32(0x604+i*4,true),club=view(record(save,'clubs',id));
  if(nationalEligibility(save,club.getInt32(0x3c,true),date)){result=true;state.nextNationalManagerIndex=i+1;break;}
 }
 if(c.getUint8(0x708)!==0)return false;
 c.setUint8(0x708,1);return result;
}
/** Whole5f9efc and5f9f14: the cup and other-competition next screens dispatch
 * on the participation flag selected for the next competition. */
export async function dispatchCompetitionNext(runtime,hosts){
 requireHosts(hosts,['humanNext','automaticNext']);
 if(runtime.humanParticipation)return hosts.humanNext();return hosts.automaticNext();
}
/** Whole005f9dc8: the national next screen clears the27 regional second-stage
 * flags, reruns the unemployed-offer, manager-change and participation chain
 * twice, then dispatches. The original ordinal scan reads the flags and
 * discards its result, so it has no observable effect. */
export async function nationalNextScreen(save,runtime,hosts){
 requireHosts(hosts,['unemployedOffers','managerChanges','selectHumanParticipation','humanNext','automaticNext']);
 const section=save.sections.find(s=>s.name==='records_0066ae98');
 for(let i=0;i<27;i++)view(record(save,section.name,i)).setUint8(0x52e,0);
 await hosts.unemployedOffers();
 await hosts.managerChanges();
 await hosts.selectHumanParticipation();
 await hosts.selectHumanParticipation();
 return dispatchCompetitionNext(runtime,hosts);
}
