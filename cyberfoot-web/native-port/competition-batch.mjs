import {record} from './save-format.mjs';import {findKnockoutRound} from './knockout-progress.mjs';import {findCompetitionMetadata} from './champion-records.mjs';import {countryGroups} from './score-tables.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const watched=l=>l.getUint8(0x290)!==0||l.getUint8(0x14c)!==0;
export function preferredLeagueBatch(save,preferred){const leagues=save.sections.find(s=>s.name==='records_0066aca0');for(let i=0;i<leagues.count;i++)if(watched(view(record(save,leagues.name,i))))return -1;return preferred>=0&&preferred<leagues.count?preferred:0;}
export function preferredCupBatch(save,preferred){const career=view(save.career),round=career.getInt32(0x110,true),leagues=save.sections.find(s=>s.name==='records_0066aca0');for(let i=0;i<leagues.count;i++){const l=view(record(save,leagues.name,i));if(round===0&&l.getInt32(0x140,true)===29&&findKnockoutRound(save,i,2,0)>=0)return -1;if(round===1&&watched(l)&&findKnockoutRound(save,i,2,1)>=0)return -1;if(round>1&&watched(l))return -1;}
 if(round===1){if(preferred>=0&&preferred<leagues.count&&findKnockoutRound(save,preferred,2,1)>=0)return preferred;for(let i=0;i<leagues.count;i++)if(findKnockoutRound(save,i,2,1)>=0)return i;}
 if(round>1)return preferred>=0&&preferred<leagues.count?preferred:0;return -1;}
export function hasHumanContinentalClub(save,region){const c=view(save.career);for(let i=0;i<c.getInt32(0x13c,true);i++){const id=c.getInt32(0x140+i*4,true);if(id<0)continue;const club=view(record(save,'clubs',id));if(club.getUint8(0x217)!==0&&(countryGroups[club.getInt32(0x3c,true)]??0)===region)return true;}return false;}
export function lastLeagueChampion(save,country){const id=findCompetitionMetadata(save,{competition:1,country,division:1}),s=save.sections.find(s=>s.name==='records_0066b058'),v=view(s.data);for(let i=s.count-1;i>=0;i--)if(v.getInt32(i*20+4,true)===id&&v.getInt32(i*20+12,true)===1)return v.getInt32(i*20+8,true);return -1;}
/** Original 006225c8 control flow. Effects must be connected to their real preparation/UI controllers. */
export async function routeCompetitionBatch(save,runtime,effect,selectors={cup:preferredCupBatch,league:preferredLeagueBatch,human:hasHumanContinentalClub,champion:lastLeagueChampion}){
 if(typeof effect!=='function')throw Error('Competition batch effects controller required');const c=view(save.career),competition=c.getInt32(0x88,true),leagues=save.sections.find(s=>s.name==='records_0066aca0');let limit=leagues.count,cup=-1,league=-1;runtime.showMatch=false;runtime.eventCursor=0;
 if(competition===2&&[0,1].includes(c.getInt32(0x110,true)))while(runtime.subgroup<limit&&findKnockoutRound(save,runtime.subgroup,2,c.getInt32(0x110,true))<0)runtime.subgroup++;
 if(competition===2){cup=selectors.cup(save,runtime.preferredLeague);if(cup<runtime.subgroup)cup=-1;}
 if(competition===1){league=selectors.league(save,runtime.preferredLeague);if(league<runtime.subgroup)league=-1;if(runtime.subgroup<limit)runtime.previousChampion=selectors.champion(save,view(record(save,leagues.name,runtime.subgroup)).getInt32(0x140,true));}
 if(competition===1||competition===2){if(runtime.subgroup<limit){const l=view(record(save,leagues.name,runtime.subgroup));runtime.showMatch=watched(l)||cup===runtime.subgroup||league===runtime.subgroup;}
  if(competition===2&&runtime.subgroup<limit&&c.getInt32(0x110,true)===0&&view(record(save,leagues.name,runtime.subgroup)).getInt32(0x140,true)===29)runtime.showMatch=true;
 }else if(competition===4||competition===6)runtime.showMatch=true;
 if(competition===6&&runtime.subgroup===1){if(typeof runtime.currentDate!=='number')throw Error('Original current calendar date required');const s=save.sections.find(s=>s.name==='records_0066afa0'),f=view(s.data);let found=false;for(let i=0;i<s.count;i++)if(f.getInt32(i*72+0x38,true)===1&&f.getInt32(i*72+0x18,true)===6&&f.getFloat64(i*72+0x30,true)===runtime.currentDate&&f.getUint8(i*72+0x2c)===0){found=true;break;}if(!found){runtime.subgroup++;runtime.alternateCompetition=false;}}
 if(competition===4||competition===6)limit=3;
 if(competition===4){limit=5;if(runtime.subgroup>=1&&runtime.subgroup<=4){if(c.getUint8(0x174+runtime.subgroup)===0)runtime.showMatch=false;if(selectors.human(save,[1,0,2,3][runtime.subgroup-1]))runtime.showMatch=true;}}
 if(runtime.subgroup<limit){
  if(!runtime.showMatch){await effect('reset');runtime.silent=true;await effect('simulate');return 'simulate';}
  runtime.silent=false;await effect('reset');runtime.counterB594=0;runtime.counterAF54=0;runtime.activeMatch=1;runtime.eventCursor=0;runtime.silent=false;runtime.humanFixtures=Array(10).fill(0);await effect('competitionUI',competition);await effect('fixtureUI');if(c.getUint8(0x6c8)!==0)await effect('timerInterval',1);await effect('start');return 'show';
 }
 const get=o=>c.getInt32(o,true),set=(o,n)=>c.setInt32(o,n,true),inc=o=>set(o,(get(o)+1)|0);
 if(competition===1){await effect('results');const end=get(0x168)===4?10:20;inc(0x4c);if(get(0x4c)===end){if(get(0x50)===1){set(0x50,2);set(0x4c,1);}else runtime.leagueFinished=true;}}
 if(competition===2){if(get(0x118)===1)set(0x118,2);else{inc(0x110);set(0x118,1);}}
 if(competition===6&&runtime.subgroup!==1){if(get(0x1a4)===1)set(0x1a4,2);else{if(get(0x1a0)>3)inc(0x1a0);set(0x1a4,1);}if(get(0x1a0)<4){inc(0x1a0);if(get(0x1a0)===4&&get(0x19c)===1){set(0x1a0,1);set(0x19c,2);}}}
 if(competition===4){if(get(0x194)>3){if(get(0x198)===1)set(0x198,2);else{inc(0x194);set(0x198,1);}}if(get(0x194)<4){inc(0x194);if(get(0x194)===4&&get(0x190)===1){set(0x194,1);set(0x190,2);}}}
 await effect('close');return 'complete';
}
/** Original 00621ed0, entered after completing a league/cup batch. */
export async function continueCompetitionBatch(save,runtime,effect,selectors){runtime.subgroup=(runtime.subgroup+1)|0;return routeCompetitionBatch(save,runtime,effect,selectors);}
