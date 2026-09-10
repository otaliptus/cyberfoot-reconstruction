import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {readSave,writeSave,record} from '../save-format.mjs';import {applyCompetitionResult} from '../competition-result.mjs';import {OriginalRandom} from '../match-core.mjs';import {currentCareerDate} from '../calendar.mjs';
const save=readSave(readFileSync(new URL('./original-career.s15',import.meta.url))),career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);career.setInt32(0x88,1,true);
const count=save.sections.find(s=>s.name==='records_0066b770').count;
applyCompetitionResult(save,{clubs:[11,4],counters:{0x48:0,0x4c:6}},{rng:new OriginalRandom(2015)});
const loaded=readSave(writeSave(save)),notifications=loaded.sections.find(s=>s.name==='records_0066b770');assert.equal(notifications.count,count+1);
const data=record(loaded,'records_0066b770',count),v=new DataView(data.buffer,data.byteOffset,data.byteLength);assert.equal(v.getInt32(0,true),11);assert.equal(v.getFloat64(8,true),currentCareerDate(save));assert.equal(v.getInt32(20,true),2);
const club=record(loaded,'clubs',11);assert.equal(new DataView(club.buffer,club.byteOffset,club.byteLength).getInt32(0x238,true),3);console.log('Competition result to original notification and save integration passed.');
