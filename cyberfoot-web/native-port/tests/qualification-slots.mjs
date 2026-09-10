import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';import {qualificationSlots} from '../qualification-slots.mjs';
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./qualification-slot-vectors.json.gz',import.meta.url))));
for(const [country,competition,group,expected] of cases)assert.equal(qualificationSlots(country,competition,group),expected,JSON.stringify({country,competition,group}));
console.log(cases.length+' whole original qualification-slot comparisons passed.');
