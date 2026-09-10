import {record} from './save-format.mjs';import {findCompetitionMetadata,recordPlayerAward} from './champion-records.mjs';import {originalCandidateSort} from './ai-selection.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),cashLimit=n=>n<-(1n<<63n)||n>=(1n<<63n)?-(1n<<63n):n;
/** Original 00643704: highest total first, then lowest secondary count. */
export function compareAwardCandidates(a,b){if(a[1]!==b[1])return a[1]>b[1]?-1:1;return a[2]===b[2]?0:a[2]<b[2]?-1:1;}
/** Original 00657674, including its source-index secondary-count lookup. */
export function selectPlayerAwards(save,context){
 const metadataId=findCompetitionMetadata(save,context),stats=save.sections.find(s=>s.name==='scorers'),appearances=save.sections.find(s=>s.name==='appearances'),s=view(stats.data),a=view(appearances.data),candidates=[];
 for(let i=0;i<stats.count;i++)if(s.getInt32(i*16+8,true)===metadataId){
  const player=s.getInt32(i*16,true);let secondary=0;
  for(let j=0;j<appearances.count;j++)if(a.getInt32(j*16,true)===player&&a.getInt32(j*16+8,true)===metadataId){secondary=a.getInt32(i*16+4,true);break;}
  candidates.push([player,s.getInt32(i*16+4,true),secondary,s.getInt32(i*16+12,true)]);
 }
 originalCandidateSort(candidates,compareAwardCandidates);if(!candidates.length)return {metadataId,candidates};
 const [playerId,amount,,clubId]=candidates[0];recordPlayerAward(save,metadataId,clubId,playerId,amount);
 const prize={1:1500000,2:1000000,3:500000}[context.competition];
 if(clubId>=0&&prize!==undefined){const club=view(record(save,'clubs',clubId)),ledger=view(record(save,'records_0066afec',clubId));club.setBigInt64(0x48,cashLimit(club.getBigInt64(0x48,true)+BigInt(prize)*10000n),true);ledger.setInt32(0x24,(ledger.getInt32(0x24,true)+prize)|0,true);if(context.competition===1)view(record(save,'players',playerId)).setUint8(0x15,1);}
 return {metadataId,candidates};
}
