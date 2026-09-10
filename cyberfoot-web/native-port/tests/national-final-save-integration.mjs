import {readSave,writeSave,record} from '../save-format.mjs';import {advanceNationalKnockout} from '../national-knockout.mjs';import {finalizeNationalChampion} from '../national-champion.mjs';import {findCompetitionMetadata} from '../champion-records.mjs';import {appendRows} from '../match-records.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
export async function checkNationalFinalSave(input){const results=[];for(const phase of [11,12]){
 const save=readSave(input),career=view(save.career),ids=[11,4],clubs=ids.map(id=>view(record(save,'clubs',id))),group=view(record(save,'records_0066ae98',0)),counts=Object.fromEntries(save.sections.map(s=>[s.name,s.count])),cash=clubs.map(c=>c.getBigInt64(0x48,true));career.setInt32(0x88,3,true);
 const fixtures=save.sections.find(s=>s.name==='records_0066afa0');fixtures.data=new Uint8Array((phase-10)*72);fixtures.count=phase-10;const f=view(fixtures.data);
 for(let leg=0;leg<phase-10;leg++){const o=leg*72;f.setInt32(o,ids[leg],true);f.setInt32(o+4,ids[1-leg],true);f.setInt32(o+8,leg?0:3,true);f.setInt32(o+12,leg?1:0,true);f.setInt32(o+0x18,3,true);f.setInt32(o+0x1c,101+leg,true);f.setInt32(o+0x38,0,true);}
 const metadata=findCompetitionMetadata(save,{competition:3,country:-1,group:1,subgroup:0});
 for(const name of ['scorers','appearances']){const s=save.sections.find(s=>s.name===name);s.data=new Uint8Array();s.count=0;s.marker=0;}
 appendRows(save,'scorers',[[224,12,metadata,11]]);appendRows(save,'appearances',[[224,20,metadata,11]]);
 await advanceNationalKnockout(save,{phase,groupId:0,champion:(winner,loser)=>finalizeNationalChampion(save,winner,loser,{groupId:0})});
 for(const [name,added] of [['records_0066b058',2],['records_0066b3d0',1],['records_0066b560',1],['records_0066b114',3]])if(save.sections.find(s=>s.name===name).count!==counts[name]+added)throw Error('National final record count mismatch '+name);
 if(group.getUint8(0x52f)!==1||group.getInt32(0x54c,true)!==11||group.getInt32(0x550,true)!==4||group.getInt32(0x55c,true)!==224||group.getInt32(0x560,true)!==12)throw Error('National group final result mismatch');
 for(let i=0;i<2;i++)if(clubs[i].getBigInt64(0x48,true)!==cash[i]+BigInt(i?500000:2000000)*10000n||clubs[i].getUint8(0x216)!==0)throw Error('National prize or eligibility mismatch');
 const loaded=readSave(writeSave(save));for(let i=0;i<save.sections.length;i++){const a=save.sections[i],b=loaded.sections[i];if(a.count!==b.count||a.data.some((n,j)=>n!==b.data[j]))throw Error('National final save mismatch '+a.name);}
 results.push({phase,champion:11,runnerUp:4,playerAward:224,prizes:[2000000,500000],allRecordsSurviveReload:true});
 }return {scope:'Explicit one- and two-leg final fixtures in an original career save; full season not exercised',results};}
