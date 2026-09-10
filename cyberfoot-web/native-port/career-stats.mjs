/** Native 00650548. Array rows retain original integer field order.
 * Required context: season, competitionType, currentDate (Delphi date),
 * player record fields, clubs, scorer/appearance/season arrays, notifications.
 */
export function updatePlayerStats(id,clubId,competition,event,state,rng){
 const p=state.players[id],add=(key,n=1)=>{p[key]=((p[key]??0)+n)|0;};
 function countRow(rows){const row=rows.find(r=>r[0]===id&&r[2]===competition);if(row)row[1]=(row[1]+1)|0;else rows.push([id,1,competition,clubId]);}
 if(event==='gol'){add('careerGoals');countRow(state.scorers);}
 if(event==='j')countRow(state.appearances);
 const field={gol:1,ca:2,cv:3,j:4,ct:5}[event];
 if(field!==undefined){
  let row=state.playerSeasonStats.find(r=>r[0]===id&&r[6]===state.season&&r[7]===clubId);
  if(!row){row=[id,0,0,0,0,0,state.season,clubId];state.playerSeasonStats.push(row);}row[field]=(row[field]+1)|0;
 }
 if(event==='j')add('seasonAppearances');
 if(event==='gol')add('seasonGoals');
 if(event==='ca'||event==='cv')add('seasonCards');
 if(event==='cv'){
  const n=rng.below(35),ban=n===0?10:n<3?5:n<6?3:n<16?2:1;
  if(state.clubs[p.clubId].human&&ban>1)state.notifications.push([p.clubId,1,ban,0,0,id]);
  p.suspensions[state.competitionType]=(p.suspensions[state.competitionType]+ban)|0;
 }
 if(event==='ca')p.yellowCounts[state.competitionType]=(p.yellowCounts[state.competitionType]+1)|0;
 if(event==='ct'){
  let weeks=p.condition<50?1:0;const age=p.age;
  if(age>=0&&age<26)weeks++;
  else if(age>=26&&age<31)weeks+=rng.below(3)+1;
  else if(age>=31&&age<36)weeks+=rng.below(3)+2;
  else if(age>=36&&age<41)weeks+=rng.below(4)+3;
  else if(age>=41&&age<51)weeks+=rng.below(4)+4;
  else if(age>=51&&age<61)weeks+=rng.below(4)+5;
  else if(age>=61&&age<1201)weeks+=rng.below(4)+6;
  const loss=age>=16&&age<21?2:age>=21&&age<26?3:age>=26&&age<31?4:age>=31&&age<36?5:age>=36&&age<41?7:age>=61&&age<1201?10:0;
  p.skill=Math.max(1,(p.skill-loss)|0);
  if(p.trait1===12)p.skill=(p.skill+2)|0;else if(p.trait2===12)p.skill=(p.skill+1)|0;
  if(weeks>1&&p.trait1===12)weeks--;
  if(rng.below(300)===1)weeks=rng.below(6)+15;
  if(weeks>0){if(!Number.isFinite(state.currentDate))throw Error('Original calendar date required for injury recovery.');p.injuryUntil=state.currentDate+weeks*7+2;}
  if((state.competitionType<7||state.competitionType===10)&&state.clubs[p.clubId].human&&weeks>1)state.notifications.push([p.clubId,3,weeks,0,0,id]);
 }
}
/** Business effects of 0060cfa8 and event row 006427a8. Debug Portuguese log
 * rendering is separate; the original stores raw ticks in event records.
 */
export function recordCareerEvent(side,id,fixture,detail,type,state,rng,writeStats=updatePlayerStats){
 const club=fixture.clubs[side-1];
 if((type===4&&state.players[id].clubId===club)||type===14||type===15)writeStats(id,club,fixture.competition,'gol',state,rng);
 if(type===13)writeStats(id,club,fixture.competition,detail===1?'ca':'cv',state,rng);
 if(type===18)writeStats(id,club,fixture.competition,'ct',state,rng);
 const recordType=type===4&&state.players[id].clubId!==club?8:type;
 let index=state.events.length;state.events.push([recordType,club,id,detail,fixture.tick,fixture.id]);
 if(type===18&&detail>0){index=state.events.length;state.events.push([20,club,id,detail,fixture.tick,fixture.id]);}
 return index;
}
