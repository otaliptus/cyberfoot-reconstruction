import {readFile} from 'node:fs/promises';import assert from 'node:assert/strict';import {notificationRecord} from '../notifications.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(await readFile(new URL('./notification-vectors.json',import.meta.url)));
for(const [i,c] of cases.entries()){const rng=new OriginalRandom(c.seed),row=notificationRecord(...c.args,...c.stack,c.date,rng);assert.deepEqual({rows:row?[Array.from(row)]:[],seed:rng.state},c.expected,`Notification ${i}`);}
console.log(`Original notification records: ${cases.length} passed`);
