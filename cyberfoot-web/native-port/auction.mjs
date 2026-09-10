import {record} from './save-format.mjs';
import {originalSeniorSquadLimit} from './player-move.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole005a3014 selection prefix: choose the auction league start club, the
 * seller club and the auctioned player. UI panel population is separate.
 * Negative club reads mirror the original pre-array access as a zero row. */
export function selectAuctionLot(save,runtime,{rng,previousClub=-1}={}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const state=runtime??{},c=view(save.career),leagues=save.sections.find(s=>s.name==='records_0066aca0'),players=save.sections.find(s=>s.name==='players'),clubs=save.sections.find(s=>s.name==='clubs');
 state.auctionSellerClub=-1;state.auctionSecondClub=-1;
 let start=0;
 if(leagues.count>=2){
  const leagueIndex=rng.below(leagues.count),country=view(record(save,'records_0066aca0',leagueIndex)).getInt32(0x140,true),limit=(c.getInt32(0x3c,true)+c.getInt32(0x40,true))|0;
  if(limit-1>=0)for(let id=0;id<limit;id++){if(view(record(save,'clubs',id)).getInt32(0x3c,true)===country){start=id;break;}}
 }
 state.auctionStartClub=start;
 if((state.auctionPlayer??-1)>=0)return state;
 const limit=(c.getInt32(0x3c,true)+c.getInt32(0x40,true))|0;let club=-1;
 if(limit-1>=start)for(let id=start;id<limit;id++){const p=view(record(save,'clubs',id));if(p.getUint8(0x39)===0&&p.getInt32(0x64,true)>originalSeniorSquadLimit-5&&p.getInt32(0xa0,true)>11&&id!==previousClub){club=id;break;}}
 for(let attempts=0;club===-1&&attempts<250;attempts++){
  const id=rng.below(((limit-1)-start)|0)+start;
  if(id<0||id>=clubs.count)continue;
  const p=view(record(save,'clubs',id));if(p.getUint8(0x39)===0&&p.getInt32(0xa0,true)>15)club=id;
 }
 state.auctionSellerClub=club;state.auctionSecondClub=club;
 for(let attempts=0;(state.auctionPlayer??-1)===-1&&attempts<250;attempts++){
  const role=rng.below(5),strength=club>=0?view(record(save,'clubs',club)).getInt32(0x68+role*4,true):0;
  if(strength<=2)continue;
  for(let id=0;id<players.count;id++){const p=view(record(save,'players',id));if(p.getInt32(0x20,true)===club&&p.getInt32(0x24,true)===role&&p.getUint8(0x7d)!==0){state.auctionPlayer=id;break;}}
 }
 return state;
}
