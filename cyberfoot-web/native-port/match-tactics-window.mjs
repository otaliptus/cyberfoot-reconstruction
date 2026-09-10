import {PenaltyWindow} from './penalty-window.mjs';
import {matchLineupGeometry} from './match-lineup-screen.mjs';
const rgb=n=>typeof n==='number'?`rgb(${n&255},${n>>>8&255},${n>>>16&255})`:({clBlack:'#000',clWhite:'#fff',clYellow:'#ff0',clNone:'transparent',clWindowText:'#000'}[n]??'#000');
/** Form88 resource bounds plus dynamically allocated 55x55 shirts. This
 * development renderer still needs original HTML/kit/event-log parity work.
 */
export class MatchTacticsWindow extends PenaltyWindow{
 constructor(canvas,forms){super(canvas,forms);this.matchTargets=[];this.matchDrag=null;
  canvas.addEventListener('pointerdown',e=>{if(this.frame?.form!=='Form88'||!this.frame.editable||this.frame.busy||this.frame.statistics)return;const target=this.matchTarget(e);if(target){this.matchDrag=target.slot;canvas.setPointerCapture(e.pointerId);this.paint();}});
  canvas.addEventListener('pointerup',e=>{if(this.matchDrag===null)return;const sourceSlot=this.matchDrag;this.matchDrag=null;const p=this.matchPoint(e),target=this.matchTarget(e);this.onMatchDrop?.({sourceSlot,targetSlot:target?.slot,x:p.x-8,y:p.y-8});this.paint();});
  canvas.addEventListener('pointercancel',()=>{this.matchDrag=null;this.paint();});
  canvas.addEventListener('keydown',e=>{if(this.frame?.form==='Form88'&&['Enter',' ','Escape'].includes(e.key)){e.preventDefault();this.invoke({operation:'bt_irprojogoClick'});}});
 }
 async prepare(){await super.prepare();await Promise.all(['original-lineup-pitch.jpg','original-lineup-targets.png',...Array.from({length:4},(_,i)=>`original-shirt-${i}.png`),'Form88-Image2-Picture-Data.png','Form88-Image4-Picture-Data.png'].map(n=>this.bitmap('assets/'+n)));return this;}
 matchPoint(e){const r=this.canvas.getBoundingClientRect();return {x:(e.clientX-r.left)*this.canvas.width/r.width-this.frame.origin.x-1,y:(e.clientY-r.top)*this.canvas.height/r.height-this.frame.origin.y-1};}
 matchTarget(e){const p=this.matchPoint(e);return this.matchTargets.findLast(t=>p.x>=t.x&&p.x<t.x+t.width&&p.y>=t.y&&p.y<t.y+t.height);}
 control(node,parent,ox,oy){
  if(this.frame.form!=='Form88')return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;
  const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx;
  if(['TImageList','TAdvSmoothMessageDialog','TPictureContainer'].includes(node.class_name))return;
  if(node.class_name==='TPanel'){for(const child of node.children)this.control(child,{...parent,...p},x,y);return;}
  if(node.class_name==='TImage'){
   let path=p['Picture.Data']?.asset;
   if(node.name==='Image1')path='assets/original-lineup-pitch.jpg';
   if(node.name==='Image3')path='assets/original-lineup-targets.png';
   if(node.name==='f88esc1')path=this.frame.crests?.[0];if(node.name==='f88esc2')path=this.frame.crests?.[1];
   const image=this.images.get(path);if(image)c.drawImage(image,x,y,p.Stretch?w:image.width,p.Stretch?h:image.height);
   if(p.OnClick&&this.activeFrame)this.hitTargets.push({name:node.name,operation:p.OnClick,x:x+this.frame.origin.x+1,y:y+this.frame.origin.y+1,width:w,height:h});return;
  }
  if(node.class_name==='TTntLabel'&&p.OnClick&&this.activeFrame&&!this.frame.statistics)this.hitTargets.push({name:node.name,operation:p.OnClick,x:x+this.frame.origin.x+1,y:y+this.frame.origin.y+1,width:w,height:h});
  if(node.name==='teste'){this.paintEventLog(x,y,w,h);return;}
  if(node.class_name==='TAdvSmoothLabel'){
   if(p.Transparent===false){c.fillStyle=rgb(p['Fill.Color']);c.fillRect(x,y,w,h);}
   const text=p['Caption.Text'];if(text){c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.font=`${Math.abs(p['Caption.Font.Height']??-27)}px Tahoma`;c.textBaseline='bottom';c.textAlign='left';c.fillStyle=rgb(p['Caption.ColorEnd']??p['Caption.Font.Color']);c.fillText(text,x+(p['Caption.Left']??0),y+h-4);c.restore();}
   if(p.OnClick&&this.activeFrame)this.hitTargets.push({name:node.name,operation:p.OnClick,x:x+this.frame.origin.x+1,y:y+this.frame.origin.y+1,width:w,height:h});return;
  }
  return super.control(node,parent,ox,oy);
 }
 paintEventLog(x,y,w,h){
  const c=this.ctx,log=this.frame.eventLog;if(!log)return;c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.font='bold 11px Arial';c.textBaseline='top';let yy=y;
  for(const row of log.rows){
   const icon=this.images.get('assets/'+row.icon+'.png'),iw=icon?18:0,available=w-iw-2,words=row.text.split(' '),lines=[];let line='';
   for(const word of words){const next=line?line+' '+word:word;if(line&&c.measureText(next).width>available){lines.push(line);line=word;}else line=next;}if(line)lines.push(line);
   c.textAlign=row.align;const tx=row.align==='left'?x+iw+2:x+w-iw-2;
   if(icon)c.drawImage(icon,row.align==='left'?x:x+w-iw,yy,iw,18);
   for(const text of lines){c.fillStyle='#000';c.fillText(text,tx+1,yy+1);c.fillStyle='#dfdf00';c.fillText(text,tx,yy);yy+=14;}
   yy+=4;
  }
  if(log.truncated){c.textAlign='left';c.fillStyle='#dfdf00';c.fillText('...',x,yy);}c.restore();
 }
 paintStatistics(frame){
  const c=this.ctx,node=this.forms.get('Form88').children.find(n=>n.name==='dlg_st'),p=node.properties,rows=frame.statistics;
  c.save();c.font='13px Arial';const margin=p.Margin??10,lineHeight=18,contentWidth=Math.max(...rows.map(r=>r.valueIndent+c.measureText(r.values[1]).width)),w=Math.ceil(contentWidth+margin*2),h=margin*2+rows.length*lineHeight+37,x=Math.trunc((frame.width-2-w)/2),y=Math.trunc((frame.height-2-h)/2);
  const fill=c.createLinearGradient(0,y,0,y+h);fill.addColorStop(0,'rgba(0,128,0,0.94)');fill.addColorStop(1,'rgba(255,255,0,0.86)');c.fillStyle=fill;c.beginPath();c.roundRect(x,y,w,h,p['Fill.Rounding']??2);c.fill();c.strokeStyle='#000';c.lineWidth=p['Fill.BorderWidth']??2;c.stroke();
  c.font='13px Arial';c.textAlign='left';c.textBaseline='top';
  rows.forEach((r,i)=>{for(const [text,offset] of [[r.values[0],0],[r.label,r.labelIndent],[r.values[1],r.valueIndent]]){c.fillStyle='#000';c.fillText(text,x+margin+offset+1,y+margin+i*lineHeight+1);c.fillStyle='#fff';c.fillText(text,x+margin+offset,y+margin+i*lineHeight);}});
  const bw=70,bh=25,bx=x+(w-bw)/2,by=y+h-margin-bh;c.fillStyle=rgb(p.Buttons[0].Color);c.fillRect(bx,by,bw,bh);c.strokeStyle='#808080';c.lineWidth=1;c.strokeRect(bx+.5,by+.5,bw-1,bh-1);c.fillStyle='#000';c.font='11px Tahoma';c.textAlign='center';c.textBaseline='middle';c.fillText(p.Buttons[0].Caption,bx+bw/2,by+bh/2);
  if(this.activeFrame)this.hitTargets=[{name:'statistics-ok',operation:'closeStatistics',x:frame.origin.x+1+bx,y:frame.origin.y+1+by,width:bw,height:bh}];c.restore();
 }

