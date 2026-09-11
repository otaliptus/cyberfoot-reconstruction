import assert from 'node:assert/strict';
import fs from 'node:fs';
import { gunzipSync } from 'node:zlib';
import { applyCustomChampionship } from '../custom-championship-build.mjs';
import { OriginalRandom } from '../match-core.mjs';
import { readSave } from '../save-format.mjs';
import { createCareerSave, careerSaveSummary } from '../career-menu.mjs';
import { careerAgenda } from '../schedule.mjs';
const bytes = (s) => Uint8Array.from(Buffer.from(s, 'hex'));
const hex = (b) => Buffer.from(b).toString('hex');
const cases = JSON.parse(gunzipSync(fs.readFileSync(new URL('./custom-championship-vectors.json.gz', import.meta.url))));
for (const [i, test] of cases.entries()) {
  const save = {
    career: bytes(test.careerBefore),
    sections: [
      { name: 'clubs', data: bytes(test.saveClubsBefore), recordSize: 760, count: test.copied },
      { name: 'records_0066aca0', data: new Uint8Array(0), recordSize: 660, count: 0 },
    ],
  };
  const rng = new OriginalRandom(test.seed);
  const out = applyCustomChampionship(save, {
    clubIds: Array.from({ length: test.copied }, (_, id) => id),
    formatId: test.mode === 4 ? '4x10' : '2x20',
    playCup: Boolean(test.playCup),
    rng,
  });
  const get = (name) => save.sections.find((s) => s.name === name).data;
  assert.equal(hex(save.career), test.expected.career, `custom career case ${i}`);
  assert.equal(hex(get('records_0066aca0')), test.expected.leagues, `custom leagues case ${i}`);
  assert.equal(hex(get('clubs')), test.expected.clubs, `custom clubs case ${i}`);
  assert.equal(out.leagueIndex, 0, `custom leagueIndex case ${i}`);
  assert.equal(out.divCount, test.expected.divCount, `custom divCount case ${i}`);
  assert.equal(out.perDiv, test.expected.perDiv, `custom perDiv case ${i}`);
  assert.deepEqual(out.slots, test.expected.slots, `custom slots case ${i}`);
  assert.equal(rng.state, test.expected.seedAfter, `custom seed case ${i}`);
}
const template = new Uint8Array(fs.readFileSync(new URL('./original-career.s15', import.meta.url)));
const freshBytes = createCareerSave({managerName:'Custom Calendar',clubId:11,template,freshStart:true});
const realSave = readSave(freshBytes);
const real = applyCustomChampionship(realSave, {clubIds:Array.from({length:50}, (_, id) => id), formatId:'4x10', playCup:true, rng:new OriginalRandom(2015)});
const realFixtures = realSave.sections.find(section => section.name === 'records_0066afa0');
const realFixtureView = new DataView(realFixtures.data.buffer);
assert.equal(real.leagueFixtures,360);
assert.equal(real.cupFixtures,62);
assert.equal(realFixtures.count,422);
assert.equal(realSave.sections.find(section => section.name === 'records_0066b6ac').count,12);
assert.equal([...Array(realFixtures.count)].filter((_, id) => realFixtureView.getInt32(id * 72 + 0x18, true) === 1).length,360);
assert.equal([...Array(realFixtures.count)].filter((_, id) => realFixtureView.getInt32(id * 72 + 0x18, true) === 2).length,62);
assert.equal(careerSaveSummary(freshBytes).day,119);
const agenda = careerAgenda(realSave);
assert.equal(agenda.currentCompetition,2);
assert.ok(agenda.currentFixtureId >= 0);
assert.ok(agenda.fixtures[agenda.currentFixtureId].clubs.includes(11));
assert.equal(realFixtureView.getInt32(agenda.currentFixtureId * 72 + 0x38, true),real.leagueIndex);
const mode2Save = readSave(freshBytes);
const mode2 = applyCustomChampionship(mode2Save, {clubIds:Array.from({length:70}, (_, id) => id), formatId:'2x20', playCup:false, rng:new OriginalRandom(2015)});
assert.equal(mode2.leagueFixtures,1140);
assert.equal(mode2.cupFixtures,0);
assert.equal(mode2Save.sections.find(section => section.name === 'records_0066afa0').count,1140);
assert.ok(new DataView(mode2Save.sections.find(section => section.name === 'records_0066afa0').data.buffer).getFloat64(0x30,true)>0);
console.log(`${cases.length} custom-championship build comparisons passed.`);
