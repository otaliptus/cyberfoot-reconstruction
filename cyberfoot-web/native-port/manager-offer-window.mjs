import {ManagerNoticeWindow} from './manager-notice-window.mjs';
/** Form30 resource layout. Browser fonts/radio/list skin remain provisional. */
export class ManagerOfferWindow extends ManagerNoticeWindow{
 control(node,parent,ox,oy){
  if(this.frame.form!=='Form30')return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;
  const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx;
  if(node.class_name==='TImageList')return;
  if(node.class_name==='TImage'){const image=this.images.get(this.frame.imagePaths[node.name]);if(image)c.drawImage(image,x,y,w,h);return;}
  if(node.class_name==='TTntRadioButton'){
   c.beginPath();c.arc(x+6.5,y+6.5,6,0,Math.PI*2);c.fillStyle='#fff';c.fill();c.strokeStyle='#808080';c.stroke();if(p.Checked){c.beginPath();c.arc(x+6.5,y+6.5,2.5,0,Math.PI*2);c.fillStyle='#000';c.fill();}
   c.font='12px Arial';c.textAlign='left';c.textBaseline='top';c.fillStyle='#fff';c.fillText(p.Caption??'',x+18,y+1);
   if(!this.activeFrame)return;
   const key='Form30.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
   if(!el){el=document.createElement('input');el.type='radio';el.name='Form30-offers';el.dataset.originalControl=key;document.body.append(el);this.inputs.set(key,el);el.addEventListener('change',()=>{if(el.checked)this.invoke({operation:'r1Click',value:Number(el.dataset.tag)});});}
   el.id=key;el.dataset.tag=p.Tag;el.setAttribute('aria-label',p.Caption??'');el.tabIndex=(p.TabOrder??0)+1;el.checked=!!p.Checked;this.place(el,x,y,13,13);Object.assign(el.style,{margin:'0',accentColor:'#d4d0c8'});
   const labelKey=key+'.label';this.usedInputs.add(labelKey);let label=this.inputs.get(labelKey);if(!label){label=document.createElement('label');label.htmlFor=key;document.body.append(label);this.inputs.set(labelKey,label);}label.textContent=p.Caption??'';this.place(label,x+15,y,w-15,h);Object.assign(label.style,{color:'transparent',font:'12px Arial',cursor:'default',whiteSpace:'nowrap',overflow:'hidden'});return;
  }
  if(node.class_name==='TListView'){this.offerList(node,p,x,y,w,h);return;}
  if(node.class_name==='TTntLabel'&&p.WordWrap){
   c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.font=`${p['Font.Style']?.includes('fsBold')?'bold ':''}${Math.abs(p['Font.Height']??-11)}px Arial`;c.fillStyle='#fff';c.textBaseline='top';c.textAlign=p.Alignment==='taCenter'?'center':'left';
   let line='',yy=y;const tx=p.Alignment==='taCenter'?x+w/2:x;for(const word of String(p.Caption??'').split(' ')){const next=line?line+' '+word:word;if(line&&c.measureText(next).width>w){c.fillText(line,tx,yy);yy+=16;line=word;}else line=next;}if(line)c.fillText(line,tx,yy);c.restore();return;
  }
  return super.control(node,parent,ox,oy);
 }
 offerList(node,p,x,y,w,h){
  const c=this.ctx,widths=p.Columns.map(col=>col.Width??50),scroll=this.frame.offerScroll??0;
  c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.fillStyle='#fff';c.fillRect(x,y,w,h);c.textAlign='left';c.textBaseline='top';c.font='11px Arial';
  let xx=x;for(const width of widths){c.fillStyle='#d4d0c8';c.fillRect(xx,y-scroll,width,19);c.strokeStyle='#808080';c.strokeRect(xx+.5,y-scroll+.5,width-1,18);xx+=width;}
  this.frame.offerRoster.rows.forEach((row,index)=>{let left=x;const yy=y+19+index*17-scroll,selected=this.frame.offerSelectedPlayer===row.playerId;if(selected){c.fillStyle='#000080';c.fillRect(x,yy,widths.reduce((a,b)=>a+b,0),17);}c.fillStyle=selected?'#fff':'#000';row.cells.forEach((value,i)=>{c.save();c.beginPath();c.rect(left,yy,widths[i],17);c.clip();if(i===0&&row.star){const star=this.images.get('assets/Form30-ImageList1-Bitmap.png');if(star)c.drawImage(star,16,0,16,16,left+2,yy,16,16);}c.fillText(value,left+2+(i===0?16:0),yy+2);c.restore();left+=widths[i];});});c.restore();
  if(!this.activeFrame)return;
  const key='Form30.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
  if(!el){el=document.createElement('div');el.dataset.originalControl=key;el.tabIndex=1;el.setAttribute('aria-label','Club roster');document.body.append(el);this.inputs.set(key,el);el.addEventListener('scroll',()=>{if(this.frame?.form==='Form30'){this.frame.offerScroll=el.scrollTop/Number(el.dataset.scale||1);this.paint();}});}
  this.place(el,x,y,w,h);Object.assign(el.style,{overflow:'auto',background:'#fff',font:'11px Arial'});
  const scale=this.canvas.getBoundingClientRect().width/this.canvas.width,signature=JSON.stringify(this.frame.offerRoster);
  el.dataset.scale=scale;
  if(el.firstChild)el.firstChild.style.zoom=scale;
  if(el.dataset.rows===signature)return;el.dataset.rows=signature;el.scrollTop=0;el.scrollLeft=0;this.frame.offerScroll=0;
  const table=document.createElement('table');table.setAttribute('aria-label',this.frame.offerRoster.caption);Object.assign(table.style,{borderCollapse:'collapse',tableLayout:'fixed',width:p.Columns.reduce((sum,col)=>sum+(col.Width??50),0)+'px',zoom:scale});
  const head=table.createTHead().insertRow();
  for(const width of widths){const cell=document.createElement('th');Object.assign(cell.style,{boxSizing:'border-box',width:width+'px',height:'19px',border:'1px outset #d4d0c8',background:'#d4d0c8',padding:'0'});head.append(cell);}
  const body=table.createTBody();
  for(const row of this.frame.offerRoster.rows){
   const tr=body.insertRow();tr.dataset.playerId=row.playerId;tr.style.height='17px';
   tr.addEventListener('click',()=>{for(const r of body.rows){r.style.background='';r.style.color='';r.removeAttribute('aria-selected');}tr.style.background='#000080';tr.style.color='#fff';tr.setAttribute('aria-selected','true');this.frame.offerSelectedPlayer=row.playerId;this.paint();});
   row.cells.forEach((value,i)=>{const td=tr.insertCell();Object.assign(td.style,{boxSizing:'border-box',width:widths[i]+'px',maxWidth:widths[i]+'px',overflow:'hidden',whiteSpace:'nowrap',padding:'0 2px',height:'17px'});
    if(i===0){const icon=document.createElement('span');Object.assign(icon.style,{display:'inline-block',width:'16px',height:'16px',verticalAlign:'middle'});if(row.star)Object.assign(icon.style,{backgroundImage:'url("assets/Form30-ImageList1-Bitmap.png")',backgroundPosition:'-16px 0',backgroundRepeat:'no-repeat'});td.append(icon);}
    td.append(document.createTextNode(value));
   });
  }
  el.replaceChildren(table);
 }
}
