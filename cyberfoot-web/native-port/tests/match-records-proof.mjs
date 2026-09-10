import {commitFixtureResult,archiveFixtureEvents,updateManagerStatistic} from '../match-records.mjs';
const bytes=hex=>Uint8Array.from(hex.match(/../g)??[],n=>parseInt(n,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
function section(name,size,rows){const data=new Uint8Array(rows.length*size),v=new DataView(data.buffer);rows.forEach((row,i)=>row.forEach((n,j)=>v.setInt32(i*size+j*4,n,true)));return {name,recordSize:size,count:rows.length,marker:rows.length,data};}
function rows(s){const v=new DataView(s.data.buffer);return Array.from({length:s.count},(_,i)=>Array.from({length:s.recordSize/4},(_,j)=>v.getInt32(i*s.recordSize+j*4,true)));}
export function verifyMatchRecords(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  let actual;
  if(v.kind==='fixture'){
   const data=bytes(v.original),save={sections:[{name:'records_0066afa0',recordSize:72,count:1,data}]};
   commitFixtureResult(save,{savedFixtureId:0,counters:{0x48:v.score[0],0x4c:v.score[1]},income:v.income,attendance:v.attendance});actual=hex(data);
  }else if(v.kind==='events'){
   const s=section('records_0066b160',24,v.history);archiveFixtureEvents({sections:[s]},v.events,v.fixtureId,v.historyId);actual=rows(s);
  }else{
   const history=section('records_0066b474',32,v.history),managers=section('records_0066b718',128,v.prestige.map(p=>[...Array(10).fill(0),...p]));
   const save={career:new Uint8Array(1888),sections:[history,managers]},c=new DataView(save.career.buffer);c.setInt32(0xc0,v.season,true);c.setInt32(0x88,v.competition,true);
   updateManagerStatistic(save,v.managerId,v.clubId,v.amount,v.statistic);actual={history:rows(history),prestige:rows(managers).map(r=>r.slice(10,12))};
  }
  if(JSON.stringify(actual)!==JSON.stringify(v.expected))failures.push({i,actual,expected:v.expected});
 }
 return {cases:vectors.length,failures};
}
export async function checkMatchRecords(){const r=verifyMatchRecords(await fetch(new URL('./match-records-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));const finance=await(await import('./match-finance-proof.mjs')).checkMatchFinance();const {checkPostMatchSave}=await import('./post-match-save-integration.mjs');const integration=checkPostMatchSave(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()));return {...r,failures:0,finance,integration};}
