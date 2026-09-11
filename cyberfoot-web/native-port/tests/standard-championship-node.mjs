import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {readSave,writeSave,record} from '../save-format.mjs';
import {createCareerSave} from '../career-menu.mjs';
import {OriginalRandom} from '../match-core.mjs';
import {careerAgenda,careerSchedule,savedFixtures} from '../schedule.mjs';
import {applyStandardModeTwo} from '../standard-championship-build.mjs';

const template=readSave(new Uint8Array(await readFile(new URL('./original-career.s15',import.meta.url))));
const bytes=createCareerSave({managerName:'Mode Two Tester',clubId:11,language:'English',seed:2015,template,freshStart:true});
const save=readSave(bytes),result=applyStandardModeTwo(save,{countries:[3],rng:new OriginalRandom(2015)}),career=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),league=save.sections.find(section=>section.name==='records_0066aca0'),lv=new DataView(league.data.buffer,league.data.byteOffset,league.data.byteLength),fixtures=savedFixtures(save),agenda=careerAgenda(save);
assert.deepEqual(result,{countries:[3],leagues:1,totalTeams:42,divisions:[2],leagueFixtures:760});
assert.equal(career.getInt32(0x168,true),2);assert.equal(league.count,1);assert.equal(lv.getInt32(0x140,true),3);assert.equal(lv.getInt32(0x144,true),2);assert.equal(lv.getInt32(0x148,true),42);
for(let division=1;division<=2;division++)for(let position=1;position<=20;position++){
 const first=lv.getInt32(division*0x50-0x54+position*4,true),second=lv.getInt32(division*0x50+0xfc+position*4,true);assert.ok(first>=0);assert.equal(first,second);
}
assert.equal(fixtures.filter(fixture=>fixture.competition===1).length,760);assert.equal(careerSchedule(save).filter(row=>row.competition===1).length,38);assert.ok(agenda.fixtureId>=0);assert.ok(fixtures[agenda.fixtureId].clubs.includes(11));
const roundTrip=readSave(writeSave(save));assert.equal(new DataView(roundTrip.career.buffer,roundTrip.career.byteOffset,roundTrip.career.byteLength).getInt32(0x168,true),2);assert.equal(roundTrip.sections.find(section=>section.name==='records_0066afa0').count,822);
assert.ok(record(roundTrip,'clubs',11));console.log('Standard mode-2: 42 selected teams rebuilt into two 20-team divisions, 760 domestic fixtures, valid first agenda fixture, and save round-trip.');
