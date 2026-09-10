import {record,shortString} from './save-format.mjs';
import {sortRegionalCandidates} from './regional-standings-data.mjs';
import {clubCrestPath} from './club-crest.mjs';
import {standingsPalette} from './standings-highlights.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Group table reads and ordering in 005b36e4. Stage lists live in career;
 * both competitions use comparator005ae390 (points,wins,GD,GF). */
export function continentalStandingsData(save,competition,stage,language,crestAssets){
 if(![4,6].includes(competition)||!Number.isInteger(stage)||stage<0||stage>(competition===4?3:1))throw Error('Unknown continental standings stage');
 const c=view(save.career),unavailable=c.getInt32(0xc0,true)===1&&(competition===6||!c.getUint8(0x75d)),titleId=unavailable?478:competition===6?221:[222,220,994,995][stage],tables=[];
 const base=0x1ac+(competition===4?[0,0x80,0x200,0x280][stage]:0x100+stage*0x80),offset=competition===4?0:8;
 if(!unavailable)for(let group=0;group<8;group++){
  const candidates=Array.from({length:4},(_,i)=>{const id=c.getInt32(base+group*16+i*4,true),p=view(record(save,'clubs',id)),get=o=>p.getInt32(o+offset,true),played=get(0xec),wins=get(0x114),losses=get(0x13c),gf=get(0x164),ga=get(0x18c);return [id,get(0xc4),played,wins,(played-wins-losses)|0,losses,gf,ga,(gf-ga)|0,0];});
  sortRegionalCandidates(candidates);
  const rows=candidates.map((r,i)=>{const previous=candidates[i-1],rank=previous&&[1,8,6,3].every(k=>previous[k]===r[k])?'':(i+1)+'º',clubId=r[0],club=record(save,'clubs',clubId),country=view(club).getInt32(0x3c,true),name=(' '+shortString(club,0,25)).slice(0,26);return {clubId,country,group:group+1,position:i+1,displayRow:group*4+i+1,rank,name,cells:[rank,name,...r.slice(1,9).map(String)],crest:clubCrestPath(save,clubId,crestAssets),color:standingsPalette[i<2?3:0]};});
  tables.push({group:group+1,title:language[477].text+' '+String.fromCharCode(65+group),rows});
 }
 return {competition,stage,unavailable,title:language[titleId].text,headers:[86,84,79,80,81,82,83,85].map(i=>language[i].text),tables};
}
/** Original calls to005b1514: four groups per column, 120px apart. */
export function continentalStandingsLayout(data){
 return data.tables.map((table,index)=>{const x=index<4?30:415,y=115+(index%4)*120;
  const rows=table.rows.map((row,i)=>{const top=y+i*19,cellBounds=[{x,y:top,width:20,height:18},{x:x+40,y:top,width:123,height:18}];for(let j=2;j<10;j++){const b=cellBounds[j-1];cellBounds.push({x:b.x+b.width+1,y:top,width:23,height:18});}return {...row,cellBounds,crestBounds:{x:x+21,y:top,width:18,height:18}};});
  return {...table,x,y,rows,titleBounds:{x,y:y-19,width:120,height:18},headerBounds:rows[0].cellBounds.slice(2).map(b=>({...b,y:y-19}))};
 });
}
