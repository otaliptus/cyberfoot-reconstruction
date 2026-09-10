import fs from 'node:fs';import assert from 'node:assert/strict';import {verifyCompetitionResult} from './competition-result-proof.mjs';
const result=verifyCompetitionResult(JSON.parse(fs.readFileSync(new URL('./competition-result-vectors.json',import.meta.url))));assert.deepEqual(result.failures,[]);console.log('Original competition settlement: '+result.cases+' passed.');
