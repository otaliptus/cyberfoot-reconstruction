/** Real renderer for the original Delphi VCL forms stored in forms.json.
 *
 * `layoutForm` is a pure function: it walks a DFM tree plus per-control dynamic
 * overrides and returns a list of drawing primitives at the original pixel
 * geometry. `VclRenderer` paints those primitives on a <canvas> and exposes the
 * same small host API the verified session modules already expect
 * (register/show/update/close/bitmap/loadCrests/firstRow/hitTargets).
 *
 * Original control art (bitmaps, shapes, labels, grids, lists) is painted with
 * the extracted assets; a control whose bitmap is missing falls back to a drawn
 * shape instead of a placeholder box. Unknown visible classes use a neutral
 * placeholder; invisible infrastructure (TImageList, TTimer, menus, dialogs) is
 * skipped.
 */
import {fourDivisionMatchLayout} from './match-window.mjs';
import {screenSlotGeometry} from './lineup-screen.mjs';
import {matchLineupGeometry} from './match-lineup-screen.mjs';
import {matchMinute} from './match-score-plan.mjs';
import {UnportedOperationError} from './ui-surface.mjs';

const NAMED_COLORS=Object.freeze({
 clBlack:'#000000',clMaroon:'#800000',clGreen:'#008000',clOlive:'#808000',clNavy:'#000080',clPurple:'#800080',clTeal:'#008080',clGray:'#808080',
 clSilver:'#c0c0c0',clRed:'#ff0000',clLime:'#00ff00',clYellow:'#ffff00',clBlue:'#0000ff',clFuchsia:'#ff00ff',clAqua:'#00ffff',clWhite:'#ffffff',
 clMoneyGreen:'#c0dcc0',clSkyBlue:'#a6caf0',clCream:'#fffbf0',clMedGray:'#a4a0a0',clNone:'transparent',
 clWindowText:'#000000',clWindow:'#ffffff',clBtnFace:'#d4d0c8',clBtnShadow:'#808080',clBtnHighlight:'#ffffff',clHighlight:'#000080',clHighlightText:'#ffffff',
 clActiveCaption:'#000080',clInactiveCaption:'#808080',clMenu:'#d4d0c8',clMenuText:'#000000',clInfoBk:'#ffffe1',clInfoText:'#000000',clGrayText:'#808080',
 cl3DDkShadow:'#404040',cl3DLight:'#d4d0c8',clBackground:'#3a6ea5',clActiveBorder:'#d4d0c8',clInactiveBorder:'#d4d0c8',clAppWorkSpace:'#808080'
});
const SYSTEM_COLORS=['#000000','#800000','#008000','#808000','#000080','#800080','#008080','#c0c0c0','#808080','#c0c0c0','#000000','#ffffff','#000000','#000000','#d4d0c8','#d4d0c8','#000000','#000000','#ffffff','#000000','#d4d0c8','#ffffff','#000000','#808080','#ffffff','#000000','#000000'];
const FONT_STACKS=Object.freeze({
 'MS Sans Serif':'"MS Sans Serif","Microsoft Sans Serif",Tahoma,Verdana,Arial,sans-serif',
 'Microsoft Sans Serif':'"Microsoft Sans Serif","MS Sans Serif",Tahoma,Verdana,Arial,sans-serif',
 Tahoma:'Tahoma,Verdana,"MS Sans Serif",Arial,sans-serif',
 Arial:'Arial,Helvetica,"MS Sans Serif",sans-serif',
 System:'system-ui,"Segoe UI",Tahoma,Arial,sans-serif',
 'Times New Roman':'"Times New Roman",Times,serif',
 'Courier New':'"Courier New",Courier,monospace',
 Verdana:'Verdana,Tahoma,Arial,sans-serif'
});
const INVISIBLE=new Set(['TImageList','TTimer','TMenuItem','TTntMenuItem','TTntPopupMenu','TPopupMenu','TMainMenu','TColorDialog','TOpenDialog','TSaveDialog','TFontDialog',
 'TAdvSmoothMessageDialog','TGDIPPictureContainer','TPictureContainer','TProgressCyl','TSplitter','TFontDialog','TPrinterSetupDialog','TFindDialog','TReplaceDialog',
 'TNxTextColumn','TNxNumberColumn','TNxImageColumn','TNxGraphicColumn','TNxProgressColumn','TNxComboBoxColumn','TNxDateColumn','TNxTreeColumn','TNxIncrementColumn']);
const DEFAULT_FONT={name:'Arial',height:11,bold:false,italic:false,underline:false,strikeout:false,color:'#000000'};

