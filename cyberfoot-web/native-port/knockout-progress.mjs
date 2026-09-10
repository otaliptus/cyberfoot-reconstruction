import {record} from './save-format.mjs';import {appendRows} from './match-records.mjs';import {findLeagueConfiguration} from './weekly-team.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original 006490a8. */
export function recordCompetitionFinish(save,clubId,round,competition,result){return appendRows(save,'records_0066b114',[[clubId,view(save.career).getInt32(0xc0,true),competition,round,result]]);}
/** Original 0061dec8. */
export function eliminateKnockoutLoser(save,fixtureId,winner){
 const fixture=view(record(save,'records_0066afa0',fixtureId)),home=fixture.getInt32(0,true),away=fixture.getInt32(4,true),loser=winner===home?away:winner===away?home:-1;
 if(loser===-1)return;const career=view(save.career),competition=career.getInt32(0x88,true),config={2:[0x214,0x110],4:[0x217,0x194],6:[0x218,0x1a0]}[competition];if(!config)return;
 view(record(save,'clubs',loser)).setUint8(config[0],0);let round=career.getInt32(config[1],true);if(competition===2&&round===1)round=0;
 recordCompetitionFinish(save,loser,round,competition,-1);
}
/** Original 00622ec8. The second competition-4 table overwrites the first. */
export function applyKnockoutOutcome(save,competition,round,loserId,winnerId){
 const winner=view(record(save,'clubs',winnerId)),loser=view(record(save,'clubs',loserId));
 const [gain,loss]=competition===4?({4:[5,7],5:[7,5],6:[10,2],7:[12,1]}[round]??[0,0]):competition===2?({1:[3,7],2:[5,5],3:[7,2],4:[10,1],5:[12,1]}[round]??[0,0]):[0,0];
 const add=(v,o,n)=>v.setInt32(o,(v.getInt32(o,true)+n)|0,true);
 if(findLeagueConfiguration(save,winner.getInt32(0x3c,true))>=0){add(winner,0x54,gain);add(winner,0x50,gain-3);}
 if(findLeagueConfiguration(save,loser.getInt32(0x3c,true))>=0){add(loser,0x54,-loss-3);add(loser,0x50,-loss);}
 for(const o of [0x54,0x50])if(winner.getInt32(o,true)>100)winner.setInt32(o,100,true);
 for(const o of [0x54,0x50])if(loser.getInt32(o,true)<0)loser.setInt32(o,0,true);
}
/** Original 0065a250. */
export function findKnockoutRound(save,subgroup,competition,round){const section=save.sections.find(s=>s.name==='records_0066afa0'),v=view(section.data);for(let i=0;i<section.count;i++)if(v.getInt32(i*72+0x18,true)===competition&&v.getInt32(i*72+0x38,true)===subgroup&&v.getInt32(i*72+0x1c,true)===round)return i;return -1;}
