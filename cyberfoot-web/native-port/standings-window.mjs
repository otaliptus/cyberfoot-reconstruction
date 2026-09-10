import {ManagerOfferWindow} from './manager-offer-window.mjs';import {standingsPalette} from './standings-highlights.mjs';
const rgb=n=>`rgb(${n&255},${n>>>8&255},${n>>>16&255})`;
/** Form36 league display; native control font rasterization remains provisional. */
export class StandingsWindow extends ManagerOfferWindow{
 control(node,parent,ox,oy){
  if(this.frame.form!=='Form36')return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0;
  if(node.class_name==='TPanel'&&node.name.startsWith('painel_')){this.ctx.fillStyle=rgb(p.Color??2972452);this.ctx.fillRect(x,y,w,h);for(const child of node.children)this.control(child,{...parent,...p},x,y);return;}
  if(node.class_name==='THTMLabel'){const c=this.ctx,text=String(p.HTMLText??p['HTMLText.Strings']?.join('')??'').replace(/<[^>]*>/g,'');c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.font='bold 12px Arial';c.fillStyle='#fff';c.textAlign='center';c.textBaseline='middle';c.fillText(text,x+w/2,y+h/2);if(p['Font.Style']?.includes('fsUnderline')){const width=c.measureText(text).width;c.fillRect(x+(w-width)/2,y+h/2+6,width,1);}c.restore();return;}
  if(node.class_name==='TShape'&&p['Brush.Style']==='bsClear'){this.ctx.strokeStyle=rgb(p['Pen.Color']);this.ctx.strokeRect(x+.5,y+.5,w-1,h-1);return;}
  if(node.class_name==='TImage'){
   const image=this.images.get(p['Picture.Data']?.asset);if(image){this.ctx.save();this.ctx.beginPath();this.ctx.rect(x,y,w,h);this.ctx.clip();this.ctx.drawImage(image,x,y);this.ctx.restore();}
   if(p.OnClick&&this.activeFrame)this.buttonInput(node,{...p,Caption:node.name==='Image8'?'Close standings':this.frame.properties['lab'+node.name.slice(5)]?.Caption??node.name},x,y,w,h);return;
  }
  if(node.class_name==='TTntLabel'&&p.OnClick){this.ctx.save();this.ctx.beginPath();this.ctx.rect(x,y,w,h);this.ctx.clip();super.control(node,parent,ox,oy);this.ctx.restore();if(this.activeFrame)this.buttonInput(node,p,x,y,w,h);return;}
  return super.control(node,parent,ox,oy);
 }
 paintFrame(frame){
  if(frame.form!=='Form36')return super.paintFrame(frame);
  const c=this.ctx;c.save();c.font='bold 11px Arial';c.textBaseline='middle';
  for(const table of frame.standingsTables){
   if(table.visible===false)continue;
   c.fillStyle='#ffff6c';c.textAlign='left';c.fillText(table.title,table.titleBounds.x,table.titleBounds.y+9);
   table.headerBounds.forEach((b,i)=>{c.fillStyle=rgb(standingsPalette[1]);c.fillRect(b.x,b.y,b.width,b.height);c.fillStyle='#fff';c.textAlign='center';c.fillText(frame.standingsHeaders[i],b.x+b.width/2,b.y+9);});
   for(const row of table.rows){row.cellBounds.forEach((b,i)=>{c.fillStyle=rgb(row.color);c.fillRect(b.x,b.y,b.width,b.height);c.save();c.beginPath();c.rect(b.x,b.y,b.width,b.height);c.clip();c.fillStyle='#000';c.textAlign=i<2?'left':'center';c.fillText(row.cells[i],i<2?b.x+1:b.x+b.width/2,b.y+9);c.restore();});const image=this.images.get(row.crest),b=row.crestBounds;if(image)c.drawImage(image,b.x,b.y,b.width,b.height);}
  }
  for(const panel of frame.regionalBrackets??[]){if(!panel.visible)continue;const b=panel.bounds;c.save();c.beginPath();c.rect(b.x,b.y,b.width,b.height);c.clip();c.font='bold 12px Arial';c.fillStyle='#fff';
   panel.rows.forEach((row,index)=>{if(!row.visible)return;let x=b.x+10;const y=b.y+26+index*18,values=['',row.label,row.home,row.homeScore,'x',row.awayScore,row.away,''],widths=[10,20,115,16,8,16,115,40];
    values.forEach((text,i)=>{const w=widths[i];c.save();c.beginPath();c.rect(x,y,w,18);c.clip();c.textAlign=i===0||i===2?'right':i===6?'left':'center';c.fillText(text,c.textAlign==='right'?x+w:c.textAlign==='left'?x:x+w/2,y+9);c.restore();x+=w+1;});
   });c.restore();
  }c.restore();
  if(this.activeFrame&&frame.countryPickerVisible)this.input({name:'combopais'},{Items:frame.countries.map(c=>c.text),ItemIndex:frame.standingsState.leagueId,OnChange:'combopaisChange',TabOrder:0},{'Font.Color':'clBlack','Font.Height':-11},600,60,129,21,true);
  if(this.activeFrame&&frame.regionPickerVisible)this.input({name:'combobox1'},{Items:frame.regions.map(r=>r.text),ItemIndex:frame.regions.findIndex(r=>r.subgroup===frame.standingsState.subgroup),OnChange:'combo1Change',TabOrder:0},{'Font.Color':'clBlack','Font.Height':-11},640,60,129,21,true);
 }
}
