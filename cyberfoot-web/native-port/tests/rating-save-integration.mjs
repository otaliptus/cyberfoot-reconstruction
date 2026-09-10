import {readSave,writeSave} from '../save-format.mjs';import {openCareer} from '../career-state.mjs';import {savedPlayerRatings,accumulateSavedPlayerRating} from '../rating-records.mjs';import {playerMatchRating} from '../player-rating.mjs';import {OriginalRandom} from '../match-core.mjs';
export function checkRatingSave(bytes){
 const save=readSave(bytes),state=openCareer(save),ids=Object.keys(state.players).map(Number).filter(id=>id>0&&state.players[id].clubId===11),rng=new OriginalRandom(2015),ratings=[];
 const fixture={clubs:[11,4],counters:{0x48:2,0x4c:1,0x88:95,0x8c:87,0x90:11,0x94:7,0x98:4,0x9c:2}};
 // Explicit post-match fixture for helper/save integration, not full history-controller parity.
 for(const id of ids){const p=state.players[id],position=p.role===0?1:p.role===1?(p.field2c===0?9:2):p.role===2?7:p.role===3?15:23;const rating=playerMatchRating(id,fixture,11,position,state,rng);if(!accumulateSavedPlayerRating(save,id,1,position,rating,p))throw Error('Eligible player rating was rejected');ratings.push({id,rating});}
 const expected=savedPlayerRatings(save),loaded=readSave(writeSave(save));if(JSON.stringify(savedPlayerRatings(loaded))!==JSON.stringify(expected))throw Error('Rating records changed on save/reload');
 return {scope:'rating helpers and save records; explicit match fixture, complete history controller pending',players:ratings.length,ratings,originalSaveReload:true};
}
