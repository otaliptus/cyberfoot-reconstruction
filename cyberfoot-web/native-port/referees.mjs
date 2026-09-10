import {originalCandidateSort} from './ai-selection.mjs';import {originalReferees} from './referee-data.mjs';
/** Whole64cae0: sort42 officials by descending rating, then ascending random
 * tie breaker using the original unstable sort. Save six Brazilian and six
 * Argentinian IDs; unfilled slots retain their previous values. */
export function refreshRefereeAssignments(save,rng,referees=originalReferees){
 if(referees.length!==42)throw Error('Original referee table has42entries.');
 const rows=referees.map((referee,i)=>({id:i+1,rating:referee.rating,random:rng.below(50)}));
 originalCandidateSort(rows,(a,b)=>a.rating!==b.rating?Math.sign(b.rating-a.rating):Math.sign(a.random-b.random));
 const c=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength);
 for(const [country,start] of [[29,0],[1,6]]){let count=0;for(const row of rows)if(referees[row.id-1].country===country){if(count===6)break;c.setInt32(0x70c+(start+count)*4,row.id,true);count++;}}
 return rows.map(row=>row.id);
}
