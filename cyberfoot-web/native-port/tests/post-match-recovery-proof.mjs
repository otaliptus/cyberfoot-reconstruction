import {recoverFixturePlayers} from '../post-match-recovery.mjs';import {OriginalRandom} from '../match-core.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyPostMatchRecovery(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const players=bytes(v.players),career=new Uint8Array(1888);new DataView(career.buffer).setInt32(0x88,v.competition,true);const save={career,sections:[{name:'players',recordSize:304,count:players.length/304,data:players},{name:'clubs',recordSize:760,count:3,data:bytes(v.clubs)}]},rng=new OriginalRandom(v.seed);
 recoverFixturePlayers(save,{clubs:v.fixtureClubs},rng);const actual={players:hex(players),seed:rng.state};if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,actual,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkPostMatchRecovery(){const r=verifyPostMatchRecovery(await fetch(new URL('./post-match-recovery-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,1)));return {...r,failures:0};}
