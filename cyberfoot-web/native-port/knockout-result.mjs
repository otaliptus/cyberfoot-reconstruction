/** Original 0061edd0. Result 1/2 names the first-leg home/away club; 3 requires a decider. */
export function resolveTwoLegResult({firstLeg,secondLeg,competition,round,rankingTieBreak=false,clubRanks}) {
 const [home,away]=firstLeg,[returnHome,returnAway]=secondLeg;
 const winsHome=Number(home>away)+Number(returnAway>returnHome),winsAway=Number(away>home)+Number(returnHome>returnAway);
 if(winsHome!==winsAway)return winsHome>winsAway?1:2;
 const totalHome=(home+returnAway)|0,totalAway=(away+returnHome)|0;
 if(totalHome!==totalAway)return totalHome>totalAway?1:2;
 if(competition!==3){
  const result=returnAway===away?3:returnAway>away?1:2;
  return competition===4&&round>=7?3:result;
 }
 if(rankingTieBreak){
  if(!clubRanks||clubRanks.length!==2)throw Error('Original ranking tiebreak requires both club field 0x1b0 values');
  return clubRanks[0]<clubRanks[1]?1:2;
 }
 return 3;
}
