import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';
import {continentalStandingsData,continentalStandingsLayout} from '../continental-standings-data.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url))),assets=JSON.parse(fs.readFileSync(new URL('../crest-assets.json',import.meta.url))),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),c=view(save.career);
for(let block=0;block<6;block++)for(let i=0;i<32;i++)c.setInt32(0x1ac+block*128+i*4,block*32+i,true);
for(let id=0;id<192;id++){const p=view(record(save,'clubs',id));for(const offset of [0,8])for(const [o,n] of [[0xc4,10],[0xec,7],[0x114,id%4===1?4:3],[0x13c,2],[0x164,id%4===0?100:8],[0x18c,3]])p.setInt32(o+offset,n,true);}
c.setInt32(0xc0,2,true);
for(const [competition,stage,block] of [[4,0,0],[4,1,1],[4,2,4],[4,3,5],[6,0,2],[6,1,3]]){
 const before=writeSave(save),data=continentalStandingsData(save,competition,stage,language,assets),layout=continentalStandingsLayout(data);assert.equal(data.tables.length,8);assert.equal(data.tables[0].rows[0].clubId,block*32+1);assert.equal(data.tables[0].rows[1].clubId,block*32);assert.equal(data.tables[0].rows[3].rank,'');assert.equal(data.tables[0].rows[0].cells[5],'1');assert.equal(data.tables[0].rows[2].cells[5],'2');
 assert.deepEqual(layout.map(t=>[t.x,t.y]),[[30,115],[30,235],[30,355],[30,475],[415,115],[415,235],[415,355],[415,475]]);assert.deepEqual(writeSave(save),before);
}
c.setInt32(0xc0,1,true);c.setUint8(0x75d,0);assert.equal(continentalStandingsData(save,4,0,language,assets).tables.length,0);c.setUint8(0x75d,1);assert.equal(continentalStandingsData(save,4,0,language,assets).tables.length,8);assert.equal(continentalStandingsData(save,6,1,language,assets).tables.length,0);
console.log('Continental standings: six saved stage lists, separate statistics, wins-first ties, eight-group layout, first-season gates and immutable reads passed.');
