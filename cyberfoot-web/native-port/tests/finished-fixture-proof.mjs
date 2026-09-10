import {settleFinishedFixture} from '../finished-fixture.mjs';
const bytes=hex=>Uint8Array.from(hex.match(/../g)??[],n=>parseInt(n,16)),hex=b=>Array.from(b,n=>n.toString(16).padStart(2,'0')).join('');
export function verifyFinishedFixture(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const section=(name,recordSize,data)=>({name,recordSize,count:data.length/recordSize,marker:data.length/recordSize,data});
  const c=section('clubs',760,bytes(v.clubs.join(''))),l=section('records_0066afec',56,bytes(v.ledgers.join(''))),f=section('records_0066afa0',72,bytes(v.saved)),h=section('records_0066ae84',24,new Uint8Array()),save={career:bytes(v.career),sections:[c,l,f,h]},state={lineups:v.benches.map(bench=>({bench:[...bench]}))},calls=[],notifications=[];
  const raw=bytes(v.fixture),r=new DataView(raw.buffer),fixture={id:1,savedFixtureId:0,clubs:[0,1],income:r.getInt32(0x24,true),attendance:Array.from({length:4},(_,j)=>r.getInt32(0x2c+j*4,true)),counters:Object.fromEntries([0x48,0x4c,0x88,0x8c,0x90,0x94].map(o=>[o,r.getInt32(o,true)]))};
  settleFinishedFixture(save,fixture,state,{competition3TableValue:v.table,managerStatistic:(...args)=>calls.push(args),notify:(...args)=>notifications.push(args)});
  const actual={clubs:[hex(c.data.subarray(0,760)),hex(c.data.subarray(760))],ledgers:[hex(l.data.subarray(0,56)),hex(l.data.subarray(56))],saved:hex(f.data),history:hex(h.data),benches:state.lineups.map(t=>t.bench),counters:fixture.counters,calls,notifications};
  for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }
 return {cases:vectors.length,failures};
}
export async function checkFinishedFixture(){const r=verifyFinishedFixture(await fetch(new URL('./finished-fixture-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,2)));return {...r,failures:0};}
