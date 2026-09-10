import assert from 'node:assert/strict';import fs from 'node:fs';import {readSave,writeSave,record} from '../save-format.mjs';import {originalRivalries,areRivalClubs,applyMatchPerformanceResult} from '../match-performance-result.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),home=view(record(save,'clubs',0)),away=view(record(save,'clubs',1)),c=view(save.career);
for(const [a,b] of originalRivalries){home.setInt32(0x2f0,a,true);away.setInt32(0x2f0,b,true);assert.equal(areRivalClubs(save,0,1),true);assert.equal(areRivalClubs(save,1,0),true);}assert.equal(areRivalClubs(save,-1,1),false);home.setInt32(0x2f0,999,true);assert.equal(areRivalClubs(save,0,1),false);
home.setInt32(0x2f0,46,true);away.setInt32(0x2f0,44,true);home.setInt32(0x98,30,true);away.setInt32(0x98,20,true);
for(const [current,bonus] of [[1,[2,5]],[3,[2,5]],[4,[10,20]],[6,[3,10]],[2,[1,1]]])for(const [hs,as] of [[3,1],[1,3],[2,2]]){
 c.setInt32(0x88,current,true);for(const p of [home,away]){p.setInt32(0x50,100,true);p.setInt32(0x54,200,true);}const calls=[];
 applyMatchPerformanceResult(save,6,0,1,0,as,hs,{updatePerformance:(...args)=>calls.push(args)});
 const winner=hs>as?1:hs<as?2:0;assert.deepEqual(calls,[[6,0,winner===1?1:winner===2?2:0,winner||1,10,winner?2:0],[6,1,winner===1?2:winner===2?1:0,winner||2,-10,winner?2:0]]);
 for(const [index,p] of [home,away].entries())assert.deepEqual([p.getInt32(0x50,true),p.getInt32(0x54,true)],winner===index+1?[100+bonus[0],200+bonus[1]]:[100,200]);
}
const before=writeSave(save);assert.throws(()=>applyMatchPerformanceResult(save,4,0,1,0,1,3,{updatePerformance:null}),/performance update required/);assert.deepEqual(writeSave(save),before);
console.log('Competition results: all19 rivalries in both directions, negative IDs, outcome/side call order, career-based bonuses, draws and missing-child immutability passed.');
