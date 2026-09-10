import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';import {standingsColorCalls} from '../standings-highlights.mjs';
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./standings-highlights-vectors.json.gz',import.meta.url))));for(const {expected,...input} of cases)assert.deepEqual(standingsColorCalls(input),expected,JSON.stringify(input));
console.log(cases.length+' original standings-color instruction-segment comparisons passed.');
