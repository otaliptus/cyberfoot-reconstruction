/** 4e2a64: computer-club tactical choices use three draws in this order. */
export function randomizeAITactics(club,rng){
 let draw=rng.below(100);club.playStyle=draw<70?0:draw<80?1:2;
 draw=rng.below(100);club.marking=draw<5?2:draw<70?0:1;
 draw=rng.below(100);club.attackFocus=draw<70?0:1;
 return club;
}
/** Original Form87 combo handlers write the selected indices immediately. */
export function setTactic(club,control,index){
 const field={comboej:'playStyle',combomarc:'marking',combo_cataq:'attackFocus'}[control];
 if(!field)throw RangeError('Unknown original tactical control.');club[field]=index|0;
}
export function tacticalControlProperties(club,language){
 const labels=ids=>ids.map(id=>language[id].text);
 return {
  Lab2:{Caption:language[283].text},lab3:{Caption:language[284].text},Lab4:{Caption:language[285].text},
  comboej:{Items:labels([290,291,292]),ItemIndex:club.playStyle},
  combomarc:{Items:labels([293,294,295]),ItemIndex:club.marking},
  combo_cataq:{Items:labels([296,297]),ItemIndex:club.attackFocus}
 };
}
