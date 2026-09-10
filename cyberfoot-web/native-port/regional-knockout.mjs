import {record,shortString} from './save-format.mjs';
import {regionalFormats} from './regional-formats.mjs';
import {findKnockoutRound} from './knockout-progress.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original 005ae860. Penalty captions are independent of the played flag. */
export function regionalKnockoutFixtureRow(save,fixtureId){
 const f=view(record(save,'records_0066afa0',fixtureId)),get=o=>f.getInt32(o,true),homeId=get(0),awayId=get(4),played=f.getUint8(0x2c)!==0;
 const home=shortString(record(save,'clubs',homeId),0,25);let away=shortString(record(save,'clubs',awayId),0,25);
 if(get(0x10)>0)away=(away+' (P:').slice(0,29)+get(0x10)+'x'+get(0x14)+')';
 return {fixtureId,homeId,awayId,home,away,homeScore:played?String(get(8)):'',awayScore:played?String(get(12)):''};
}
/** Original 005aedfc placeholder pairings and consecutive fixture overrides. */
export function regionalKnockoutData(save,subgroup){
 const region=view(record(save,'records_0066ae98',subgroup)),formatId=region.getInt32(0x530,true),panels=regionalKnockoutLayout(formatId,region.getInt32(0x510,true)),format=regionalFormats[formatId-1];
 const blank=()=>({home:'',away:'',homeScore:'',awayScore:'',label:''}),rows=panels.map(()=>Array.from({length:8},blank));
 const pair=(p,i,home,away)=>Object.assign(rows[p][i],{home,away});
 const q=panels[0].legs,s=panels[1].legs;
 if(format[1]>1){
  const a=formatId===7?['4º Grupo B','3º Grupo B','2º Grupo B','1º Grupo B']:['1º Grupo A','1º Grupo D','1º Grupo B','1º Grupo C'];
  const b=formatId===7?['1º Grupo A','2º Grupo A','3º Grupo A','4º Grupo A']:['2º Grupo D','2º Grupo A','2º Grupo C','2º Grupo B'];
  for(let i=0;i<4;i++){pair(0,q===1?i:i*2,a[i],b[i]);pair(0,q===1?i+4:i*2+1,b[i],a[i]);}
 }else if(q===1){for(let i=0;i<4;i++){pair(0,i,(i+5)+'º',(i+1)+'º');pair(0,i+4,(i+1)+'º',(i+5)+'º');}}
 else if(q>1){for(let i=0;i<4;i++){pair(0,i*2,(i+1)+'º',(i+5)+'º');pair(0,i*2+1,(i+5)+'º',(i+1)+'º');}}
 for(const [i,a,b] of [[0,'Vencedor Q4','Vencedor Q1'],[1,'Vencedor Q2','Vencedor Q3']]){pair(1,s===1?i:i*2,a,b);if(s!==1)pair(1,i*2+1,b,a);}
 pair(2,0,'Vencedor S1','Vencedor S2');pair(2,1,'Vencedor S2','Vencedor S1');
 if(q<1){pair(1,0,'4º colocado','1º colocado');pair(1,1,'1º colocado','4º colocado');pair(1,2,'3º colocado','2º colocado');pair(1,3,'2º colocado','3º colocado');}
 if(s<1){pair(2,0,'2º colocado','1º colocado');pair(2,1,'1º colocado','2º colocado');}
 for(let p=0;p<3;p++){
  const panel=panels[p],first=findKnockoutRound(save,subgroup,3,[401,201,101][p]);
  for(let i=0;i<panel.rowCount;i++){
   if(p<2&&(panel.legs===1||i%2===0))rows[p][i].label=(p===0?'Q':'S')+(Math.floor(i/panel.legs)+1);
   if(first>=0)Object.assign(rows[p][i],regionalKnockoutFixtureRow(save,first+i));
  }
  panel.title=['Quartas de Final','Semi-Final','Final'][p]+' - '+(panel.legs===2?'2 jogos':'Jogo único');
  // The original hides the single-leg final row; current formats all use two.
  panel.rows=rows[p].slice(0,panel.rowCount).map(row=>({...row,visible:!(p===2&&panel.legs===1)}));
 }
 return panels;
}
/** Panel geometry from 005aedfc. Hidden panels retain original bounds. */
export function regionalKnockoutLayout(formatId,divisions){
 const format=regionalFormats[formatId-1];if(!format)throw Error('Unknown original regional format '+formatId);
 const legs=format.slice(7,10),heights=[legs[0]===1?140:170,legs[1]===1?60:98,legs[2]===1?66:82];
 let xs,ys,width=355;
 if(legs[0]<1){
  const x=divisions<2||formatId===1?232:22;xs=[22,x,x];
  if(formatId===1){const top=divisions<3?250:390;ys=[divisions<3?180:420,top,legs[1]<1?(divisions<3?280:400):top+heights[1]];}
  else ys=[370,370,370+heights[1]];
  if(formatId===3){ys[1]=410;ys[2]=405+heights[1];heights[2]=62;}
 }else{
  xs=[22,401,401];width=380;const top=formatId===2?380:formatId===4?410:390;ys=[top,top,top+heights[1]];
  if(formatId===4){heights[0]=155;heights[2]=62;ys[2]=405+heights[1];}
  if(legs[0]>1)heights[2]=72;
 }
 return ['quarterFinal','semiFinal','final'].map((stage,i)=>({stage,legs:legs[i],visible:legs[i]>0,rowCount:legs[i]>0?[4,2,1][i]*legs[i]:0,bounds:{x:xs[i],y:ys[i],width,height:heights[i]}}));
}
