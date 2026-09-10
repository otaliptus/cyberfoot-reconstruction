import assert from 'node:assert/strict';import fs from 'node:fs';import {selectResultsHumanParticipation} from '../results-participation.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./results-participation-vectors.json',import.meta.url))),bytes=s=>Uint8Array.from(Buffer.from(s,'hex'));let count=0;
for(const test of cases){const save={career:bytes(test.career),sections:test.sections.map(s=>({...s,data:bytes(s.data),count:s.data.length/2/s.recordSize}))},c=new DataView(save.career.buffer),calendar=Array.from({length:366},()=>({date:test.date}));
 for(const row of test.expected){const runtime={nextCompetition:row.competition,humanParticipation:row.initial};assert.equal(selectResultsHumanParticipation(save,runtime,calendar),row.selected,`case${count}competition${row.competition}`);assert.equal(runtime.humanParticipation,row.selected);count++;}}
console.log(`${count} whole original results participation comparisons passed`);
