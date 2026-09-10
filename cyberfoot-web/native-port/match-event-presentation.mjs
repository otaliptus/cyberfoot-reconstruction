import {matchMinute} from './match-score-plan.mjs';
/** Original 61b828 presentation data. A human sending-off requires a modal controller. */
export function matchEventPresentation(event,fixture,state,language,{silent=false,sound=false,fullGameGauge=false}={}){
 const [type,clubId,playerId,detail,tick]=event,side=fixture.clubs[0]===clubId?1:2,other=3-side;
 let name=state.players[playerId].name;
 if(type===19||type===20)name=`(${name}) ${state.players[detail].name}`;
 const suffix={8:510,14:512,15:511,16:513}[type];if(suffix!==undefined)name+=' '+language[suffix].text;
 const colour=[4,14,15,19].includes(type)?'clwhite':type===13?(detail===1?'clyellow':'clred'):[18,20].includes(type)?'clred':'#DFDF00';
 const icon=[4,14,15].includes(type)?'i_gol':[8,16].includes(type)?'i_golv':type===13?(detail===1?'i_ca':detail===2?'i_cv':'i_cacv'):type===18?'i_ct':[19,20].includes(type)?'i_sub':null;
 const minute=matchMinute(tick,fullGameGauge),bold=side===1,text=`${name} ${minute}'`,sounds=[];
 if(!silent&&sound&&[4,14,8].includes(type)){
  if(state.clubs[fixture.clubs[side-1]].human)sounds.push('gol');
  else if(state.clubs[fixture.clubs[other-1]].human)sounds.push('goladv');
 }
 const redCardPrompt=!silent&&type===13&&detail>1&&state.clubs[clubId].human?{fixtureId:fixture.id,side}:null;
 if(redCardPrompt&&sound)sounds.push('expulsao');
 return {fixtureId:fixture.id,text,colour,bold,icon,minute,html:`<FONT color="${colour}"  size="11" face="Arial"><shad>${bold?'<b>':''}${text}</shad></font>`,score:[fixture.counters[0x48]??0,fixture.counters[0x4c]??0],sounds,redCardPrompt};
}
