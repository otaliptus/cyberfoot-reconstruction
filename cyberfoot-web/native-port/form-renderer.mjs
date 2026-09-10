import {UnportedOperationError} from './ui-surface.mjs';
const colors={clBlack:'#000000',clWhite:'#ffffff',clWindowText:'#000000',clWindow:'#ffffff',clBtnFace:'#d4d0c8',clYellow:'#ffff00',clGray:'#808080',clSilver:'#c0c0c0',clBlue:'#0000ff',clRed:'#ff0000',clGreen:'#008000',clNone:'transparent'};
function color(value){if(typeof value==='number')return `rgb(${value&255},${(value>>>8)&255},${(value>>>16)&255})`;if(value===undefined)return '#000';if(colors[value])return colors[value];throw Error(`Unmapped original color ${value}`);}
function plainText(value){return String(value??'').replace(/<[^>]*>/g,'').replace(/&amp;/g,'&').replace(/&lt;/g,'<').replace(/&gt;/g,'>');}
export class FormRenderer {
 constructor(canvas,forms){this.canvas=canvas;this.ctx=canvas.getContext('2d');this.forms=new Map(forms.map(f=>[f.name,f]));this.images=new Map();this.hitTargets=[];this.handlers=new Map();this.hover=null;this.down=null;this.frame=null;this.parents=[];this.inputs=new Map();this.usedInputs=new Set();
  this.move=e=>{const hit=this.hit(e);if(hit!==this.hover){this.hover=hit;this.canvas.style.cursor=hit?'pointer':'default';this.paint();}};
  this.press=e=>{this.down=this.hit(e);this.paint();};
  this.release=e=>{const hit=this.hit(e),pressed=this.down;this.down=null;this.paint();if(hit&&hit.name===pressed?.name)this.invoke(hit);};
  addEventListener('resize',()=>this.paint());addEventListener('scroll',()=>this.paint());
  canvas.addEventListener('pointermove',this.move);canvas.addEventListener('pointerdown',this.press);canvas.addEventListener('pointerup',this.release);
 }
 register(name,fn){this.handlers.set(name,fn);}
 invoke(hit){const key=this.frame.form+'.'+hit.operation;const handler=this.handlers.get(key);if(!handler)throw new UnportedOperationError(key);return handler(hit.value);}
 hit(e){const r=this.canvas.getBoundingClientRect(),x=(e.clientX-r.left)*this.canvas.width/r.width,y=(e.clientY-r.top)*this.canvas.height/r.height;return this.hitTargets.findLast(h=>x>=h.x&&x<h.x+h.width&&y>=h.y&&y<h.y+h.height)??null;}
 async bitmap(path){if(!this.images.has(path)){const img=new Image();img.src=path;await img.decode();this.images.set(path,img);}return this.images.get(path);}
 async show(view,{modal=false}={}){const f=this.forms.get(view.form);if(!f)throw Error(`Unknown original form ${view.form}`);if(view.background)await this.bitmap(view.background);if(modal&&this.frame)this.parents.push(this.frame);else this.parents=[];this.frame={...view,width:f.properties.ClientWidth+2,height:f.properties.ClientHeight+2,origin:{x:Math.trunc((this.canvas.width-f.properties.ClientWidth-2)/2),y:Math.trunc((this.canvas.height-f.properties.ClientHeight-2)/2)}};this.hover=null;this.down=null;this.paint();}
 update(view){Object.assign(this.frame,view);this.paint();}
 close(){this.frame=this.parents.pop()??null;this.hover=null;this.down=null;this.paint();}
 paint(){const c=this.ctx;c.clearRect(0,0,this.canvas.width,this.canvas.height);c.fillStyle='#3a6ea5';c.fillRect(0,0,this.canvas.width,this.canvas.height);this.hitTargets=[];this.usedInputs.clear();const top=this.frame;if(!top){for(const el of this.inputs.values())el.style.display='none';return;}
  for(const frame of [...this.parents,top]){this.frame=frame;this.activeFrame=frame===top;this.hitTargets=[];
  const f=this.forms.get(frame.form),x=frame.origin.x,y=frame.origin.y;c.save();c.translate(x,y);c.fillStyle='#000';c.fillRect(0,0,frame.width,frame.height);c.translate(1,1);c.beginPath();c.rect(0,0,frame.width-2,frame.height-2);c.clip();
  c.fillStyle=frame.background?c.createPattern(this.images.get(frame.background),'repeat'):color(f.properties.Color);c.fillRect(0,0,frame.width-2,frame.height-2);
  for(const node of f.children)this.control(node,f.properties,0,0);
  this.paintFrame?.(frame);
  c.restore();}
  this.frame=top;for(const [key,el] of this.inputs)if(!this.usedInputs.has(key))el.style.display='none';
 }
 buttonInput(node,p,x,y,w,h){
  const key=this.frame.form+'.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
  if(!el){el=document.createElement('button');el.style.position='fixed';el.dataset.originalControl=key;document.body.append(el);this.inputs.set(key,el);el.addEventListener('click',()=>this.invoke({operation:el.dataset.operation}));el.addEventListener('focus',()=>this.paint());el.addEventListener('blur',()=>this.paint());el.addEventListener('pointerdown',()=>{this.down={name:node.name};this.paint();});el.addEventListener('pointerup',()=>{this.down=null;this.paint();});}
  el.textContent=plainText(p.Caption);el.dataset.operation=p.OnClick;el.disabled=p.Enabled===false;el.tabIndex=(p.TabOrder??0)+1;
  const r=this.canvas.getBoundingClientRect(),sx=r.width/this.canvas.width,sy=r.height/this.canvas.height;
  Object.assign(el.style,{display:'block',position:'fixed',left:(r.left+(this.frame.origin.x+1+x)*sx)+'px',top:(r.top+(this.frame.origin.y+1+y)*sy)+'px',width:w*sx+'px',height:h*sy+'px',border:'0',borderRadius:'0',padding:'0',color:'transparent',background:'transparent',outline:document.activeElement===el?'1px dotted #000':'none',outlineOffset:'-4px',cursor:p.Enabled===false?'default':'pointer',zIndex:'2'});
 }
 input(node,p,font,x,y,w,h,combo){
  const key=this.frame.form+'.'+node.name;this.usedInputs.add(key);let el=this.inputs.get(key);
  if(!el){el=document.createElement(combo?'select':'input');el.style.position='fixed';el.dataset.originalControl=key;el.setAttribute('aria-label',node.name);document.body.append(el);this.inputs.set(key,el);el.addEventListener(combo?'change':'input',()=>{const operation=el.dataset.operation;if(operation)this.invoke({operation,value:combo?el.selectedIndex:el.value});});}
  el.dataset.operation=p.OnChange??'';const r=this.canvas.getBoundingClientRect(),sx=r.width/this.canvas.width,sy=r.height/this.canvas.height;
  Object.assign(el.style,{display:'block',position:'fixed',left:(r.left+(this.frame.origin.x+1+x)*sx)+'px',top:(r.top+(this.frame.origin.y+1+y)*sy)+'px',width:w*sx+'px',height:h*sy+'px',boxSizing:'border-box',border:'2px inset #d4d0c8',borderRadius:'0',padding:'0 2px',font:this.ctx.font,color:color(font['Font.Color']),background:color(p.Color??'clWhite'),zIndex:'2'});
  el.style.fontSize=Math.abs(font['Font.Height']??-11)*sy+'px';el.disabled=p.Enabled===false;el.tabIndex=(p.TabOrder??0)+1;
  if(combo){Object.assign(el.style,{appearance:'none',backgroundImage:'linear-gradient(45deg, transparent 50%, #000 50%), linear-gradient(135deg, #000 50%, transparent 50%)',backgroundPosition:'calc(100% - 8px) 50%, calc(100% - 4px) 50%',backgroundSize:'4px 4px',backgroundRepeat:'no-repeat',paddingRight:'19px'});const items=p.Items??[],signature=JSON.stringify(items);if(el.dataset.items!==signature){el.replaceChildren(...items.map(text=>{const option=document.createElement('option');option.textContent=plainText(text);return option;}));el.dataset.items=signature;}el.selectedIndex=p.ItemIndex??-1;}
  else{el.maxLength=p.MaxLength||524288;if(el.value!==String(p.Text??''))el.value=String(p.Text??'');}
 }
 control(node,parent,ox,oy){const c=this.ctx,p={...node.properties,...this.frame.properties?.[node.name]};if(p.Visible===false)return;const x=(p.Left??0)+ox,y=(p.Top??0)+oy,w=p.Width??0,h=p.Height??0;
  const font={};for(const key of ['Font.Height','Font.Name','Font.Style','Font.Color'])font[key]=p[key]??parent[key];
  c.font=`${font['Font.Style']?.includes('fsBold')?'bold ':''}${font['Font.Style']?.includes('fsItalic')?'italic ':''}${Math.abs(font['Font.Height']??-11)}px "${font['Font.Name']==='MS Sans Serif'?'Arial':font['Font.Name']??'Arial'}"`;c.textBaseline='top';c.textAlign='left';
  if(node.class_name==='TShape'){c.fillStyle=color(p['Brush.Color']??'clWhite');c.fillRect(x,y,w,h);c.strokeStyle=color(p['Pen.Color']??'clBlack');c.lineWidth=p['Pen.Width']??1;if(p['Pen.Style']!=='psClear')c.strokeRect(x+0.5,y+0.5,w-1,h-1);}
  else if(['TTntLabel','TLabel','TUniHTMLabel'].includes(node.class_name)){
   const text=plainText(p.HTMLText??p.Caption);let align=p.Alignment==='taRightJustify'?'right':p.Alignment==='taCenter'||/align="center"/.test(p.HTMLText??'')?'center':'left';
   // AutoSize labels grow to text width in the original; fixed labels retain alignment.
   if(node.class_name==='TUniHTMLabel'&&p.AutoSizing!==false)align='left';
   // Opaque labels fill their original Color rectangle; HTML labels with a fixed
   // width wrap, and VAlignment positions the wrapped block as in the DFM.
   if(p.Transparent===false){c.fillStyle=color(p.Color??'clBtnFace');c.fillRect(x,y,w,h);}
   c.textAlign=align;const tx=x+(align==='right'?w:align==='center'?w/2:0);
   const lines=[];for(const paragraph of String(text).split(/\r?\n/)){
    if(w<=0||(p.WordWrap!==true&&!(node.class_name==='TUniHTMLabel'&&p.AutoSizing===false))){lines.push(paragraph);continue;}
    let line='';for(const word of paragraph.split(/\s+/).filter(Boolean)){const next=line?line+' '+word:word;if(line&&c.measureText(next).width>w){lines.push(line);line=word;}else line=next;}lines.push(line);
   }
   const lineHeight=Math.abs(font['Font.Height']??-11)+2,blockHeight=lines.length*lineHeight;
   const top=p.VAlignment==='tvaCenter'?y+(h-blockHeight)/2:p.VAlignment==='tvaBottom'?y+h-blockHeight:y;
   const shadow=(p.HTMLText??'').includes('<shad>')?{offset:p.ShadowOffset??1,color:color(p.ShadowColor??'clBlack')}:null;
   lines.forEach((line,index)=>{
    if(shadow){c.fillStyle=shadow.color;c.fillText(line,tx+shadow.offset,top+index*lineHeight+shadow.offset);}
    c.fillStyle=color(font['Font.Color']);c.fillText(line,tx,top+index*lineHeight);
   });
  }else if(node.class_name==='TTimer'){
   if(p.Enabled)throw new UnportedOperationError('Active timer '+node.name);
  }else if(node.class_name==='TEdit'||node.class_name==='TUniHTMLCombobox'){
   const combo=node.class_name==='TUniHTMLCombobox';c.fillStyle=color(p.Color??'clWhite');c.fillRect(x,y,w,h);c.strokeStyle='#808080';c.strokeRect(x+.5,y+.5,w-1,h-1);c.fillStyle=color(font['Font.Color']);c.fillText(combo?(p.Items??[])[p.ItemIndex]??'':p.Text??'',x+3,y+3);
   if(this.activeFrame)this.input(node,p,font,x,y,w,h,combo);
  }else if(node.class_name==='TUpDown'){
   for(let part=0;part<2;part++){const yy=y+part*h/2;c.fillStyle='#d4d0c8';c.fillRect(x,yy,w,h/2);c.strokeStyle='#808080';c.strokeRect(x+.5,yy+.5,w-1,h/2-1);c.fillStyle='#000';c.beginPath();c.moveTo(x+w/2,yy+(part?10:4));c.lineTo(x+w/2-3,yy+(part?6:8));c.lineTo(x+w/2+3,yy+(part?6:8));c.fill();this.hitTargets.push({name:node.name+(part?':down':':up'),operation:p.OnClick,value:part,x:x+this.frame.origin.x+1,y:yy+this.frame.origin.y+1,width:w,height:h/2});}
  }else if(node.class_name==='TPanel'){
   c.fillStyle=color(p.Color??'clBtnFace');c.fillRect(x,y,w,h);c.strokeStyle='#fff';c.strokeRect(x+.5,y+.5,w-1,h-1);
   for(const child of node.children)this.control(child,{...parent,...p},x,y);
  }else if(node.class_name==='TTntBitBtn'){
   c.fillStyle='#d4d0c8';c.fillRect(x,y,w,h);c.strokeStyle=this.down?.name===node.name?'#404040':'#fff';c.strokeRect(x+.5,y+.5,w-1,h-1);c.strokeStyle='#404040';c.beginPath();c.moveTo(x+w-1,y);c.lineTo(x+w-1,y+h-1);c.lineTo(x,y+h-1);c.stroke();
   c.fillStyle=color(p.Enabled===false?'clGray':font['Font.Color']);c.textAlign='center';c.textBaseline='middle';c.fillText(plainText(p.Caption),x+w/2,y+h/2);
   if(this.activeFrame)this.buttonInput(node,p,x,y,w,h);
   if(p.Enabled!==false&&p.OnClick)this.hitTargets.push({name:node.name,operation:p.OnClick,x:x+this.frame.origin.x+1,y:y+this.frame.origin.y+1,width:w,height:h});
  }else if(node.class_name==='TXiButton'){
   const key=node.name,prefix=p.Enabled===false?'Disabled':this.down?.name===key?'Down':this.hover?.name===key?'Over':'';
   c.fillStyle=color(p[prefix+'ColorFace']??p.ColorFace);c.fillRect(x,y,w,h);c.strokeStyle=color(p[prefix+'ColorBorder']??p.ColorBorder);c.strokeRect(x+.5,y+.5,w-1,h-1);
   c.strokeStyle=color(p[prefix+'ColorLight']??p.ColorLight);c.beginPath();c.moveTo(x+1,y+h-2);c.lineTo(x+1,y+1);c.lineTo(x+w-2,y+1);c.stroke();
   c.strokeStyle=color(p[prefix+'ColorDark']??p.ColorDark);c.beginPath();c.moveTo(x+w-2,y+1);c.lineTo(x+w-2,y+h-2);c.lineTo(x+1,y+h-2);c.stroke();
   c.fillStyle=color(p[prefix+'ColorText']??p.ColorText);c.textAlign='center';c.textBaseline='middle';c.fillText(plainText(p.Caption),x+w/2,y+h/2);
   if(p.Enabled!==false&&p.OnClick)this.hitTargets.push({name:node.name,operation:p.OnClick,x:x+this.frame.origin.x+1,y:y+this.frame.origin.y+1,width:w,height:h});
  }else throw new UnportedOperationError('Render '+node.class_name);
 }
}
