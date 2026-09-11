import assert from "node:assert/strict";
import fs from "node:fs";
import { gunzipSync } from "node:zlib";
import { applyYouthIntake } from "../youth-intake.mjs";
import { OriginalRandom } from "../match-core.mjs";
const bytes = (s) => Uint8Array.from(Buffer.from(s, "hex"));
const hex = (b) => Buffer.from(b).toString("hex");
const cases = JSON.parse(gunzipSync(fs.readFileSync(new URL("./youth-intake-vectors.json.gz", import.meta.url))));
for (const [i, test] of cases.entries()) {
  const clubs = bytes(test.clubs);
  const players = test.players ? bytes(test.players) : new Uint8Array(0);
  const career = new Uint8Array(1888);
  const save = {
    career,
    sections: [
      { name: "players", data: players, recordSize: 304, count: players.length / 304 },
      { name: "clubs", data: clubs, recordSize: 760, count: clubs.length / 760 },
    ],
  };
  const rng = new OriginalRandom(test.seed);
  applyYouthIntake(save, rng, test.clubId);
  assert.equal(hex(save.sections.find((s) => s.name === "players").data), test.expected.players, `Original youth intake players case ${i}`);
  assert.equal(rng.state, test.expected.seed, `Original youth intake seed case ${i}`);
}
console.log(`${cases.length} whole original youth intake (00652be0) comparisons passed (allocation adapters only).`);
