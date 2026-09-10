import assert from 'node:assert/strict';import fs from 'node:fs';import {gunzipSync} from 'node:zlib';
import {appointManager,removeManager,refreshManagerParticipation,cancelManagerClubFriendlies,clearManagerClubNotifications} from '../manager-employment.mjs';
import {OriginalRandom} from '../match-core.mjs';
const cases=JSON.parse(gunzipSync(fs.readFileSync(new URL('./manager-employment-vectors.json.gz',import.meta.url)))),bytes=s=>Uint8Array.from(Buffer.from(s,'hex')),hex=b=>Buffer.from(b).toString('hex');
for(const [index,test] of cases.entries()){
 const save={career:bytes(test.career),sections:test.sections.map(s=>({...s,data:bytes(s.data),count:s.data.length/2/s.recordSize}))},rng=new OriginalRandom(test.seed),runtime={nationalManagerCount:test.slots,currentLeagueConfiguration:test.initialLeague};
 if(test.kind==='appoint'||test.kind==='remove')(test.kind==='appoint'?appointManager:removeManager)(save,test.club,test.manager,{rng,runtime,date:test.date});
 else if(test.kind==='refresh')refreshManagerParticipation(save,runtime);
 else (test.kind==='cancel'?cancelManagerClubFriendlies:clearManagerClubNotifications)(save,test.club);
 for(const section of [...save.sections,{name:'career',data:save.career}]){
  const actual=hex(section.data),expected=section.name==='career'?test.expected.career:test.expected.sections[section.name];
  if(actual!==expected){let at=0;while(at<Math.max(actual.length,expected.length)&&actual.slice(at,at+2)===expected.slice(at,at+2))at+=2;throw Error(`case${index} ${test.kind} ${section.name} byte${at/2}: ${actual.slice(at,at+32)} expected${expected.slice(at,at+32)}`);}
 }
 assert.equal(rng.state,test.expected.seed,`case${index} RNG`);assert.equal(runtime.currentLeagueConfiguration,test.expected.league,`case${index} league`);
}
console.log(`${cases.length} whole original manager employment/helper comparisons passed (allocation adapter only)`);
