import {readFileSync} from 'node:fs';import {checkPreparedBatchSave} from './prepared-batch-save-integration.mjs';console.log(await checkPreparedBatchSave(readFileSync(new URL('./original-career.s15',import.meta.url))));

console.log(await checkPreparedBatchSave(readFileSync(new URL('./original-career.s15',import.meta.url)),{competitionType:2}));
