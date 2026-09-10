import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';
import {verifyAILineup} from './ai-lineup-proof.mjs';
const result=verifyAILineup(JSON.parse(readFileSync(new URL('./ai-lineup-vectors.json',import.meta.url))));
if(result.failures.length)console.log(JSON.stringify(result.failures.slice(0,2),null,2));
assert.equal(result.failures.length,0);console.log(`Original complete AI lineup: ${result.cases} cases passed.`);
