import {record} from './save-format.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const requireHosts=(hosts,names)=>{for(const name of names)if(typeof hosts?.[name]!=='function')throw Error(`Original next-screen host ${name} required.`);};
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
