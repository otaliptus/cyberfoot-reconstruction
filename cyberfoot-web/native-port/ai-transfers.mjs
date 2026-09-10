import {record} from './save-format.mjs';import {currentCareerDate} from './calendar.mjs';import {findLeagueConfiguration} from './weekly-team.mjs';import {countryGroups} from './score-tables.mjs';import {precision64,nearestEven} from './x87.mjs';import {completePaidTransfer} from './paid-transfer.mjs';import {originalSeniorSquadLimit} from './player-move.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
// Original665270 (via66b6e4) and66abc4, indexed by player role0..4.
export const aiTransferMinimumRoles=[2,3,3,5,3],aiTransferMaximumRoles=[3,4,4,10,5];
/** Whole653268. Preserve bounded rejection sampling, original exclusion of
 * the final club from random ranges, and first30 eligible seller players. */
export function runAITransfer(save,country=-1,{rng,runtime={},date=currentCareerDate(save),maxSeniorPlayers=originalSeniorSquadLimit}={}){
 if(!rng||typeof rng.below!=='function')throw Error('Original random generator required for AI transfers.');
 const c=view(save.career),club=id=>view(record(save,'clubs',id)),player=id=>view(record(save,'players',id)),leagues=save.sections.find(s=>s.name==='records_0066aca0'),players=save.sections.find(s=>s.name==='players'),domestic=c.getInt32(0x3c,true);let start=0,rangeEnd=0,seller=-1;
 if(country>=0&&findLeagueConfiguration(save,country)===-1)country=-1;
 if(country>=0){for(let id=0;id<domestic;id++)if(club(id).getInt32(0x3c,true)===country){start=id;rangeEnd=(view(record(save,leagues.name,findLeagueConfiguration(save,country))).getInt32(0x148,true)+id)|0;break;}}
 else if(leagues.count>1){const selected=view(record(save,leagues.name,rng.below(leagues.count))).getInt32(0x140,true);for(let id=0;id<domestic;id++)if(club(id).getInt32(0x3c,true)===selected){start=id;break;}}
 const last=(domestic+c.getInt32(0x40,true)-1)|0;
 for(let id=start;id<=last;id++){const row=club(id);if(row.getUint8(0x39)===0&&row.getInt32(0x64,true)>25&&row.getInt32(0xa0,true)>11&&row.getInt32(0x7c,true)>0){seller=id;break;}}
 if(country>=0)seller=-1;
 for(let attempt=0;seller===-1&&attempt<500;attempt++){const id=(start+rng.below(((country===-1||rangeEnd<=start?last:rangeEnd)-start)|0))|0,row=club(id);if(row.getUint8(0x39)===0&&row.getInt32(0xa0,true)>16&&row.getInt32(0x98,true)>6&&row.getInt32(0x7c,true)>0)seller=id;}
 if(seller===-1)return;
 const pool=Array(30).fill(-1);runtime.aiTransferCandidates=pool;let eligible=0;
 for(let id=1;id<players.count;id++){const p=player(id),role=p.getInt32(0x24,true);if(p.getInt32(0x20,true)===seller&&p.getUint8(0x120)===0&&club(seller).getInt32(0x68+role*4,true)>aiTransferMinimumRoles[role]){eligible++;if(eligible<=30)pool[eligible-1]=id;}}
 let selected=-1;for(let attempt=0;selected===-1&&attempt<250;attempt++){const id=pool[rng.below(30)];if(id>0&&player(id).getInt32(0x100,true)<2)selected=id;}
 if(selected<1)return;
 const p=player(selected),from=club(p.getInt32(0x20,true)),region=countryGroups[from.getInt32(0x3c,true)]??0,rank=from.getInt32(0x58,true),nationality=p.getInt32(0x1c,true);let buyer=-1;
 for(let attempt=0;buyer===-1&&attempt<500;attempt++){
  const id=(start+rng.below((last-start)|0))|0,row=club(id),targetCountry=row.getInt32(0x3c,true),targetRegion=countryGroups[targetCountry]??0;
  if(id===p.getInt32(0x20,true)||row.getUint8(0x39)!==0||row.getInt32(0xa0,true)>=((maxSeniorPlayers-3)|0)||row.getInt32(0x7c,true)<=0||row.getInt32(0x58,true)<((rank-1)|0)||row.getInt32(0x58,true)>((rank+1)|0)||row.getInt32(0x68+p.getInt32(0x24,true)*4,true)>aiTransferMaximumRoles[p.getInt32(0x24,true)])continue;
  if(region===0){if(targetCountry===nationality||targetRegion===0)buyer=id;if(p.getUint8(0x15)!==0&&(targetRegion!==0||row.getInt32(0x98,true)<19))buyer=-1;}
  else if(region===1){if(targetCountry===nationality||targetRegion===0||(targetRegion===3&&[43,49,107,59,9,39].includes(targetCountry)))buyer=id;}
  else buyer=id;
 }
 // The original extra region3/country68 branch is unreachable because it
 // follows a failed region3 test without any intervening country mutation.
 if(buyer<0)return;
 const [a,b]=precision64(p.getBigInt64(0x40,true),10000n),fee=Number(BigInt.asIntN(32,nearestEven(a,b)));completePaidTransfer(save,selected,buyer,fee,{rng,runtime,date});
}
