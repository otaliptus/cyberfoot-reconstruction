import {preferredCupBatch,preferredLeagueBatch,hasHumanContinentalClub,lastLeagueChampion} from '../competition-batch.mjs';
const bytes=s=>Uint8Array.from(s.match(/../g)??[],x=>parseInt(x,16)),rows=(name,width,values)=>{const data=new Uint8Array(width*values.length),v=new DataView(data.buffer);values.flat().forEach((n,i)=>v.setInt32(i*4,n,true));return {name,recordSize:width,count:values.length,data};};
export function verifyBatchSelectors(vectors){const failures=[];for(const [i,v] of vectors.entries()){
 const save={career:bytes(v.career),sections:[...[[v.leagues,'records_0066aca0',660],[v.fixtures,'records_0066afa0',72],[v.clubs,'clubs',760]].map(([raw,name,recordSize])=>({name,recordSize,count:raw.length/2/recordSize,data:bytes(raw)})),rows('records_0066b6ac',12,v.metadata),rows('records_0066b058',20,v.honours)]};
 const actual={cup:preferredCupBatch(save,v.preferred),league:preferredLeagueBatch(save,v.preferred),human:hasHumanContinentalClub(save,v.region),champion:lastLeagueChampion(save,v.country)};
 if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,actual,expected:v.expected});
 }return {cases:vectors.length,failures};}
export async function checkBatchSelectors(){const r=verifyBatchSelectors(await fetch(new URL('./batch-selectors-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
