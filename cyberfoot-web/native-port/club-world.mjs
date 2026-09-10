import {record} from './save-format.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
import {standingsChampion} from './standings-highlights.mjs';
import {qualificationSlots} from './qualification-slots.mjs';
import {countryGroups} from './score-tables.mjs';
import {originalCandidateSort} from './ai-selection.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original initialized country list at0066ab64. */
export const clubWorldCountries=[107,9,43,49,57,129,1,190,51,38,68,14,143,131,157,59,148,39];
/** Original0065b480 comparator for the12byte country records: strength code
 * then random draw, both descending. */
export function compareClubWorldCandidates(a,b){for(const i of [1,2])if(a[i]!==b[i])return a[i]>b[i]?-1:1;return 0;}
/** Whole0065b4bc: up to ten best clubs of one country, with the original
 * strength compression and per-club random jitter. */
export function clubWorldCandidates(save,country,season,{rng}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const c=view(save.career),limit=(c.getInt32(0x3c,true)+c.getInt32(0x40,true))|0,rows=[];
 for(let id=0;id<limit;id++){const club=view(record(save,'clubs',id));if(club.getInt32(0x3c,true)!==country)continue;
  let code=club.getInt32(0x98,true);
  if(code>=20){code=20;if(season>1&&rng.below(12)===1)code=(code-2)|0;}
  else if(code>=18){code=18;if(season>1&&rng.below(12)===1)code=(code-2)|0;}
  else if(code>=16){code=17;if(season>1&&rng.below(12)===1)code=(code-1)|0;}
  rows.push([id,code,rng.below(100)]);
 }
 originalCandidateSort(rows,compareClubWorldCandidates);
 const out=Array.from({length:11},()=>-1);let selected=0;
 for(let j=0;j<Math.min(rows.length,10);j++)out[selected++]=rows[j][0];
 out[10]=selected;return out;
}
/** Whole00633528: per-league ranking record built for the club-world field.
 * The stale local_18 across leagues is original behavior. */
export function leagueRankingRecords(save,season){
 const section=save.sections.find(s=>s.name==='records_0066aca0'),v=view(section.data),records=[];let local18=0;
 for(let i=0;i<section.count;i++){
  const country=v.getInt32(i*660+0x140,true),champion=standingsChampion(save,2,country,season);let reshuffle=false;
  if(champion>=0){let mode=countryGroups[country]??0;if(mode===0)mode=2;if(mode===1||mode===2||mode===3)local18=qualificationSlots(country,4,mode);if(local18>1)reshuffle=true;}
  const row=Array.from({length:11},()=>0);
  if(!reshuffle)for(let j=0;j<10;j++)row[j]=v.getInt32(i*660+0x14c+(j+1)*4,true);
  else{row[0]=champion;let k=1;for(let j=1;j<10;j++){const value=v.getInt32(i*660+0x14c+j*4,true);if(value!==champion)row[k++]=value;}row[0]=row[1];row[1]=champion;}
  row[10]=8;records.push(row);
 }
 return records;
}
const take=(table,index)=>table[index*11];
/** Whole00634498: builds the six-club world field. A missing slot triggers the
 * original reinstall dialog; the error text is exposed instead of a UI call. */
export function competitionFiveEligible(save,runtime,{rng}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const c=view(save.career),season=c.getInt32(0xc0,true),table=Array.from({length:309},()=>-1);
 for(let row=0;row<28;row++)for(let column=0;column<12;column++)table[row*11+column]=-1;
 const leagues=leagueRankingRecords(save,season);
 clubWorldCountries.forEach((country,i)=>{
  const index=findLeagueConfiguration(save,country),values=index===-1?clubWorldCandidates(save,country,season,{rng}):leagues[index];
  for(let j=0;j<11;j++)table[i*11+j]=values[j];
 });
 const slots=[-1,-1,-1,-1];
 slots[0]=standingsChampion(save,4,0x1d,season);
 slots[1]=standingsChampion(save,4,3,season);
 slots[3]=standingsChampion(save,4,1,season);
 slots[2]=standingsChampion(save,4,0x31,season);
 if(slots[2]===-1){const u=rng.below(100);
  if(u<50){if(u<20)slots[2]=take(table,0);else if(u-20<25)slots[2]=take(table,1);else if(u-45<5)slots[2]=take(table,2);}
  else if(u-50<25)slots[2]=take(table,3);
  else if(u-75<10)slots[2]=take(table,15);
  else if(u-85<15)slots[2]=take(table,17);
 }
 for(const index of [0,1,2,3,15,17])if(slots[2]===-1)slots[2]=take(table,index);
 if(slots[3]===-1){const u=rng.below(100);
  if(u<40){if(u<20)slots[3]=take(table,4);else if(u-20<20)slots[3]=take(table,5);}
  else if(u-40<10)slots[3]=take(table,6);
  else if(u-50<30)slots[3]=take(table,14);
  else if(u-80<20)slots[3]=take(table,7);
 }
 for(const index of [14,4,5,6,7])if(slots[3]===-1)slots[3]=take(table,index);
 const firstCountry=slots[0]>=0?view(record(save,'clubs',slots[0])).getInt32(0x3c,true):0;let extra40=-1;
 if(firstCountry===0x83){const u=rng.below(100);if(u<50)extra40=take(table,8);else if(u-50<5)extra40=take(table,9);else if(u-55<45)extra40=take(table,10);}
 else{const u=rng.below(100);if(u<20)extra40=take(table,8);else if(u-20<5)extra40=take(table,9);else if(u-25<10)extra40=take(table,10);else if(u-35<65)extra40=take(table,13);}
 for(const index of [8,9,10])if(extra40===-1)extra40=take(table,index);
 let extra3c=-1;{const u=rng.below(100);if(u<80)extra3c=take(table,12);else if(u-80<20)extra3c=take(table,16);}
 for(const index of [12,16])if(extra3c===-1)extra3c=take(table,index);
 const six=[slots[0],slots[1],slots[2],slots[3],extra40,extra3c],state=runtime??{};
 if(six.some(id=>id===-1)){state.clubWorldErrorMessage='Erro no jogo, reinstale os times';return false;}
 state.clubWorldErrorMessage=null;
 const section=save.sections.find(s=>s.name==='records_0066af90'),put=(offset,value)=>view(section.data).setInt32(offset,value,true);
 if(rng.below(2)===1){put(0,slots[2]);put(4,slots[3]);put(0x30,extra40);put(0x34,extra3c);}
 else{put(0,slots[2]);put(4,extra40);put(0x30,slots[3]);put(0x34,extra3c);}
 if(rng.below(2)===1){put(0x60,slots[0]);put(0x90,slots[1]);}
 else{put(0x60,slots[1]);put(0x90,slots[0]);}
 for(const id of six)view(record(save,'clubs',id)).setUint8(0x21b,1);
 return true;
}
