import {readFileSync} from 'node:fs';import {checkSavedCareerAI} from './ai-browser-proof.mjs';
console.log(JSON.stringify(checkSavedCareerAI(readFileSync(new URL('./original-career.s15',import.meta.url)))));
