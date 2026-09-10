import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';import {appendRows} from '../match-records.mjs';import {findCompetitionMetadata} from '../champion-records.mjs';import {standingsChampion,standingsPalette} from '../standings-highlights.mjs';import {leagueStandingsData} from '../standings-data.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url))),crests=JSON.parse(fs.readFileSync(new URL('../crest-assets.json',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),c=v(save.career),league=v(record(save,'records_0066aca0',0)),country=league.getInt32(0x140,true),season=1000;
c.setInt32(0xc0,season,true);c.setInt32(0x110,6,true);c.setInt32(0x168,4,true);c.setUint8(0x171,1);c.setUint8(0x172,1);
const metadata=findCompetitionMetadata(save,{competition:2,country,division:1}),first=league.getInt32(80+0xfc+4,true),winner=league.getInt32(80+0xfc+10*4,true);
assert.equal(standingsChampion(save,2,country,season),-1);
appendRows(save,'records_0066b058',[[season,metadata,first,1,0],[season,metadata,winner,1,0],[season,metadata,first,2,0],[season+1,metadata,first,1,0]]);
assert.equal(standingsChampion(save,2,country,season),winner);
let before=writeSave(save),data=leagueStandingsData(save,0,1,language,crests),row=data.tables[0].rows[9];assert.equal(row.clubId,winner);assert.equal(row.color,standingsPalette[5]);assert.deepEqual(writeSave(save),before);
// Before the cup has finished, the same tenth-place club stays relegated.
c.setInt32(0x110,5,true);data=leagueStandingsData(save,0,1,language,crests);assert.equal(data.tables[0].rows[9].color,standingsPalette[4]);assert.deepEqual(writeSave(readSave(writeSave(save))),writeSave(save));
console.log('Standings integration: newest matching champion, ignored runner-up/other season, cup gate, winner-over-relegation highlighting and unchanged save verified.');
