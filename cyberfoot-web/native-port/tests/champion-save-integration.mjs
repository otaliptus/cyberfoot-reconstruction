import {readSave,writeSave,record} from '../save-format.mjs';import {advanceTwoLegKnockout} from '../knockout-round.mjs';import {finalizeCupChampion} from '../champion-finalization.mjs';import {findCompetitionMetadata} from '../champion-records.mjs';import {appendRows} from '../match-records.mjs';import {countryGroups} from '../score-tables.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
export async function checkChampionSave(input){const results=[];
 for(const competition of [2,4,6]){
  const save=readSave(input),career=view(save.career),round=competition===2?5:7,ids=[11,4],club=ids.map(id=>view(record(save,'clubs',id))),counts=Object.fromEntries(save.sections.map(s=>[s.name,s.count]));career.setInt32(0x88,competition,true);career.setInt32(0x110,round,true);career.setInt32(0x194,round,true);career.setInt32(0x1a0,round,true);career.setInt32(0x3c,save.sections.find(s=>s.name==='clubs').count,true);
  const fixtures=save.sections.find(s=>s.name==='records_0066afa0');fixtures.data=new Uint8Array(144);fixtures.count=2;const f=view(fixtures.data);
  for(let leg=0;leg<2;leg++){const o=leg*72;f.setInt32(o,ids[leg],true);f.setInt32(o+4,ids[1-leg],true);f.setInt32(o+8,leg?0:3,true);f.setInt32(o+12,leg?1:0,true);f.setInt32(o+0x18,competition,true);f.setInt32(o+0x1c,round,true);f.setInt32(o+0x38,2,true);}
  const metadata=findCompetitionMetadata(save,{competition,country:club[0].getInt32(0x3c,true)});
  for(const name of ['scorers','appearances']){const s=save.sections.find(s=>s.name===name);s.data=new Uint8Array();s.count=0;s.marker=0;}
  appendRows(save,'scorers',[[224,12,metadata,11]]);appendRows(save,'appearances',[[224,20,metadata,11]]);
  const cash=club.map(c=>c.getBigInt64(0x48,true));
  await advanceTwoLegKnockout(save,{subgroup:2,champion:(id,index)=>finalizeCupChampion(save,id,index,{activeSubgroup:2})});
  for(const [name,added] of [['records_0066b058',2],['records_0066b3d0',2],['records_0066b560',1],['records_0066b114',2]])if(save.sections.find(s=>s.name===name).count!==counts[name]+added)throw Error('Champion record count mismatch '+name);
  const base=competition===2?[4000000,2000000]:competition===6?[3000000,1500000]:({0:[7000000,4000000],1:[5000000,3000000],3:[2000000,100000],4:[2000000,1000000]}[countryGroups[club[0].getInt32(0x3c,true)]??0]??[0,0]);
  const prizes=[base[0]+(competition===2?1000000:0),base[1]];
  for(let i=0;i<2;i++){if(club[i].getBigInt64(0x48,true)!==cash[i]+BigInt(prizes[i])*10000n)throw Error('Champion prize mismatch');if(club[i].getUint8(competition===2?0x214:competition===4?0x217:0x218)!==0)throw Error('Final qualification flag not cleared');}
  const loaded=readSave(writeSave(save));for(let i=0;i<save.sections.length;i++){const a=save.sections[i],b=loaded.sections[i];if(a.count!==b.count||a.data.some((n,j)=>n!==b.data[j]))throw Error('Champion save mismatch '+a.name);}
  results.push({competition,champion:11,runnerUp:4,playerAward:224,prizes,allRecordsSurviveReload:true});
 }
 return {scope:'Explicit final and scoring-stat fixtures in an original career save; full season progression not exercised',results};
}
