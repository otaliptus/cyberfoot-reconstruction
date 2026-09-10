import {LineupWindow} from './lineup-window.mjs';
/** Form31 resource geometry. Font rasterization and glow-button skin remain
 * provisional until compared with native Windows screenshots. */
export class ManagerNoticeWindow extends LineupWindow{
 control(node,parent,ox,oy){
  if(this.frame.form==='Form57')return this.recapControl(node,parent,ox,oy);
  if(this.frame.form!=='Form31')return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;
  const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx;
  if(node.class_name==='TImage'){
   const image=this.images.get(this.frame.imagePaths?.[node.name]);
   if(image){c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.drawImage(image,x,y);c.restore();}return;
  }
  if(node.class_name==='TAdvGlowButton')return super.control({...node,class_name:'TTntBitBtn'},parent,ox,oy);
  if(node.class_name==='TTntLabel'&&p.WordWrap){
   const size=Math.abs(p['Font.Height']??parent['Font.Height']??-11),lineHeight=size+3;
   c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.font=`${p['Font.Style']?.includes('fsBold')?'bold ':''}${size}px Arial`;c.fillStyle='#fff';c.textBaseline='top';c.textAlign='left';
   let line='',yy=y;for(const word of String(p.Caption??'').split(' ')){const next=line?line+' '+word:word;if(line&&c.measureText(next).width>w){c.fillText(line,x,yy);yy+=lineHeight;line=word;}else line=next;}if(line)c.fillText(line,x,yy);c.restore();return;
  }
  return super.control(node,parent,ox,oy);
 }
 recapControl(node,parent,ox,oy){
  const p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;
  const x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx;
  if(node.class_name==='TImageList')return;
  if(node.class_name==='TAdvGlowButton')return super.control({...node,class_name:'TTntBitBtn'},parent,ox,oy);
  if(node.class_name==='TScrollBox'){
   const scroll=Math.min(Math.max(0,this.frame.recapScroll??9),Math.max(0,this.frame.recapRange-h));this.frame.recapScroll=scroll;
   c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.fillStyle='#245b2d';c.fillRect(x,y,w,h);
   //47ed50 stores Position while loading without moving child controls.
   //Resource coordinates therefore shift only by the delta from saved9.
   for(const child of node.children)this.recapControl(child,{...parent,...p},x,y+(p['VertScrollBar.Position']??0)-scroll);c.restore();
   if(this.activeFrame){
    const key='Form57.ScrollBox1';this.usedInputs.add(key);let el=this.inputs.get(key);
    if(!el){el=document.createElement('div');el.dataset.originalControl=key;el.setAttribute('aria-label','Manager changes');el.tabIndex=0;const content=document.createElement('div');el.append(content);document.body.append(el);this.inputs.set(key,el);el.addEventListener('scroll',()=>{const value=el.scrollTop/Number(el.dataset.scaleY||1);if(this.frame?.form==='Form57'&&Math.abs(this.frame.recapScroll-value)>.5){this.frame.recapScroll=value;this.paint();}});}
    const r=this.canvas.getBoundingClientRect(),sx=r.width/this.canvas.width,sy=r.height/this.canvas.height;
    el.dataset.scaleY=String(sy);Object.assign(el.style,{display:'block',position:'fixed',left:(r.left+(this.frame.origin.x+1+x)*sx)+'px',top:(r.top+(this.frame.origin.y+1+y)*sy)+'px',width:w*sx+'px',height:h*sy+'px',overflowY:'scroll',overflowX:'hidden',background:'transparent',zIndex:'2'});el.firstChild.style.height=this.frame.recapRange*sy+'px';
    if(Math.abs(el.scrollTop-scroll*sy)>.5)el.scrollTop=scroll*sy;
   }return;
  }
  if(node.class_name==='TUniHTMLabel'){
   c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.fillStyle='#fff';c.fillRect(x,y,w,h);c.textAlign='left';c.textBaseline='top';
   if(node.name==='p_camp'){
    c.font='11px Tahoma';c.fillStyle='#008040';
    this.frame.recapRows.forEach((row,i)=>{const yy=y+i*20,image=this.images.get(row.crest);if(image)c.drawImage(image,x,yy,18,18);const values=[row.clubName,row.outgoingName,row.incomingName,row.reasonText],starts=[22,172,340,500];values.forEach((value,j)=>c.fillText(value,x+starts[j],yy+2));});
   }else{c.font='12px Arial';c.fillStyle='#800000';c.fillText(p.HTMLText??'',x,y);}
   c.restore();return;
  }
  return super.control(node,parent,ox,oy);
 }
}
