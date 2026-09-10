import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';
import {regionalKnockoutFixtureRow,regionalKnockoutLayout,regionalKnockoutData} from '../regional-knockout.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),f=new DataView(record(save,'records_0066afa0',0).buffer,record(save,'records_0066afa0',0).byteOffset,72);
f.setInt32(0,0,true);f.setInt32(4,1,true);f.setInt32(8,2,true);f.setInt32(12,1,true);f.setInt32(16,0,true);f.setUint8(44,0);
assert.equal(regionalKnockoutFixtureRow(save,0).homeScore,'');
f.setUint8(44,1);assert.equal(regionalKnockoutFixtureRow(save,0).homeScore,'2');assert.equal(regionalKnockoutFixtureRow(save,0).awayScore,'1');
f.setInt32(16,4,true);f.setInt32(20,3,true);f.setUint8(44,0);const before=writeSave(save),row=regionalKnockoutFixtureRow(save,0);assert.ok(row.away.endsWith(' (P:4x3)'));assert.equal(row.homeScore,'');assert.deepEqual(writeSave(save),before);
assert.deepEqual(regionalKnockoutLayout(1,1).map(p=>[p.visible,p.bounds.x,p.bounds.y]),[[false,22,180],[false,232,250],[true,232,280]]);
assert.equal(regionalKnockoutLayout(1,3)[2].bounds.y,400);
assert.deepEqual(regionalKnockoutLayout(2,4).map(p=>[p.rowCount,p.bounds.y,p.bounds.height]),[[4,380,140],[2,380,60],[2,440,82]]);
assert.deepEqual(regionalKnockoutLayout(3,2)[2].bounds,{x:22,y:503,width:355,height:62});
assert.deepEqual(regionalKnockoutLayout(4,4).map(p=>[p.bounds.y,p.bounds.height]),[[410,155],[410,98],[503,62]]);
assert.deepEqual(regionalKnockoutLayout(5,2).map(p=>p.rowCount),[0,4,2]);
for(const id of [6,7])assert.deepEqual(regionalKnockoutLayout(id,4).map(p=>[p.rowCount,p.bounds.y,p.bounds.height]),[[8,390,170],[4,390,98],[2,488,72]]);
console.log('Regional knockout fixture captions, immutable reads and all seven panel layouts passed.');
const region=record(save,'records_0066ae98',0),rv=new DataView(region.buffer,region.byteOffset,region.byteLength),fixtures=save.sections.find(s=>s.name==='records_0066afa0');
// Prevent original fixtures from replacing the placeholder cases.
for(let i=0;i<fixtures.count;i++){const b=record(save,'records_0066afa0',i);new DataView(b.buffer,b.byteOffset,72).setInt32(0x18,0,true);}
rv.setInt32(0x510,4,true);
for(let format=1;format<=7;format++){
 rv.setInt32(0x530,format,true);const unchanged=writeSave(save),panels=regionalKnockoutData(save,0);assert.deepEqual(writeSave(save),unchanged);
 assert.ok(panels[2].rows[0].home.length>0);assert.ok(panels.every(p=>p.rows.length===p.rowCount));
 if(format===1)assert.equal(panels[2].rows[0].home,'2º colocado');
 if(format===2)assert.deepEqual(panels[0].rows.map(r=>[r.home,r.away,r.label]),[['1º Grupo A','2º Grupo D','Q1'],['1º Grupo D','2º Grupo A','Q2'],['1º Grupo B','2º Grupo C','Q3'],['1º Grupo C','2º Grupo B','Q4']]);
 if(format===3||format===5)assert.deepEqual(panels[1].rows.map(r=>r.home),['4º colocado','1º colocado','3º colocado','2º colocado']);
 if(format===4)assert.deepEqual(panels[0].rows.map(r=>r.home),['5º','6º','7º','8º']);
 if(format===6)assert.deepEqual(panels[0].rows.map(r=>r.home),['1º','5º','2º','6º','3º','7º','4º','8º']);
 if(format===7)assert.deepEqual(panels[0].rows.slice(0,2).map(r=>[r.home,r.away,r.label]),[['4º Grupo B','1º Grupo A','Q1'],['1º Grupo A','4º Grupo B','']]);
}
// Matching first fixture establishes a consecutive block for each stage.
rv.setInt32(0x530,6,true);
for(let i=0;i<14;i++){const b=record(save,'records_0066afa0',i),v=new DataView(b.buffer,b.byteOffset,72);v.setInt32(0,0,true);v.setInt32(4,1,true);v.setInt32(0x18,3,true);v.setInt32(0x38,0,true);v.setInt32(0x1c,i<8?401:i<12?201:101,true);}
const assigned=regionalKnockoutData(save,0);assert.deepEqual(assigned.map(p=>p.rows.map(r=>r.fixtureId)),[[0,1,2,3,4,5,6,7],[8,9,10,11],[12,13]]);
assert.deepEqual(assigned[1].rows.map(r=>r.label),['S1','','S2','']);
console.log('Regional knockout placeholders, grouped pairings, tie labels and all three fixture blocks passed.');
