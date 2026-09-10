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
import {parseOriginalInteger} from './contract-view.mjs';
/** Whole005a4648 bid submission. The x87 single/extended comparisons reduce to
 * exact integer comparisons; the label updates are returned as an ordered
 * visibility list for the Form23 host. */
export function auctionBid(save,runtime,{text=''}={}){
 const state=runtime??{},career=view(save.career),clubs=save.sections.find(s=>s.name==='clubs'),players=save.sections.find(s=>s.name==='players');
 const raw=String(text??'').split('\0')[0],vis=[['0x388',0],['0x390',0]],value=raw===''?0:parseOriginalInteger(raw);
 if(raw!==''&&value===null){state.auctionVisibility=vis;return {outcome:'invalid'};}
 let bid=Math.imul(value??0,1000)|0;
 const club=id=>id>=0&&id<clubs.count?view(record(save,'clubs',id)):null,cash=id=>{const p=club(id);return p?p.getBigInt64(0x48,true):0n;};
 const current=state.auctionCurrentClub??0,amount=BigInt(bid)*10000n;
 if(!(amount<=cash(current)||cash(current)<=0n)){vis.push(['0x388',1]);state.auctionVisibility=vis;return {outcome:'unaffordable'};}
 if(cash(current)<0n){bid=0;vis.push(['0x390',1]);}
 vis.push(['0x394','caption',0]);
 if(bid>(state.auctionHighestBid??0)){state.auctionHighestBid=bid;state.auctionHighestBidder=current;}
 const count=career.getInt32(0x13c,true),base=BigInt(state.auctionBasePrice??0)*10000n;
 let dc=state.auctionIndex??0,clubId=current;
 for(;;){
  const last=career.getInt32(0x13c+count*4,true);
  if(last===clubId){state.auctionIndex=dc;state.auctionCurrentClub=clubId;state.auctionVisibility=vis;return {outcome:'resolved',club:clubId};}
  dc++;clubId=career.getInt32(0x13c+dc*4,true);
  const p=club(clubId),strength=p?p.getInt32(0x64,true):0;
  if(strength>originalSeniorSquadLimit-2)continue;
  const pid=state.auctionPlayer??-1,playerClub=pid>=0&&pid<players.count?view(record(save,'players',pid)).getInt32(0x20,true):0;
  if(playerClub===clubId)continue;
  if(cash(clubId)<base)continue;
  state.auctionIndex=dc;state.auctionCurrentClub=clubId;state.auctionVisibility=vis;return {outcome:'next',club:clubId};
 }
}
