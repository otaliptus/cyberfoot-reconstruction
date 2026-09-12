import {record} from './save-format.mjs';
import {originalCandidateSort} from './ai-selection.mjs';
import {appendRows} from './match-records.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original initialized quota table at0066a3f4, indexed by player role24. */
export const nationalSquadQuotas=[3,4,4,8,6];
/** Original005f2b00 candidate comparator for the40byte selection records. */
export function compareNationalCandidates(a,b){for(const i of [1,3,8,6])if(a[i]!==b[i])return a[i]>b[i]?-1:1;return 0;}
/** Whole0064d890: a country is eligible when at least18 outfield players and2
 * goalkeepers are available; injured players return after the calendar date. */
export function nationalEligibility(save,country,date){
 const players=save.sections.find(s=>s.name==='players'),p=view(players.data),c=view(save.career),limit=(c.getInt32(0x3c,true)+c.getInt32(0x40,true))|0;
 let total=0,keepers=0;
 for(let i=0;i<players.count;i++){
  const o=i*304;
  if(p.getInt32(o+0x1c,true)!==country)continue;
  const club=p.getInt32(o+0x20,true);
  if(club>=limit||club<0)continue;
  if(p.getFloat64(o+0x68,true)>date)continue;
  total++;
  if(p.getInt32(o+0x24,true)===0)keepers++;
 }
 return total-keepers>=18&&keepers>=2;
}
/** Whole005fad94. Candidate records collect every player of the nationality
 * whose club is below the original limit, including negative clubs. Selected
 * players are moved to the national club and every previous assignment is
 * recorded in66b544 for005f9e54 restoration. */
export function selectNationalPlayers(save,country,club,{rng}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const players=save.sections.find(s=>s.name==='players'),p=view(players.data),c=view(save.career),limit=(c.getInt32(0x3c,true)+c.getInt32(0x40,true))|0;
 const candidates=[];
 for(let i=0;i<players.count;i++){
  const o=i*304;
  if(p.getInt32(o+0x20,true)>=limit)continue;
  if(p.getInt32(o+0x1c,true)!==country)continue;
  candidates.push([i,p.getInt32(o+0x28,true),p.getUint8(o+0x15)!==0?1:0,p.getInt32(o+0x104,true),rng.below(2),-1,-1,-1,-1,0]);
 }
 originalCandidateSort(candidates,compareNationalCandidates);
 const counts=[0,0,0,0,0],selected=[];
 for(const row of candidates){
  if(row[0]<0)continue;
  const role=p.getInt32(row[0]*304+0x24,true);
  if(counts[role]>=nationalSquadQuotas[role])continue;
  counts[role]++;selected.push(row[0]);row[0]=-1;
 }
 const pending=[];
 for(let i=1;i<players.count;i++)if(p.getInt32(i*304+0x20,true)===club){pending.push([i,club]);p.setInt32(i*304+0x20,-1,true);}
 for(const id of selected){pending.push([id,p.getInt32(id*304+0x20,true)]);p.setInt32(id*304+0x20,club,true);}
 if(pending.length)appendRows(save,'records_0066b544',pending);
}
function assignmentIndex(save,playerId){
 const section=save.sections.find(s=>s.name==='records_0066b544'),v=view(section.data);
 for(let i=0;i<section.count;i++)if(v.getInt32(i*8,true)===playerId)return i;
 return -1;
}
export function assignNationalPlayer(save,playerId,nationalClubId){
 const player=view(record(save,'players',playerId)),club=view(record(save,'clubs',nationalClubId)),previous=player.getInt32(0x20,true);
 if(previous===nationalClubId)return false;
 if(player.getInt32(0x1c,true)!==club.getInt32(0x3c,true))throw Error('Player nationality does not match the national squad.');
 if(assignmentIndex(save,playerId)>=0)return false;
 player.setInt32(0x20,nationalClubId,true);appendRows(save,'records_0066b544',[[playerId,previous]]);return true;
}
export function unassignNationalPlayer(save,playerId,nationalClubId){
 const section=save.sections.find(s=>s.name==='records_0066b544'),player=view(record(save,'players',playerId)),row=assignmentIndex(save,playerId);if(row<0||player.getInt32(0x20,true)!==nationalClubId)return false;
 const v=view(section.data),previous=v.getInt32(row*8+4,true),data=new Uint8Array((section.count-1)*section.recordSize);data.set(section.data.subarray(0,row*section.recordSize));data.set(section.data.subarray((row+1)*section.recordSize),row*section.recordSize);section.data=data;section.count--;section.marker=section.count;view(record(save,'players',playerId)).setInt32(0x20,previous,true);return true;
}
/** Whole005f3380: competitions7,8 and9 field8,3 and4 four-club groups of
 * national sides. Human-run clubs are skipped; eligible countries select a
 * squad, then the original completion flag at700 is set. */
export function nationalSetup(save,runtime,{rng,date}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 if(!Number.isFinite(date))throw Error('Original calendar date required.');
 const c=view(save.career),competition=c.getInt32(0x88,true),groups=competition===7?8:competition===8?3:competition===9?4:0;
 for(let group=0;group<groups;group++)for(let i=0;i<4;i++){
  const clubId=c.getInt32(0x4bc+group*16+i*4,true),club=view(record(save,'clubs',clubId));
  if(club.getUint8(0x39)!==0)continue;
  const country=club.getInt32(0x3c,true);
  if(nationalEligibility(save,country,date))selectNationalPlayers(save,country,clubId,{rng});
 }
 c.setInt32(0x700,1,true);
}
