import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {resetScreenSelections} from '../lineup-screen.mjs';
const vectors=JSON.parse(readFileSync(new URL('./human-roster-filter-vectors.json',import.meta.url)));
for(const v of vectors){const rows=v.statuses.map(status=>({status})),eligible=resetScreenSelections(rows);assert.deepEqual({statuses:rows.map(r=>r.status),eligible},v.expected);}
console.log(`Original human roster filtering: ${vectors.length} passed.`);
