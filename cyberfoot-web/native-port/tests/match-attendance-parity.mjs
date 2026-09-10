import {readFileSync} from 'node:fs';import {verifyMatchAttendance} from './match-attendance-proof.mjs';
const r=verifyMatchAttendance(JSON.parse(readFileSync(new URL('./match-attendance-vectors.json',import.meta.url))));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));console.log(`Original attendance and ticket income: ${r.cases} cases passed.`);
