import assert from 'node:assert/strict';
import fs from 'node:fs';
import { gunzipSync } from 'node:zlib';
import { applySeasonRotation } from '../season-rotation.mjs';
import { OriginalRandom } from '../match-core.mjs';
const FORM = 0x1417000;
const bytes = (s) => Uint8Array.from(Buffer.from(s, 'hex'));
const hex = (b) => Buffer.from(b).toString('hex');
const cases = JSON.parse(gunzipSync(fs.readFileSync(new URL('./season-rotation-vectors.json.gz', import.meta.url))));
for (const [i, test] of cases.entries()) {
  const form = test.form === null ? FORM : test.form;
  void form;
  const save = {
    career: bytes(test.career),
    sections: [
      { name: 'clubs', data: bytes(test.clubs), recordSize: 760, count: bytes(test.clubs).length / 760 },
      { name: 'records_0066aca0', data: bytes(test.leagues), recordSize: 660, count: bytes(test.leagues).length / 660 },
      { name: 'records_0066b718', data: bytes(test.managers), recordSize: 128, count: bytes(test.managers).length / 128 },
      { name: 'records_0066afec', data: bytes(test.ledgers), recordSize: 56, count: bytes(test.ledgers).length / 56 },
      { name: 'records_0066b608', data: bytes(test.b608), recordSize: 16, count: 5 },
      { name: 'records_0066b2b8', data: bytes(test.b2b8), recordSize: 12, count: bytes(test.b2b8).length / 12 },
    ],
  };
  const rng = new OriginalRandom(test.seed);
  const out = applySeasonRotation(save, test.leagueIndex, { rng, form: test.form });
  const get = (name) => save.sections.find((s) => s.name === name).data;
  assert.equal(hex(get('clubs')), test.expected.clubs, `Original rotation clubs case ${i}`);
  assert.equal(hex(get('records_0066aca0')), test.expected.leagues, `Original rotation leagues case ${i}`);
  assert.equal(hex(get('records_0066b718')), test.expected.managers, `Original rotation managers case ${i}`);
  assert.equal(hex(get('records_0066afec')), test.expected.ledgers, `Original rotation ledgers case ${i}`);
  assert.equal(hex(get('records_0066b608')), test.expected.b608, `Original rotation b608 case ${i}`);
  assert.equal(hex(get('records_0066b2b8')), test.expected.b2b8, `Original rotation b2b8 case ${i}`);
  assert.equal(hex(save.career), test.expected.career, `Original rotation career case ${i}`);
  assert.equal(out.first, test.expected.d3480, `Original rotation d3480 case ${i}`);
  assert.equal(out.second, test.expected.d3484, `Original rotation d3484 case ${i}`);
  assert.deepEqual(out.shuffled, test.expected.d348c, `Original rotation d348c case ${i}`);
  const actualB420 = new Uint8Array(16);
  new DataView(actualB420.buffer).setInt32(0, out.buffer[0], true);
  new DataView(actualB420.buffer).setInt32(4, out.buffer[1], true);
  new DataView(actualB420.buffer).setInt32(8, out.buffer[2], true);
  new DataView(actualB420.buffer).setInt32(12, out.buffer[3], true);
  assert.equal(hex(actualB420), test.expected.b420, `Original rotation b420 case ${i}`);
  assert.equal(rng.state, test.expected.seed, `Original rotation seed case ${i}`);
}
console.log(`${cases.length} whole original season rotation comparisons passed (DynArray+string adapters).`);