export function delphiColor(value,fallback='#000000'){
 if(value===undefined||value===null)return fallback;
 if(typeof value==='number'){
  const unsigned=value>>>0;
  if((unsigned&0xff000000)===0x80000000)return SYSTEM_COLORS[unsigned&0xff]??fallback;
  return `rgb(${unsigned&0xff},${(unsigned>>>8)&0xff},${(unsigned>>>16)&0xff})`;
 }
 const named=NAMED_COLORS[value];
 if(named)return named;
 if(typeof value==='string'&&(/^#[0-9a-f]{3,8}$/i.test(value)||/^rgb/i.test(value)))return value;
 return fallback;
}
export function isTransparent(value){return value==='clNone'||value==='transparent';}

export function fontSpec(properties={},parent=DEFAULT_FONT){
 const height=properties['Font.Height']!==undefined?Number(properties['Font.Height']):parent.height;
 const name=properties['Font.Name']!==undefined?String(properties['Font.Name']):parent.name;
 const styles=properties['Font.Style']!==undefined?(Array.isArray(properties['Font.Style'])?properties['Font.Style']:[]):null;
 const color=properties['Font.Color']!==undefined?delphiColor(properties['Font.Color'],parent.color):parent.color;
 return {
  name,
  height:Number.isFinite(height)&&height!==0?Math.abs(height):11,
  bold:styles?styles.includes('fsBold'):parent.bold,
  italic:styles?styles.includes('fsItalic'):parent.italic,
  underline:styles?styles.includes('fsUnderline'):parent.underline,
  strikeout:styles?styles.includes('fsStrikeOut'):parent.strikeout,
  color
 };
}
export function fontCss(font){
 const stack=FONT_STACKS[font.name]??`${font.name},${FONT_STACKS.Arial}`;
 const size=Number.isFinite(font.height)?font.height:11;
 return `${font.italic?'italic ':''}${font.bold?'bold ':''}${size}px ${stack}`;
}
const decodeEntities=value=>String(value??'').replace(/&amp;/g,'&').replace(/&lt;/g,'<').replace(/&gt;/g,'>').replace(/&quot;/g,'"').replace(/&nbsp;/g,' ');
const stripTags=value=>decodeEntities(String(value??'').replace(/<[^>]*>/g,''));
/** Parses the small HTML subset used by the original TUniHTMLabel captions into
 * runs (bold/underline/colour/face/size), alignment, shadow flag and lines. */
export function parseHtmlText(value){
 const raw=String(value??'');
 if(raw==='')return {plain:'',align:null,shadow:false,runs:[],lines:[]};
 const alignMatch=raw.match(/<p[^>]*align\s*=\s*["']?([a-z]+)/i)??raw.match(/align\s*=\s*["']?(center|right|left)/i);
 const align=alignMatch?alignMatch[1].toLowerCase():null;
 const shadow=/<shad>/i.test(raw);
 const lines=[];let currentLine=[];let bold=0,italic=0,underline=0;let color=null,face=null,size=null,indent=null;
 const push=text=>{if(text)currentLine.push({text,bold:bold>0,italic:italic>0,underline:underline>0,color,face,size,indent});};
 const re=/<(\/?)([a-z0-9]+)([^>]*)>|([^<]+)/gi;
 let match;
 while((match=re.exec(raw))!==null){
  const [,closing,tag,attributes,text]=match;
  if(text!==undefined){push(decodeEntities(text));continue;}
  const name=tag.toLowerCase(),down=closing==='/';
  if(name==='b')bold+=down?-1:1;
  else if(name==='i')italic+=down?-1:1;
  else if(name==='u')underline+=down?-1:1;
  else if(name==='font'){
   if(down){color=null;face=null;size=null;}
   else{const c=attributes.match(/color\s*=\s*["']?([^"'\s>]+)/i),f=attributes.match(/face\s*=\s*["']?([^"'\s>]+)/i),s=attributes.match(/size\s*=\s*["']?(\d+)/i);color=c?c[1]:color;face=f?f[1]:face;size=s?Number(s[1])+3:size;}
  }else if(name==='br'){lines.push(currentLine);currentLine=[];indent=null;}
  else if(name==='ind'){const x=attributes.match(/x\s*=\s*["']?(-?\d+)/i);if(x)indent=Number(x[1]);}
 }
 lines.push(currentLine);
 const joined=lines.map(line=>line.map(run=>run.text).join(''));
 return {plain:joined.join('\n'),align,shadow,runs:lines.flat(),lines};
}
function captionText(p){
 if(p.Caption!==undefined)return String(p.Caption);
 if(p['Caption.Text']!==undefined)return String(p['Caption.Text']);
 return '';
}
function richText(p){
 const html=p.HTMLText??p.HTML??null;
 if(html!==null)return {source:String(html),parsed:parseHtmlText(html)};
 const caption=captionText(p);
 if(/<[a-z][^>]*>/i.test(caption))return {source:caption,parsed:parseHtmlText(caption)};
 return {source:caption,parsed:null};
}
function imagePath(node,p,frame){
 const direct=frame.images?.[node.name]??frame.imagePaths?.[node.name]??frame.kitImagePaths?.[node.name];
 if(direct)return direct;
 // Single-crest hosts (Form34/Form54 escudo via penalty hosts): frame.crest.
 if(node.name==='escudo'&&typeof frame.crest==='string'&&frame.crest)return frame.crest;
 // Dual-crest hosts (Form88 f88esc1/f88esc2 via match tactics): frame.crests array.
 if(node.name==='f88esc1'&&Array.isArray(frame.crests)&&frame.crests[0])return frame.crests[0];
 if(node.name==='f88esc2'&&Array.isArray(frame.crests)&&frame.crests[1])return frame.crests[1];
 const crestMapped=frame.crestPaths?.[node.name];
 if(typeof crestMapped==='string'&&crestMapped)return crestMapped;
 return p['Picture.Data']?.asset??p['Glyph.Data']?.asset??null;
}
function pushInteraction(ctx,node,p,x,y,w,h,extra={}){
 const operation=p.OnClick??p.OnMouseDown;
 if(!operation||p.Enabled===false)return null;
 const entry={name:node.name,operation,x,y,width:w,height:h,...extra};
 ctx.interactions.push(entry);
 return entry;
}
function pushInput(ctx,node,p,x,y,w,h,kind,model,operation){
 const disabled=p.Enabled===false;
 // Delphi OnSelect (TComboBox/ComboBoxEx) behaves like OnChange for selection.
 const resolved=disabled?null:(operation??p.OnClick??p.OnChange??p.OnSelect??null);
 ctx.interactions.push({name:node.name,className:node.class_name,operation:resolved,x,y,width:w,height:h,kind,input:{...model,disabled}});
}

function gridRows(frame,name){
 const candidates=[frame.grids?.[name],frame.tables?.[name],name==='gridview1'?frame.roster:undefined,name==='grid1'&&!frame.resultGrid?frame.rows:undefined,Array.isArray(frame.rows)?frame.rows:undefined,frame.listItems?.[name]];
 for(const candidate of candidates)if(Array.isArray(candidate))return candidate;
 return [];
}
function gridColumns(node){
 return (node.children??[]).filter(child=>typeof child.class_name==='string'&&child.class_name.endsWith('Column')&&child.properties.Visible!==false);
}
function gridPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const font=fontSpec(p,parentFont);
 const columns=gridColumns(node).map(column=>({name:column.name,key:column.name,width:Number(column.properties.Width)||30,image:column.class_name==='TNxImageColumn'||column.class_name==='TNxGraphicColumn',caption:ctx.frame.headers?.[column.name]??column.properties['Header.Caption']??''}));
 const rows=gridRows(ctx.frame,node.name);
 const rowHeight=Number(p.RowSize)||18,headerEnabled=(p.Options??[]).includes('goHeader')&&p.HeaderSize!==0;
 const headerSize=headerEnabled?(Number(p.HeaderSize)||18):0;
 const primitive={kind:'grid',name:node.name,x,y,w,h,
  colors:{background:delphiColor(p.Color??'#ffffff'),alt:delphiColor(p.AltColor??p.Color??'#ffffff'),grid:delphiColor(p.GridLinesColor??p.GridColor??'#c0c0c0'),header:delphiColor(p.HeaderColor??'#d4d0c8'),text:font.color,selection:delphiColor(p.SelectionColor??'clHighlight'),selectionText:delphiColor(p.HighlightedTextColor??'clWhite')},
  columns,rows,rowHeight,headerSize,header:headerEnabled,firstRow:Number(ctx.frame.firstRow??0),
  font,selectedPlayerId:ctx.frame.selectedPlayerId,selectedHistoryId:ctx.frame.selectedHistoryId,
  interaction:p.OnSelectCell?{operation:p.OnSelectCell}:null,doubleClick:p.OnDblClick?{operation:p.OnDblClick}:null};
 ctx.primitives.push(primitive);
 rows.forEach((row,index)=>{
  if(!row||row.header)return;
  const rowY=y+headerSize+index*rowHeight;
  if(rowY+rowHeight<y||rowY>y+h)return;
  const value=row.playerId??row.historyId??row.value??index;
  const rowOperation=p.OnSelectCell??p.OnCellClick;
  if(rowOperation)ctx.interactions.push({name:node.name,className:'grid-row',operation:rowOperation,x,y:rowY,width:w,height:rowHeight,value,rowIndex:index,grid:node.name});
  if(p.OnDblClick)ctx.interactions.push({name:node.name,className:'grid-row-dbl',operation:p.OnDblClick,x,y:rowY,width:w,height:rowHeight,value,rowIndex:index,grid:node.name});
 });
 return primitive;
}
function stringGridPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const font=fontSpec(p,parentFont);
 const columnCount=Number(p.ColCount)||2,rowCount=Number(p.RowCount)||2,fixedCols=Number(p.FixedCols)||0,fixedRows=Number(p.FixedRows)||0;
 const columns=[];for(let c=0;c<columnCount;c++)columns.push({name:'col'+c,key:'col'+c,width:Number((p.ColWidths??[])[c])||64,image:false,caption:''});
 const rows=[];for(let r=0;r<rowCount;r++){const cells={};for(let c=0;c<columnCount;c++)cells['col'+c]=String((p.Cells??[])[r*columnCount+c]??'');rows.push({cells,header:r<fixedRows});}
 const primitive={kind:'grid',name:node.name,x,y,w,h,colors:{background:delphiColor(p.Color??'#ffffff'),alt:delphiColor(p.Color??'#ffffff'),grid:'#808080',header:'#d4d0c8',text:font.color,selection:delphiColor('clHighlight'),selectionText:'#ffffff'},columns,rows,rowHeight:Number(p.DefaultRowHeight)||19,headerSize:fixedRows*(Number(p.DefaultRowHeight)||19),header:fixedRows>0,fixedCols,fixedRows,firstRow:0,font,selectedPlayerId:ctx.frame.selectedPlayerId,selectedHistoryId:ctx.frame.selectedHistoryId,interaction:null,doubleClick:null};
 ctx.primitives.push(primitive);return primitive;
}
function listViewPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const font=fontSpec(p,parentFont);
 const columns=(p.Columns??[]).map((column,index)=>({name:'col'+index,key:'col'+index,width:Number(column.Width)||90,image:false,caption:column.Caption??''}));
 const items=Array.isArray(ctx.frame.listItems?.[node.name])?ctx.frame.listItems[node.name]:(p.Items?.Strings??[]).map(text=>({cells:{col0:String(text)}}));
 const rows=items.map(item=>typeof item==='string'?{cells:{col0:item}}:item);
 const primitive={kind:'grid',name:node.name,x,y,w,h,colors:{background:delphiColor(p.Color??'#ffffff'),alt:delphiColor(p.Color??'#ffffff'),grid:'#d4d0c8',header:'#d4d0c8',text:font.color,selection:delphiColor('clHighlight'),selectionText:'#ffffff'},columns:columns.length?columns:[{name:'col0',key:'col0',width:w,image:false,caption:''}],rows,rowHeight:Number(p.ItemHeight)||18,headerSize:columns.length?18:0,header:columns.length>0,firstRow:0,font,selectedPlayerId:ctx.frame.selectedPlayerId,selectedHistoryId:ctx.frame.selectedHistoryId,interaction:null,doubleClick:null};
 ctx.primitives.push(primitive);return primitive;
}
function resultGridPrimitive(ctx,p,x,y,w,h){
 const frame=ctx.frame;
 ctx.primitives.push({kind:'result-grid',x,y,w,h,rows:frame.resultGrid,selectedHistoryId:frame.selectedHistoryId,crests:frame.crestPaths??{}});
 frame.resultGrid.forEach((row,index)=>{
  if(row.header)return;
  ctx.interactions.push({name:'grid1',className:'grid-row',operation:p.OnSelectCell,x,y:y+index*21,width:w,height:21,value:row.historyId,rowIndex:index,grid:'grid1'});
 });
}
function pitchPrimitive(ctx,node,p,x,y,w,h){
 const frame=ctx.frame;
 const background=imagePath(node,p,frame)??'assets/original-lineup-pitch.jpg';
 const placement=[];
 for(let i=0;i<18;i++){
  const slot=frame.slots[i];if(!slot)continue;
  const geometry=screenSlotGeometry(i+1,slot.position||1);
  const player=frame.players?.[slot.playerId];
  const kind=slot.playerId>0?(i===0?2:i<11?1:3):0;
  placement.push({slot:i+1,playerId:slot.playerId,position:slot.position,x:x+geometry.x,y:y+geometry.y,width:geometry.width,height:geometry.height,labelX:x+geometry.labelX,labelY:y+geometry.labelY,labelWidth:geometry.labelWidth,
   shirt:slot.playerId>0&&i>0&&i<11&&frame.shirtImage?frame.shirtImage:`assets/original-shirt-${kind}.png`,
   name:player?.name??'',role:frame.roleLabels?.[player?.role]??'',positionLabel:i<11?frame.positionLabels?.[(slot.position||1)-1]:''});
 }
 ctx.primitives.push({kind:'pitch',x,y,w,h,background,placement,manualOffset:frame.manualLabelOffset??0});
 for(const slot of placement)ctx.interactions.push({name:'slot-'+slot.slot,className:'pitch-slot',operation:null,x:slot.x,y:slot.y,width:slot.width,height:slot.height,value:slot.playerId,slot:slot.slot});
}
function matchPitchPrimitive(ctx,node,p,x,y,w,h){
 const frame=ctx.frame;
 ctx.primitives.push({kind:'match-pitch',x,y,w,h,background:imagePath(node,p,frame)??'assets/original-lineup-pitch.jpg',lineup:frame.lineup,players:frame.players,benchOrdinals:frame.benchOrdinals,shirtPath:frame.shirtPath,positionLabels:frame.positionLabels,roleLabels:frame.roleLabels,editable:frame.editable});
 if(frame.editable){
  let benchOrdinal=0;
  for(let slot=1;slot<=18;slot++){
   const id=slot<12?frame.lineup.players[slot-1]:frame.lineup.bench[slot-12];
   if(slot>=12){if(id<=0)continue;benchOrdinal=frame.benchOrdinals?.[slot-12]??benchOrdinal+1;}
   const geometry=matchLineupGeometry(slot,slot<12?frame.lineup.positions[slot-1]:0,benchOrdinal);
   ctx.interactions.push({name:'match-slot-'+slot,className:'match-slot',operation:null,x:x+geometry.shirt.x,y:y+geometry.shirt.y,width:55,height:55,slot});
  }
 }
}
function matchFixturesPrimitive(ctx,frame,width,height){
 ctx.primitives.push({kind:'match-fixtures',x:0,y:0,width,height,layout:fourDivisionMatchLayout(frame.rowSpacing??20),fixtures:frame.fixtures,divisionLabels:frame.divisionLabels??[],background:'assets/original-match-background.png'});
}
function panelRowsPrimitive(ctx,node,p,x,y,w,h,parentFont){
 ctx.primitives.push({kind:'panel-rows',x,y,w,h,rows:ctx.frame.panels?.[node.name]??[],background:p['Fill.Color']!==undefined?delphiColor(p['Fill.Color']):null,font:fontSpec(p,parentFont)});
}
function lineupListPrimitive(ctx,node,p,x,y,w,h){
 const rows=ctx.frame.lineups?.[node.name==='escalacao1'?0:1]??[];
 ctx.primitives.push({kind:'lineup-list',x,y,w,h,rows,fullGameGauge:ctx.frame.fullGameGauge===true,matchMinute});
}
function statisticsPrimitive(ctx,p,x,y,w,h,parentFont){
 const rows=ctx.frame.statistics??[],margin=Number(p.Margin??10),lineHeight=18;
 const contentWidth=rows.reduce((max,row)=>Math.max(max,Number(row.valueIndent??0)+String(row.values?.[1]??'').length*8),0);
 const width=Math.ceil(contentWidth+margin*2),height=margin*2+rows.length*lineHeight+37;
 const bx=x+Math.trunc((w-width)/2),by=y+Math.trunc((h-height)/2);
 const button={x:bx+Math.trunc((width-70)/2),y:by+height-margin-25,w:70,h:25,caption:p.Buttons?.[0]?.Caption??'OK'};
 ctx.primitives.push({kind:'statistics-dialog',x:bx,y:by,w:width,h:height,rows,margin,button,font:fontSpec(p,parentFont)});
 ctx.interactions.push({name:'dlg_st',className:'statistics-ok',operation:'closeStatistics',x:button.x,y:button.y,width:button.w,height:button.h});
}

function shapePrimitive(ctx,node,p,x,y,w,h){
 const shape=p.Shape??'stRectangle';
 const brush=p['Brush.Color']??'clWhite',brushStyle=p['Brush.Style']??'bsSolid';
 const pen=p['Pen.Color']??'clBlack',penStyle=p['Pen.Style']??'psSolid',penWidth=Number(p['Pen.Width']??1);
 const fill=brushStyle==='bsClear'||isTransparent(brush)?null:delphiColor(brush);
 const stroke=penStyle==='psClear'||isTransparent(pen)?null:delphiColor(pen);
 ctx.primitives.push({kind:shape==='stCircle'||shape==='stEllipse'?'shape-ellipse':'shape-rect',x,y,w,h,fill,stroke,penWidth,style:shape});
 pushInteraction(ctx,node,p,x,y,w,h,{className:'shape',cursor:p.Cursor});
}
function labelPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const font=fontSpec(p,parentFont);
 const {source,parsed}=richText(p);
 const html=p.HTMLText!==undefined;
 const transparent=p.Color===undefined||isTransparent(p.Color)||p.Transparent===true;
 const align=p.Alignment==='taRightJustify'?'right':p.Alignment==='taCenter'?'center':parsed?.align??'left';
 const shadowOffset=p.HTMLShadowOffset??p.ShadowOffset;
 const shadow=shadowOffset!==undefined||p.HTMLShadowColor!==undefined||parsed?.shadow?{offset:Number(shadowOffset??1),color:delphiColor(p.HTMLShadowColor??p.ShadowColor??'clBlack')}:null;
 const primitive={kind:'text',x,y,w,h,text:parsed?parsed.plain:stripTags(source),lines:parsed&&parsed.runs.length>1?parsed.lines:null,
  font,color:font.color,align,wordWrap:p.WordWrap===true||(html&&p.AutoSizing===false&&w>0),shadow,
  background:transparent?null:delphiColor(p.Color),
  vAlign:p.VAlignment==='tvaCenter'?'center':p.VAlignment==='tvaBottom'?'bottom':'top'};
 ctx.primitives.push(primitive);
 pushInteraction(ctx,node,p,x,y,w,h,{className:'label',cursor:p.Cursor});
}
function advSmoothLabelPrimitive(ctx,node,p,x,y,w,h){
 const style=p['Caption.Font.Style']??[];
 const font={name:p['Caption.Font.Name']??ctx.parentFont.name,height:Math.abs(Number(p['Caption.Font.Height']??-27)),bold:style.includes('fsBold'),italic:style.includes('fsItalic'),underline:style.includes('fsUnderline'),strikeout:false,color:delphiColor(p['Caption.ColorEnd']??p['Caption.Font.Color']??'clWhite')};
 const transparent=p.Transparent!==false&&Number(p['Fill.Opacity']??0)===0;
 ctx.primitives.push({kind:'text',x,y,w,h,text:stripTags(captionText(p)),lines:null,font,color:font.color,align:'left',wordWrap:false,shadow:null,background:transparent?null:delphiColor(p['Fill.Color']??'clBtnFace'),vAlign:'bottom',leftPad:Number(p['Caption.Left']??0)});
 pushInteraction(ctx,node,p,x,y,w,h,{className:'label',cursor:p.Cursor});
}
function imagePrimitive(ctx,node,p,x,y,w,h){
 const path=imagePath(node,p,ctx.frame);
 // Control-colored fill only as a last resort: an original TImage with no
 // picture is transparent unless it carries an explicit opaque Color.
 // A missing bitmap otherwise paints nothing instead of a black box.
 const hasExplicitColor=p.Color!==undefined&&!isTransparent(p.Color)&&p.Transparent!==true;
 const fallback=path?null:(hasExplicitColor?{color:delphiColor(p.Color),border:null}:null);
 if(fallback)ctx.fallbacks=(ctx.fallbacks??0)+1;
 ctx.primitives.push({kind:'image',x,y,w,h,path,stretch:p.Stretch===true,center:p.Center===true,proportional:p.Proportional===true,fallback});
 pushInteraction(ctx,node,p,x,y,w,h,{className:'image',cursor:p.Cursor});
}
function buttonPrimitive(ctx,node,p,x,y,w,h,kind,parentFont){
 const font=fontSpec(p,parentFont),enabled=p.Enabled!==false;
 const primitive={kind,nodeName:node.name,x,y,w,h,caption:stripTags(p.Caption??''),font,enabled,glyph:imagePath(node,p,ctx.frame),default:p.Default===true,cancel:p.Cancel===true,color:delphiColor(p.Color??'clBtnFace'),down:ctx.down===node.name,hover:ctx.hover===node.name};
 if(kind==='xibutton'){
  const prefix=enabled?(ctx.down===node.name?'Down':ctx.hover===node.name?'Over':''):'Disabled';
  primitive.face=delphiColor(p[prefix+'ColorFace']??p.ColorFace??'clBtnFace');
  primitive.border=delphiColor(p[prefix+'ColorBorder']??p.ColorBorder??'clBlack');
  primitive.light=delphiColor(p[prefix+'ColorLight']??p.ColorLight??'clWhite');
  primitive.dark=delphiColor(p[prefix+'ColorDark']??p.ColorDark??'clBlack');
  primitive.textColor=delphiColor(p[prefix+'ColorText']??p.ColorText??font.color);
 }
 ctx.primitives.push(primitive);
 pushInteraction(ctx,node,p,x,y,w,h,{className:kind,cursor:enabled?(p.Cursor??'crHandPoint'):'crDefault'});
}
function checkboxPrimitive(ctx,node,p,x,y,w,h,radio,parentFont){
 const checked=p.Checked===true;
 ctx.primitives.push({kind:radio?'radio':'checkbox',x,y,w,h,checked,caption:stripTags(p.Caption??''),font:fontSpec(p,parentFont),enabled:p.Enabled!==false});
 pushInput(ctx,node,p,x,y,w,h,radio?'radio':'checkbox',{checked,items:null,selected:-1});
}
function editPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const lines=Array.isArray(p.Lines?.Strings)?p.Lines.Strings:null;
 const text=lines?lines.join('\n'):String(p.Text??'');
 ctx.primitives.push({kind:'edit',x,y,w,h,text,multiline:lines!==null,font:fontSpec(p,parentFont),readOnly:p.ReadOnly===true,enabled:p.Enabled!==false,color:delphiColor(p.Color??'clWhite'),focused:ctx.frame.focus===node.name});
 pushInput(ctx,node,p,x,y,w,h,'edit',{text,readOnly:p.ReadOnly===true});
}
function pageControlPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const pages=(node.children??[]).filter(child=>child.class_name==='TTabSheet'&&child.properties.Visible!==false);
 const requested=Number(ctx.frame.activePage?.[node.name]??ctx.frame.activePage??0);
 const active=Math.min(Math.max(Number.isFinite(requested)?requested:0,0),Math.max(pages.length-1,0));
 ctx.primitives.push({kind:'page-control',name:node.name,x,y,w,h,active,color:delphiColor(p.Color??'clBtnFace'),font:fontSpec(p,parentFont),tabs:pages.map(page=>({name:page.name,caption:stripTags(page.properties.Caption??''),enabled:page.properties.Enabled!==false}))});
 const page=pages[active];
 if(page)for(const child of page.children??[])layoutControl(ctx,child,{...p,...page.properties},x,y,fontSpec(page.properties??{},fontSpec(p,parentFont)));
}
function comboPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const items=(p.Items??[]).map(item=>stripTags(item));
 const selected=Number(p.ItemIndex??-1);
 ctx.primitives.push({kind:'combo',x,y,w,h,items,selected,text:selected>=0?items[selected]:String(p.Text??''),font:fontSpec(p,parentFont),enabled:p.Enabled!==false,color:delphiColor(p.Color??'clWhite')});
 pushInput(ctx,node,p,x,y,w,h,'combo',{items,selected});
}
function upDownPrimitive(ctx,node,p,x,y,w,h,parentFont){
 const half=h/2;
 ctx.primitives.push({kind:'button',nodeName:node.name,x,y,w,h:half,caption:'',font:fontSpec(p,parentFont),enabled:true,glyph:null,color:'#d4d0c8',arrow:'up'});
 ctx.primitives.push({kind:'button',nodeName:node.name,x,y:y+half,w,h:half,caption:'',font:fontSpec(p,parentFont),enabled:true,glyph:null,color:'#d4d0c8',arrow:'down'});
 ctx.interactions.push({name:node.name,className:'updown',operation:p.OnClick,x,y,width:w,height:half,value:0});
 ctx.interactions.push({name:node.name,className:'updown',operation:p.OnClick,x,y:y+half,width:w,height:half,value:1});
}
function gaugePrimitive(ctx,p,x,y,w,h,parentFont){
 ctx.primitives.push({kind:'gauge',x,y,w,h,progress:Number(p.Progress??0),max:Number(p.MaxValue??100)||100,color:delphiColor(p.Color??'clWhite'),foreColor:delphiColor(p.ForeColor??'#008000'),showText:p.ShowText===true,font:fontSpec(p,parentFont)});
}
function progressBarPrimitive(ctx,p,x,y,w,h){
 ctx.primitives.push({kind:'progress',x,y,w,h,progress:Number(p.Position??0),max:Number(p.Max??100)||100,foreColor:'#000080',background:'#d4d0c8'});
}
function trackBarPrimitive(ctx,p,x,y,w,h){
 ctx.primitives.push({kind:'trackbar',x,y,w,h,position:Number(p.Position??0),max:Number(p.Max??10)||10,vertical:p.Orientation==='trVertical',lineColor:delphiColor(p.LineColor??'#808080'),thumbColor:'#d4d0c8'});
}
function scrollBarPrimitive(ctx,p,x,y,w,h){
 ctx.primitives.push({kind:'scrollbar',x,y,w,h,vertical:(p.Kind==='sbVertical')||h>w,position:Number(p.Position??0),max:Number(p.Max??100)||100});
}
function panelPrimitive(ctx,node,p,x,y,w,h,parentFont){
 if(p.Color!==undefined&&!isTransparent(p.Color))ctx.primitives.push({kind:'fill',x,y,w,h,color:delphiColor(p.Color)});
 if(p.BevelOuter!=='bvNone'||p.BevelInner!=='bvNone')ctx.primitives.push({kind:'bevel',x,y,w,h,outer:p.BevelOuter??'bvRaised',inner:p.BevelInner??'bvNone',width:Number(p.BevelWidth??1)});
 for(const child of node.children??[])layoutControl(ctx,child,p,x,y,parentFont);
}
function layoutControl(ctx,node,parentProps,ox,oy,parentFont){
 const cls=node.class_name;
 const overrides=ctx.frame.properties?.[node.name]??{};
 const p={...node.properties,...overrides};
 if(p.Visible===false)return;
 const x=ox+Number(p.Left??0),y=oy+Number(p.Top??0),w=Number(p.Width??0),h=Number(p.Height??0);
 // Modal/overlay branches must run before the invisible-infrastructure skip:
 // dlg_st is a TAdvSmoothMessageDialog (otherwise skipped) that hosts the
 // statistics dialog when frame.statistics is present.
 if(ctx.frame.statistics&&node.name==='dlg_st'){statisticsPrimitive(ctx,p,x,y,w,h,parentFont);return;}
 if(ctx.frame.eventLog&&node.name==='teste'){ctx.primitives.push({kind:'event-log',x,y,w,h,rows:ctx.frame.eventLog.rows,truncated:ctx.frame.eventLog.truncated});return;}
 if(ctx.frame.lineups&&(node.name==='escalacao1'||node.name==='escalacao2')){lineupListPrimitive(ctx,node,p,x,y,w,h);return;}
 if(INVISIBLE.has(cls))return;
 if(cls==='TShape'){shapePrimitive(ctx,node,p,x,y,w,h);return;}
 if(cls==='TBevel'){ctx.primitives.push({kind:'bevel',x,y,w,h,outer:p.Shape==='bsBox'?'bvLowered':'bvRaised',inner:'bvNone',width:Number(p.Shape==='bsBox'?1:2)});return;}
 if(cls==='TGradient'){ctx.primitives.push({kind:'radial-gradient',x,y,w,h,from:delphiColor(p.ColorBegin??'clNavy'),to:delphiColor(p.ColorEnd??'clBlack')});return;}
 if(cls==='TPanel'||cls==='TScrollBox'){panelPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TGroupBox'){
  if(p.Color!==undefined)ctx.primitives.push({kind:'fill',x,y,w,h,color:delphiColor(p.Color)});
  ctx.primitives.push({kind:'group-box',x,y,w,h,caption:stripTags(p.Caption??''),font:fontSpec(p,parentFont)});
  for(const child of node.children??[])layoutControl(ctx,child,p,x,y,parentFont);return;
 }
 if(cls==='TPageControl'||cls==='TTabControl'){pageControlPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TTabSheet'){for(const child of node.children??[])layoutControl(ctx,child,p,x,y,parentFont);return;}
 if(cls==='TNotebook'){
  const pages=(node.children??[]).filter(child=>child.class_name==='TPage'&&child.properties.Visible!==false);
  const active=Math.min(Math.max(Number(ctx.frame.activePage??0),0),Math.max(pages.length-1,0));
  if(p.Color!==undefined)ctx.primitives.push({kind:'fill',x,y,w,h,color:delphiColor(p.Color)});
  const page=pages[active];if(page)for(const child of page.children??[])layoutControl(ctx,child,p,x,y,parentFont);
  return;
 }
 if(cls==='TPage'){for(const child of node.children??[])layoutControl(ctx,child,p,x,y,parentFont);return;}
 if(cls==='TAdvSmoothPanel'){
  if(p['Fill.Color']!==undefined)ctx.primitives.push({kind:'fill',x,y,w,h,color:delphiColor(p['Fill.Color'])});
  if(ctx.frame.panels?.[node.name])panelRowsPrimitive(ctx,node,p,x,y,w,h,parentFont);
  for(const child of node.children??[])layoutControl(ctx,child,p,x,y,parentFont);return;
 }
 if(cls==='TTntLabel'||cls==='TLabel'||cls==='TDBText'||cls==='THTMLabel'||cls==='TUniHTMLabel'){labelPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TAdvSmoothLabel'){advSmoothLabelPrimitive(ctx,node,p,x,y,w,h);return;}
 if(cls==='TImage'||cls==='TTntImage'){
  if(ctx.frame.form==='Form87'&&node.name==='Image1'&&ctx.frame.slots){pitchPrimitive(ctx,node,p,x,y,w,h);return;}
  if(ctx.frame.form==='Form88'&&node.name==='Image1'&&ctx.frame.lineup){matchPitchPrimitive(ctx,node,p,x,y,w,h);return;}
  imagePrimitive(ctx,node,p,x,y,w,h);return;
 }
 if(cls==='TNextGrid'){if(ctx.frame.resultGrid&&node.name==='grid1')resultGridPrimitive(ctx,p,x,y,w,h);else gridPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TStringGrid'){stringGridPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TListView'){listViewPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TBitBtn'||cls==='TTntBitBtn'||cls==='TTntButton'||cls==='TButton'||cls==='TAdvGlowButton'){buttonPrimitive(ctx,node,p,x,y,w,h,'button',parentFont);return;}
 if(cls==='TXiButton'){buttonPrimitive(ctx,node,p,x,y,w,h,'xibutton',parentFont);return;}
 if(cls==='TEdit'||cls==='TMaskEdit'||cls==='TMemo'||cls==='TTntRichEdit'||cls==='TTntMemo'){editPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TUniHTMLCombobox'||cls==='TComboBox'||cls==='TComboBoxEx'){
   if(ctx.frame.countries&&(node.name==='combopais'||node.name==='combo1'||node.name==='ComboBox1'))p.Items=(ctx.frame.countries??[]).map(country=>country.text??String(country));
  comboPrimitive(ctx,node,p,x,y,w,h,parentFont);return;
 }
 if(cls==='TUpDown'){upDownPrimitive(ctx,node,p,x,y,w,h,parentFont);return;}
 if(cls==='TCheckBox'||cls==='THTMLCheckBox'||cls==='TTntCheckBox'){checkboxPrimitive(ctx,node,p,x,y,w,h,false,parentFont);return;}
 if(cls==='TRadioButton'||cls==='THTMLRadioButton'||cls==='TTntRadioButton'){checkboxPrimitive(ctx,node,p,x,y,w,h,true,parentFont);return;}
 if(cls==='TGauge'){gaugePrimitive(ctx,p,x,y,w,h,parentFont);return;}
 if(cls==='TProgressBar'||cls==='TAdvSmoothProgressBar'){progressBarPrimitive(ctx,p,x,y,w,h);return;}
 if(cls==='TTrackBar'){trackBarPrimitive(ctx,p,x,y,w,h);return;}
 if(cls==='TScrollBar'){scrollBarPrimitive(ctx,p,x,y,w,h);return;}
 ctx.primitives.push({kind:'placeholder',x,y,w,h,className:cls,name:node.name,color:'#d4d0c8'});
}

/** Pure layout: DFM form tree + per-control overrides -> drawing primitives.
 * Visible VCL classes wired in the game shell (enumerated in
 * tests/vcl-fidelity-node.mjs): TShape/TBevel/TGradient/TPanel/TScrollBox/
 * TNotebook+TPage/TPageControl+TTabSheet/TAdvSmoothPanel, TTntLabel/TLabel/
 * TDBText/THTMLabel/TUniHTMLabel/TAdvSmoothLabel, TImage/TTntImage, TNextGrid/
 * TStringGrid/TListView, TBitBtn/TTntBitBtn/TTntButton/TButton/TAdvGlowButton/
 * TXiButton, TEdit/TMaskEdit/TMemo/TTntRichEdit/TTntMemo, TUniHTMLCombobox/
 * TComboBox/TComboBoxEx, TUpDown, TCheckBox/THTMLCheckBox/TTntCheckBox,
 * TRadioButton/THTMLRadioButton/TTntRadioButton, TGauge/TProgressBar/
 * TAdvSmoothProgressBar/TTrackBar/TScrollBar. Never visible in the wired
 * screens (stay skipped): TGroupBox/TRadioGroup/TSpeedButton/TStaticText/
 * TDBImage/TDateTimePicker/TColorBox and other data-aware mirrors.
 * Unknown visible classes fall back to a neutral placeholder; invisible
 * infrastructure (TImageList/TTimer/menus/dialogs/columns/containers) is
 * skipped. Missing bitmaps paint a control-colored fill only as a last
 * resort (transparent otherwise); the per-layout count is exposed as
 * `fallbackFills` and must stay zero for the wired screens. */
export function layoutForm(form,frame={},_options={}){
 if(!form)throw Error('layoutForm requires an original form tree.');
 frame={form:form.name,...frame};
 const width=Number(frame.width??form.properties.ClientWidth??640),height=Number(frame.height??form.properties.ClientHeight??480);
 const ctx={form,frame,primitives:[],interactions:[],parentFont:fontSpec(form.properties,DEFAULT_FONT),hover:frame.hover??null,down:frame.down??null,fallbacks:0};
 if(frame.background)ctx.primitives.push({kind:'fill',x:0,y:0,w:width,h:height,color:delphiColor(form.properties.Color??'clBlack'),image:frame.background,tile:true});
 else ctx.primitives.push({kind:'fill',x:0,y:0,w:width,h:height,color:delphiColor(form.properties.Color??'clBtnFace')});
 for(const child of form.children??[])layoutControl(ctx,child,form.properties,0,0,ctx.parentFont);
 if(Array.isArray(frame.fixtures)&&form.name==='Form46')matchFixturesPrimitive(ctx,frame,width,height);
 if(Array.isArray(frame.dynamic))ctx.primitives.push(...frame.dynamic);
 const fallbackFills=ctx.primitives.filter(primitive=>primitive.kind==='image'&&!primitive.path&&primitive.fallback?.color).length;
 return {form:form.name,width,height,color:delphiColor(form.properties.Color??'clBtnFace'),borderStyle:form.properties.BorderStyle??'bsSingle',primitives:ctx.primitives,interactions:ctx.interactions,fallbackFills,fallbacks:ctx.fallbacks??0};
}

/* ------------------------------------------------------------------ painter */

function drawBevel(ctx,x,y,w,h,outer,inner,width){
 const light='#ffffff',dark='#404040',mid='#d4d0c8';
 if(outer&&outer!=='bvNone'){
  ctx.fillStyle=outer==='bvRaised'?light:dark;ctx.fillRect(x,y,w,width);ctx.fillRect(x,y,width,h);
  ctx.fillStyle=outer==='bvRaised'?dark:light;ctx.fillRect(x,y+h-width,w,width);ctx.fillRect(x+w-width,y,width,h);
  ctx.fillStyle=mid;ctx.fillRect(x+width,y+width,w-width*2,width);ctx.fillRect(x+width,y+h-width*2,w-width*2,width);ctx.fillRect(x+width,y+width,width,h-width*2);ctx.fillRect(x+w-width*2,y+width,width,h-width*2);
 }
 if(inner&&inner!=='bvNone'){
  ctx.fillStyle=inner==='bvRaised'?light:dark;ctx.fillRect(x+width,y+width,w-width*2,width);ctx.fillRect(x+width,y+width,width,h-width*2);
  ctx.fillStyle=inner==='bvRaised'?dark:light;ctx.fillRect(x+width,y+h-width*2,w-width*2,width);ctx.fillRect(x+w-width*2,y+width,width,h-width*2);
 }
}
function drawButtonFace(ctx,prim,images){
 const {x,y,w,h}=prim;
 ctx.fillStyle=prim.color;ctx.fillRect(x,y,w,h);
 const lifted=!prim.down;
 ctx.fillStyle=lifted?'#ffffff':'#404040';ctx.fillRect(x,y,w,1);ctx.fillRect(x,y,1,h);
 ctx.fillStyle=lifted?'#404040':'#ffffff';ctx.fillRect(x,y+h-1,w,1);ctx.fillRect(x+w-1,y,1,h);
 ctx.fillStyle='#808080';ctx.fillRect(x+w-2,y+1,1,h-2);ctx.fillRect(x+1,y+h-2,w-2,1);
 if(prim.arrow==='up'||prim.arrow==='down'){
  ctx.fillStyle='#000000';ctx.beginPath();
  const cx=x+w/2,cy=y+h/2,d=prim.arrow==='up'?-1:1;
  ctx.moveTo(cx,cy+3*d);ctx.lineTo(cx-3,cy-2*d);ctx.lineTo(cx+3,cy-2*d);ctx.closePath();ctx.fill();return;
 }
 const glyph=prim.glyph?images.get(prim.glyph):null;
 const caption=prim.caption??'';
 ctx.font=fontCss(prim.font);ctx.textBaseline='middle';ctx.textAlign='center';
 ctx.fillStyle=prim.enabled?prim.font.color:'#808080';
 if(glyph){
  const textWidth=caption?ctx.measureText(caption).width:0,total=glyph.width+(textWidth?4+textWidth:0);
  const gx=x+(w-total)/2;
  ctx.drawImage(glyph,gx,y+(h-glyph.height)/2);
  if(caption)ctx.fillText(caption,gx+glyph.width+2+textWidth/2,h/2+y+1);
 }else if(caption)ctx.fillText(caption,x+w/2,y+h/2+1);
}
function paintTextRuns(ctx,runs,align,top,shadow){
 const runFont=run=>`${run.italic?'italic ':''}${run.bold?'bold ':''}${run.size?run.size+'px':''}${run.face?run.face+',':''}sans-serif`;
 // UniHTMLabel <IND x="N"> advances the pen to an absolute x inside the line.
 const advanceToIndent=(x,run)=>run.indent!==null&&run.indent!==undefined&&run.indent>x?run.indent:x;
 let total=0;
 for(const run of runs){total=advanceToIndent(total,run);ctx.font=runFont(run);total+=ctx.measureText(run.text).width;}
 let x=align==='center'?-total/2:align==='right'?-total:0;
 for(const run of runs){
  x=advanceToIndent(x,run);
  ctx.font=runFont(run);
  if(shadow){ctx.fillStyle=shadow.color;ctx.fillText(run.text,x+shadow.offset,top+shadow.offset);}
  ctx.fillStyle=run.color??ctx.fillStyle;ctx.fillText(run.text,x,top);x+=ctx.measureText(run.text).width;
 }
}
function paintText(ctx,prim){
 const font=prim.font;ctx.textBaseline='top';ctx.textAlign=prim.align;
 const tx=prim.x+(prim.align==='center'?prim.w/2:prim.align==='right'?prim.w:0)+(prim.leftPad??0);
 const lineHeight=font.height+2;
 const lines=[];const plainLines=String(prim.text??'').split('\n');
 for(const line of plainLines){
  if(!prim.wordWrap||prim.w<=0){lines.push(line);continue;}
  ctx.font=fontCss(font);
  const words=line.split(/\s+/).filter(Boolean);let current='';
  for(const word of words){const next=current?current+' '+word:word;if(current&&ctx.measureText(next).width>prim.w){lines.push(current);current=word;}else current=next;}
  lines.push(current);
 }
 const blockHeight=lines.length*lineHeight;
 const top=prim.vAlign==='center'?prim.y+(prim.h-blockHeight)/2:prim.vAlign==='bottom'?prim.y+prim.h-blockHeight:prim.y;
 if(prim.background){ctx.fillStyle=prim.background;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);}
 ctx.save();if(prim.w>0&&prim.h>0){ctx.beginPath();ctx.rect(prim.x,prim.y,prim.w,prim.h);ctx.clip();}
 ctx.fillStyle=prim.color;
 lines.forEach((line,index)=>{
  if(!line)return;
  const lineY=top+index*lineHeight;
  if(prim.lines&&prim.lines[index]?.length){ctx.save();ctx.translate(tx,lineY);paintTextRuns(ctx,prim.lines[index],prim.align,0,prim.shadow);ctx.restore();return;}
  if(prim.shadow){ctx.fillStyle=prim.shadow.color;ctx.fillText(line,tx+prim.shadow.offset,lineY+prim.shadow.offset);ctx.fillStyle=prim.color;}
  ctx.fillText(line,tx,lineY);
 });
 ctx.restore();
}
function paintGrid(ctx,prim,images){
 const {x,y,w,h}=prim;
 ctx.save();ctx.beginPath();ctx.rect(x,y,w,h);ctx.clip();
 ctx.fillStyle=prim.colors.background;ctx.fillRect(x,y,w,h);
 let totalWidth=0;for(const column of prim.columns)totalWidth+=column.width;
 const scale=totalWidth>0&&totalWidth!==w?w/totalWidth:1;
 const fontCssText=fontCss(prim.font);
 if(prim.header){
  ctx.fillStyle=prim.colors.header;ctx.fillRect(x,y,w,prim.headerSize);
  ctx.strokeStyle=prim.colors.grid;ctx.beginPath();ctx.moveTo(x,y+prim.headerSize+.5);ctx.lineTo(x+w,y+prim.headerSize+.5);ctx.stroke();
  ctx.font=fontCssText;ctx.fillStyle='#000000';ctx.textBaseline='middle';ctx.textAlign='left';
  let cx=x;prim.columns.forEach(column=>{const cw=column.width*scale;ctx.save();ctx.beginPath();ctx.rect(cx,y,cw,prim.headerSize);ctx.clip();if(column.caption)ctx.fillText(column.caption,cx+3,y+prim.headerSize/2+1);ctx.restore();cx+=cw;});
 }
 const first=Math.max(0,prim.firstRow??0);
 ctx.font=fontCssText;ctx.textBaseline='middle';
 for(let index=first;index<prim.rows.length;index++){
  const row=prim.rows[index],rowY=y+prim.headerSize+(index-first)*prim.rowHeight;
  if(rowY>y+h)break;
  if(row.header){ctx.fillStyle=prim.colors.header;ctx.fillRect(x,rowY,w,prim.rowHeight);ctx.fillStyle='#000000';ctx.textAlign='left';ctx.fillText(String(row.header),x+4,rowY+prim.rowHeight/2+1);continue;}
  const selected=!!row.selected||(row.playerId!==undefined&&row.playerId===prim.selectedPlayerId)||(row.historyId!==undefined&&row.historyId===prim.selectedHistoryId);
  if(selected){ctx.fillStyle=prim.colors.selection;ctx.fillRect(x,rowY,w,prim.rowHeight);}
  let cx=x;
  prim.columns.forEach(column=>{
   const cw=column.width*scale;
   ctx.save();ctx.beginPath();ctx.rect(cx,rowY,cw,prim.rowHeight);ctx.clip();
   ctx.fillStyle=selected?prim.colors.selectionText:prim.colors.text;ctx.textAlign='left';
   const value=row.cells?.[column.key]??row[column.key];
   const path=typeof value==='object'&&value!==null?value.image:null;
   if(path){const image=images.get(path);if(image)ctx.drawImage(image,cx+2,rowY+Math.max(1,(prim.rowHeight-image.height)/2));}
   else if(value!==undefined&&value!==null&&value!==''){ctx.fillText(typeof value==='object'?String(value.text??''):String(value),cx+3,rowY+prim.rowHeight/2+1);}
   ctx.restore();cx+=cw;
  });
  ctx.fillStyle=prim.colors.grid;ctx.fillRect(x,rowY+prim.rowHeight-1,w,1);
 }
 ctx.strokeStyle=prim.colors.grid;ctx.strokeRect(x+.5,y+.5,w-1,h-1);
 ctx.restore();
}
function paintResultGrid(ctx,prim,images){
 const {x,y,w,h}=prim;ctx.save();ctx.beginPath();ctx.rect(x,y,w,h);ctx.clip();ctx.textBaseline='middle';ctx.font='11px Arial';
 prim.rows.forEach((row,index)=>{
  const yy=y+index*21;
  if(row.header){ctx.fillStyle='#ffffff';ctx.textAlign='center';ctx.fillText(row.header,x+w/2,yy+10);return;}
  if(row.historyId===prim.selectedHistoryId){ctx.strokeStyle='#ffffff';ctx.strokeRect(x+.5,yy+.5,w-1,20);}
  const widths=[20,70,25,70,20],values=[null,row.names?.[0],Array.isArray(row.score)?row.score.join('x'):String(row.score??''),row.names?.[1],null];
  let xx=x;
  for(let col=0;col<5;col++){
   const width=widths[col];ctx.save();ctx.beginPath();ctx.rect(xx,yy,width,21);ctx.clip();
   if(col===0||col===4){const image=images.get(prim.crests?.[col===0?0:1]??row.crests?.[col===0?0:1]);if(image)ctx.drawImage(image,xx+1,yy+1,18,18);}
   else{ctx.fillStyle='#ffffff';ctx.textAlign=col===2?'center':'left';ctx.fillText(values[col]??'',xx+(col===2?width/2:1),yy+10);}
   ctx.restore();xx+=width;
  }
 });
 ctx.restore();
}
function paintPitch(ctx,prim,images){
 const background=images.get(prim.background);if(background)ctx.drawImage(background,prim.x,prim.y);
 for(const slot of prim.placement){
  const shirt=images.get(slot.shirt);
  if(shirt)ctx.drawImage(shirt,slot.x+Math.trunc((slot.width-shirt.width)/2),slot.y+Math.trunc((slot.height-shirt.height)/2));
  if(slot.name){
   ctx.textAlign='center';ctx.textBaseline='top';ctx.font='bold 11px Arial';
   const cx=slot.labelX+slot.labelWidth/2+(prim.manualOffset?5:0);
   ctx.fillStyle='#000000';ctx.fillText(slot.name,cx+1,slot.labelY+1,slot.labelWidth);
   ctx.fillStyle='#ffffff';ctx.fillText(slot.name,cx,slot.labelY,slot.labelWidth);
   ctx.font='11px Arial';
   ctx.fillStyle='#000000';ctx.fillText(slot.positionLabel||slot.role,cx+1,slot.labelY+14);
   ctx.fillStyle='#ffffff';ctx.fillText(slot.positionLabel||slot.role,cx,slot.labelY+13);
  }
 }
}
function paintMatchPitch(ctx,prim,images){
 const background=images.get(prim.background);if(background)ctx.drawImage(background,prim.x,prim.y);
 let benchOrdinal=0;
 for(let slot=1;slot<=18;slot++){
  const id=slot<12?prim.lineup.players[slot-1]:prim.lineup.bench[slot-12];
  if(slot>=12){if(id<=0)continue;benchOrdinal=prim.benchOrdinals?.[slot-12]??benchOrdinal+1;}
  const p=prim.players[id];
  if(slot<12&&p&&!p.active)continue;
  const geometry=matchLineupGeometry(slot,slot<12?prim.lineup.positions[slot-1]:0,benchOrdinal);
  const kind=id>0?(slot===11?2:slot<12?1:3):0;
  const image=images.get(kind===1&&prim.shirtPath?prim.shirtPath:`assets/original-shirt-${kind}.png`);
  if(image)ctx.drawImage(image,prim.x+geometry.shirt.x+Math.trunc((55-image.width)/2),prim.y+geometry.shirt.y+Math.trunc((55-image.height)/2));
  if(!p||id<=0)continue;
  ctx.textAlign='center';ctx.textBaseline='top';ctx.font='bold 11px Arial';
  const width=slot===11?120:80,center=prim.x+geometry.label.x+width/2;
  ctx.fillStyle='#000000';ctx.fillText(p.name,center+1,prim.y+geometry.label.y+1,width);ctx.fillStyle='#ffffff';ctx.fillText(p.name,center,prim.y+geometry.label.y,width);
  ctx.font='11px Arial';
  const label=slot<12?prim.positionLabels?.[prim.lineup.positions[slot-1]-1]:prim.roleLabels?.[p.role];
  ctx.fillStyle='#000000';ctx.fillText(label,center+1,prim.y+geometry.label.y+15,width);ctx.fillStyle='#ffffff';ctx.fillText(label,center,prim.y+geometry.label.y+14,width);
 }
}
function paintMatchFixtures(ctx,prim,images){
 const background=images.get(prim.background);
 ctx.save();ctx.beginPath();ctx.rect(prim.x,prim.y,prim.width,prim.height);ctx.clip();
 for(const group of prim.layout.groups){
  ctx.strokeStyle='#006400';ctx.strokeRect(group.left+.5,group.top+.5,group.width-1,group.height-1);
  if(background)ctx.drawImage(background,201,group.top,335,group.height);
  ctx.font='11px Arial';ctx.textAlign='center';ctx.textBaseline='top';ctx.fillStyle='#000000';ctx.fillText(prim.divisionLabels[group.division-1]??'',369.5,group.labelTop+1);ctx.fillStyle='#ffffff';ctx.fillText(prim.divisionLabels[group.division-1]??'',368.5,group.labelTop);
 }
 const text=(value,tx,ty,width,align,color,size)=>{ctx.save();ctx.beginPath();ctx.rect(tx,ty,width,17);ctx.clip();ctx.fillStyle=color;ctx.font=`${size}px Arial`;ctx.textBaseline='top';ctx.textAlign=align;ctx.fillText(String(value),tx+(align==='center'?width/2:align==='right'?width:0),ty+1);ctx.restore();};
 for(const row of prim.layout.rows){
  const fixture=prim.fixtures.find(f=>f.id===row.id);if(!fixture)continue;const ty=row.top;
  ctx.fillStyle='#006400';ctx.fillRect(32,ty,169,17);
  ctx.fillStyle=delphiColor(fixture.homeBackground);ctx.fillRect(208,ty,137,17);ctx.fillStyle=delphiColor(fixture.awayBackground);ctx.fillRect(395,ty,137,17);
  ctx.fillStyle='#006400';ctx.fillRect(348,ty,20,17);ctx.fillRect(372,ty,20,17);
  text(fixture.stadium,36,ty,97,'right','#ffffff',28/3);text(fixture.attendance,136,ty,57,'left','#ffffff',28/3);
  text(fixture.home,230,ty,113,'left',delphiColor(fixture.homeColor),32/3);text(fixture.away,417,ty,113,'left',delphiColor(fixture.awayColor),32/3);
  if(fixture.homeCrest){const crest=images.get(fixture.homeCrest);if(crest)ctx.drawImage(crest,212,ty,17,17);}
  if(fixture.awayCrest){const crest=images.get(fixture.awayCrest);if(crest)ctx.drawImage(crest,399,ty,17,17);}
  text(fixture.homeScore,348,ty,20,'center','#ffffff',32/3);text(fixture.awayScore,372,ty,20,'center','#ffffff',32/3);
  if(fixture.event){
   if(fixture.event.icon){const icon=images.get('assets/'+fixture.event.icon+'.png');if(icon)ctx.drawImage(icon,540,ty,17,17);}
   ctx.save();ctx.beginPath();ctx.rect(557,ty,215,17);ctx.clip();ctx.font=`${fixture.event.bold?'bold ':''}11px Arial`;ctx.textAlign='left';ctx.textBaseline='top';
   ctx.fillStyle='#000000';ctx.fillText(fixture.event.text,558,ty+2);
   ctx.fillStyle=({clwhite:'#ffffff',clyellow:'#ffff00',clred:'#ff0000'})[fixture.event.colour]??fixture.event.colour;
   ctx.fillText(fixture.event.text,557,ty+1);ctx.restore();
  }
 }
 ctx.restore();
}
function paintPanelRows(ctx,prim,images){
 if(prim.background){ctx.fillStyle=prim.background;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);}
 ctx.save();ctx.beginPath();ctx.rect(prim.x,prim.y,prim.w,prim.h);ctx.clip();ctx.font=fontCss(prim.font);ctx.textBaseline='top';
 prim.rows.forEach((row,index)=>{
  const yy=prim.y+index*17;
  const image=row.icon?images.get('assets/'+row.icon+'.png'):null;
  if(image)ctx.drawImage(image,prim.x,yy,14,14);
  ctx.fillStyle='#dfdf00';ctx.textAlign=row.align??'left';
  ctx.fillText(row.text,row.align==='right'?prim.x+prim.w:prim.x+(image?17:0),yy,prim.w-(image?17:0));
 });
 ctx.restore();
}
function paintLineupList(ctx,prim){
 ctx.save();ctx.beginPath();ctx.rect(prim.x,prim.y,prim.w,prim.h);ctx.clip();ctx.textBaseline='top';
 let yy=prim.y;
 for(const row of prim.rows){
  const chain=[...(row.substitutions??[]),row];
  for(let i=0;i<chain.length;i++){
   const entry=chain[i];ctx.font=i?'12px Arial':'bold 13px Arial';ctx.fillStyle='#ffffff';ctx.textAlign='left';
   let prefix='';
   if(i){const previous=chain[i-1];prefix=prim.matchMinute(previous.tick,prim.fullGameGauge)+(prim.fullGameGauge?"'":previous.tick<93?'/1º ':'/2º ');}
   ctx.fillText((prefix?prefix+' ':'')+entry.name,prim.x+(i?14:0),yy,160-(i?14:0));
   ctx.fillText(entry.rating>0?String(entry.rating):'s/n',prim.x+165,yy);yy+=i?16:18;
  }
 }
 ctx.restore();
}
function paintEventLog(ctx,prim,images){
 ctx.save();ctx.beginPath();ctx.rect(prim.x,prim.y,prim.w,prim.h);ctx.clip();ctx.font='bold 11px Arial';ctx.textBaseline='top';let yy=prim.y;
 for(const row of prim.rows??[]){
  const icon=images.get('assets/'+row.icon+'.png'),iw=icon?18:0,available=prim.w-iw-2,words=String(row.text).split(' '),lines=[];let line='';
  for(const word of words){const next=line?line+' '+word:word;if(line&&ctx.measureText(next).width>available){lines.push(line);line=word;}else line=next;}
  if(line)lines.push(line);
  ctx.textAlign=row.align;const tx=row.align==='left'?prim.x+iw+2:prim.x+prim.w-iw-2;
  if(icon)ctx.drawImage(icon,row.align==='left'?prim.x:prim.x+prim.w-iw,yy,iw,18);
  for(const text of lines){ctx.fillStyle='#000000';ctx.fillText(text,tx+1,yy+1);ctx.fillStyle='#dfdf00';ctx.fillText(text,tx,yy);yy+=14;}
  yy+=4;
 }
 if(prim.truncated){ctx.textAlign='left';ctx.fillStyle='#dfdf00';ctx.fillText('...',prim.x,yy);}
 ctx.restore();
}
function paintStatistics(ctx,prim){
 ctx.save();
 const gradient=ctx.createLinearGradient(0,prim.y,0,prim.y+prim.h);
 gradient.addColorStop(0,'rgba(0,128,0,0.94)');gradient.addColorStop(1,'rgba(255,255,0,0.86)');
 ctx.fillStyle=gradient;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);
 ctx.strokeStyle='#000000';ctx.lineWidth=2;ctx.strokeRect(prim.x+1,prim.y+1,prim.w-2,prim.h-2);
 ctx.font='13px Arial';ctx.textAlign='left';ctx.textBaseline='top';
 prim.rows.forEach((row,index)=>{
  const yy=prim.y+prim.margin+index*18;
  for(const [text,offset] of [[row.values?.[0]??'',0],[row.label??'',Number(row.labelIndent??0)],[row.values?.[1]??'',Number(row.valueIndent??0)]]){
   ctx.fillStyle='#000000';ctx.fillText(text,prim.x+prim.margin+offset+1,yy+1);ctx.fillStyle='#ffffff';ctx.fillText(text,prim.x+prim.margin+offset,yy);
  }
 });
 const button=prim.button;
 ctx.fillStyle='#d4d0c8';ctx.fillRect(button.x,button.y,button.w,button.h);
 ctx.strokeStyle='#808080';ctx.strokeRect(button.x+.5,button.y+.5,button.w-1,button.h-1);
 ctx.fillStyle='#000000';ctx.textAlign='center';ctx.textBaseline='middle';ctx.fillText(button.caption,button.x+button.w/2,button.y+button.h/2+1);
 ctx.restore();
}
function paintPrimitive(ctx,prim,images){
 switch(prim.kind){
  case 'fill':{
   const image=prim.image?images.get(prim.image):null;
   if(image){const pattern=ctx.createPattern(image,'repeat');ctx.fillStyle=pattern??prim.color;}
   else ctx.fillStyle=prim.color;
   ctx.fillRect(prim.x,prim.y,prim.w,prim.h);return;
  }
  case 'radial-gradient':{
   const gradient=ctx.createRadialGradient(prim.x+prim.w,prim.y+prim.h,0,prim.x+prim.w,prim.y+prim.h,Math.hypot(prim.w,prim.h));
   gradient.addColorStop(0,prim.from);gradient.addColorStop(1,prim.to);ctx.fillStyle=gradient;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);return;
  }
  case 'shape-rect':{
   if(prim.fill){ctx.fillStyle=prim.fill;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);}
   if(prim.stroke){ctx.strokeStyle=prim.stroke;ctx.lineWidth=prim.penWidth??1;ctx.strokeRect(prim.x+.5,prim.y+.5,Math.max(0,prim.w-1),Math.max(0,prim.h-1));}
   return;
  }
  case 'shape-ellipse':{
   ctx.beginPath();ctx.ellipse(prim.x+prim.w/2,prim.y+prim.h/2,Math.max(0,prim.w/2),Math.max(0,prim.h/2),0,0,Math.PI*2);
   if(prim.fill){ctx.fillStyle=prim.fill;ctx.fill();}
   if(prim.stroke){ctx.strokeStyle=prim.stroke;ctx.lineWidth=prim.penWidth??1;ctx.stroke();}
   return;
  }
  case 'bevel':{drawBevel(ctx,prim.x,prim.y,prim.w,prim.h,prim.outer,prim.inner,prim.width);return;}
  case 'group-box':{
   drawBevel(ctx,prim.x,prim.y,prim.w,prim.h,'bvRaised','bvNone',1);
   if(prim.caption){ctx.font=fontCss(prim.font);ctx.fillStyle=prim.font.color;ctx.textBaseline='top';ctx.textAlign='left';ctx.fillText(prim.caption,prim.x+8,prim.y-1);}
   return;
  }
  case 'page-control':{
   const tabHeight=21;ctx.fillStyle=prim.color;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);
   ctx.font=fontCss(prim.font);ctx.textBaseline='middle';ctx.textAlign='left';
   let tabX=prim.x+2;
   prim.tabs.forEach((tab,index)=>{
    const tabWidth=Math.max(45,Math.min(160,ctx.measureText(tab.caption).width+18));
    const active=index===prim.active,lifted=active;
    ctx.fillStyle=lifted?'#ffffff':tab.enabled===false?'#c0c0c0':'#d4d0c8';
    ctx.fillRect(tabX,prim.y+(lifted?0:2),tabWidth,tabHeight-(lifted?0:2));
    ctx.strokeStyle=lifted?'#000000':'#808080';ctx.strokeRect(tabX+.5,prim.y+(lifted?0:2)+.5,tabWidth-1,tabHeight-(lifted?0:2)-1);
    ctx.fillStyle=tab.enabled===false?'#808080':'#000000';ctx.fillText(tab.caption,tabX+9,prim.y+tabHeight/2+1);
    tabX+=tabWidth+2;
   });
   ctx.beginPath();ctx.moveTo(prim.x,prim.y+tabHeight+.5);ctx.lineTo(prim.x+prim.w,prim.y+tabHeight+.5);ctx.strokeStyle='#404040';ctx.stroke();
   ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);
   return;
  }
  case 'image':{
   const image=prim.path?images.get(prim.path):null;
   if(image){
    if(prim.stretch&&prim.proportional){const ratio=Math.min(prim.w/image.width,prim.h/image.height),dw=image.width*ratio,dh=image.height*ratio;ctx.drawImage(image,prim.x+Math.trunc((prim.w-dw)/2),prim.y+Math.trunc((prim.h-dh)/2),dw,dh);}
    else if(prim.stretch)ctx.drawImage(image,prim.x,prim.y,prim.w,prim.h);
    else if(prim.center)ctx.drawImage(image,prim.x+Math.trunc((prim.w-image.width)/2),prim.y+Math.trunc((prim.h-image.height)/2));
    else ctx.drawImage(image,prim.x,prim.y);
   }else if(prim.fallback?.color){ctx.fillStyle=prim.fallback.color;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);}
   // Transparent when neither bitmap nor control-colored fallback exists:
   // the original TImage with no picture shows its parent, not a black box.
   return;
  }
  case 'text':return paintText(ctx,prim);
  case 'button':return drawButtonFace(ctx,prim,images);
  case 'xibutton':{
   ctx.fillStyle=prim.face;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);
   ctx.strokeStyle=prim.light;ctx.beginPath();ctx.moveTo(prim.x+1,prim.y+prim.h-2);ctx.lineTo(prim.x+1,prim.y+1);ctx.lineTo(prim.x+prim.w-2,prim.y+1);ctx.stroke();
   ctx.strokeStyle=prim.dark;ctx.beginPath();ctx.moveTo(prim.x+prim.w-2,prim.y+1);ctx.lineTo(prim.x+prim.w-2,prim.y+prim.h-2);ctx.lineTo(prim.x+1,prim.y+prim.h-2);ctx.stroke();
   ctx.strokeStyle=prim.border;ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);
   ctx.font=fontCss(prim.font);ctx.textAlign='center';ctx.textBaseline='middle';ctx.fillStyle=prim.enabled?prim.textColor:'#808080';ctx.fillText(prim.caption,prim.x+prim.w/2,prim.y+prim.h/2+1);return;
  }
  case 'edit':{
   ctx.fillStyle=prim.color;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);
   ctx.font=fontCss(prim.font);ctx.fillStyle=prim.enabled?prim.font.color:'#808080';ctx.textAlign='left';ctx.textBaseline='top';
   ctx.save();ctx.beginPath();ctx.rect(prim.x+2,prim.y+1,prim.w-4,prim.h-2);ctx.clip();
   if(prim.multiline){String(prim.text).split('\n').forEach((line,index)=>ctx.fillText(line,prim.x+3,prim.y+2+index*(prim.font.height+2)));}
   else ctx.fillText(prim.text,prim.x+3,prim.y+Math.max(2,(prim.h-prim.font.height)/2));
   ctx.restore();
   if(prim.focused){ctx.fillStyle='#000000';ctx.fillRect(prim.x+3+(prim.text?ctx.measureText(prim.text).width:0),prim.y+3,1,prim.h-6);}
   return;
  }
  case 'combo':{
   ctx.fillStyle=prim.color;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);
   ctx.fillStyle='#d4d0c8';ctx.fillRect(prim.x+prim.w-19,prim.y+2,17,prim.h-4);
   ctx.fillStyle='#808080';ctx.fillRect(prim.x+prim.w-19,prim.y+2,1,prim.h-4);
   ctx.fillStyle='#000000';const cx=prim.x+prim.w-10,cy=prim.y+prim.h/2;
   ctx.beginPath();ctx.moveTo(cx-4,cy-2);ctx.lineTo(cx+4,cy-2);ctx.lineTo(cx,cy+3);ctx.closePath();ctx.fill();
   if(prim.text){ctx.font=fontCss(prim.font);ctx.fillStyle=prim.enabled?prim.font.color:'#808080';ctx.textAlign='left';ctx.textBaseline='top';ctx.save();ctx.beginPath();ctx.rect(prim.x+2,prim.y+1,prim.w-22,prim.h-2);ctx.clip();ctx.fillText(prim.text,prim.x+3,prim.y+Math.max(2,(prim.h-prim.font.height)/2));ctx.restore();}
   return;
  }
  case 'checkbox':case 'radio':{
   const size=13,boxY=prim.y+Math.trunc((prim.h-size)/2);
   if(prim.kind==='radio'){
    ctx.beginPath();ctx.arc(prim.x+size/2+1,boxY+size/2,size/2,0,Math.PI*2);ctx.fillStyle='#ffffff';ctx.fill();ctx.strokeStyle='#808080';ctx.stroke();
    if(prim.checked){ctx.beginPath();ctx.arc(prim.x+size/2+1,boxY+size/2,size/4,0,Math.PI*2);ctx.fillStyle='#000000';ctx.fill();}
   }else{
    ctx.fillStyle='#ffffff';ctx.fillRect(prim.x+1,boxY,size,size);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+1.5,boxY+.5,size-1,size-1);
    if(prim.checked){ctx.strokeStyle='#000000';ctx.lineWidth=2;ctx.beginPath();ctx.moveTo(prim.x+3,boxY+7);ctx.lineTo(prim.x+6,boxY+10);ctx.lineTo(prim.x+11,boxY+3);ctx.stroke();}
   }
   if(prim.caption){ctx.font=fontCss(prim.font);ctx.fillStyle=prim.enabled?prim.font.color:'#808080';ctx.textAlign='left';ctx.textBaseline='middle';ctx.fillText(prim.caption,prim.x+size+4,prim.y+prim.h/2);}
   return;
  }
  case 'gauge':{
   ctx.fillStyle=prim.color;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);
   ctx.fillStyle=prim.foreColor;ctx.fillRect(prim.x+1,prim.y+1,Math.max(0,Math.min(1,prim.progress/prim.max))*(prim.w-2),prim.h-2);
   if(prim.showText){ctx.font=fontCss(prim.font);ctx.fillStyle='#000000';ctx.textAlign='center';ctx.textBaseline='middle';ctx.fillText(String(prim.progress),prim.x+prim.w/2,prim.y+prim.h/2+1);}
   return;
  }
  case 'progress':{
   ctx.fillStyle=prim.background;ctx.fillRect(prim.x,prim.y,prim.w,prim.h);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);
   for(let bx=prim.x+1;bx<prim.x+prim.w-1;bx+=3){ctx.fillStyle='#ffffff';ctx.fillRect(bx,prim.y+1,1,prim.h-2);}
   ctx.fillStyle=prim.foreColor;ctx.fillRect(prim.x+1,prim.y+1,Math.max(0,Math.min(1,prim.progress/prim.max))*(prim.w-2),prim.h-2);return;
  }
  case 'trackbar':{
   ctx.fillStyle='#d4d0c8';ctx.fillRect(prim.x,prim.y,prim.w,prim.h);
   ctx.fillStyle=prim.lineColor;if(prim.vertical)ctx.fillRect(prim.x+prim.w/2-1,prim.y+4,2,prim.h-8);else ctx.fillRect(prim.x+4,prim.y+prim.h/2-1,prim.w-8,2);
   const ratio=Math.max(0,Math.min(1,prim.position/prim.max));
   const tx=prim.vertical?prim.x+prim.w/2:prim.x+4+ratio*(prim.w-8),ty=prim.vertical?prim.y+prim.h-4-ratio*(prim.h-8):prim.y+prim.h/2;
   ctx.fillStyle=prim.thumbColor;ctx.fillRect(tx-6,ty-4,12,8);ctx.strokeStyle='#404040';ctx.strokeRect(tx-5.5,ty-3.5,11,7);return;
  }
  case 'scrollbar':{
   ctx.fillStyle='#d4d0c8';ctx.fillRect(prim.x,prim.y,prim.w,prim.h);
   const ratio=Math.max(0,Math.min(1,prim.position/prim.max));
   if(prim.vertical){ctx.fillStyle='#ffffff';ctx.fillRect(prim.x,prim.y+ratio*(prim.h-20),prim.w,20);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+.5,prim.y+ratio*(prim.h-20)+.5,prim.w-1,19);}
   else{ctx.fillStyle='#ffffff';ctx.fillRect(prim.x+ratio*(prim.w-20),prim.y,20,prim.h);ctx.strokeStyle='#808080';ctx.strokeRect(prim.x+ratio*(prim.w-20)+.5,prim.y+.5,19,prim.h-1);}
   return;
  }
  case 'grid':return paintGrid(ctx,prim,images);
  case 'result-grid':return paintResultGrid(ctx,prim,images);
  case 'pitch':return paintPitch(ctx,prim,images);
  case 'match-pitch':return paintMatchPitch(ctx,prim,images);
  case 'match-fixtures':return paintMatchFixtures(ctx,prim,images);
  case 'panel-rows':return paintPanelRows(ctx,prim,images);
  case 'lineup-list':return paintLineupList(ctx,prim);
  case 'event-log':return paintEventLog(ctx,prim,images);
  case 'statistics-dialog':return paintStatistics(ctx,prim);
  case 'placeholder':{
   ctx.fillStyle='#d4d0c8';ctx.fillRect(prim.x,prim.y,prim.w,prim.h);ctx.strokeStyle='#808080';ctx.setLineDash([3,3]);ctx.strokeRect(prim.x+.5,prim.y+.5,prim.w-1,prim.h-1);ctx.setLineDash([]);return;
  }
  default:return;
 }
}

