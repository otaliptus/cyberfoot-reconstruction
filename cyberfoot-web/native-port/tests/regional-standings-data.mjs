import assert from 'node:assert/strict';import fs from 'node:fs';import {readSave,writeSave,record} from '../save-format.mjs';import {regionalFormats,regionalStandingsData,regionalDivisionCounts} from '../regional-standings-data.mjs';
import {regionalStandingsLayout} from '../regional-standings-layout.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),assets=JSON.parse(fs.readFileSync(new URL('../crest-assets.json',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),region=record(save,'records_0066ae98',0),r=v(region);
for(let id=0;id<80;id++){const club=v(record(save,'clubs',id));for(const [offset,n] of [[0xc0,80-id],[0xe8,10],[0x110,4],[0x138,3],[0x160,12],[0x188,6]])club.setInt32(offset,n,true);}
for(let formatId=1;formatId<=7;formatId++){
 region.fill(255);r.setInt32(0x530,formatId,true);r.setInt32(0x510,4,true);const format=regionalFormats[formatId-1];
 for(let i=0;i<format[0];i++)r.setInt32(i*4,i,true);
 for(let d=1;d<=4;d++)for(let i=0;i<6;i++)r.setInt32(d*80+i*4,20+(d-1)*6+i,true);
 for(let group=1;group<=format[1];group++)for(let i=0;i<format[2];i++)r.setInt32(360+group*40+i*4,(group-1)*format[2]+i,true);
 const before=writeSave(save),data=regionalStandingsData(save,0,false,assets);assert.equal(data.grouped,format[1]>1);assert.equal(data.tables.length,data.grouped?format[1]:4);assert.equal(data.tables[0].rows.length,format[2]);assert.equal(data.tables[0].rows[0].rank,'1º');assert.equal(data.tables[0].rows[0].draws,3);assert.equal(data.tables[0].rows[0].goalDifference,6);
 if(data.grouped)assert.deepEqual(data.relegationCandidates,[format[0]-1,format[0]-2,format[0]-3,format[0]-4]);
 const lower=regionalStandingsData(save,0,true,assets);assert.equal(lower.grouped,false);assert.equal(lower.tables.length,3);assert.ok(lower.tables.every(t=>t.rows.length===6));assert.equal(lower.tables[0].rows[0].displayRow,1);assert.deepEqual(regionalDivisionCounts(save,0),{bottom:6,second:6});assert.deepEqual(writeSave(save),before);
 const language=Array.from({length:40},(_,i)=>({text:'language'+i})),layout=regionalStandingsLayout(data,language),lowerLayout=regionalStandingsLayout(lower,language);assert.deepEqual(lowerLayout.tables.map(t=>[t.x,t.y]),[[232,120],[232,265],[232,410]]);assert.equal(lowerLayout.moreVisible,false);if(formatId===2)assert.deepEqual(layout.tables.map(t=>[t.x,t.y]),[[30,120],[30,251],[415,120],[415,251]]);if(formatId===7)assert.deepEqual(layout.tables.map(t=>[t.x,t.y]),[[232,120],[232,270]]);if([4,6].includes(formatId)){assert.equal(layout.tables[3].visible,false);assert.equal(layout.moreVisible,true);}
}
// Wins outrank goal difference in this screen's original comparator.
region.fill(255);r.setInt32(0x530,1,true);r.setInt32(0x510,1,true);for(let i=0;i<6;i++)r.setInt32(i*4,i,true);
for(let id=0;id<6;id++){const p=v(record(save,'clubs',id));p.setInt32(0xc0,10,true);p.setInt32(0x110,id===1?5:4,true);p.setInt32(0x160,id===0?100:12,true);}
const rows=regionalStandingsData(save,0,false,assets).tables[0].rows;assert.deepEqual(rows.slice(0,2).map(r=>r.clubId),[1,0]);assert.equal(rows[3].rank,'');
console.log('Regional standings: all seven formats, grouped/lower pages, fixed-slot counts, global relegation candidates, wins-first sorting, tied ranks and immutable save verified.');
