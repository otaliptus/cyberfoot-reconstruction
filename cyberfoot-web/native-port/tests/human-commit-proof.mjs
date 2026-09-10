import {commitHumanLineup} from '../human-lineup-commit.mjs';
const hex=a=>Array.from(a,n=>n.toString(16).padStart(2,'0')).join('');
function lineupBytes(lineup){const b=new Uint8Array(248),v=new DataView(b.buffer);for(const [field,off] of [['players',0],['scratch',0x2c],['bench',0x40],['positions',0x5c],['attack',0x88],['defence',0xb8]])lineup[field].forEach((n,i)=>v.setInt32(off+i*4,n,true));for(const [field,off] of [['keeper',0xe8],['attackTotal',0xec],['defenceTotal',0xf0]])v.setInt32(off,lineup[field],true);v.setUint8(0xf4,lineup.warning?1:0);return b;}
export function verifyHumanCommit(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const save={sections:[{name:'records_0066b754',recordSize:120,count:0,marker:0,data:new Uint8Array()}]},state={players:structuredClone(v.players),clubs:[{human:true,availableCount:0}],currentDate:v.currentDate,competitionType:v.competitionType},notifications=[];
  const result=commitHumanLineup(save,state,v.rows.map(playerId=>({playerId})),v.slots,{clubId:0,remember:v.remember,alternateMode:v.alternateMode,notify:(...args)=>notifications.push(args)});
  const mutations=state.players.map(p=>Object.fromEntries(Object.keys(v.expected.mutations[0]).map(k=>[k,p[k]])));
  const actual={accepted:result.accepted,messageId:result.messageId??null,lineupHex:result.accepted?hex(lineupBytes(result.lineup)):'',savedHex:hex(save.sections[0].data),mutations,notifications,availableCount:state.clubs[0].availableCount};
  for(const key of Object.keys(v.expected))if(JSON.stringify(actual[key])!==JSON.stringify(v.expected[key])){failures.push({i,key,actual:actual[key],expected:v.expected[key]});break;}
 }
 return {cases:vectors.length,failures};
}
export async function checkHumanCommit(){const result=verifyHumanCommit(await fetch(new URL('./human-commit-vectors.json',import.meta.url)).then(r=>r.json()));if(result.failures.length)throw Error(JSON.stringify(result.failures.slice(0,2)));const {checkHumanMatch}=await import('./human-match-integration.mjs');const integration=checkHumanMatch(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer()));return {...result,failures:0,integration};}
