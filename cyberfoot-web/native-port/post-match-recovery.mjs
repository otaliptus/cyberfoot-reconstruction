import {record} from './save-format.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original 61dc50: recovery depends on selection, age, position, and club control. */
export function recoverPlayerAfterMatch(save,playerId,rng){
 const p=view(record(save,'players',playerId)),age=p.getInt32(0x18,true),selected=p.getUint8(0x7c)!==0,keeper=p.getInt32(0x24,true)===0;
 const bands=selected?[[27,10,5],[34,20,10],[46,30,14],[56,40,18],[171,50,20]]:[[26,55],[36,40],[46,30],[56,20],[71,10],[171,5]];
 let amount=0;if(age>=0){const band=bands.find(b=>age<b[0]);if(band)amount=selected&&keeper?band[2]:band[1];}
 let condition=(p.getInt32(0x78,true)+amount)|0;
 if(p.getUint8(0x15))condition=(condition+3)|0;
 if(!view(record(save,'clubs',p.getInt32(0x20,true))).getUint8(0x39)&&condition<30)condition=rng.below(20)+20;
 if(view(save.career).getInt32(0x88,true)===0)condition=(condition+5)|0;
 if(condition>100)condition=100;if(condition<0)condition=5;
 p.setInt32(0x78,condition,true);p.setUint8(0x7c,0);
 return condition;
}
/** Original 621e48 skips player record zero and visits both clubs in player-record order. */
export function recoverFixturePlayers(save,fixture,rng){
 const players=save.sections.find(s=>s.name==='players'),v=view(players.data),ids=[];
 for(let id=1;id<players.count;id++){const club=v.getInt32(id*304+0x20,true);if(club>=0&&fixture.clubs.includes(club)){recoverPlayerAfterMatch(save,id,rng);ids.push(id);}}
 return ids;
}
