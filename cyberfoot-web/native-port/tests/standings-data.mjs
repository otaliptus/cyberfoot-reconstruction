import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,record,writeSave} from '../save-format.mjs';import {leagueStandingsData,initialStandingsState} from '../standings-data.mjs';
import {leagueStandingsLayout} from '../standings-layout.mjs';
const load=name=>JSON.parse(fs.readFileSync(new URL('../'+name,import.meta.url))),language=load('language.json'),crests=load('crest-assets.json'),save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),c=view(save.career),league=view(record(save,'records_0066aca0',0));
const initial=writeSave(save),state=initialStandingsState(save),real=leagueStandingsData(save,state.leagueId,-1,language,crests);assert.ok(real.tables.length>0);assert.deepEqual(writeSave(save),initial);
// Interleaved IDs prove that display follows saved order rather than sorting.
c.setInt32(0x168,2,true);league.setInt32(0x144,4,true);
for(let d=1;d<=4;d++)for(let position=1;position<=20;position++){const id=(position*3)%23;league.setInt32(d*80+0xfc+position*4,id,true);const p=view(record(save,'clubs',id));for(const [offset,n] of [[0xb8,10],[0xe0,7],[0x108,3],[0x130,2],[0x158,8],[0x180,5]])p.setInt32(offset,n,true);}
let data=leagueStandingsData(save,0,-1,language,crests);assert.equal(data.tables.length,2);assert.equal(data.tables[0].rows.length,20);assert.equal(data.tables[1].rows[0].displayRow,21);assert.equal(data.tables[0].rows[0].rank,'1º');assert.equal(data.tables[0].rows[1].rank,'');assert.equal(data.tables[0].rows[0].draws,2);assert.equal(data.divisionTabsVisible,true);
// Each original tie-breaker independently makes the rank visible.
for(const [offset,value] of [[0xb8,11],[0x180,4],[0x158,9],[0x108,4]]){const p=view(record(save,'clubs',6)),old=p.getInt32(offset,true);p.setInt32(offset,value,true);assert.equal(leagueStandingsData(save,0,1,language,crests).tables[0].rows[1].rank,'2º');p.setInt32(offset,old,true);}
data=leagueStandingsData(save,0,3,language,crests);assert.equal(data.tables.length,1);assert.equal(data.tables[0].division,3);assert.equal(data.tables[0].rows[0].displayRow,21);assert.equal(data.tables[0].rows.length,20);
c.setInt32(0x168,4,true);data=leagueStandingsData(save,0,1,language,crests);assert.equal(data.tables.length,4);assert.ok(data.tables.every(t=>t.rows.length===10));assert.equal(data.divisionTabsVisible,false);
const layout=leagueStandingsLayout(data);assert.deepEqual(layout.map(t=>[t.x,t.y]),[[30,120],[415,120],[30,341],[415,341]]);assert.equal(layout[0].rows[9].cellBounds[0].y,291);assert.equal(layout[0].rows[0].crestBounds.x,51);assert.equal(layout[0].rows[0].cellBounds[1].x,70);assert.equal(layout[0].rows[0].cellBounds[2].x,194);assert.equal(layout[0].headerBounds[0].y,101);
// Subgroup fallback deliberately chooses the LAST active group.
c.setUint8(0x170,1);view(record(save,'clubs',c.getInt32(8,true))).setInt32(0x40,2,true);for(let i=0;i<27;i++)view(record(save,'records_0066ae98',i)).setUint8(0x52d,[3,9,18].includes(i)?1:0);
assert.equal(initialStandingsState(save).subgroup,18);assert.equal(initialStandingsState(save,{subgroupOverride:7}).subgroup,7);
for(const competition of [0,1,2,3,4,5,6,8,9]){c.setInt32(0x88,competition,true);assert.equal(initialStandingsState(save).competition,[1,3,4].includes(competition)?competition:1);}
const before=writeSave(save);initialStandingsState(save);leagueStandingsData(save,0,1,language,crests);assert.deepEqual(writeSave(save),before);
console.log('Standings data: saved order, rank ties, stats, 20/10-team layouts, division paging, regional fallback and no save mutation verified.');
