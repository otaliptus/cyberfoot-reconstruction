import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {verifyScorePlan} from './score-plan-proof.mjs';
const read=name=>JSON.parse(readFileSync(new URL(name,import.meta.url)));
const r=verifyScorePlan([...read('./score-plan-vectors.json'),...read('./score-schedule-vectors.json').map(v=>({...v,kind:'schedule'})),...read('./planned-goal-vectors.json').map(v=>({...v,kind:'delivery'}))]);
if(r.failures.length)console.log(r.failures.slice(0,3));assert.equal(r.failures.length,0);console.log(`Original scoring plan and clock: ${r.cases} cases passed.`);
