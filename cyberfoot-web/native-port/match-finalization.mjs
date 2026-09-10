import {record} from './save-format.mjs';import {settleFinishedFixture} from './finished-fixture.mjs';import {recoverFixturePlayers} from './post-match-recovery.mjs';import {advanceTwoLegKnockout} from './knockout-round.mjs';import {advanceNationalKnockout} from './national-knockout.mjs';import {archiveMatchDayHistory} from './match-history.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** 61f604 ordering. Controllers retain responsibility for interactive decisions and the next competition batch. */
export async function finalizeMatchBatch(save,fixtures,state,rng,{runtime,teamsFor,historyContext,nationalPhase,nationalOptions,knockoutOptions,settlementOptions,continueCompetition,present,handlers={}}){
 if(typeof continueCompetition!=='function')throw Error('Next competition controller required');
 if(!runtime.silent&&typeof present!=='function')throw Error('Match finalization presentation required');
 const career=view(save.career),kind=career.getInt32(0x88,true),get=o=>career.getInt32(o,true);
 if(kind===3&&!Number.isInteger(nationalPhase))throw Error('Original national scheduling phase required');
 runtime.finishedCaption=runtime.competitionCaption??'';runtime.batchTimerEnabled=false;
 if(!runtime.silent)await present('finishing');
 for(const fixture of fixtures){
  await (handlers.settle??settleFinishedFixture)(save,fixture,state,{...settlementOptions,rng});
  await (handlers.recover??recoverFixturePlayers)(save,fixture,rng);
 }
 if(!runtime.silent&&career.getUint8(0xdc))await present('sound','fimjogo');
 const knockout=(kind===2&&get(0x118)===2)||(kind===4&&get(0x194)>3&&get(0x198)===2)||(kind===6&&get(0x1a4)===2&&(runtime.subgroup===1||(runtime.subgroup===2&&get(0x1a0)>3)));
 if(knockout)await (handlers.knockout??advanceTwoLegKnockout)(save,{...knockoutOptions,subgroup:runtime.subgroup,alternateRound:runtime.alternateRound});
 if(kind===3&&nationalPhase>10)await (handlers.national??advanceNationalKnockout)(save,{...nationalOptions,phase:nationalPhase});
 const history=await (handlers.history??archiveMatchDayHistory)(save,fixtures,teamsFor,state,rng,historyContext);
 const route={0:'friendly',1:'batch',2:'batch',3:'national',4:'batch',5:'competition5',6:'batch',7:'competition7',8:'competition89',9:'competition89',10:'competition10'}[kind];
 if(route)await continueCompetition(route);
 return {history,route,knockout};
}
