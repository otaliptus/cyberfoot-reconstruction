import {readFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
import {wageDemand,clubPayroll} from '../contracts.mjs';
const wage=JSON.parse(await readFile(new URL('./wage-vectors.json',import.meta.url))),payroll=JSON.parse(await readFile(new URL('./payroll-vectors.json',import.meta.url)));
for(const [i,c] of wage.entries())assert.equal(wageDemand(c.player,c.club),c.expected,`Wage ${i}`);
for(const [i,c] of payroll.entries())assert.equal(clubPayroll(0,c.players),c.expected,`Payroll ${i}`);
console.log(`Original wage demand: ${wage.length}; original payroll: ${payroll.length} passed`);
