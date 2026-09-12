import {mkdirSync} from 'node:fs';
import {fileURLToPath} from 'node:url';
import {dirname,resolve} from 'node:path';

const defaultRoot=resolve(fileURLToPath(new URL('../../../output/',import.meta.url)));

export function testOutput(...parts){
 const path=resolve(process.env.CYBERFOOT_OUTPUT_DIR??defaultRoot,...parts);
 mkdirSync(path,{recursive:true});
 return path;
}

export function testOutputFile(...parts){
 const path=resolve(process.env.CYBERFOOT_OUTPUT_DIR??defaultRoot,...parts);
 mkdirSync(dirname(path),{recursive:true});
 return path;
}
