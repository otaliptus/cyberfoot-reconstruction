import {multiplyRound,nearestEven} from './x87.mjs';
/** 00657978, matching player in either event player/detail field. No fixture filter. */
export function playerRatingEvents(playerId,events){
 const counts=[0,0,0,0,0];let duration=-1,substitute=false;
 for(const [type,_club,player,detail,tick] of events){
  if(playerId!==player&&playerId!==detail)continue;
  if(type===4||type===14||type===15)counts[0]++;else if(type===8)counts[1]++;else if(type===16)counts[2]++;
  if(type===13)counts[detail===1?3:4]++;
  if(type===19){if(duration===-1){if(playerId===player)duration=tick;else if(playerId===detail){duration=(182-tick)|0;substitute=true;}}
   else if(duration>=0&&substitute&&playerId===player)duration=(tick-duration)|0;}
 }
 return [...counts,duration===-1?182:duration];
}
/** 00657ac8, five original incident totals, with the fifth intentionally zero. */
export function playerIncidentCounts(playerId,events){
 const counts=[0,0,0,0,0];for(const [type,_club,player,detail] of events)if(player===playerId){if(type===13&&detail>=1&&detail<=3)counts[detail-1]++;if(type===18)counts[3]++;}return counts;
}
const defaultPositions=[1,2,7,15,23],positionRoles=[0,1,2,2,2,2,2,2,1,1,3,3,3,3,3,3,1,4,4,4,4,4,4,4,4];
/** 00657b68. Original local Single storage rounds every update to binary32. */
export function playerMatchRating(playerId,fixture,clubId,position,state,rng){
 const p=state.players[playerId],c=fixture.counters,side=fixture.clubs[0]===clubId?1:2,other=3-side,get=(base,s)=>(c[base+s*4]??0),scored=get(0x44,side),conceded=get(0x44,other);
 if(position===-1)position=defaultPositions[p.role];
 if(!Number.isInteger(position)||position<1||position>25)throw RangeError('Original rating position outside1..25');
 let rating=5;const add=n=>{rating=Math.fround(rating+n);},skill=p.skill;
 const tier=skill>=1&&skill<=30?0:skill<=60&&skill>=31?1:skill<=90&&skill>=61?2:skill<=100&&skill>=91?3:-1;
 if(tier>=0)rating=(scored>conceded?[5,5.5,6,6]:scored<conceded?[4,4.5,5,5.5]:[5,5,6,6])[tier];
 if(p.role===0)rating=4.5;if(p.role!==positionRoles[position-1])add(-1.5);
 if(position>9&&position<18){
  if(get(0x84,side)>get(0x84,other)){add(rng.below(3)===1?.5:1);if(position>13)add(rng.below(3)===1?1:.5);if(p.specialty===0)add(.5);}
  else if(get(0x84,side)<get(0x84,other)){add(rng.below(3)===1?-1:-.5);if(p.specialty===0)add(-.5);}
 }
 add(p.careerGoals*.5);
 const defence=position>0&&position<14,centre=position>2&&position<9,midfield=position>10&&position<14;
 if(defence){
  if(get(0x94,side)>get(0x94,other)){add(rng.below(3)===1?1:.5);if(rng.below(4)===1&&centre)add(.5);if(rng.below(4)===1&&midfield)add(.5);}
  else if(get(0x94,side)<get(0x94,other)){add(-.5);if(rng.below(4)===1&&centre)add(-.5);if(rng.below(4)===1&&midfield)add(-.5);}
 }
 const shotsAgainst=get(0x8c,other);
 if(position===1){
  add(((shotsAgainst-conceded)|0)>Number(nearestEven(BigInt(shotsAgainst),2n))?1:-1);
  if(conceded>=5)add(-3);else if(conceded>=4)add(-2.5);else if(conceded>=2)add(-1);else if(conceded===1)add(-.5);else if(conceded===0)add(1);
  if(shotsAgainst<5)add(-1);if(shotsAgainst>5&&conceded<2)add(rng.below(3)===1?1:.5);
 }
 if(position>=14&&position<=25){
  for(const coefficient of [['14757395258967641293',-67],['14757395258967641293',-68]]){
   if(scored<multiplyRound(get(0x8c,side),coefficient)){add(-1);if(rng.below(3)===1&&position>17)add(-.5);}
  }
 }
 if(defence){
  if(conceded===0){add(.5);if(rng.below(3)===1&&centre)add(.5);if(rng.below(3)===1&&midfield)add(.5);}
  else if(conceded>0){add(-conceded*.5);if(rng.below(3)===1&&centre)add(-.5);if(rng.below(3)===1&&midfield)add(-.5);}
 }
 const [goals,ownGoals,misses,yellows,reds,duration]=playerRatingEvents(playerId,state.events);
 for(const n of [goals,-ownGoals,-misses,-yellows,-((reds*2)|0),2])add(n);
 if(rating<6&&rng.below(11)===1)rating=8;if(rating<5)rating=rng.below(2)+3;
 if(position===1){if(shotsAgainst<3)rating=rng.below(3)+5;if(shotsAgainst>15&&conceded<4)rating=rng.below(3)+6;if(shotsAgainst>20&&conceded<2)rating=rng.below(4)+6;if(shotsAgainst>20&&conceded===0)rating=rng.below(4)+7;}
 if(rating>=10)rating=rng.below(8)===1?10:rng.below(2)+8;
 if(duration<30&&goals===0)rating=0;else if(duration<60)add(-1);
 return rating;
}

const ratingRoles=[0,5,2,2,2,2,2,2,1,5,7,7,7,3,3,3,1,4,4,4,4,4,4,4,4];
/** 006428ac eligibility for competition rating aggregates. */
export function ratingPositionEligible(player,position){
 const role=player.role,foot=player.field2c;
 if(role===0&&position!==1)return false;
 if(role===1&&foot===0&&position!==9&&position!==17)return false;
 if(role===1&&foot===1&&position!==2&&position!==10)return false;
 if(role===2&&(position<3||position>8))return false;
 if(role===3&&(position<10||position>17))return false;
 if(role===4&&position<18)return false;
 return true;
}
/** 006428ac. Update every duplicate original player/competition row, as written. */
export function accumulatePlayerRating(rows,playerId,competition,position,rating,player){
 if(!ratingPositionEligible(player,position))return false;
 let found=false;rating=Math.fround(rating);
 for(const row of rows)if(row.playerId===playerId&&row.competition===competition){row.total=Math.fround(row.total+rating);row.count=Math.fround(row.count+1);found=true;}
 if(!found){
  let role=ratingRoles[position-1];if(role===undefined)throw RangeError('Original rating aggregate position outside1..25');
  if(role===3&&player.specialty===0)role=7;if(role===3&&player.specialty===1)role=3;
  if((role===5||role===1)&&player.role===3)role=3;
  rows.push({playerId,clubId:player.clubId,competition,total:rating,count:1,role});
 }
 return true;
}
