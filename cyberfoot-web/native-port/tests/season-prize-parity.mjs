import assert from 'node:assert/strict';
import fs from 'node:fs';
import { gunzipSync } from 'node:zlib';
import { applyPrizeMoney } from '../season-prize.mjs';
const hex = (s) => Uint8Array.from(Buffer.from(s, 'hex'));
const cases = JSON.parse(gunzipSync(fs.readFileSync(new URL('./season-prize-vectors.json.gz', import.meta.url))));
for (const [i, test] of cases.entries()) {
  const clubs = hex(test.clubs);
  const ledgers = hex(test.ledgers);
  const career = hex(test.career);
  const save = {
    career,
    sections: [
      { name: 'clubs', data: clubs, recordSize: 760, count: clubs.length / 760 },
      { name: 'records_0066afec', data: ledgers, recordSize: 56, count: ledgers.length / 56 },
    ],
  };
  applyPrizeMoney(save);
  assert.equal(Buffer.from(save.sections[0].data).toString('hex'), test.expected.clubs, `Original prize clubs case ${i}`);
  assert.equal(Buffer.from(save.sections[1].data).toString('hex'), test.expected.ledgers, `Original prize ledgers case ${i}`);
}
console.log(`${cases.length} whole original season prize/sponsor comparisons passed (no stubs).`);
