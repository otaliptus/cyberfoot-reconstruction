import {screenSlotGeometry} from './lineup-screen.mjs';
/** Original Form87 image layer. Coordinates and source images are recovered;
 * player HTML labels/drag behavior belong to the separate screen controller.
 */
export class LineupPitch {
 constructor(){this.images=new Map();}
 async load(){
  await Promise.all(['original-lineup-pitch.jpg','original-lineup-targets.png',...Array.from({length:4},(_,i)=>`original-shirt-${i}.png`)].map(async name=>{const image=new Image();image.src=new URL('./assets/'+name,import.meta.url);await image.decode();this.images.set(name,image);}));return this;
 }
 draw(ctx,slots,{x=0,y=0,shirtImage}={}){
  ctx.save();ctx.translate(x,y);ctx.drawImage(this.images.get('original-lineup-pitch.jpg'),0,0);
  const targets=[];
  for(let i=0;i<18;i++){
   const slot=slots[i],g=screenSlotGeometry(i+1,slot.position),kind=slot.playerId>0?(i===0?2:i<11?1:3):0;
   const image=i>0&&i<11&&kind===1&&shirtImage?shirtImage:this.images.get(`original-shirt-${kind}.png`);
   // TImage.Center is true and Stretch false in FormCreate; keep source size.
   ctx.drawImage(image,g.x+Math.trunc((g.width-image.width)/2),g.y+Math.trunc((g.height-image.height)/2));
   targets.push({slot:i+1,playerId:slot.playerId,position:slot.position,...g,x:x+g.x,y:y+g.y});
  }
  ctx.restore();return targets;
 }
}
