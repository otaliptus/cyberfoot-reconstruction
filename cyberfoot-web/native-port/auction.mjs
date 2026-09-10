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
import {countryGroups} from './score-tables.mjs';
/** Whole005a3d1c auction resolution and tick. The finalization005a4354 and the
 * label/timer updates are emitted as records for the Form23 host; the club
 * search, price bands and RNG order are native. */
export function auctionResolve(save,runtime,{rng}={}){
 if(typeof rng?.below!=='function')throw Error('Original random generator required.');
 const state=runtime??{},career=view(save.career),clubs=save.sections.find(s=>s.name==='clubs'),players=save.sections.find(s=>s.name==='players');
 const club=id=>id>=0&&id<clubs.count?view(record(save,'clubs',id)):null,player=id=>id>=0&&id<players.count?view(record(save,'players',id)):null;
 const pid=state.auctionPlayer??-1,p=player(pid),records=[];
 if(state.auctionFlag){state.auctionFlag=rng.below(4)===1?1:0;}
 const multiplier=rng.below(3)===1?2:3,highest=state.auctionHighestBid??0;
 if(highest<(state.auctionBasePrice??0))state.auctionFlag=0;
 else if(Number(p?p.getBigInt64(0x40,true):0n)<highest*10000&&Math.imul(multiplier,state.auctionBasePrice)<highest)state.auctionFlag=1;
 if(state.auctionFlag)records.push(['finalize',null,1,state.auctionHighestBidder,highest,pid]);
 else{
  let threshold=state.auctionValuation??0;if(Math.fround(threshold)===0)threshold=Math.fround(0.12);state.auctionValuation=threshold;
  const value40=Number(p?p.getBigInt64(0x40,true):0n),base=state.auctionBasePrice??0;
  if(state.auctionValueGate===0||base*10000<=value40+value40*threshold){
   if(base<highest)state.auctionBasePrice=highest;
   const effective=state.auctionBasePrice,limit=(career.getInt32(0x3c,true)+career.getInt32(0x40,true))|0,start=state.auctionStartClub??0,playerClub=p?p.getInt32(0x20,true):-1,playerRow=club(playerClub),playerStrength=playerRow?playerRow.getInt32(0x98,true):0,playerRegion=countryGroups[playerRow?playerRow.getInt32(0x3c,true):-1]??0,skill=p?p.getInt32(0x28,true):0;
   let found=-1;
   for(let attempt=0;attempt<500&&found===-1;attempt++){
    const id=rng.below(((limit-1)-start)|0)+start,row=club(id);if(!row)continue;
    if(id===playerClub||row.getUint8(0x39)!==0||row.getInt32(0xa0,true)>=28)continue;
    const strength=row.getInt32(0x98,true);
    if(skill>24&&row.getInt32(0x7c,true)>0&&playerStrength-2<=strength&&strength<=playerStrength+3){found=id;continue;}
    if(skill<25&&playerStrength-2<=strength&&strength<=playerStrength+2&&(countryGroups[row.getInt32(0x3c,true)]??0)===playerRegion)found=id;
   }
   if(found===-1&&effective<=highest)records.push(['finalize',null,1,state.auctionHighestBidder,highest,pid]);
   else if(found===-1&&highest<effective)records.push(['finalize',null,0,-1,0,pid]);
   else if(found<0)records.push(['finalize',null,0,-1,0,pid]);
   else{
    const price=((effective-1)>>>0)<100000?effective+1000+rng.below(10000):((effective-100001)>>>0)<400000?effective+10000+rng.below(50000):((effective-500001)>>>0)<500000?effective+30000+rng.below(100000):((effective-1000001)>>>0)<1000000?effective+50000+rng.below(200000):effective+50000+rng.below(300000);
    records.push(['finalize',null,1,found,price,pid]);
   }
  }else records.push(['page',0x37c,1],['hide',0x378,0],['language',0x174],['caption',0x39c]);
 }
 if(state.timerGate===0){state.auctionTicks=(state.auctionTicks??0)-1;records.push(['timer',state.auctionTicks<1?0x3a0:0x3a4,1]);}
 else records.push(['timer',0x3a0,1]);
 state.auctionRecords=records;return records;
}
