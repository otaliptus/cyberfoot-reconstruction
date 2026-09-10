import {originalCandidateSort} from './ai-selection.mjs';import {record} from './save-format.mjs';import {appendRows} from './match-records.mjs';
const roleMinimum=[1,2,3,3,9,11,11,14,14,18,18],roleMaximum=[1,2,8,8,9,13,13,16,16,25,25];
const floatValue=bits=>{const v=new DataView(new ArrayBuffer(4));v.setInt32(0,bits,true);return v.getFloat32(0,true);};
/** Original643740: division ascending, rating descending, random tie key ascending. */
export function compareWeeklyCandidates(a,b){
 if(a[2]!==b[2])return a[2]<b[2]?-1:1;const x=floatValue(a[1]),y=floatValue(b[1]);
 if(x===y)return a[5]===b[5]?0:a[5]<b[5]?-1:1;return y<=x?-1:1;
}
/** Original658cbc. Mutates sorted candidate selection flags and appends100-byte rows. */
export function selectWeeklyTeam(save,state,leagueId){
 const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),career=view(save.career),league=view(record(save,'records_0066aca0',leagueId)),divisions=league.getInt32(0x144,true),candidates=state.ratingCandidates??=[];
 originalCandidateSort(candidates,compareWeeklyCandidates);
 const mode=career.getInt32(0x168,true);if(divisions>0&&mode!==2&&mode!==4)throw Error('Original weekly team requires an initialized league round (career mode2 or4).');
 const round=(career.getInt32(0x4c,true)+(career.getInt32(0x50,true)===1?0:mode===2?19:9))|0;
 for(let division=1;division<=divisions;division++){
  const row=Array(25).fill(0);
  for(let slot=0;slot<11;slot++){
   const candidate=candidates.find(c=>c[2]===division&&c[6]===0&&c[4]>=roleMinimum[slot]&&c[4]<=roleMaximum[slot]);if(!candidate)continue;
   row[0]=career.getInt32(0xc0,true);row[1]=round;row[2]=candidate[3];row[3+slot]=candidate[0];row[14+slot]=state.players[candidate[0]].clubId;candidate[6]=1;
  }
  appendRows(save,'records_0066b578',[row]);
 }
}
/** 0065208c, first matching original league configuration. */
export function findLeagueConfiguration(save,metadataId){
 const s=save.sections.find(s=>s.name==='records_0066aca0'),v=new DataView(s.data.buffer,s.data.byteOffset,s.data.byteLength);
 for(let i=0;i<s.count;i++)if(v.getInt32(i*660+0x140,true)===metadataId)return i;return -1;
}
