import assert from 'node:assert/strict';
import fs from 'node:fs';
import { gunzipSync } from 'node:zlib';
import { applyCustomChampionship } from '../custom-championship-build.mjs';
import { OriginalRandom } from '../match-core.mjs';
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
console.log(`${cases.length} custom-championship build comparisons passed.`);
