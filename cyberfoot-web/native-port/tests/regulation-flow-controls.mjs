import assert from 'node:assert/strict';import {createRegulationController} from '../regulation-controller.mjs';
// Empty match day isolates the control flow without inventing match-engine results.
const events=[];let release,finish=0,entered;const wait=new Promise(r=>release=r),finishing=new Promise(r=>entered=r);
const controller=createRegulationController({fixtures:[],teamsFor:()=>[],state:{},rng:{},recordEvent:()=>{},present:e=>events.push(e),halftime:async()=>{},finalize:async()=>{finish++;entered();await wait;}});
for(let i=0;i<189;i++)await controller.advance();
assert.equal(controller.flow.tick,189);assert.equal(controller.flow.timerEnabled,true);
const last=controller.advance();assert.equal(controller.flow.timerEnabled,false);await finishing;assert.equal(finish,1);
await assert.rejects(controller.advance(),/already advancing/);release();await last;
assert.equal(controller.flow.finished,true);assert.equal(await controller.advance(),false);
assert.deepEqual(events.filter(e=>e.type==='clockLabel').map(e=>e.languageId),[506,507,508]);
assert.equal(events.filter(e=>e.type==='minute').length,91);
assert.throws(()=>createRegulationController({fixtures:[],teamsFor:()=>[],recordEvent:()=>{},present:()=>{},halftime:()=>{}}),/finalize/);
console.log('Regulation timer boundaries, pending finalization and reentry checks passed.');

// A pending presentation holds the clock at its current boundary. Resuming must
// not repeat the event or allow a second timer callback to overtake it.
let resume,shown;const dialog=new Promise(r=>resume=r),opened=new Promise(r=>shown=r),seen=[];
const paused=createRegulationController({fixtures:[],teamsFor:()=>[],state:{},rng:{},recordEvent:()=>{},present:async e=>{seen.push(e.type);if(e.type==='clockStart'){shown();await dialog;}},halftime:async()=>{},finalize:async()=>{}});
const advancing=paused.advance();await opened;
assert.equal(paused.flow.tick,1);assert.equal(paused.flow.timerEnabled,false);
assert.deepEqual(seen,['period','clockStart']);
await assert.rejects(paused.advance(),/already advancing/);
resume();await advancing;
assert.equal(paused.flow.tick,1);assert.equal(paused.flow.timerEnabled,true);
assert.deepEqual(seen,['period','clockStart','processMessages']);
await paused.advance();assert.equal(paused.flow.tick,2);
assert.deepEqual(seen,['period','clockStart','processMessages','processMessages','minute']);
console.log('Pending presentation pauses and resumes the clock without replay.');
