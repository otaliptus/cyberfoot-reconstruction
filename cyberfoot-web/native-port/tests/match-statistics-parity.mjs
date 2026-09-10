import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {matchStatistics,matchStatisticsRows} from '../match-statistics.mjs';
const cases=JSON.parse(readFileSync(new URL('./match-statistics-vectors.json',import.meta.url))),language=JSON.parse(readFileSync(new URL('../language.json',import.meta.url)));
for(const c of cases){const fixture={clubs:[0,1],counters:c.counters},state={clubs:c.styles.map(playStyle=>({playStyle}))};assert.deepEqual(matchStatistics(fixture,state),c.expected);}
const rows=matchStatisticsRows(cases[0].expected,language);assert.deepEqual(rows.map(r=>r.label),[657,658,659,660,661].map(i=>language[i].text));assert.equal(rows[0].values[0],cases[0].expected.possession[0]+'%');
console.log(`Original match statistics: ${cases.length} calculations passed.`);
