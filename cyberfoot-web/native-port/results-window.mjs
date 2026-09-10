import {matchMinute} from './match-score-plan.mjs';
import {MatchTacticsWindow} from './match-tactics-window.mjs';
/** Form67 resource geometry. HTML rasterization, grid skin and substitution
 * annotations remain under comparison; this is a development renderer. */
export class ResultsWindow extends MatchTacticsWindow{
 async prepare(){
  await super.prepare();const form=this.forms.get('Form67'),paths=[];
  const walk=node=>{if(node.properties['Picture.Data']?.asset)paths.push(node.properties['Picture.Data'].asset);node.children.forEach(walk);};walk(form);
  await Promise.all(paths.map(path=>this.bitmap(path)));return this;
 }
 control(node,parent,ox,oy){
  if(this.frame.form!=='Form67')return super.control(node,parent,ox,oy);
  const p={...node.properties,...this.frame.properties?.[node.name]},x=ox+(p.Left??0),y=oy+(p.Top??0),w=p.Width??0,h=p.Height??0,c=this.ctx;if(p.Visible===false)return;
  if(['TGDIPPictureContainer','TImageList'].includes(node.class_name))return;
  if(node.class_name==='TImage'){
   const path=this.frame.imagePaths?.[node.name]??p['Picture.Data']?.asset,img=this.images.get(path);if(img)c.drawImage(img,x,y,w,h);return;
  }
  if(node.class_name==='TNextGrid'){
   c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.textBaseline='middle';c.font='11px Arial';
   this.frame.resultGrid.forEach((row,index)=>{
    const yy=y+index*21;if(row.header){c.fillStyle='#fff';c.textAlign='center';c.fillText(row.header,x+w/2,yy+10);return;}
    if(row.historyId===this.frame.selectedHistoryId){c.strokeStyle='#fff';c.strokeRect(x+.5,yy+.5,w-1,20);}
    const widths=[20,70,25,70,20],values=[null,row.names[0],row.score.join('x'),row.names[1],null];let xx=x;
    for(let col=0;col<5;col++){const width=widths[col];c.save();c.beginPath();c.rect(xx,yy,width,21);c.clip();if(col===0||col===4){const img=this.images.get(row.crests[col===0?0:1]);if(img)c.drawImage(img,xx+1,yy+1,18,18);}else{c.fillStyle='#fff';c.textAlign=col===2?'center':'left';c.fillText(values[col],xx+(col===2?width/2:1),yy+10);}c.restore();xx+=width;}
    if(this.activeFrame)this.hitTargets.push({name:'result-'+row.historyId,operation:'grid1SelectCell',value:row.historyId,x:this.frame.origin.x+1+x,y:this.frame.origin.y+1+yy,width:w,height:21});
   });c.restore();return;
  }
  if(node.name==='escalacao1'||node.name==='escalacao2'){
   const rows=this.frame.lineups[node.name==='escalacao1'?0:1];c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.textBaseline='top';c.font='bold 13px Arial';
   let yy=y;for(const row of rows){const chain=[...(row.substitutions??[]),row];for(let i=0;i<chain.length;i++){const entry=chain[i];c.font=i?'12px Arial':'bold 13px Arial';c.fillStyle='#fff';c.textAlign='left';let prefix='';if(i){const previous=chain[i-1],full=this.frame.fullGameGauge;prefix=matchMinute(previous.tick,full)+(full?"'":previous.tick<93?'/1º ':'/2º ');const icon=this.images.get('assets/i_sub.png');if(icon)c.drawImage(icon,x,yy,12,12);}c.fillText(prefix+' '+entry.name,x+(i?14:0),yy,160-(i?14:0));c.fillText(entry.rating>0?String(entry.rating):'s/n',x+165,yy);yy+=i?16:18;}}c.restore();return;
  }
  if(node.class_name==='TAdvSmoothPanel'){
   const rows=this.frame.panels?.[node.name]??[];c.save();c.beginPath();c.rect(x,y,w,h);c.clip();c.font='bold 11px Arial';c.textBaseline='top';c.textAlign='left';
   rows.forEach((row,index)=>{const yy=y+index*17,img=this.images.get('assets/'+row.icon+'.png');if(img)c.drawImage(img,x,yy,14,14);c.fillStyle='#dfdf00';c.textAlign=row.align??'left';c.fillText(row.text,row.align==='right'?x+w:x+(img?17:0),yy,w-(img?17:0));});c.restore();return;
  }
  return super.control(node,parent,ox,oy);
 }
}
