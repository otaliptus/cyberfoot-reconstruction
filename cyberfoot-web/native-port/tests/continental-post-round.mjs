import assert from 'node:assert/strict';import fs from 'node:fs';import {readSave,writeSave,record} from '../save-format.mjs';import {continentalPostRound} from '../continental-post-round.mjs';
import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
import {OriginalRandom} from '../match-core.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),c=v(save.career),runtime={};c.setInt32(0x1a0,4,true);c.setInt32(0x1a4,1,true);c.setInt32(0x3c,32,true);
for(let id=0;id<32;id++){c.setInt32(0x32c+id*4,id,true);const p=v(record(save,'clubs',id));p.setInt32(0xcc,10-(id%4),true);p.setUint8(0x218,1);}
const fixtures=save.sections.find(s=>s.name==='records_0066afa0');for(let i=0;i<fixtures.count;i++){const f=v(record(save,fixtures.name,i));f.setInt32(0x18,i<16?6:0,true);f.setInt32(0x1c,4,true);f.setInt32(0x38,2,true);f.setFloat64(0x30,i===0?123:124,true);f.setInt32(8,2,true);f.setInt32(12,1,true);f.setUint8(0x2c,0);}
const before=writeSave(save);await assert.rejects(continentalPostRound(save,runtime,6,{date:123,applyResult:null}),/result application required/);assert.deepEqual(writeSave(save),before);
const calls=[],history=save.sections.find(s=>s.name==='records_0066b114'),count=history.count;await continentalPostRound(save,runtime,6,{date:123,applyResult:(...args)=>calls.push(args)});
assert.deepEqual(runtime.continentalQualifiers,[0,1,4,5,8,9,12,13,16,17,20,21,24,25,28,29]);assert.deepEqual(runtime.continentalGroupRows,[]);
for(let id=0;id<32;id++){const p=v(record(save,'clubs',id));assert.equal(p.getInt32(0x1bc,true),id%4+1);assert.equal(p.getUint8(0x218),id%4<2?1:0);}
assert.equal(history.count,count+16);const f0=v(record(save,fixtures.name,0)),f1=v(record(save,fixtures.name,1));assert.deepEqual([f0.getInt32(0,true),f0.getInt32(4,true),f1.getInt32(0,true),f1.getInt32(4,true)],[17,0,0,17]);assert.deepEqual(calls,[[6,17,0,0,1,2]]);
const saved=writeSave(save);assert.deepEqual(writeSave(readSave(saved)),saved);
c.setInt32(0x1a0,5,true);const gated=writeSave(save);await continentalPostRound(save,runtime,6,{date:123,applyResult:()=>assert.fail('Gated result callback')});assert.deepEqual(writeSave(save),gated);
console.log('Continental post-round: ranks, top-two qualification, elimination records, two-leg fixture assignments, dated result callback, missing child and round gate passed.');
const four=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),fc=v(four.career),fr={};fc.setInt32(0x194,2,true);fc.setInt32(0x198,1,true);fc.setInt32(0x3c,128,true);
for(let subgroup=0;subgroup<4;subgroup++)for(let i=0;i<32;i++){const id=subgroup*32+i;fc.setInt32(0x1ac+[0,0x80,0x200,0x280][subgroup]+i*4,id,true);const p=v(record(four,'clubs',id));p.setInt32(0xc4,10-i%4,true);p.setUint8(0x217,1);}
const fs4=four.sections.find(s=>s.name==='records_0066afa0');for(let i=0;i<fs4.count;i++){const f=v(record(four,fs4.name,i));f.setInt32(0x18,i<64?4:0,true);f.setInt32(0x1c,4,true);f.setInt32(0x38,Math.floor(i/16)+1,true);f.setFloat64(0x30,0,true);}
const h4=four.sections.find(s=>s.name==='records_0066b114'),initialCount=h4.count;await continentalPostRound(four,fr,4,{date:123,applyResult:()=>assert.fail('Unrelated fixture date')});assert.equal(h4.count,initialCount);
for(let i=0;i<128;i++){const p=v(record(four,'clubs',i));assert.equal(p.getInt32(0x1b4,true),i%4+1);assert.equal(p.getUint8(0x217),1);}
fc.setInt32(0x194,4,true);await continentalPostRound(four,fr,4,{date:123,applyResult:()=>assert.fail('Unrelated fixture date')});assert.equal(h4.count,initialCount+64);
for(let subgroup=0;subgroup<4;subgroup++){const f=v(record(four,fs4.name,subgroup*16));assert.deepEqual([f.getInt32(0,true),f.getInt32(4,true)],[subgroup*32+17,subgroup*32]);const h=v(record(four,h4.name,initialCount+subgroup*16));assert.equal(h.getInt32(16,true),subgroup+1);}
console.log('All four primary continental lists update positions before the final group round, then independently seed their own knockout blocks.');
// The career cursor has advanced, but performance belongs to the completed day.
const connected=readSave(before),expected=readSave(before),connectedRuntime={completedMatchDate:123};
v(connected.career).setInt32(0x16c,2,true);v(expected.career).setInt32(0x16c,2,true);
const effects=nativeResultsCareerEffects(connected,connectedRuntime,{rng:new OriginalRandom(123),temporary:{lineups:[],matchTeams:[]},calendar:[{date:123},{date:124}]});
await effects.continentalPostRound(6);
await continentalPostRound(expected,{},6,{date:123});
assert.deepEqual(writeSave(connected),writeSave(expected));
delete connectedRuntime.completedMatchDate;const unchanged=writeSave(connected);
assert.throws(()=>effects.continentalPostRound(6),/completed match date required/);
assert.deepEqual(writeSave(connected),unchanged);
console.log('Connected continental effects retain the completed match date after calendar advancement and reject missing date context before mutation.');
