import {readFileSync} from 'node:fs';
import assert from 'node:assert/strict';
import {verifyAISelection} from './ai-selection-proof.mjs';
const result=verifyAISelection(JSON.parse(readFileSync(new URL('./ai-selection-vectors.json',import.meta.url))),JSON.parse(readFileSync(new URL('./ai-sort-vectors.json',import.meta.url))));
assert.deepEqual(result.failures,[]);console.log(`Original AI specialty and selection: ${result.cases} cases passed.`);
