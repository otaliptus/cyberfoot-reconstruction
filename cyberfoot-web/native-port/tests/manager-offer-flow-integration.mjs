import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import assert from 'node:assert/strict';import fs from 'node:fs';import {readSave,writeSave,record} from '../save-format.mjs';import {OriginalRandom} from '../match-core.mjs';import {removeManager} from '../manager-employment.mjs';import {acceptManagerOffer} from '../manager-offer-actions.mjs';import {processEmployedManagerOffers,processUnemployedManagerOffers} from '../manager-offer-timing.mjs';
const original=fs.readFileSync(new URL('./original-career.s15',import.meta.url)),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
for(const unemployed of [false,true]){
 const save=readSave(original),c=view(save.career),oldClub=11,managerId=view(record(save,'clubs',oldClub)).getInt32(0x44,true),runtime={nationalManagerCount:10},rng=new OriginalRandom(123456789),manager=()=>view(record(save,'records_0066b718',managerId));
 c.setInt32(0xc0,2,true);c.setInt32(0x4c,4,true);c.setInt32(0x50,2,true);c.setInt32(0x88,1,true);c.setInt32(0x10,managerId,true);c.setUint8(0x6c8,0);
 for(let i=0;i<10;i++)c.setInt32(0x14+i*4,i===0?managerId:-1,true);
 const club=view(record(save,'clubs',oldClub));club.setInt32(0x50,100,true);club.setInt32(0x1a8,0,true);
 if(unemployed)removeManager(save,oldClub,managerId,{rng,runtime});
 const process=unemployed?processUnemployedManagerOffers:processEmployedManagerOffers,before=writeSave(save),seed=rng.state;await assert.rejects(process(save,runtime,{rng}),/modal required/);assert.deepEqual(writeSave(save),before);assert.equal(rng.state,seed);
 let presented=0,newClub=-1,displaced=-1;
 const showOffer=async()=>{presented++;assert.equal(c.getInt32(0x10,true),managerId);newClub=runtime.managerJobOffers[0];displaced=view(record(save,'clubs',newClub)).getInt32(0x44,true);assert.ok(newClub>=0);assert.equal(acceptManagerOffer(save,runtime,0,{rng}),true);assert.equal(manager().getInt32(0x1c,true),newClub);};
 const effects=nativeResultsCareerEffects(save,runtime,{rng,temporary:{lineups:[],matchTeams:[]},managerDialogs:{humanDismissal:async()=>{throw Error('Unexpected dismissal');},showChanges:async()=>{throw Error('Unexpected recap');},showOffer}});
 for(let i=0;i<10&&presented===0;i++)await(unemployed?effects.unemployedOffers():effects.managerOffers());
 assert.equal(presented,1);assert.equal(view(record(save,'clubs',newClub)).getInt32(0x44,true),managerId);assert.equal(view(record(save,'clubs',newClub)).getUint8(0x39),1);assert.equal(c.getInt32(0x13c,true),1);
 if(!unemployed){assert.equal(view(record(save,'clubs',oldClub)).getInt32(0x44,true),displaced);assert.equal(view(record(save,'records_0066b718',displaced)).getInt32(0x1c,true),oldClub);}
 const news=save.sections.find(s=>s.name==='records_0066b770'),last=view(record(save,news.name,news.count-1));assert.equal(last.getInt32(0,true),newClub);assert.equal(last.getInt32(16,true),1);
 const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
 // Missing radio selection remains an open, unchanged offer in the original.
 const previousState=rng.state;assert.equal(acceptManagerOffer(save,runtime,-1,{rng}),false);assert.deepEqual(writeSave(save),bytes);assert.equal(rng.state,previousState);
}
console.log('Original career: timed employed and unemployed offers accepted, manager swap/re-employment and welcome news persisted; no-selection and missing-modal paths preserve state.');
