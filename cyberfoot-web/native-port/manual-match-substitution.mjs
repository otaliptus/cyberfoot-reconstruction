import {calculateLineup} from './lineup.mjs';
/** Bench-to-pitch business branch of Form88.ImagecamisaDragDrop
 * 00601970..00601dbc. Slot numbers are the stored 1..18 slots.
 */
export async function substituteDuringMatch({lineup,sourceSlot,targetSlot,fixture,side,state,rng,period,minute,recordEvent,presentEvent,refresh,recalculate=calculateLineup}){
 for(const [name,fn] of Object.entries({recordEvent,presentEvent,refresh,recalculate}))if(typeof fn!=='function')throw TypeError(`Manual substitution requires ${name}.`);
 if(![sourceSlot,targetSlot].every(n=>Number.isInteger(n)&&n>=1&&n<=18))throw RangeError('Original match slots must be 1–18.');
 if(side!==1&&side!==2)throw RangeError('Original fixture side must be 1 or 2.');
 if((sourceSlot<12)===(targetSlot<12)||sourceSlot===targetSlot)return {changed:false};
 if(fixture.substitutions[side-1]<=0)return {changed:false,languageId:649};
 const benchSlot=sourceSlot>=12?sourceSlot:targetSlot,pitchSlot=sourceSlot<12?sourceSlot:targetSlot;
 const incoming=lineup.bench[benchSlot-12];if(incoming<=0)return {changed:false};
 const outgoing=lineup.players[pitchSlot-1];state.players[outgoing].active=false;
 lineup.players[pitchSlot-1]=incoming;
 Object.assign(state.players[incoming],{active:true,field88:0,careerGoals:0,selectedFlag:true});
 const recordIndex=recordEvent(side,outgoing,fixture,incoming,19,state,rng);
 await presentEvent(recordIndex);
 lineup.bench[benchSlot-12]=-1;
 const counters=fixture.counters,offset=0x7c+side*4;
 counters[offset]=((counters[offset]??0)+1)|0;
 for(const off of [0x80,0x84])if((counters[off]??0)>3)counters[off]=3;
 const count=counters[offset],recordOffset=0x30+side*24+count*8;
 counters[recordOffset]=outgoing;counters[recordOffset+4]=((period===1?0:45)+minute)|0;
 fixture.substitutions[side-1]--;
 await refresh();recalculate(lineup,state);
 return {changed:true,outgoing,incoming,recordIndex};
}
