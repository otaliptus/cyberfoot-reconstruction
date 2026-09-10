import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {matchLineupGeometry,matchPositionAtPitchPoint} from '../match-lineup-screen.mjs';
const cases=JSON.parse(readFileSync(new URL('./match-lineup-geometry-vectors.json',import.meta.url)));
for(const c of cases)assert.deepEqual(matchLineupGeometry(c.slot,c.position,c.benchOrdinal,c.shirtNumber),c.expected);
for(let position=1;position<=25;position++){const {shirt:{x,y}}=matchLineupGeometry(1,position);assert.equal(matchPositionAtPitchPoint(x,y),position);assert.equal(matchPositionAtPitchPoint(x+41,y+41),position);}
console.log(`Original match-lineup geometry: ${cases.length} cases passed.`);
