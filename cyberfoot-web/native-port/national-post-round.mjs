import {record} from './save-format.mjs';
import {sortRegionalCandidates} from './regional-standings-data.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original005f343c: international group qualification and quarter-final seeds. */
export function nationalPostRound(save,runtime,competition){
 if(![8,9].includes(competition))throw Error('Original international competition required.');
 const c=view(save.career),round=c.getInt32(0x62c,true);
 if(round>4)return;
 runtime.nationalGroupRows=[];runtime.nationalThirdPlaceRows=[];
 if(round!==4)return;
 const qualified=[],thirds=runtime.nationalThirdPlaceRows;
 for(let group=0;group<(competition===8?3:4);group++){
  const rows=Array.from({length:4},(_,i)=>{
   const id=c.getInt32(0x4bc+group*16+i*4,true),p=view(record(save,'clubs',id)),get=o=>p.getInt32(o+competition*4,true);
   const played=get(0xdc),wins=get(0x104),losses=get(0x12c),gf=get(0x154),ga=get(0x17c);
   return [id,get(0xb4),played,wins,(played-wins-losses)|0,losses,gf,ga,(gf-ga)|0,0];
  });
  sortRegionalCandidates(rows);
  rows.forEach((row,i)=>view(record(save,'clubs',row[0])).setInt32(0x1a4+competition*4,i+1,true));
  qualified.push(rows[0][0],rows[1][0]);
  if(competition===8)thirds.push([...rows[2]]);
  for(const row of rows.slice(2))view(record(save,'clubs',row[0])).setUint8(0x215,0);
 }
 if(competition===8){
  sortRegionalCandidates(thirds);
  qualified.push(thirds[0][0],thirds[1][0]);
  for(const row of thirds.slice(0,2))view(record(save,'clubs',row[0])).setUint8(0x215,1);
 }
 runtime.nationalQualifiers=qualified;
 [[0,3],[4,7],[2,1],[6,5]].forEach(([home,away],i)=>{
  const fixture=view(record(save,'records_0066ad60',i));
  fixture.setInt32(0,qualified[home],true);fixture.setInt32(4,qualified[away],true);
 });
}
