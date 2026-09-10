/** Original-form rendering infrastructure; not a replacement game UI yet.
 * No routes or feature handlers are fabricated. Unknown handlers fail explicitly.
 */
export class UnportedOperationError extends Error {
 constructor(operation){super(`Original operation has not been reconstructed: ${operation}`);this.name='UnportedOperationError';}
}
export class OriginalFormSurface {
 constructor(canvas,forms){this.canvas=canvas;this.ctx=canvas.getContext('2d');this.forms=new Map(forms.map(f=>[f.name,f]));this.images=new Map();this.operations=new Map();}
 register(operation,fn){if(this.operations.has(operation))throw Error(`Duplicate operation: ${operation}`);this.operations.set(operation,fn);}
 invoke(operation,...args){const fn=this.operations.get(operation);if(!fn)throw new UnportedOperationError(operation);return fn(...args);}
 async image(path){if(!this.images.has(path)){const img=new Image();img.src=path;await img.decode();this.images.set(path,img);}return this.images.get(path);}
 // 0065e49c centers the original 531x303 outer window using integer division.
 async drawMainMenu(language){
  const c=this.ctx,f=this.forms.get('Form1');
  const x=Math.trunc((this.canvas.width-(f.properties.ClientWidth+2))/2),y=Math.trunc((this.canvas.height-(f.properties.ClientHeight+2))/2);
  c.fillStyle='rgb(58,110,165)';c.fillRect(0,0,this.canvas.width,this.canvas.height);
  c.fillStyle='#000';c.fillRect(x,y,531,303);
  c.save();c.beginPath();c.rect(x+1,y+1,529,301);c.clip();
  c.drawImage(await this.image('assets/Form1-Image2-Picture-Data.png'),x+1,y+1);
  c.fillStyle='white';c.textBaseline='top';c.font='11px Arial';c.fillText('Select your language:',x+137,y+105);
  c.font='bold 14px Arial';c.textAlign='center';
  const labels=[language[1].text,language[2].text,language[3].text,language[4].text];
  for(let i=0;i<labels.length;i++)c.fillText(labels[i],x+398,y+109+47*i);
  c.textAlign='left';c.fillText(language[5].text,x+15,y+204);
  c.font='bold 11px Arial';c.fillText('www.cyberfoot.net',x+25,y+238);
  c.font='bold 12px Arial';c.fillText(language[7].text,x+33,y+273);
  c.restore();
  this.lastFrame={form:'Form1',origin:{x,y},width:531,height:303,language:language[0].text};
  return this.lastFrame;
 }
}
