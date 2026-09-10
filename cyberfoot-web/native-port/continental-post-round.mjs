import {record} from './save-format.mjs';
import {sortRegionalCandidates} from './regional-standings-data.mjs';
import {findKnockoutRound,recordCompetitionFinish} from './knockout-progress.mjs';
import {applyMatchPerformanceResult} from './match-performance-result.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** 005f3890 controller with native result application00646a38.
 * The caller supplies the original calendar date used by the fixture pass. */
export async function continentalPostRound(save,runtime,competition,{date,applyResult=(...args)=>applyMatchPerformanceResult(save,...args)}){
 if(![4,6].includes(competition))throw Error('Original continental competition required.');
 if(typeof applyResult!=='function')throw Error('Original competition result application required.');
 const c=view(save.career),round=c.getInt32(competition===4?0x194:0x1a0,true),leg=c.getInt32(competition===4?0x198:0x1a4,true);
 if(round>4||leg>1)return;
 for(const subgroup of competition===4?[1,2,3,4]:[2]){
  const base=0x1ac+(competition===4?[0,0x80,0x200,0x280][subgroup-1]:0x180),qualified=Array(16).fill(-1);runtime.continentalQualifiers=qualified;
  for(let group=0;group<8;group++){
   const rows=Array.from({length:4},(_,i)=>{const id=c.getInt32(base+group*16+i*4,true),p=view(record(save,'clubs',id)),get=o=>p.getInt32(o+competition*4,true),played=get(0xdc),wins=get(0x104),losses=get(0x12c),gf=get(0x154),ga=get(0x17c);return [id,get(0xb4),played,wins,(played-wins-losses)|0,losses,gf,ga,(gf-ga)|0,0];});
   // Comparator005f2b00 has the same four comparisons as005ae390.
   sortRegionalCandidates(rows);runtime.continentalGroupRows=rows;
   rows.forEach((r,i)=>view(record(save,'clubs',r[0])).setInt32(0x1a4+competition*4,i+1,true));
   if(round===4){qualified[group*2]=rows[0][0];qualified[group*2+1]=rows[1][0];for(const row of rows.slice(2)){const id=row[0];view(record(save,'clubs',id)).setUint8(competition===4?0x217:0x218,0);if(id<=c.getInt32(0x3c,true)-1)recordCompetitionFinish(save,id,3,competition,subgroup);}}
  }
  if(round===4){runtime.continentalGroupRows=[];const first=findKnockoutRound(save,subgroup,competition,4),pairs=[[9,0],[1,8],[11,2],[3,10],[13,4],[5,12],[15,6],[7,14]];
   if(first<0)throw Error('Original continental knockout fixture block missing.');
   pairs.forEach(([a,b],i)=>{for(let leg=0;leg<2;leg++){const f=view(record(save,'records_0066afa0',first+i*2+leg));f.setInt32(0,qualified[leg?b:a],true);f.setInt32(4,qualified[leg?a:b],true);}});
  }
 }
 const section=save.sections.find(s=>s.name==='records_0066afa0');
 for(let i=0;i<section.count;i++){const f=view(record(save,section.name,i));if(f.getInt32(0x18,true)===competition&&f.getFloat64(0x30,true)===date)await applyResult(competition,f.getInt32(0,true),f.getInt32(4,true),0,f.getInt32(12,true),f.getInt32(8,true));}
}
