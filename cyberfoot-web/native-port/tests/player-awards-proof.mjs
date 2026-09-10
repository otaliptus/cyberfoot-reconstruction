import {selectPlayerAwards} from '../player-awards.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
const rows=(name,width,values)=>{const data=new Uint8Array(width*values.length),v=new DataView(data.buffer);values.flat().forEach((n,i)=>v.setInt32(i*4,n,true));return {name,recordSize:width,count:values.length,data};};
export function verifyPlayerAwards(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const career=new Uint8Array(1888);new DataView(career.buffer).setInt32(0xc0,v.season,true);
 const save={career,sections:[{name:'clubs',recordSize:760,count:3,data:bytes(v.clubs)},{name:'players',recordSize:304,count:12,data:bytes(v.players)},{name:'records_0066afec',recordSize:56,count:3,data:bytes(v.ledger)},rows('records_0066b6ac',12,v.metadata),rows('scorers',16,v.stats),rows('appearances',16,v.appearances),rows('records_0066b560',28,[])]};
 const {candidates}=selectPlayerAwards(save,{competition:v.competition,country:-1,division:-1,group:-1,subgroup:-1});
 const actual={clubs:hex(save.sections[0].data),players:hex(save.sections[1].data),ledger:hex(save.sections[2].data),awards:hex(save.sections[6].data),candidates};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkPlayerAwards(){const r=verifyPlayerAwards(await fetch(new URL('./player-awards-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
