import {readFile} from 'node:fs/promises';import assert from 'node:assert/strict';import {nextCalendarCursor,fixtureOnDate} from '../schedule.mjs';
const cursor=JSON.parse(await readFile(new URL('./calendar-cursor-vectors.json',import.meta.url))),fixtures=JSON.parse(await readFile(new URL('./fixture-lookup-vectors.json',import.meta.url)));
for(const [i,c] of cursor.entries())assert.equal(nextCalendarCursor(c.competitions.map((competition,j)=>({competition,date:42000+j})),c.cursor,c.events),c.expected,`Calendar cursor ${i}`);
for(const [i,c] of fixtures.entries())assert.equal(fixtureOnDate(c.fixtures,c.club,c.date),c.expected,`Fixture lookup ${i}`);
console.log(`Original calendar cursor: ${cursor.length}; fixture lookup: ${fixtures.length} passed`);
