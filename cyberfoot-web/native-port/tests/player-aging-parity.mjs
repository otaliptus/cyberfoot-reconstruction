import assert from "node:assert/strict";
import fs from "node:fs";
import { gunzipSync } from "node:zlib";
import { applyPlayerAging } from "../player-aging.mjs";
import { OriginalRandom } from "../match-core.mjs";
const bytes = (s) => Uint8Array.from(Buffer.from(s, "hex"));
const hex = (b) => Buffer.from(b).toString("hex");
const cases = JSON.parse(gunzipSync(fs.readFileSync(new URL("./player-aging-vectors.json.gz", import.meta.url))));
for (const [i, test] of cases.entries()) {
  const career = bytes(test.career);
  const clubs = bytes(test.clubs);
  const players = bytes(test.players);
  const save = {
    career,
    sections: [
      { name: "players", data: players, recordSize: 304, count: players.length / 304 },
      { name: "clubs", data: clubs, recordSize: 760, count: clubs.length / 760 },
      { name: "records_0066b718", data: new Uint8Array(0), recordSize: 128, count: 0 },
    ],
  };
  const rng = new OriginalRandom(test.initialSeed);
  applyPlayerAging(save, rng);
  const actualPlayers = save.sections.find((s) => s.name === "players");
  const actualClubs = save.sections.find((s) => s.name === "clubs");
  const actualManagers = save.sections.find((s) => s.name === "records_0066b718");
  assert.equal(actualPlayers.count, test.expected.playerCount, `Original aging player count case ${i}`);
  // Full-byte comparison: oracle zeroes the bump/scratch regions per case
  // (player_aging_oracle.py bump reset + mem_write zeros + dyn_setlen
  // zero-fill, cf. youth-intake oracle lines 57-58), so SetLength-grown
  // tails are zeros in both oracle and JS grow(). Name bytes for
  // youth-appends (0064e824, stubbed 0064dfd4 zero draws) and managers
  // (00647e90, stubbed 004030e0/00404b80) stay as allocated zeros;
  // replacement newgens copy 304 bytes; salary/value at 0x38/0x40 match
  // exactly (integer bases: x87 single*10000 == int64*10000).
  assert.equal(hex(actualPlayers.data), test.expected.players, `Original aging players case ${i}`);
  assert.equal(hex(actualClubs.data), test.expected.clubs, `Original aging clubs case ${i}`);
  assert.equal(actualManagers.count, test.expected.managerCount, `Original aging manager count case ${i}`);
  assert.equal(hex(actualManagers.data), test.expected.managers ?? "", `Original aging managers case ${i}`);
  assert.equal(rng.state, test.expected.seed, `Original aging seed case ${i}`);
}
console.log(`${cases.length} whole original player-aging (00647f98/005df914) comparisons passed (full-byte, zero-filled allocation).`);
