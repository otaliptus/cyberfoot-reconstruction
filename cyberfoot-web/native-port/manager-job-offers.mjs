import {record} from './save-format.mjs';
import {findLeagueConfiguration} from './weekly-team.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole6556f4. Choose a job offer for an employed manager. The original
 * reads the active career club for several mode2 performance checks, even
 * when clubId is different; that distinction is intentional here. */
export function selectEmployedManagerOffer(save,clubId,{rng,runtime}){
 runtime.managerJobOffers=[-1,-1,-1,-1];
 const c=view(save.career),club=view(record(save,'clubs',clubId)),leagues=save.sections.find(s=>s.name==='records_0066aca0'),division=club.getInt32(0x7c,true);
 let leagueId=rng.below(leagues.count);
 const league=()=>view(record(save,'records_0066aca0',leagueId));
 function scan(div,start,end,step,checkNonnegative){
  for(let position=start;step>0?position<=end:position>=end;position+=step){
   const id=league().getInt32(div*80+0xfc+position*4,true);
   if(view(record(save,'clubs',id)).getUint8(0x39)!==0)continue;
   if(!checkNonnegative||id>=0)runtime.managerJobOffers[0]=id;
   return;
  }
 }
 const chooseOtherLeague=()=>{do{leagueId=rng.below(leagues.count);}while(leagueId===findLeagueConfiguration(save,club.getInt32(0x3c,true)));};
 const score=club.getInt32(0x50,true),played=club.getInt32(0x1a8,true);
 if(c.getInt32(0x168,true)===4){
  let jump=1;
  if(division===4){jump=rng.below(100)<99?(rng.below(100)<31?2:1):3;if(score>80&&played<3)scan(4-jump,6,1,-1,true);}
  if(division===3){jump=rng.below(100)<11?2:1;if(score>80&&played<3)scan(3-jump,6,1,-1,true);}
  if(division===2&&score>80&&played<4){
   if(played<2)jump=3;if(club.getInt32(0x1ac,true)===2)jump=4;if(club.getInt32(0x1b0,true)===3)jump=5;
   scan(1,jump,10,1,true);
  }
  if(division===1&&leagues.count>1&&score>80&&played<3){
   chooseOtherLeague();if(played<2)jump=3;if(club.getInt32(0x1ac,true)===2)jump=4;if(club.getInt32(0x1b0,true)===3)jump=5;
   if(rng.below(100)>98)jump=2;scan(1,jump,10,1,true);
  }
 }else{
  const active=view(record(save,'clubs',c.getInt32(8,true))),activeScore=active.getInt32(0x50,true),activePlayed=active.getInt32(0x1a8,true);
  if(division===4&&activeScore>80&&activePlayed<4)scan(3,[19,18,16,13,10][rng.below(5)],4,-1,false);
  if(division===3&&activeScore>80&&activePlayed<5)scan(2,[19,18,16,13,10][rng.below(5)],4,-1,false);
  if(division===2&&activeScore>80&&activePlayed<5){const start=rng.below(100)<81?rng.below(6)+14:rng.below(8)+8;scan(1,start,5,-1,false);}
  if(division===1&&leagues.count>1&&score>80&&played<4){chooseOtherLeague();const start=rng.below(played<2?3:played===2?4:5)+2;scan(1,start,10,1,false);}
 }
}

/** Whole654d60 with654d40 duplicate checks. The national-competition branch
 * deliberately makes just one attempt per slot: its original retry compares
 * attempt>=100 after the first attempt, so that branch is never taken. */
export function selectUnemployedManagerOffers(save,country,managerId,{rng,runtime}){
 const offers=runtime.managerJobOffers=[-1,-1,-1,-1],c=view(save.career),manager=view(record(save,'records_0066b718',managerId)),mode=c.getInt32(0x168,true),competition=c.getInt32(0x88,true),originalDivision=manager.getInt32(0x24,true),leagues=save.sections.find(s=>s.name==='records_0066aca0');
 let previousDivision=originalDivision,baseLeague=findLeagueConfiguration(save,country);
 const preferred=manager.getInt32(0x7c,true),preferredLeague=preferred>=0?findLeagueConfiguration(save,preferred):-1;if(preferredLeague>=0)baseLeague=preferredLeague;
 const config=id=>view(record(save,'records_0066aca0',id)),maxDivision=id=>config(id).getInt32(0x144,true),clubAt=(league,division,position)=>config(league).getInt32(division*80+0xfc+position*4,true);
 let nationalDivision=previousDivision;if(previousDivision<1)nationalDivision=country===29&&c.getUint8(0x170)!==0&&c.getUint8(0x75c)!==0?4:maxDivision(baseLeague);
 let count=rng.below(competition===3?2:3)+1;
 if(competition===3){
  for(let slot=0;slot<count;slot++){
   const id=clubAt(baseLeague,nationalDivision,mode===2?20-rng.below(11):10-rng.below(7)),club=view(record(save,'clubs',id));
   if(club.getUint8(0x39)===0&&id!==manager.getInt32(0x20,true)&&!offers.includes(id)&&club.getUint8(0x216)!==0)offers[slot]=id;
  }
  return;
 }
 count=rng.below(4)+1;if(mode===2&&(originalDivision===0||originalDivision>3)&&count>2)count=2;
 for(let slot=0;slot<count;slot++){
  let league=slot>0?rng.below(leagues.count):baseLeague;
  if(mode===2&&(originalDivision===0||originalDivision>2))league=baseLeague;
  if(previousDivision===0)previousDivision=maxDivision(league);
  let division=previousDivision;
  if(rng.below(100)<31||previousDivision<1){
   if(rng.below(100)<20&&previousDivision<4)division=(previousDivision-1)|0;
   else if(previousDivision<1||maxDivision(league)<=previousDivision)division=maxDivision(league);
   else division=(previousDivision+1)|0;
  }
  if(division===0)division=1;if(division<0)division=maxDivision(league);division=Math.min(division,maxDivision(league));
  do{
   const position=mode===2?(division===4?(c.getInt32(0x50,true)===1?15-rng.below(10):12-rng.below(6)):20-rng.below(11)):10-rng.below(7),id=clubAt(league,division,position),club=view(record(save,'clubs',id));
   const activeManager=view(record(save,'records_0066b718',c.getInt32(0x10,true)));
   if(club.getUint8(0x39)===0&&id!==activeManager.getInt32(0x20,true)&&!offers.includes(id))offers[slot]=id;
  }while(offers[slot]<0);
 }
}
