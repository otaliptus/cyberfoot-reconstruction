import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {nationalNextScreen,dispatchCompetitionNext} from '../results-routing.mjs';
const bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./national-next-vectors.json.gz',import.meta.url))));
const makeHosts=(runtime,selected,calls)=>({unemployedOffers:async()=>calls.push('unemployedOffers'),managerChanges:async()=>calls.push('managerChanges'),selectHumanParticipation:async()=>{calls.push('selectHumanParticipation');runtime.humanParticipation=selected;},humanNext:async()=>calls.push('humanNext'),automaticNext:async()=>calls.push('automaticNext')});
for(const [i,test] of cases.entries()){
 const regions=bytes(test.regions),save={sections:[{name:'records_0066ae98',data:regions,recordSize:1384,count:27}]},runtime={},calls=[];
 await nationalNextScreen(save,runtime,makeHosts(runtime,test.participation,calls));
 assert.equal(hex(regions),test.expected.regions,`Original regions case ${i}`);
 assert.deepEqual(calls,test.expected.nationalCalls,`Original national calls case ${i}`);
 const cupRuntime={humanParticipation:test.cupParticipation},cupCalls=[];await dispatchCompetitionNext(cupRuntime,makeHosts(cupRuntime,0,cupCalls));assert.deepEqual(cupCalls,test.expected.cupCalls,`Original cup dispatch case ${i}`);
 const otherRuntime={humanParticipation:test.otherParticipation},otherCalls=[];await dispatchCompetitionNext(otherRuntime,makeHosts(otherRuntime,0,otherCalls));assert.deepEqual(otherCalls,test.expected.otherCalls,`Original other dispatch case ${i}`);
}
const guarded=bytes(cases[0].regions),guardedBefore=hex(guarded);await assert.rejects(nationalNextScreen({sections:[{name:'records_0066ae98',data:guarded,recordSize:1384,count:27}]},{},{}),/Original next-screen host/);assert.equal(hex(guarded),guardedBefore);
console.log(`${cases.length} original national-next and cup/other dispatch comparisons passed (subcontroller adapters).`);
