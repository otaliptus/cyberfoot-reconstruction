import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {matchEventLog} from '../match-event-log.mjs';
const cases=JSON.parse(readFileSync(new URL('./match-event-log-vectors.json',import.meta.url))),language=JSON.parse(readFileSync(new URL('../language.json',import.meta.url)));
for(const c of cases)assert.equal(matchEventLog(c.events,{clubs:[0,1]},{players:c.players},language,c).html,c.expected);
console.log(`Original match event log: ${cases.length} full formatter cases passed.`);
