import {MatchWindow} from './match-window.mjs';
/** Original Form34 bounds and columns. Browser grid/font rasterization still
 * requires comparison with Windows; this is not a pixel-parity certification.
 */
export class PenaltyWindow extends MatchWindow{
 constructor(canvas,forms){super(canvas,forms);this.firstRow=0;
  canvas.addEventListener('wheel',e=>{if(!['Form34','Form53'].includes(this.frame?.form))return;e.preventDefault();this.firstRow=Math.max(0,Math.min(Math.max(0,this.frame.rows.length-8),this.firstRow+Math.sign(e.deltaY)));this.paint();},{passive:false});
  canvas.tabIndex=0;canvas.addEventListener('keydown',e=>{if(this.frame?.phase!=='selection')return;const rows=this.frame.rows;
   if(e.key==='ArrowDown'||e.key==='ArrowUp'){e.preventDefault();const old=rows.findIndex(r=>r.playerId===this.frame.selectedId),index=Math.max(0,Math.min(rows.length-1,old+(e.key==='ArrowDown'?1:-1)));if(rows[index]){this.firstRow=Math.max(0,Math.min(index,Math.max(this.firstRow,index-7)));this.invoke({operation:'gridview1SelectCell',value:rows[index].playerId});}}
   if(e.key==='Enter'){e.preventDefault();this.invoke({operation:'bt1Click'});}
  });
 }

 control(node,parent,ox,oy){
  if(!['Form34','Form54','Form53'].includes(this.frame.form))return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]},x=ox+(p.Left??0),y=oy+(p.Top??0);
  if((node.name==='info1'||(node.name==='Label2'&&this.frame.form==='Form54'))&&p.Visible!==false){
   const c=this.ctx;c.save();c.beginPath();c.rect(x,y,p.Width,p.Height);c.clip();c.font='bold 13px Arial';c.textAlign='center';c.textBaseline='middle';
   const words=String(p.HTMLText??p.Caption??'').split(/\s+/),lines=[];let line='';for(const word of words){const next=line?line+' '+word:word;if(line&&c.measureText(next).width>p.Width){lines.push(line);line=word;}else line=next;}if(line)lines.push(line);
   lines.forEach((text,i)=>{const yy=y+p.Height/2+(i-(lines.length-1)/2)*15;if(node.name==='info1'){c.fillStyle='#000';c.fillText(text,x+p.Width/2+1,yy+1);}c.fillStyle=node.name==='Label2'?'#f2f200':'#fff';c.fillText(text,x+p.Width/2,yy);});c.restore();return;
  }
  if(node.class_name==='TImageList')return;
  if(node.class_name==='TImage'){
   if(this.frame.form==='Form53'&&node.properties['Picture.Data']?.asset){const asset=node.properties['Picture.Data'].asset;if(this.images.has(asset))this.ctx.drawImage(this.images.get(asset),x,y,p.Width,p.Height);return;}
   if(node.name==='escudo'&&this.frame.crest&&this.images.has(this.frame.crest))this.ctx.drawImage(this.images.get(this.frame.crest),x,y,p.Width,p.Height);
   return;
  }
  if(node.class_name==='TNextGrid'){
   const c=this.ctx,columns=node.children.filter(n=>n.properties.Visible!==false);c.save();c.beginPath();c.rect(x,y,p.Width,p.Height);c.clip();
   c.fillStyle='#fff';c.fillRect(x,y,p.Width,p.Height);c.font='12px Arial';c.textBaseline='middle';c.textAlign='left';
   let xx=x;
   for(const col of columns){const w=col.properties.Width;c.fillStyle='#d4d0c8';c.fillRect(xx,y,w,p.HeaderSize);c.fillStyle='#000';c.fillText(this.frame.headers[col.name],xx+2,y+p.HeaderSize/2);xx+=w;}
   this.frame.rows.forEach((row,i)=>{
    if(i<this.firstRow)return;const yy=y+p.HeaderSize+(i-this.firstRow)*p.RowSize,selected=row.playerId===this.frame.selectedId;
    c.fillStyle=selected?'#d6d6d6':'#fff';c.fillRect(x,yy,p.Width,p.RowSize);let xx=x;
    for(const col of columns){const w=col.properties.Width;c.save();c.beginPath();c.rect(xx,yy,w,p.RowSize);c.clip();
     if(col.name==='energia'){c.fillStyle='#245b2d';c.fillRect(xx+3,yy+3,(w-6)*Math.max(0,Math.min(100,row.cells.energia))/100,p.RowSize-6);}
     c.fillStyle='#000';c.fillText(String(row.cells[col.name]),xx+2,yy+p.RowSize/2);c.restore();xx+=w;
    }
    if(this.activeFrame&&yy<y+p.Height&&this.frame.phase==='selection')this.hitTargets.push({name:'player-'+row.playerId,operation:'gridview1SelectCell',value:row.playerId,x:this.frame.origin.x+1+x,y:this.frame.origin.y+1+yy,width:p.Width,height:Math.min(p.RowSize,y+p.Height-yy)});
   });c.restore();return;
  }
  return super.control(node,parent,ox,oy);
 }
}
