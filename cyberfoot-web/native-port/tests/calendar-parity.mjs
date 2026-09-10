import {readFile} from 'node:fs/promises';import assert from 'node:assert/strict';import {baseCalendar} from '../calendar.mjs';
const cases=JSON.parse(await readFile(new URL('./calendar-vectors.json',import.meta.url)));for(const [i,c] of cases.entries())assert.deepEqual(baseCalendar(c.season)[c.day-1],c.expected,`Calendar ${i}`);console.log(`Original base calendar: ${cases.length} cases passed`);
