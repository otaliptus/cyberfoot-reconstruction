import {record} from './save-format.mjs';import {updateManagerStatistic} from './match-records.mjs';import {appendNotification} from './notifications.mjs';import {currentCareerDate} from './calendar.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** 0061cdb4. Updates original competition tables and manager outcomes.
 * Competition3's scheduling-table entry comes from the active fixture context.
 */
export function applyCompetitionResult(save,fixture,{competition3TableValue,rng,managerStatistic=(...args)=>updateManagerStatistic(save,...args),notify=(...args)=>appendNotification(save,currentCareerDate(save),rng,...args)}={}){
 const career=view(save.career),competition=career.getInt32(0x88,true),ids=fixture.clubs,clubs=ids.map(id=>view(record(save,'clubs',id)));
 if(competition===3&&!Number.isInteger(competition3TableValue))throw Error('Original competition3 scheduling entry is required.');
 const get=(i,off)=>clubs[i].getInt32(off,true),put=(i,off,n)=>clubs[i].setInt32(off,n,true),inc=(i,off,n)=>put(i,off,(get(i,off)+n)|0);
 const call=(i,n,kind)=>managerStatistic(get(i,0x44),ids[i],n,kind),valid=i=>get(i,0x44)>=0;
 const home=fixture.counters[0x48]??0,away=fixture.counters[0x4c]??0,draw=home===away,winner=home>away?0:1,loser=1-winner;
 for(let i=0;i<2;i++)if(valid(i))call(i,1,'j');
 if(competition>6&&competition<10){
  if(!draw){if(valid(winner)){call(winner,5,'pr');call(winner,1,'v');}if(valid(loser))call(loser,1,'d');}
  else{if(valid(1))call(1,2,'pr');if(valid(0))call(0,2,'pr');}
 }
 const table=[1,3,4,6].includes(competition)||competition>6;
 if(table&&(competition!==3||competition3TableValue<0)&&(competition!==4||career.getInt32(0x194,true)<4)&&(competition!==6||career.getInt32(0x1a0,true)<4)&&(competition<7||career.getInt32(0x62c,true)<4)){
  const c=competition*4;
  if(draw){inc(0,0xb4+c,1);inc(0,0xdc+c,1);inc(1,0xb4+c,1);inc(1,0xdc+c,1);}
  else{inc(winner,0xb4+c,3);inc(winner,0x104+c,1);inc(winner,0xdc+c,1);inc(loser,0x12c+c,1);inc(loser,0xdc+c,1);}
  inc(0,0x154+c,home);inc(0,0x17c+c,away);inc(1,0x154+c,away);inc(1,0x17c+c,home);
  if(draw){put(0,0x1cc,0);put(1,0x1cc,0);}else{put(winner,0x1cc,1);put(loser,0x1cc,2);}
 }
 const winLose=()=>{call(winner,1,'v');call(loser,1,'d');};
 if(competition===1){
  if(draw){const a=get(0,0x7c),b=get(1,0x7c);if(a>=1&&a<=3)call(0,4-a,'pr');if(b>=1&&b<=4)call(1,5-b,'pr');}
  else{const category=get(winner,0x7c);if(category>=1&&category<=4)call(winner,6-category,'pr');winLose();}
 }else if(competition===2){
  if(!draw){const category=get(loser,0x7c);if(category>=1&&category<=4)call(winner,5,'pr');winLose();}
  else{call(1,2,'pr');call(0,2,'pr');}
 }else if(competition===3){
  if(draw){for(let i=0;i<2;i++){const category=get(i,0x80);if(category===1||category===2)call(i,3-category,'pr');}}
  else{const category=get(winner,0x80);if(category>=1&&category<=4)call(winner,category===1?3:category===2?2:1,'pr');winLose();}
 }else if(competition===4||competition===6){
  if(draw){put(0,0x1cc,0);put(1,0x1cc,0);call(0,3,'pr');call(1,competition===4?4:2,'pr');}
  else{put(winner,0x1cc,1);put(loser,0x1cc,2);call(winner,competition===4?5:4,'pr');winLose();}
 }
 const homeDeficit=(away-home)|0,awayDeficit=(home-away)|0;
 if(homeDeficit>3&&clubs[0].getUint8(0x39)){notify(ids[0],4,0,0,0,0);put(0,0x238,homeDeficit===4?1:homeDeficit===5?2:homeDeficit===6?3:4);}
 if(awayDeficit>4&&clubs[1].getUint8(0x39)){notify(ids[1],4,0,0,0,0);put(0,0x238,awayDeficit===5?1:awayDeficit===6?2:3);}
}