/** Canvas painter + host facade for the original forms. */
export class VclRenderer {
 constructor(container,forms,{strict=true}={}){
  if(!container)throw Error('A container element is required.');
  this.container=typeof container==='string'?document.querySelector(container):container;
  if(!this.container)throw Error('Renderer container not found.');
  this.forms=new Map((forms??[]).map(form=>[form.name,form]));
  this.images=new Map();this.imageSizes=new Map();this.pendingImages=new Set();this.handlers=new Map();
  this.stack=[];this.frame=null;this.lastLayout=null;
  this.fieldValues={};this.firstRow=0;this.hitTargets=[];this.pitchTargets=[];this.gridRowTargets=[];this.hover=null;this.down=null;this.drag=null;
  this.inputs=new Map();
  this.onUnhandled=strict?operation=>{throw new UnportedOperationError(operation);}:()=>{};
  this.onLineupDrop=null;this.onMatchDrop=null;this.onFieldInput=null;
  this.wrapper=document.createElement('div');
  this.wrapper.style.cssText='position:absolute;inset:0;display:flex;align-items:center;justify-content:center;overflow:hidden';
  this.canvas=document.createElement('canvas');
  this.canvas.tabIndex=0;
  this.canvas.style.cssText='display:block;background:#000;outline:none';
  this.wrapper.append(this.canvas);
  this.container.append(this.wrapper);
  this.ctx=this.canvas.getContext('2d');
  this.canvas.addEventListener('pointermove',event=>this.onPointerMove(event));
  this.canvas.addEventListener('pointerdown',event=>this.onPointerDown(event));
  this.canvas.addEventListener('pointerup',event=>this.onPointerUp(event));
  this.canvas.addEventListener('pointercancel',()=>{this.drag=null;this.down=null;this.paint();});
  this.canvas.addEventListener('pointerleave',()=>{if(this.hover){this.hover=null;this.paint();}});
  this.canvas.addEventListener('keydown',event=>this.onKeyDown(event));
  this.resize=()=>this.paint();
  addEventListener('resize',this.resize);
 }
 register(key,fn){this.handlers.set(key,fn);return this;}
 invoke(operation,value){
  if(!operation)return undefined;
  const key=`${this.frame?.form??''}.${operation}`;
  const handler=this.handlers.get(key)??this.handlers.get(operation);
  if(handler)return handler(value);
  return this.onUnhandled(key,value);
 }
 async bitmap(path){
  if(!path)return null;
  if(!this.images.has(path)){
   const image=new Image();
   image.src=new URL(path,import.meta.url);
   await image.decode();
   this.images.set(path,image);this.imageSizes.set(path,{width:image.width,height:image.height});
  }
  return this.images.get(path);
 }
 async loadCrests(paths){await Promise.all([...new Set((paths??[]).filter(Boolean))].map(path=>this.bitmap(path)));}
 async prepare(extra=[]){
  await Promise.all([...new Set([
   'assets/original-f01.jpg','assets/original-lineup-pitch.jpg','assets/original-lineup-targets.png','assets/original-match-background.png',
   'assets/original-shirt-0.png','assets/original-shirt-1.png','assets/original-shirt-2.png','assets/original-shirt-3.png',
   'assets/i_gol.png','assets/i_golv.png','assets/i_ca.png','assets/i_cv.png','assets/i_cacv.png','assets/i_ct.png','assets/i_sub.png',
   ...extra
  ])].map(path=>this.bitmap(path).catch(()=>null)));
  return this;
 }
 ensureImage(path){
  if(!path||this.images.has(path)||this.pendingImages.has(path))return;
  this.pendingImages.add(path);
  this.bitmap(path).then(()=>{this.paint();}).catch(()=>{}).finally(()=>this.pendingImages.delete(path));
 }
 formFor(name){const form=this.forms.get(name);if(!form)throw Error(`Unknown original form ${name}`);return form;}
 applyFieldValues(frame){
  const entries=Object.entries(this.fieldValues);
  if(!entries.length)return frame;
  const properties={...frame.properties};
  for(const [key,entry] of entries){
   const [formName,control]=key.split('.');
   if(formName!==frame.form)continue;
   const override={...properties[control]};
   if(entry.kind==='edit')override.Text=entry.value;
   else if(entry.kind==='combo'){override.ItemIndex=entry.value;override.Items=override.Items??entry.items;}
   else if(entry.kind==='checkbox'||entry.kind==='radio')override.Checked=entry.value;
   properties[control]=override;
  }
  return {...frame,properties};
 }
 normalize(view){
  const frame={...view,properties:view.properties??{}};
  if(view.firstRow!==undefined)this.firstRow=Number(view.firstRow)||0;
  frame.firstRow=this.firstRow;
  frame.hover=this.hover;frame.down=this.down;
  return frame;
 }
 async show(view,{modal=false}={}){
  const frame=this.normalize(view);
  this.formFor(frame.form);
  if(modal&&this.stack.length)this.stack.push(frame);else this.stack=[frame];
  this.frame=frame;this.paint();return frame;
 }
 update(view){const frame=this.normalize(view);if(this.stack.length)this.stack[this.stack.length-1]=frame;else this.stack=[frame];this.frame=frame;this.paint();return frame;}
 close(){if(!this.stack.length)return false;this.stack.pop();this.frame=this.stack[this.stack.length-1]??null;this.paint();return true;}
 drawStack(){
  const stack=this.stack.length?this.stack:[];
  const base=stack[0]??this.frame;if(!base)return;
  const baseForm=this.forms.get(base.form);if(!baseForm)return;
  let width=Number(baseForm.properties.ClientWidth)||640,height=Number(baseForm.properties.ClientHeight)||480;
  for(const frame of stack){const form=this.forms.get(frame.form);if(form){width=Math.max(width,Number(form.properties.ClientWidth)||0);height=Math.max(height,Number(form.properties.ClientHeight)||0);}}
  this.canvas.width=width;this.canvas.height=height;
  const ctx=this.ctx;
  ctx.clearRect(0,0,width,height);ctx.fillStyle='#000000';ctx.fillRect(0,0,width,height);
  const layouts=[];
  for(const frame of stack){
   const form=this.forms.get(frame.form);if(!form)continue;
   const resolved=this.applyFieldValues(frame);
   const origin={x:Math.trunc((width-(Number(form.properties.ClientWidth)||width))/2),y:Math.trunc((height-(Number(form.properties.ClientHeight)||height))/2)};
   const layout=layoutForm(form,{...resolved,width:form.properties.ClientWidth,height:form.properties.ClientHeight,firstRow:this.firstRow},{imageSizes:Object.fromEntries(this.imageSizes)});
   layouts.push({frame,form,origin,layout});
   ctx.save();ctx.translate(origin.x,origin.y);ctx.beginPath();ctx.rect(0,0,form.properties.ClientWidth,form.properties.ClientHeight);ctx.clip();
   for(const primitive of layout.primitives){if(primitive.path)this.ensureImage(primitive.path);if(primitive.shirt)this.ensureImage(primitive.shirt);if(primitive.homeCrest)this.ensureImage(primitive.homeCrest);if(primitive.awayCrest)this.ensureImage(primitive.awayCrest);paintPrimitive(ctx,primitive,this.images);}
   ctx.restore();
  }
  this.canvas.__layouts=layouts;
  const top=layouts[layouts.length-1];
  if(top){this.lastLayout=top.layout;this.frame=top.frame;}
  this.hitTargets=[];this.pitchTargets=[];this.gridRowTargets=[];
  for(const element of this.inputs.values())element.style.display='none';
  // Modal focus: only the top form owns hit targets and inputs. Underlying
  // forms still paint (dimmed by the top form's own geometry) but their
  // controls must not intercept pointer input while a modal is on top.
  const interactive=top?[top]:[];
  for(const entry of interactive){
   const {origin,layout}=entry;
   for(const interaction of layout.interactions){
    const x=interaction.x+origin.x,y=interaction.y+origin.y;
    if(interaction.className==='pitch-slot'||interaction.className==='match-slot')this.pitchTargets.push({...interaction,x,y});
    else if(typeof interaction.className==='string'&&interaction.className.startsWith('grid-row'))this.gridRowTargets.push({...interaction,x,y});
    if(interaction.kind)this.placeInput(entry,interaction);
    else if(interaction.operation)this.hitTargets.push({...interaction,x,y});
   }
  }
  // Pitch/grid drag targets for the top form only; underlying modal state
  // stays painted but inert until the modal closes.
  const scale=this.scaleFactor(width,height);
  this.canvas.style.width=Math.round(width*scale)+'px';
  this.canvas.style.height=Math.round(height*scale)+'px';
  this.repositionInputs();
 }
 scaleFactor(width,height){
  const rect=this.container.getBoundingClientRect();
  if(!rect.width||!rect.height)return 1;
  const ratio=Math.min(rect.width/width,rect.height/height);
  return ratio>=1?Math.floor(ratio):Math.max(ratio,0.05);
 }
 placeInput(entry,interaction){
  const key=entry.frame.form+'.'+interaction.name;
  const input=interaction.input??{};
  // Disabled VCL controls (Enabled=false) paint but never take input: keep
  // the overlay hidden and inert so the original disabled state is honored.
  if(input.disabled){
   const stale=this.inputs.get(key);
   if(stale)stale.style.display='none';
   return;
  }
  let element=this.inputs.get(key);
  if(!element){
   const owner=this.canvas.ownerDocument;
   if(interaction.kind==='combo')element=owner.createElement('select');
   else if(interaction.kind==='edit'){element=owner.createElement('input');element.type='text';}
   else{element=owner.createElement('input');element.type=interaction.kind==='radio'?'radio':'checkbox';}
   element.dataset.originalControl=key;
   element.setAttribute('aria-label',interaction.name);
   element.style.cssText='position:fixed;z-index:5;opacity:0;margin:0;padding:0;border:0;cursor:pointer';
   element.addEventListener('focus',()=>this.paint());
   element.addEventListener('blur',()=>this.paint());
   if(interaction.kind==='edit')element.addEventListener('input',()=>{this.fieldValues[key]={kind:'edit',value:element.value};this.onFieldInput?.(key,element.value);if(interaction.operation)this.invoke(interaction.operation,element.value);this.paint();});
   if(interaction.kind==='combo')element.addEventListener('change',()=>{this.fieldValues[key]={kind:'combo',value:element.selectedIndex,items:input.items};this.onFieldInput?.(key,element.selectedIndex);if(interaction.operation)this.invoke(interaction.operation,element.selectedIndex);this.paint();});
   if(interaction.kind==='checkbox'||interaction.kind==='radio')element.addEventListener('change',()=>{this.fieldValues[key]={kind:interaction.kind,value:element.checked};if(interaction.operation)this.invoke(interaction.operation,element.checked);this.paint();});
   owner.body.append(element);
   this.inputs.set(key,element);
  }
  element.style.display='block';
  // Mirror VCL Enabled state onto the DOM overlay so disabled controls cannot
  // take focus even if a stale overlay survives a frame change.
  try{element.disabled=!!input.disabled;}catch{}
  if(interaction.kind==='combo'){
   if(element.dataset.items!==(input.items??[]).join('\u0000')){element.replaceChildren(...(input.items??[]).map((text,index)=>{const option=this.canvas.ownerDocument.createElement('option');option.value=String(index);option.textContent=text;return option;}));element.dataset.items=(input.items??[]).join('\u0000');}
   if(element.selectedIndex!==(input.selected??-1))element.selectedIndex=input.selected??-1;
  }else if(interaction.kind==='edit'){
   const value=this.fieldValues[key]?.value??input.text??'';
   if(element.value!==String(value))element.value=String(value);
  }else element.checked=!!input.checked;
 }
 repositionInputs(){
  const rect=this.canvas.getBoundingClientRect();
  const scale=this.canvas.width?rect.width/this.canvas.width:1;
  const positions=new Map();
  // Only the top layout owns visible inputs while a modal is stacked; lower
  // forms keep painting underneath but must not capture pointer focus.
  const layouts=this.canvas.__layouts??[];
  const top=layouts[layouts.length-1];
  if(top){
   const {frame,origin,layout}=top;
   for(const interaction of layout.interactions){
    if(!interaction.kind)continue;
    if(interaction.input?.disabled)continue;
    const key=frame.form+'.'+interaction.name;
    if(positions.has(key))continue;
    positions.set(key,{x:interaction.x+origin.x,y:interaction.y+origin.y,width:interaction.width,height:interaction.height});
   }
  }
  for(const [key,element] of this.inputs){
   const position=positions.get(key);
   if(!position){element.style.display='none';continue;}
   element.style.display='block';
   element.style.left=rect.left+position.x*scale+'px';
   element.style.top=rect.top+position.y*scale+'px';
   element.style.width=position.width*scale+'px';
   element.style.height=position.height*scale+'px';
  }
 }
 pointFromEvent(event){
  const rect=this.canvas.getBoundingClientRect();
  return {x:(event.clientX-rect.left)*this.canvas.width/rect.width,y:(event.clientY-rect.top)*this.canvas.height/rect.height};
 }
 hitAt(point){return this.hitTargets.findLast(target=>point.x>=target.x&&point.x<target.x+target.width&&point.y>=target.y&&point.y<target.y+target.height)??null;}
 pitchAt(point){return this.pitchTargets.findLast(target=>point.x>=target.x&&point.x<target.x+target.width&&point.y>=target.y&&point.y<target.y+target.height)??null;}
 gridRowAt(point){return this.gridRowTargets.findLast(target=>point.x>=target.x&&point.x<target.x+target.width&&point.y>=target.y&&point.y<target.y+target.height)??null;}
 onPointerMove(event){
  const point=this.pointFromEvent(event),hit=this.hitAt(point);
  this.canvas.style.cursor=hit?'pointer':'default';
  const name=hit?.name??null;
  if(name!==this.hover){this.hover=name;this.paint();}
 }
 onPointerDown(event){
  const point=this.pointFromEvent(event);
  const pitchTarget=this.frame?.form==='Form87'||this.frame?.form==='Form88'?this.pitchAt(point):null;
  const rowTarget=this.frame?.form==='Form87'?this.gridRowAt(point):null;
  if(pitchTarget){this.drag={slot:pitchTarget.slot};this.canvas.setPointerCapture?.(event.pointerId);this.paint();return;}
  if(rowTarget){this.drag={playerId:rowTarget.value,row:rowTarget.rowIndex};this.canvas.setPointerCapture?.(event.pointerId);this.paint();return;}
  this.down=this.hitAt(point);this.paint();
 }
 onPointerUp(event){
  const point=this.pointFromEvent(event);
  if(this.drag){
   const source=this.drag;this.drag=null;
   if(source.slot!==undefined){
    const target=this.pitchAt(point);
    if(this.frame?.form==='Form88')this.onMatchDrop?.({sourceSlot:source.slot,targetSlot:target?.slot,x:point.x-8,y:point.y-8});
    else this.onLineupDrop?.({source,targetSlot:target?.slot,x:point.x,y:point.y});
   }else if(source.playerId!==undefined){
    const target=this.pitchAt(point);
    this.onLineupDrop?.({source:{playerId:source.playerId},targetSlot:target?.slot,x:point.x,y:point.y});
   }
   this.paint();return;
  }
  const hit=this.hitAt(point),pressed=this.down;this.down=null;this.paint();
  if(hit&&(!pressed||hit.name===pressed.name))this.invoke(hit.operation,hit.value);
 }
 onKeyDown(event){
  const frame=this.frame;if(!frame)return;
  const focus=frame.focus;
  if(focus&&event.key.length===1&&!event.ctrlKey&&!event.metaKey){
   const key=frame.form+'.'+focus;
   const current=this.fieldValues[key]?.value??frame.properties?.[focus]?.Text??'';
   this.fieldValues[key]={kind:'edit',value:current+event.key};
   this.onFieldInput?.(key,this.fieldValues[key].value);this.paint();event.preventDefault();
  }
 }
 paint(){this.drawStack();}
}