 paintFrame(frame){
  if(frame.form!=='Form88')return super.paintFrame(frame);
  const c=this.ctx;this.matchTargets=[];c.save();c.translate(8,8);
  if(this.matchDrag>0&&this.matchDrag<11)c.drawImage(this.images.get('assets/original-lineup-targets.png'),0,5);
  let benchOrdinal=0;
  for(let slot=1;slot<=18;slot++){
   const id=slot<12?frame.lineup.players[slot-1]:frame.lineup.bench[slot-12],p=frame.players[id];
   if(slot>=12&&id<=0)continue;if(slot>=12)benchOrdinal=frame.benchOrdinals?.[slot-12]??benchOrdinal+1;
   if(slot<12&&p&&!p.active)continue;
   const g=matchLineupGeometry(slot,slot<12?frame.lineup.positions[slot-1]:0,benchOrdinal),kind=id>0?(slot===11?2:slot<12?1:3):0;
   const image=this.images.get(kind===1&&frame.shirtPath?frame.shirtPath:`assets/original-shirt-${kind}.png`);c.drawImage(image,g.shirt.x+Math.trunc((55-image.width)/2),g.shirt.y+Math.trunc((55-image.height)/2));
   if(this.activeFrame)this.matchTargets.push({slot,x:g.shirt.x+8,y:g.shirt.y+8,width:55,height:55});
   if(!p||id<=0)continue;
   c.textAlign='center';c.textBaseline='top';c.font='bold 11px Arial';const width=slot===11?120:80,center=g.label.x+width/2;
   c.fillStyle='#000';c.fillText(p.name,center+1,g.label.y+1,width);c.fillStyle='#fff';c.fillText(p.name,center,g.label.y,width);
   c.font='11px Arial';const label=slot<12?frame.positionLabels[frame.lineup.positions[slot-1]-1]:frame.roleLabels[p.role];
   c.fillStyle='#000';c.fillText(label,center+1,g.label.y+15,width);c.fillStyle='#fff';c.fillText(label,center,g.label.y+14,width);
   c.font='11px Arial';c.textAlign='right';c.fillStyle='#fff';if(p.statusIconBase>0)c.fillText(String(p.statusIconBase),g.number.x+10,g.number.y);
   c.font='9px Arial';c.fillStyle='#000';c.textAlign='center';c.fillText(slot<12?`${p.condition}%`:'',g.status.x+12.5,g.status.y);
  }
  c.restore();
  for(const [key,el] of this.inputs)if(key.startsWith('Form88.'))el.style.visibility=frame.statistics?'hidden':'visible';
  if(frame.statistics)this.paintStatistics(frame);
 }
}
