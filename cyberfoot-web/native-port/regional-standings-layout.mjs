/** Dynamic table placement in005b00e8, including the centered lower page. */
export function regionalStandingsLayout(data,language){
 const {formatId,format,divisions,grouped,lowerDivisions}=data,size=format[2],tables=[];
 for(let i=0;i<data.tables.length;i++){
  const source=data.tables[i];let x,y,title,visible=true;
  if(grouped){x=formatId===7?232:i<2?30:415;y=i===0||i===2?120:tables[i-1].y+(tables[i-1].rows.length-1)*19+55;title='Grupo '+String.fromCharCode(65+i);}
  else if(lowerDivisions){x=232;y=i===0?120:tables[i-1].y+(tables[i-1].rows.length-1)*19+50;title=i===0?'2ª divisão':language[i+36].text;}
  else if(i===0){x=divisions<2?232:30;y=[3,4].includes(formatId)?105:120;title='1ª divisão';}
  else if(i===1){x=415;y=120;title='2ª divisão';}
  else if(i===2){x=size===6?30:415;y=tables[1].y+(tables[1].rows.length-1)*19+50;title=language[37].text;}
  else{x=415;y=size===6?tables[1].y+(tables[1].rows.length-1)*19+50:tables[2].y+(tables[2].rows.length-1)*19+50;title=language[38].text;visible=format[5]<=7;}
  const rows=source.rows.map((row,index)=>{const top=y+index*19,crestBounds={x:x+21,y:top,width:18,height:18},cellBounds=[{x,y:top,width:20,height:18},{x:x+40,y:top,width:123,height:18}];for(let j=2;j<10;j++){const previous=cellBounds[j-1];cellBounds.push({x:previous.x+previous.width+1,y:top,width:23,height:18});}return {...row,crestBounds,cellBounds};});
  tables.push({...source,x,y,title,visible,titleBounds:{x,y:y-19,width:120,height:18},headerBounds:rows[0]?.cellBounds.slice(2).map(b=>({...b,y:y-19}))??[],rows});
 }
 const moreVisible=!lowerDivisions&&(grouped?divisions>1:divisions>3&&format[5]>7);
 return {tables,moreVisible,moreBounds:{x:672,y:grouped?344:378,width:105,height:17}};
}
