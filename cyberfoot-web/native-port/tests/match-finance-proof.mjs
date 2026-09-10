import {settleMatchFinance} from '../match-finances.mjs';
export function verifyMatchFinance(vectors){
 const failures=[];
 for(const [i,v] of vectors.entries()){
  const clubs=v.clubs.map(c=>({...c,cash:BigInt(c.cash)}));settleMatchFinance({...v,clubs});const actual=clubs.map(c=>({...c,cash:String(c.cash)}));
  if(JSON.stringify(actual)!==JSON.stringify(v.expected)||((v.date+6)%7+1)!==v.weekday)failures.push({i,actual,expected:v.expected});
 }
 return {cases:vectors.length,failures};
}
export async function checkMatchFinance(){const r=verifyMatchFinance(await fetch(new URL('./match-finance-vectors.json',import.meta.url)).then(r=>r.json()));if(r.failures.length)throw Error(JSON.stringify(r.failures.slice(0,3)));return {...r,failures:0};}
