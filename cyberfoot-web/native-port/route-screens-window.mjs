import {LineupWindow} from './lineup-window.mjs';
const named={clBlack:'#000000',clMaroon:'#800000',clGreen:'#008000',clOlive:'#808000',clNavy:'#000080',clPurple:'#800080',clTeal:'#008080',clGray:'#808080',clSilver:'#c0c0c0',clRed:'#ff0000',clLime:'#00ff00',clYellow:'#ffff00',clBlue:'#0000ff',clFuchsia:'#ff00ff',clAqua:'#00ffff',clWhite:'#ffffff',clMoneyGreen:'#c0dcc0',clSkyBlue:'#a6caf0',clCream:'#fffbf0',clMedGray:'#a4a0a0',clWindowText:'#000000',clWindow:'#ffffff',clBtnFace:'#d4d0c8',clNone:'transparent'};
const rgb=v=>typeof v==='number'?`rgb(${v&255},${v>>>8&255},${v>>>16&255})`:named[v]??'#d4d0c8';
const plain=value=>String(value??'').replace(/<[^>]*>/g,'').replace(/&amp;/g,'&');
const routeForms=['Form13','Form26','Form75','Form77'];
/** Development renderer for the original next-screen forms. Every control of
 * the four route forms is painted or skipped locally so base skinning of the
 * unsupported control set cannot abort the frame. */
