import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {resultDetailLabels,selectResultHistory,resultLineupRows} from '../results-data.mjs';
const vectors=JSON.parse(readFileSync(new URL('./results-data-vectors.json',import.meta.url))),language=JSON.parse(readFileSync(new URL('../language.json',import.meta.url)));
for(const [index,t] of vectors.entries()){
 if(t.kind==='lineups'){const data=new Uint8Array(t.rows.length*32),v=new DataView(data.buffer);t.rows.forEach((row,i)=>row.forEach((n,j)=>v.setInt32(i*32+j*4,n,true)));const save={sections:[{name:'records_0066b128',count:t.rows.length,recordSize:32,data}]};const calls=t.clubs.flatMap((club,side)=>resultLineupRows(save,t.historyId,club).map(r=>[side+1,r.archiveRow]));assert.deepEqual(calls,t.expected);continue;}
 const data=Uint8Array.from(Buffer.from(t.bytes,'hex'));
 if(t.kind==='detail')assert.deepEqual(resultDetailLabels(data,language),t.expected,`result labels ${index}`);
 else {const career=new Uint8Array(1888);new DataView(career.buffer).setInt32(0x88,t.competition,true);const save={career,sections:[{name:'records_0066b154',data,count:data.length/600,recordSize:600}]};assert.deepEqual(selectResultHistory(save,t),t.expected,`history selection ${index}`);}
}
console.log(`Original results data: ${vectors.length} label/selection blocks passed.`);
