import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';import {processManagerChanges} from '../manager-changes.mjs';import {OriginalRandom} from '../match-core.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),c=v(save.career),rng=new OriginalRandom(656410),runtime={nationalManagerCount:10,currentLeagueConfiguration:-1},target=12,club=v(record(save,'clubs',target)),old=club.getInt32(0x44,true);
assert.equal(club.getUint8(0x39),0);c.setInt32(0x88,1,true);c.setUint8(0xd8,1);
for(let id=0;id<c.getInt32(0x3c,true);id++)v(record(save,'clubs',id)).setInt32(0x50,100,true);
club.setInt32(0x50,0,true);club.setInt32(0x1a8,20,true);
const before=writeSave(save),state=rng.state;
await assert.rejects(processManagerChanges(save,runtime,{rng}),/dismissal and recap handlers required/);assert.deepEqual(writeSave(save),before);assert.equal(rng.state,state);
const events=[],history=save.sections.find(s=>s.name==='records_0066b2b8'),count=history.count;
await processManagerChanges(save,runtime,{rng,humanDismissal:async()=>{throw Error('AI replacement unexpectedly opened a human dialog');},showChanges:async()=>events.push(structuredClone(runtime.managerChanges))});
assert.equal(events.length,1);assert.ok(events[0].length>=1);const row=events[0][0];assert.equal(row[0],target);assert.equal(row[1],old);assert.notEqual(row[2],old);assert.equal(club.getInt32(0x44,true),row[2]);assert.equal(v(record(save,'records_0066b718',row[2])).getInt32(0x1c,true),target);assert.ok(history.count>count);assert.equal(club.getInt32(0x50,true),100);assert.equal(club.getInt32(0x54,true),80);assert.deepEqual(runtime.managerChanges,[]);
const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
// A second pass does not fire the same change again after its performance reset.
await processManagerChanges(save,runtime,{rng,humanDismissal:async()=>{throw Error('Unexpected human dialog');},showChanges:async()=>{throw Error('Duplicate replacement recap');}});assert.equal(history.count,count+events[0].length);
console.log('Original career: failing AI club replaced, recap reflects appointments, IDs/history persist, performance reset prevents repeated dismissal; missing UI handlers reject before mutation.');
