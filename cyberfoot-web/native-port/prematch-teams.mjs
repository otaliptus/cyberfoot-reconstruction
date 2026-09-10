import {record} from './save-format.mjs';
import {generateAILineup} from './ai-lineup.mjs';
import {randomizeAITactics} from './tactics.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);

/** 4e1a98 league/cup branches. Order includes clubs outside the visible batch;
 * human lineups already committed by Form87 must survive this pass. */
export function prepareDomesticTeams(save,state,rng,{generate=generateAILineup,tactics=randomizeAITactics}={}){
 const career=view(save.career),competition=career.getInt32(0x88,true);
 if(competition!==1&&competition!==2)throw RangeError('Domestic team preparation requires league or cup competition.');
 const initialLineupCount=state.lineups?.length??0,prepared=[];
 for(let id=0;id<career.getInt32(0x3c,true);id++){
  const club=view(record(save,'clubs',id));
  if(club.getUint8(0x39)!==0)continue;
  if(competition===1?club.getInt32(0x7c,true)<=0:club.getUint8(0x214)===0)continue;
  generate(state,id,rng);tactics(state.clubs[id],rng);prepared.push(id);
 }
 // Original 4e1a14 excludes sentinel player zero, then 4e1988 includes it.
 const players=save.sections.find(s=>s.name==='players');
 for(let id=1;id<players.count;id++){
  const p=view(record(save,'players',id));if(p.getInt32(0x20,true)<0)continue;
  p.setUint8(0x85,0);p.setInt32(0x28,Math.max(1,Math.min(100,p.getInt32(0x28,true))),true);
  p.setInt32(0x18,Math.max(16,Math.min(70,p.getInt32(0x18,true))),true);
 }
 for(let id=0;id<players.count;id++){
  const p=view(record(save,'players',id));if(p.getInt32(0x20,true)<0)continue;
  const suspension=0xb8+competition*4,yellows=0x8c+competition*4;
  if(p.getInt32(suspension,true)>0)p.setInt32(suspension,p.getInt32(suspension,true)-1,true);
  if(p.getInt32(yellows,true)>2)p.setInt32(yellows,0,true);
 }
 return {initialLineupCount,prepared};
}
