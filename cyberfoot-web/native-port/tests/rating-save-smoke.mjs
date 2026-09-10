import {readFileSync} from 'node:fs';import {checkRatingSave} from './rating-save-integration.mjs';console.log(checkRatingSave(readFileSync(new URL('./original-career.s15',import.meta.url))));
