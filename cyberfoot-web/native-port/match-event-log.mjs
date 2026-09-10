import {matchMinute} from './match-score-plan.mjs';
/** 00605e40. The original filters by the two club IDs, not the fixture ID,
 * preserves event-array order, and displays the first 15 matching events.
 */
export function matchEventLog(events,fixture,state,language,{fullGameGauge=false}={}){
 const rows=[],score=[0,0];let count=0;
 for(const [type,clubId,playerId,detail,tick] of events){
  if(!fixture.clubs.includes(clubId))continue;
  const side=clubId===fixture.clubs[0]?0:1,goal=[4,8,14,15].includes(type);
  if(goal)score[side]++;
  count++;if(count>15)continue;
  const name=state.players[playerId].name,minute=matchMinute(tick,fullGameGauge);
  let text=goal?`${score[0]}x${score[1]} - ${name} - ${minute}'`:[19,20].includes(type)?`(${name}) ${state.players[detail].name} ${minute}'`:`${name} ${minute}'`;
  if(!fullGameGauge)text+=tick<93?' - 1º':' - 2º';
  const suffix={8:510,14:512,15:511,16:513}[type];if(suffix!==undefined)text+=' '+language[suffix].text;
  const icon=[4,14,15].includes(type)?'i_gol':[8,16].includes(type)?'i_golv':type===13?({1:'i_ca',2:'i_cv',3:'i_cacv'}[detail]??''):type===18?'i_ct':[19,20].includes(type)?'i_sub':'';
  rows.push({align:side?'right':'left',icon,text});
 }
 const html=rows.map(row=>{const image=`<IMG src="${row.icon}">`;return `<P align="${row.align}"><FONT color="#DFDF00"  size="8" face="Arial"><B>${row.align==='left'?image:''}<shad>${row.text} </shad>${row.align==='right'?image:''}</b></font></p>`;}).join('')+(count>=16?'<FONT color="#DFDF00">...</font>':'');
 return {rows,truncated:count>=16,html};
}