export class RouteScreensWindow extends LineupWindow{
 control(node,parent,ox,oy){
  if(!routeForms.includes(this.frame.form))return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;
  const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx,cls=node.class_name;
  if(['TNxNumberColumn','TNxImageColumn','TNxTextColumn','TNxProgressColumn','TNxGraphicColumn','TNxComboBoxColumn','TImageList','TTntPopupMenu','TTntMenuItem','TGDIPPictureContainer'].includes(cls))return;
  if(cls==='TTimer'){if(p.Enabled)this.frame.timersEnabled=true;return;}
  if(cls==='TGradient'){const gradient=c.createRadialGradient(x+w,y+h,0,x+w,y+h,Math.hypot(w,h));gradient.addColorStop(0,rgb(p.ColorBegin??'clNavy'));gradient.addColorStop(1,rgb(p.ColorEnd??'clBlack'));c.fillStyle=gradient;c.fillRect(x,y,w,h);return;}
  if(cls==='TImage'){const path=this.frame.imagePaths?.[node.name]??p['Picture.Data']?.asset,image=path?this.images.get(path):null;if(image)c.drawImage(image,x,y,w,h);return;}
  if(cls==='TShape'){c.fillStyle=rgb(p['Brush.Color']??'clWhite');c.fillRect(x,y,w,h);if(p['Pen.Style']!=='psClear'){c.strokeStyle=rgb(p['Pen.Color']??'clBlack');c.lineWidth=p['Pen.Width']??1;c.strokeRect(x+.5,y+.5,w-1,h-1);}return;}
  if(cls==='TPanel'||cls==='TAdvSmoothPanel'){c.fillStyle=rgb(p.Color??'clBtnFace');c.fillRect(x,y,w,h);for(const child of node.children)this.control(child,{...parent,...p},x,y);return;}
  if(cls==='TAdvSmoothProgressBar'||cls==='TGauge'){c.fillStyle='#202020';c.fillRect(x,y,w,h);const max=p.MaxValue||100,fill=Math.max(0,Math.min(1,(p.Position??0)/max));c.fillStyle='#ffff6c';c.fillRect(x+1,y+1,(w-2)*fill,h-2);return;}
  if(cls==='TTntLabel'||cls==='TLabel'||cls==='TUniHTMLabel'||cls==='TAdvSmoothLabel'){
   const html=String(p.HTMLText??p.Caption??''),label=plain(html),align=p.Alignment==='taRightJustify'?'right':p.Alignment==='taCenter'||/align="center"/i.test(html)?'center':p.Alignment==='taCenter'?'center':'left';
   c.font=`${p['Font.Style']?.includes('fsBold')?'bold ':''}${Math.abs(p['Font.Height']??parent['Font.Height']??-11)}px Arial`;c.textBaseline='top';c.textAlign=align;
   const tx=x+(align==='right'?w:align==='center'?w/2:0);
   if(html.includes('<shad>')){c.fillStyle=rgb(p.ShadowColor??'clBlack');c.fillText(label,tx+(p.ShadowOffset??1),y+(p.ShadowOffset??1));}
   c.fillStyle=rgb(p['Font.Color']??parent['Font.Color']??'clWindowText');c.fillText(label,tx,y);return;
  }
  if(cls==='TTntBitBtn'||cls==='TButton'||cls==='TAdvGlowButton'){
   c.fillStyle=rgb(p.Color??'clBtnFace');c.fillRect(x,y,w,h);c.strokeStyle='#fff';c.strokeRect(x+.5,y+.5,w-1,h-1);c.strokeStyle='#404040';c.beginPath();c.moveTo(x+w-1,y);c.lineTo(x+w-1,y+h-1);c.lineTo(x,y+h-1);c.stroke();
   c.fillStyle=rgb(p.Enabled===false?'clGray':p['Font.Color']??parent['Font.Color']??'clWindowText');c.textAlign='center';c.textBaseline='middle';c.fillText(plain(p.Caption),x+w/2,y+h/2);
   if(this.activeFrame){this.buttonInput(node,p,x,y,w,h);this.hitTargets.push({name:node.name,operation:p.OnClick,x:x+this.frame.origin.x+1,y:y+this.frame.origin.y+1,width:w,height:h});}return;
  }
  if(cls==='TCheckBox'){
   const key=this.frame.form+'.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
   if(!el){el=document.createElement('input');el.type='checkbox';el.dataset.originalControl=key;el.setAttribute('aria-label',node.name);document.body.append(el);this.inputs.set(key,el);el.addEventListener('change',()=>this.invoke({operation:p.OnClick,value:el.checked}));}
   el.checked=!!p.Checked;this.place(el,x+3,y+3,16,16);Object.assign(el.style,{margin:0,accentColor:'#d4d0c8'});return;
  }
  if(cls==='TEdit'||cls==='TUniHTMLCombobox'||cls==='TComboBox'){
   const combo=cls!=='TEdit';c.fillStyle=rgb(p.Color??'clWhite');c.fillRect(x,y,w,h);c.strokeStyle='#808080';c.strokeRect(x+.5,y+.5,w-1,h-1);
   const items=p.Items??[];c.fillStyle=rgb(p['Font.Color']??parent['Font.Color']??'clWindowText');c.textBaseline='top';c.textAlign='left';c.fillText(combo?plain(items[p.ItemIndex]??''):String(p.Text??''),x+3,y+3);
   if(this.activeFrame)this.input(node,p,{...parent,...p},x,y,w,h,combo);return;
  }
  if(cls==='TXiButton'){c.fillStyle=rgb(p.ColorFace??p.OverColorFace??'clBtnFace');c.fillRect(x,y,w,h);c.strokeStyle=rgb(p.ColorBorder??'clBlack');c.strokeRect(x+.5,y+.5,w-1,h-1);c.fillStyle=rgb(p.ColorText??'#000');c.textAlign='center';c.textBaseline='middle';c.fillText(plain(p.Caption),x+w/2,y+h/2);if(this.activeFrame)this.buttonInput(node,p,x,y,w,h);return;}
  if(cls==='TNextGrid'){this.routeGrid(node,p,x,y,w,h);return;}
  return super.control(node,parent,ox,oy);
 }
 routeGrid(node,p,x,y,w,h){
  const key=this.frame.form+'.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
  if(!el){el=document.createElement('div');el.dataset.originalControl=key;el.tabIndex=0;el.setAttribute('aria-label',node.name);document.body.append(el);this.inputs.set(key,el);}
  this.place(el,x,y,w,h);Object.assign(el.style,{display:'block',position:'fixed',overflow:'auto',border:'1px solid #808080',background:'#fff',font:'11px Arial',zIndex:'2'});
  const scale=this.canvas.getBoundingClientRect().width/this.canvas.width;
  const rows=this.frame.grids?.[node.name]??this.frame.roster??[],signature=JSON.stringify(rows);
  if(el.dataset.rows===signature&&el.firstElementChild){el.firstElementChild.style.zoom=scale;return;}
  el.dataset.rows=signature;
  const table=document.createElement('table');Object.assign(table.style,{borderCollapse:'collapse',tableLayout:'fixed',zoom:scale});
  const columns=node.children.filter(child=>child.properties.Visible!==false);
  const head=table.createTHead().insertRow();
  for(const col of columns){const cell=head.insertCell();cell.textContent=this.frame.headers?.[col.name]??col.properties['Header.Caption']??'';Object.assign(cell.style,{minWidth:col.properties.Width+'px',width:col.properties.Width+'px',height:'19px',padding:0,border:'1px solid #a0a0a0',background:'#d4d0c8',fontWeight:'normal'});}
  const body=table.createTBody();
  for(const row of rows){const tr=body.insertRow();tr.dataset.playerId=row.playerId??row.historyId??'';for(const col of columns){const td=tr.insertCell();td.textContent=String(row.cells?.[col.name]??'');Object.assign(td.style,{height:'19px',padding:'0 2px',borderBottom:'1px solid #ececec',whiteSpace:'nowrap',overflow:'hidden',maxWidth:col.properties.Width+'px',boxSizing:'border-box'});}}
  el.replaceChildren(table);
 }
}
