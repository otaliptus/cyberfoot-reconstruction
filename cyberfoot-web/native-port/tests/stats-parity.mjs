import fs from 'node:fs';import assert from 'node:assert/strict';import {updatePlayerStats} from '../career-stats.mjs';import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(fs.readFileSync(new URL('./stats-vectors.json',import.meta.url)));let failed=0;
for(const c of cases){const state=structuredClone(c.state),rng=new OriginalRandom(c.initialSeed);updatePlayerStats(1,0,4,c.event,state,rng);
 const actual={seed:rng.state,clockReads:rng.clockReads,player:state.players[1],notifications:state.notifications,scorers:state.scorers,appearances:state.appearances,playerSeasonStats:state.playerSeasonStats};try{assert.deepEqual(actual,c.expected);}catch{if(failed++<3)console.error(JSON.stringify({c,actual}));}}
console.log({statsCases:cases.length,failed});assert.equal(failed,0);
