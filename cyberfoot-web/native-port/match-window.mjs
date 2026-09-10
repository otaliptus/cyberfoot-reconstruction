import {FormRenderer} from './form-renderer.mjs';
const rgb=n=>`rgb(${n&255},${(n>>>8)&255},${(n>>>16)&255})`;
/** Geometry from 60f0d0, 6109ac and the mode-4 branch of 610b38. */
export function fourDivisionMatchLayout(rowSpacing=20){
 const rows=[],groups=[];let top=63;
 for(let division=1;division<=4;division++){
  const first=top;
  for(let i=0;i<5;i++){rows.push({id:rows.length+1,division,top});top+=rowSpacing;}
  groups.push({division,left:26,top:first-10,width:740,height:4*rowSpacing+35,labelTop:first-23});
  top=rows.at(-1).top+65;
 }
 return {rows,groups};
}
/** Original match presentation, currently covering the mode-4 league layout. */
export class MatchWindow extends FormRenderer {
 async prepare(){await Promise.all(['original-match-background','i_gol','i_golv','i_ca','i_cv','i_cacv','i_ct','i_sub'].map(name=>this.bitmap('assets/'+name+'.png')));return this;}
 async loadCrests(paths){await Promise.all([...new Set(paths.filter(Boolean))].map(path=>this.bitmap(path)));}
 control(node,parent,ox,oy){
  const p={...node.properties,...this.frame.properties?.[node.name]},c=this.ctx;if(p.Visible===false)return;
  if(node.class_name==='TImageList')return;
  if(node.class_name==='TGauge'){
   const x=ox+p.Left,y=oy+p.Top;c.fillStyle='#fff';c.fillRect(x,y,p.Width,p.Height);c.strokeStyle='#808080';c.strokeRect(x+.5,y+.5,p.Width-1,p.Height-1);
   c.fillStyle=rgb(p.ForeColor);c.fillRect(x+1,y+1,Math.max(0,Math.min(1,(p.Progress??0)/(p.MaxValue??100)))*(p.Width-2),p.Height-2);return;
  }
  if(node.class_name==='TButton')return super.control({...node,class_name:'TTntBitBtn'},parent,ox,oy);
  return super.control(node,parent,ox,oy);
 }
 paintFrame(frame){
  if(frame.form!=='Form46')return;
  const c=this.ctx,layout=fourDivisionMatchLayout(frame.rowSpacing??20);c.save();c.beginPath();c.rect(0,0,frame.width-2,frame.height-2);c.clip();
  for(const group of layout.groups){
   c.strokeStyle='#006400';c.strokeRect(group.left+.5,group.top+.5,group.width-1,group.height-1);
   c.drawImage(this.images.get('assets/original-match-background.png'),201,group.top,335,group.height);
   c.font='11px Arial';c.textAlign='center';c.textBaseline='top';c.fillStyle='#000';c.fillText(frame.divisionLabels[group.division-1],369.5,group.labelTop+1);c.fillStyle='#fff';c.fillText(frame.divisionLabels[group.division-1],368.5,group.labelTop);
  }
  const text=(value,x,y,width,align,color,size)=>{c.save();c.beginPath();c.rect(x,y,width,17);c.clip();c.fillStyle=color;c.font=`${size}px Arial`;c.textBaseline='top';c.textAlign=align;c.fillText(String(value),x+(align==='center'?width/2:align==='right'?width:0),y+1);c.restore();};
  for(const row of layout.rows){
   const f=frame.fixtures.find(f=>f.id===row.id);if(!f)continue;const y=row.top;
   c.fillStyle='#006400';c.fillRect(32,y,169,17);
   c.fillStyle=rgb(f.homeBackground);c.fillRect(208,y,137,17);c.fillStyle=rgb(f.awayBackground);c.fillRect(395,y,137,17);
   c.fillStyle='#006400';c.fillRect(348,y,20,17);c.fillRect(372,y,20,17);
   text(f.stadium,36,y,97,'right','#fff',28/3);text(f.attendance,136,y,57,'left','#fff',28/3);
   text(f.home,230,y,113,'left',rgb(f.homeColor),32/3);text(f.away,417,y,113,'left',rgb(f.awayColor),32/3);
   if(f.homeCrest)c.drawImage(this.images.get(f.homeCrest),212,y,17,17);
   if(f.awayCrest)c.drawImage(this.images.get(f.awayCrest),399,y,17,17);
   text(f.homeScore,348,y,20,'center','#fff',32/3);text(f.awayScore,372,y,20,'center','#fff',32/3);
   if(f.event){
    if(f.event.icon)c.drawImage(this.images.get('assets/'+f.event.icon+'.png'),540,y,17,17);
    c.save();c.beginPath();c.rect(557,y,215,17);c.clip();c.font=`${f.event.bold?'bold ':''}11px Arial`;c.textAlign='left';c.textBaseline='top';c.fillStyle='#000';c.fillText(f.event.text,558,y+2);c.fillStyle=({clwhite:'#fff',clyellow:'#ff0',clred:'#f00'})[f.event.colour]??f.event.colour;c.fillText(f.event.text,557,y+1);c.restore();
   }
  }
  c.restore();
 }
}
