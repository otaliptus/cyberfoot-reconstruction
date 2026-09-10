import {recordClubHonour,recordManagerHonour,recordPlayerAward} from '../champion-records.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyChampionRecords(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const metadata=new Uint8Array(v.metadata.length*12),m=new DataView(metadata.buffer);v.metadata.flat().forEach((n,j)=>m.setInt32(j*4,n,true));const career=new Uint8Array(1888);new DataView(career.buffer).setInt32(0xc0,v.season,true);
 const save={career,sections:[{name:'clubs',recordSize:760,count:1,data:bytes(v.club)},{name:'records_0066b6ac',recordSize:12,count:v.metadata.length,data:metadata},...['records_0066b058','records_0066b3d0','records_0066b560'].map((name,j)=>({name,recordSize:j?28:20,count:0,marker:0,data:new Uint8Array()}))]};
 recordClubHonour(save,{...v,clubId:0});recordManagerHonour(save,{...v,clubId:0,managerId:3});recordPlayerAward(save,7,0,17,23);
 const actual={club:hex(save.sections[0].data),honours:hex(save.sections[2].data),managers:hex(save.sections[3].data),players:hex(save.sections[4].data)};
 for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }return {cases:vectors.length,failures};}
export async function checkChampionRecords(){const r=verifyChampionRecords(await fetch(new URL('./champion-records-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
