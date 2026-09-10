/** Original005b1514 geometry from constants669fa8/669fac/669fc8/669ff4.
 * Ten read-only edit cells and a separate18px crest are positioned per row. */
export const standingsCellWidths=[20,123,23,23,23,23,23,23,23,23];
export function leagueStandingsLayout(data){
 return data.tables.map((table,index)=>{
  const x=data.division>1?415:index%2===0?30:415,y=index<2?120:341;
  const rows=table.rows.map((row,i)=>{
   const top=y+i*19,crest={x:x+21,y:top,width:18,height:18},cells=[{x,y:top,width:20,height:18},{x:crest.x+19,y:top,width:123,height:18}];
   for(let column=2;column<10;column++){const previous=cells[column-1];cells.push({x:previous.x+previous.width+1,y:top,width:23,height:18});}
   return {...row,crestBounds:crest,cellBounds:cells};
  });
  return {...table,x,y,titleBounds:{x,y:y-19,width:120,height:18},headerBounds:rows[0]?.cellBounds.slice(2).map(b=>({...b,y:y-19}))??[],rows};
 });
}
