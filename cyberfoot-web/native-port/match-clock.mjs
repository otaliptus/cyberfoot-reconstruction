/** Original 00607e20: age-dependent stamina loss, including keeper timing. */
export function fatigue(lineup,tick,state){
 for(let i=0;i<11;i++){
  const player=state.players[lineup.players[i]];if(!player.active)continue;
  if(lineup.positions[i]!==1||tick>90){
   const age=player.age;
   const loss=age>=1&&age<27?1:age>=27&&age<34?2:age>=34&&age<37?3:age>=37&&age<43?4:age>=43&&age<56?5:age>=56&&age<61?6:age>=61&&age<71?7:age>=71&&age<81?8:age>=81&&age<91?9:age>=91&&age<1001?10:0;
   player.condition=(player.condition-loss)|0;
  }
  if(player.veteranFlag&&player.age>33)player.condition=(player.condition+1)|0;
  player.condition=Math.max(1,Math.min(100,player.condition));
 }
}
/** Original 00609b64 sets the regulation end tick at tick 180. */
export function regulationEndTick(redCards,rng){return Math.min(190,184+rng.below(4)+(redCards[0]+redCards[1])*2);}
