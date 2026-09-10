import {ResultsWindow} from './results-window.mjs';import {LineupPitch} from './lineup-pitch.mjs';

const rgb=v=>typeof v==='number'?`rgb(${v&255},${v>>>8&255},${v>>>16&255})`:({clYellow:'#ffff00',clGray:'#808080',clBlack:'#000',clWhite:'#fff'}[v]??'#d4d0c8');
/** Form87 renderer under construction. Original bounds/resources are preserved;
 * NextGrid skin, HTML labels and native control pixels need final comparison.
 */
export class LineupWindow extends ResultsWindow{
 constructor(canvas,forms){super(canvas,forms);this.slotTargets=[];this.dragSource=null;
  canvas.addEventListener('pointerdown',e=>{const t=this.slotAtEvent(e);if(t){this.dragSource={slot:t.slot};canvas.setPointerCapture(e.pointerId);this.paint();}});
  canvas.addEventListener('pointerup',e=>{if(this.dragSource){this.finishDrop(e);this.dragSource=null;this.paint();}});
  canvas.addEventListener('dragover',e=>{e.preventDefault();});canvas.addEventListener('drop',e=>{e.preventDefault();this.finishDrop(e);this.dragSource=null;this.paint();});
 }
 point(e){const r=this.canvas.getBoundingClientRect();return {x:(e.clientX-r.left)*this.canvas.width/r.width,y:(e.clientY-r.top)*this.canvas.height/r.height};}
 slotAtEvent(e){if(this.frame?.form!=='Form87')return;const p=this.point(e);return this.slotTargets.findLast(t=>p.x>=t.x&&p.x<t.x+t.width&&p.y>=t.y&&p.y<t.y+t.height||t.labelHit&&p.x>=t.labelHit.x&&p.x<t.labelHit.x+t.labelHit.width&&p.y>=t.labelHit.y&&p.y<t.labelHit.y+t.labelHit.height);}
 finishDrop(e){const source=this.dragSource;if(!source)return;const target=this.slotAtEvent(e),point=this.point(e);this.onLineupDrop?.({source,targetSlot:target?.slot,x:point.x-this.frame.origin.x-1,y:point.y-this.frame.origin.y-1});}
 async prepare(){await super.prepare();this.pitch=await new LineupPitch().load();return this;}
 control(node,parent,ox,oy){
  if(this.frame.form!=='Form87')return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;
  const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx;
  if(node.class_name==='TGradient'){
   const gradient=c.createRadialGradient(x+w,y+h,0,x+w,y+h,Math.hypot(w,h));gradient.addColorStop(0,rgb(p.ColorBegin));gradient.addColorStop(1,rgb(p.ColorEnd));c.fillStyle=gradient;c.fillRect(x,y,w,h);return;
  }
  if(node.class_name==='TImageList')return;
  if(node.class_name==='TImage'){
   if(this.frame.kitImagePaths?.[node.name]){const image=this.images.get(this.frame.kitImagePaths[node.name]);if(image)c.drawImage(image,x+Math.trunc((w-image.width)/2),y+Math.trunc((h-image.height)/2));return;}
   if(node.name==='Image1'){
    const targets=this.pitch.draw(c,this.frame.slots,{x,y,shirtImage:this.frame.shirtImage});
    this.slotTargets=targets.map(t=>({...t,x:t.x+this.frame.origin.x+1,y:t.y+this.frame.origin.y+1,labelHit:{x:this.frame.origin.x+1+x+t.labelX+(this.frame.slots[t.slot-1].manualLabelOffset?5:0),y:this.frame.origin.y+1+y+t.labelY,width:t.labelWidth,height:26}}));
    if(this.dragSource?.slot>1&&this.dragSource.slot<12){c.save();c.beginPath();c.rect(x,y,457,593);c.clip();c.drawImage(this.pitch.images.get('original-lineup-targets.png'),x,y);c.restore();}
    for(const t of targets){
     const player=this.frame.players[t.playerId];if(!player||t.playerId<1)continue;
     c.textAlign='center';c.textBaseline='top';c.font='bold 11px Arial';
     const xx=x+t.labelX+t.labelWidth/2+(this.frame.slots[t.slot-1].manualLabelOffset?5:0),yy=y+t.labelY;
     c.fillStyle='#000';c.fillText(player.name,xx+1,yy+1,t.labelWidth);c.fillStyle='#fff';c.fillText(player.name,xx,yy,t.labelWidth);
     c.font='11px Arial';const label=t.slot<12?this.frame.positionLabels[t.position-1]:this.frame.roleLabels[player.role];
     c.fillStyle='#000';c.fillText(label,xx+1,yy+14);c.fillStyle='#fff';c.fillText(label,xx,yy+13);
    }
   }return;
  }
  if(node.class_name==='TNextGrid'){this.grid(node,p,x,y,w,h);return;}
  if(node.class_name==='TTntCheckBox'||node.class_name==='THTMLRadioButton'){
   const key=this.frame.form+'.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
   if(!el){el=document.createElement('input');el.type=node.class_name==='TTntCheckBox'?'checkbox':'radio';el.dataset.originalControl=key;el.setAttribute('aria-label',node.name);document.body.append(el);this.inputs.set(key,el);el.addEventListener('change',()=>this.invoke({operation:p.OnClick,value:el.checked}));}
   if(node.class_name==='THTMLRadioButton'&&this.frame.form==='Form87')el.name='Form87-kits';
   el.checked=!!p.Checked;this.place(el,x,y,w,h);Object.assign(el.style,{margin:0,accentColor:'#d4d0c8'});return;
  }
  if(node.class_name==='TAdvGlowButton'||node.class_name==='TButton'){return super.control({...node,class_name:'TTntBitBtn'},parent,ox,oy);}
  return super.control(node,parent,ox,oy);
 }
 place(el,x,y,w,h){const r=this.canvas.getBoundingClientRect(),sx=r.width/this.canvas.width,sy=r.height/this.canvas.height;Object.assign(el.style,{display:'block',position:'fixed',left:r.left+(this.frame.origin.x+1+x)*sx+'px',top:r.top+(this.frame.origin.y+1+y)*sy+'px',width:w*sx+'px',height:h*sy+'px',boxSizing:'border-box',zIndex:'2'});}
 grid(node,p,x,y,w,h){
  const key=this.frame.form+'.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
  if(!el){el=document.createElement('div');el.dataset.originalControl=key;el.tabIndex=0;document.body.append(el);this.inputs.set(key,el);}
  this.place(el,x,y,w,h);Object.assign(el.style,{overflow:'auto',border:'1px solid #808080',background:'#fff',font:'11px Arial'});
  const scale=this.canvas.getBoundingClientRect().width/this.canvas.width;if(el.firstElementChild)el.firstElementChild.style.zoom=scale;
  const signature=JSON.stringify(this.frame.roster);
  if(el.dataset.rows===signature)return;el.dataset.rows=signature;
  const table=document.createElement('table');Object.assign(table.style,{borderCollapse:'collapse',tableLayout:'fixed',zoom:scale});
  const columns=node.children.filter(n=>n.properties.Visible!==false),header=table.createTHead().insertRow();
  for(const col of columns){const cell=document.createElement('th');cell.textContent=this.frame.headers[col.name]??col.properties['Header.Caption']??'';Object.assign(cell.style,{minWidth:col.properties.Width+'px',width:col.properties.Width+'px',height:'19px',padding:0,border:'1px solid #a0a0a0',background:'#d4d0c8',fontWeight:'normal'});header.append(cell);}
  const body=table.createTBody();
  for(const row of this.frame.roster){
   const tr=body.insertRow();tr.dataset.playerId=row.playerId;tr.draggable=true;tr.addEventListener('dragstart',e=>{this.dragSource={playerId:row.playerId};e.dataTransfer.setData('text/plain',String(row.playerId));e.dataTransfer.effectAllowed='move';});tr.addEventListener('dragend',()=>{this.dragSource=null;this.paint();});tr.style.height=(p.RowSize??19)+'px';
   for(const col of columns){const td=tr.insertCell();td.textContent=String(row.cells[col.name]??'');Object.assign(td.style,{height:'19px',padding:'0 2px',borderBottom:'1px solid #ececec',whiteSpace:'nowrap',overflow:'hidden',maxWidth:col.properties.Width+'px',boxSizing:'border-box'});if(col.name==='energia'){td.style.background=`linear-gradient(to right,#c0b0a0 ${row.condition}%,#fff ${row.condition}%)`;td.style.textAlign='center';}}
   tr.addEventListener('click',()=>{for(const sibling of body.rows){sibling.style.background='';sibling.style.color='';}tr.style.background='#000080';tr.style.color='#fff';this.selectedPlayerId=row.playerId;});
  }
  el.replaceChildren(table);
 }
}
