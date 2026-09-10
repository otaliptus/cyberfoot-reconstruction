import fs from 'node:fs';import assert from 'node:assert/strict';
import {readSave,writeSave,record} from '../save-format.mjs';import {openCareer,commitCareerStats} from '../career-state.mjs';import {updatePlayerStats} from '../career-stats.mjs';import {OriginalRandom} from '../match-core.mjs';
const bytes=new Uint8Array(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),save=readSave(bytes),state=openCareer(save,{currentDate:42000});commitCareerStats(save,state);assert.deepEqual(writeSave(save),bytes);
const id=Object.keys(state.players).map(Number).find(id=>state.players[id].clubId===11),player=state.players[id],before=player.seasonGoals,beforeCareer=player.careerGoals;
updatePlayerStats(id,11,123,'gol',state,new OriginalRandom(2015));commitCareerStats(save,state);
const loaded=openCareer(readSave(writeSave(save)),{currentDate:42000});assert.equal(loaded.players[id].seasonGoals,before+1);assert.equal(loaded.players[id].careerGoals,beforeCareer+1);assert.deepEqual(loaded.scorers.find(r=>r[0]===id&&r[2]===123),[id,1,123,11]);
loaded.players[id].yellowCounts[2]=7;loaded.players[id].suspensions[2]=3;assert.equal(loaded.players[id].yellowCounts[2],7);
console.log(JSON.stringify({unchangedSaveRoundTrip:true,goalSurvivesSaveReload:true,player:player.name,club:state.clubs[11].name}));

const live=record(save,'players',id),liveView=new DataView(live.buffer,live.byteOffset,live.byteLength);liveView.setInt32(0x8c+4,2,true);liveView.setInt32(0xb8+4,1,true);assert.equal(state.players[id].yellowCounts[1],2);assert.equal([...state.players[id].suspensions][1],1);
