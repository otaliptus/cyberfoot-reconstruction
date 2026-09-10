import {matchHistoryRecord,matchHistoryRound} from '../match-history.mjs';
const bytes=hex=>Uint8Array.from(hex.match(/../g),n=>parseInt(n,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyMatchHistory(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const save={career:bytes(v.career),sections:[{name:'clubs',recordSize:760,count:2,data:bytes(v.clubs.join(''))},{name:'records_0066afa0',recordSize:72,count:1,data:bytes(v.saved)}]},raw=bytes(v.raw),r=new DataView(raw.buffer),c=new DataView(save.career.buffer),fixture={savedFixtureId:0,clubs:[0,1],income:r.getInt32(0x24,true),field28:r.getInt32(0x28,true),attendance:Array.from({length:4},(_,j)=>r.getInt32(0x2c+j*4,true)),field170:r.getUint8(0x170),field174:r.getInt32(0x174,true),field178:r.getInt32(0x178,true),counters:Object.fromEntries(Array.from({length:111},(_,j)=>[j*4,r.getInt32(j*4,true)])),startingPlayers:[0xb0,0xdc].map(o=>Array.from({length:11},(_,j)=>r.getInt32(o+j*4,true))),startingPositions:[0x108,0x134].map(o=>Array.from({length:11},(_,j)=>r.getInt32(o+j*4,true)))};
  const actual=hex(matchHistoryRecord(save,fixture,{round:matchHistoryRound(save,fixture),groupId:c.getInt32(0x88,true)===3?v.group:v.subgroup}));
  if(actual!==v.expected)failures.push({i,actual,expected:v.expected});
 }
 return {cases:vectors.length,failures};
}
export async function checkMatchHistory(){const r=verifyMatchHistory(await fetch(new URL('./match-history-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
