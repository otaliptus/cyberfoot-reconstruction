import {selectMatchFixtures} from '../match-preparation.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyMatchPreparation(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const metadata=new Uint8Array(v.metadata.length*12),m=new DataView(metadata.buffer);v.metadata.flat().forEach((n,j)=>m.setInt32(j*4,n,true));const save={sections:[{name:'clubs',recordSize:760,count:4,data:bytes(v.clubs)},{name:'records_0066afa0',recordSize:72,count:v.fixtures.length/144,data:bytes(v.fixtures)},{name:'records_0066b6ac',recordSize:12,count:v.metadata.length,data:metadata}]};
 const result=selectMatchFixtures(save,v),raw=new Uint8Array(result.fixtures.length*444),r=new DataView(raw.buffer);
 result.fixtures.forEach((f,j)=>{for(const [o,n] of [[0,f.competition],[4,f.field4],[8,f.clubs[0]],[12,f.clubs[1]],[16,f.lineupIds[0]],[20,f.lineupIds[1]],[24,f.substitutions[0]],[28,f.substitutions[1]],[0x17c,f.savedFixtureId]])r.setInt32(j*444+o,n,true);});
 const actual={fixtures:hex(raw),humanFixtureIds:result.humanFixtureIds,alternateRound:result.alternateRound};if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,actual,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkMatchPreparation(){const r=verifyMatchPreparation(await fetch(new URL('./match-preparation-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
