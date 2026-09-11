/** Pure-layout regression for the original DFM renderer.
 * Reads the expected geometry/colours/fonts from forms.json itself, so the
 * test cannot drift from the extracted original data. */
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {layoutForm,delphiColor,fontSpec,parseHtmlText} from '../vcl-renderer.mjs';

const forms=Object.values(JSON.parse(readFileSync(new URL('../forms.json',import.meta.url),'utf8')));
const byName=Object.fromEntries(forms.map(form=>[form.name,form]));
const find=(form,control)=>{let found=null;const walk=node=>{if(node.name===control)found=node;for(const child of node.children??[])walk(child);};walk(byName[form]);return found;};
const absoluteOffset=(form,control)=>{let found=null;const walk=(node,x,y)=>{if(node.name===control)found={x,y};for(const child of node.children??[])walk(child,x+Number(child.properties.Left??0),y+Number(child.properties.Top??0));};walk(byName[form],0,0);return found;};
const shapeAt=(layout,x,y)=>layout.primitives.find(primitive=>primitive.kind==='shape-rect'&&primitive.x===x&&primitive.y===y);
const textAt=(layout,x,y)=>layout.primitives.find(primitive=>primitive.kind==='text'&&primitive.x===x&&primitive.y===y);
const imageAt=(layout,x,y)=>layout.primitives.find(primitive=>primitive.kind==='image'&&primitive.x===x&&primitive.y===y);

// --- Form1: the original main menu ---------------------------------------
{
 const form=byName.Form1,control=node=>node.properties;
 assert.equal(form.properties.Caption,'Cyberfoot 2015');
 assert.equal(form.properties.BorderStyle,'bsNone');
 const propertyOverrides={comboi2:{Items:['English','Português'],ItemIndex:0}};
 const layout=layoutForm(form,{properties:propertyOverrides});
 assert.equal(layout.form,'Form1');
 assert.equal(layout.width,form.properties.ClientWidth);
 assert.equal(layout.height,form.properties.ClientHeight);
 const background=layout.primitives[0];
 assert.equal(background.kind,'fill');
 assert.equal(background.color,delphiColor(form.properties.Color),'form Color must paint the client area');
 assert.equal(background.w,529);
 assert.equal(background.h,301);

 const image2=control(find('Form1','Image2'));
 const image=imageAt(layout,image2.Left,image2.Top);
 assert.equal(image.path,image2['Picture.Data'].asset);
 assert.equal(image.w,image2.Width);
 assert.equal(image.h,image2.Height);

 const shape1=control(find('Form1','Shape1'));
 const menuShape=shapeAt(layout,shape1.Left,shape1.Top);
 assert.equal(menuShape.w,shape1.Width);
 assert.equal(menuShape.h,shape1.Height);
 assert.equal(menuShape.fill,null,'bsClear brush must not fill');
 assert.equal(menuShape.stroke,null,'psClear pen must not stroke');

 const label=control(find('Form1','lb_sl'));
 const labelPrimitive=textAt(layout,label.Left,label.Top);
 assert.equal(labelPrimitive.text,label.Caption);
 assert.equal(labelPrimitive.font.name,label['Font.Name']);
 assert.equal(labelPrimitive.font.height,Math.abs(label['Font.Height']));
 assert.equal(labelPrimitive.color,delphiColor(label['Font.Color']));
 assert.equal(labelPrimitive.background,null,'Transparent labels must not fill');

 const exit=control(find('Form1','TntLabel1'));
 const exitPrimitive=textAt(layout,exit.Left,exit.Top);
 assert.equal(exitPrimitive.text,'SAIR');
 assert.equal(exitPrimitive.font.bold,true);
 assert.equal(exitPrimitive.font.height,Math.abs(exit['Font.Height']));

 const combo=layout.primitives.find(primitive=>primitive.kind==='combo');
 assert.equal(combo.x,control(find('Form1','comboi2')).Left);
 assert.equal(combo.selected,0);
 assert.deepEqual(combo.items,['English','Português']);

 const shapeInteraction=layout.interactions.find(entry=>entry.operation==='Shape1MouseDown');
 assert.equal(shapeInteraction.name,'Shape1');
 assert.equal(shapeInteraction.x,shape1.Left);
 assert.equal(shapeInteraction.width,shape1.Width);

 // invisible controls and non-visual classes never produce primitives
 const button1=find('Form1','Button1').properties;
 assert.equal(button1.Visible,false);
 assert.equal(layout.primitives.some(primitive=>primitive.nodeName==='Button1'),false,'hidden button skipped');
 assert.equal(layout.primitives.some(primitive=>primitive.className==='TImageList'),false,'TImageList skipped');
 assert.equal(layout.primitives.some(primitive=>primitive.x===0&&primitive.w===0),false,'no zero-size junk');
}

// --- Form23: the auction window ------------------------------------------
{
 const form=byName.Form23;
 const layout=layoutForm(form,{});
 assert.equal(layout.width,769);
 assert.equal(layout.height,532);
 const shape4=find('Form23','Shape4').properties;
 const outer=shapeAt(layout,shape4.Left,shape4.Top);
 assert.equal(outer.w,shape4.Width);
 assert.equal(outer.h,shape4.Height);
 assert.equal(outer.fill,delphiColor(shape4['Brush.Color']),'dynamic TShape brush colour');
 assert.equal(outer.stroke,delphiColor(shape4['Pen.Color']),'dynamic TShape pen colour');
 const name=find('Form23','jlnome').properties;
 const namePrimitive=textAt(layout,name.Left,name.Top);
 assert.equal(namePrimitive.text,'Nome');
 const notebook=find('Form23','Notebook1').properties,edit=find('Form23','Edit1').properties;
 const editPrimitive=layout.primitives.find(primitive=>primitive.kind==='edit');
 assert.equal(editPrimitive.x,notebook.Left+edit.Left,'Notebook page children keep original offsets');
 assert.equal(editPrimitive.y,notebook.Top+edit.Top);
 assert.equal(editPrimitive.font.name,edit['Font.Name']);
 assert.equal(editPrimitive.font.color,delphiColor(edit['Font.Color']));
 const button=find('Form23','chbutton1').properties;
 const buttonPrimitive=layout.primitives.find(primitive=>primitive.kind==='button'&&primitive.nodeName==='chbutton1');
 assert.equal(buttonPrimitive.x,notebook.Left+button.Left);
 assert.equal(buttonPrimitive.caption,button.Caption);
 const crest=find('Form23','escudo').properties;
 const crestImage=imageAt(layout,crest.Left,crest.Top);
 assert.equal(crestImage.w,crest.Width);
 assert.equal(crestImage.h,crest.Height);
 assert.equal(crestImage.path,null,'missing crest bitmap falls back to a drawn box');
}

// --- Form46: match scoreboard with dynamic fixtures ----------------------
{
 const form=byName.Form46;
 const fixtures=[{id:1,home:'A',away:'B',homeScore:0,awayScore:0,homeColor:16777215,awayColor:16777215,homeBackground:255,awayBackground:255,stadium:'X',attendance:'| 1',homeCrest:null,awayCrest:null}];
 const layout=layoutForm(form,{fixtures,divisionLabels:['1ª','2ª','3ª','4ª']});
 const gauge=find('Form46','g1').properties;
 const gaugePrimitive=layout.primitives.find(primitive=>primitive.kind==='gauge');
 assert.equal(gaugePrimitive.x,gauge.Left);
 assert.equal(gaugePrimitive.y,gauge.Top);
 assert.equal(gaugePrimitive.max,gauge.MaxValue);
 assert.equal(gaugePrimitive.foreColor,delphiColor(gauge.ForeColor));
 assert.equal(layout.primitives.some(primitive=>primitive.kind==='match-fixtures'),true,'fixtures overlay is emitted');
 const label1=find('Form46','Label1').properties;
 assert.equal(label1.Visible,false);
 assert.equal(textAt(layout,label1.Left,label1.Top),undefined,'hidden scoreboard label skipped');
}

// --- Form87: lineup window ------------------------------------------------
{
 const form=byName.Form87;
 const roster=[{playerId:7,cells:{posicaojog:'Z',nome:'Player Seven',forca:80,energia:90,idade:24},status:'0'}];
 const slots=Array.from({length:18},(_,i)=>({playerId:i===0?7:-1,position:i<11?1:0,status:0}));
 const layout=layoutForm(form,{roster,slots,players:{7:{name:'Player Seven',role:1}},roleLabels:['GOL','LD'],positionLabels:['GOL'],headers:{nome:'Name'},shirtImage:'assets/original-shirt-1.png'});
 const grid=layout.primitives.find(primitive=>primitive.kind==='grid'&&primitive.name==='gridview1');
 const gridOffset=absoluteOffset('Form87','gridview1');
 assert.equal(grid.x,gridOffset.x);
 assert.equal(grid.rowHeight,find('Form87','gridview1').properties.RowSize);
 assert.equal(grid.header,true);
 const visibleColumns=(find('Form87','gridview1').children??[]).filter(child=>child.properties.Visible!==false);
 assert.equal(grid.columns.length,visibleColumns.length);
 assert.equal(grid.columns[2].width,visibleColumns[2].properties.Width);
 assert.equal(grid.rows[0].cells.nome,'Player Seven');
 assert.equal(grid.font.name,find('Form87','gridview1').properties['Font.Name']);
 const pitch=layout.primitives.find(primitive=>primitive.kind==='pitch');
 assert.equal(pitch.placement.length,18);
 assert.equal(pitch.placement[0].shirt,'assets/original-shirt-2.png');
 assert.equal(layout.primitives.some(primitive=>primitive.kind==='image'&&primitive.x===0&&primitive.w===465),false,'Form87 Image1 renders as the pitch layer');
 assert.equal(layout.interactions.filter(entry=>entry.className==='pitch-slot').length,18);
 const kitImage=find('Form87','Image13').properties;
 const kitPrimitive=layout.primitives.find(primitive=>primitive.kind==='image'&&primitive.x===kitImage.Left);
 assert.equal(kitPrimitive.center,true);
}

// --- Form9: original new-game settings window ----------------------------
{
 const form=byName.Form9;
 const layout=layoutForm(form,{headers:{NxTextColumn1:'Country',nxtimes:'Teams'},grids:{list1:[{cells:{nxpais:'',NxImageColumn2:'',NxTextColumn1:'Spain',nxtimes:'20',NxTextColumn3:''},value:97}]},countries:[{text:'Spain',value:97}],properties:{ComboBox1:{ItemIndex:0}}});
 assert.equal(layout.width,780);
 assert.equal(layout.height,558);
 const panel=find('Form9','Shape1').properties;
 const panelPrimitive=shapeAt(layout,panel.Left,panel.Top);
 assert.equal(panelPrimitive.fill,delphiColor(panel['Brush.Color']),'Form9 background panel keeps its original TShape colour');
 assert.equal(panelPrimitive.w,panel.Width);
 assert.equal(panelPrimitive.h,panel.Height);
 const combo=find('Form9','ComboBox1').properties;
 const comboPrimitive=layout.primitives.find(primitive=>primitive.kind==='combo'&&primitive.x===combo.Left);
 assert.deepEqual(comboPrimitive.items,['Spain'],'country combo items come from the frame');
 assert.equal(comboPrimitive.selected,0);
 const grid=layout.primitives.find(primitive=>primitive.kind==='grid'&&primitive.name==='list1');
 assert.equal(grid.header,true,'goHeader list keeps its header row');
 assert.equal(grid.columns[2].caption,'Country','frame headers override missing DFM headers');
 assert.equal(grid.rows[0].cells.NxTextColumn1,'Spain');
 const button=find('Form9','xibutton2').properties;
 const next=layout.primitives.find(primitive=>primitive.kind==='button'&&primitive.nodeName==='xibutton2');
 assert.equal(next.x,button.Left);
 assert.equal(next.y,button.Top);
}

// --- unknown / invisible / HTML helpers ----------------------------------
{
 const unknown={class_name:'TFooBar',name:'Mystery',properties:{Left:10,Top:20,Width:30,Height:40,Visible:true},children:[]};
 const form={class_name:'TFormTest',name:'FormTest',properties:{ClientWidth:100,ClientHeight:100,Color:'clBtnFace'},children:[unknown,{class_name:'TTimer',name:'Timer1',properties:{Enabled:true},children:[]},{class_name:'TFooBar',name:'HiddenMystery',properties:{Left:0,Top:0,Width:10,Height:10,Visible:false},children:[]},{class_name:'TImageList',name:'Icons',properties:{},children:[]}]};
 const layout=layoutForm(form,{});
 const placeholders=layout.primitives.filter(primitive=>primitive.kind==='placeholder');
 assert.equal(placeholders.length,1,'only one visible unknown control becomes a placeholder');
 assert.deepEqual({x:placeholders[0].x,y:placeholders[0].y,w:placeholders[0].w,h:placeholders[0].h},{x:10,y:20,w:30,h:40});
 const html=parseHtmlText('<P align="center"><B><SHAD>Olá</SHAD></B> <FONT color="#C1C100">mundo</FONT></P>');
 assert.equal(html.align,'center');
 assert.equal(html.shadow,true);
 assert.equal(html.plain,'Olá mundo');
 assert.equal(html.runs[0].bold,true);
 assert.equal(html.runs.find(run=>run.text==='mundo').color,'#C1C100');
 const indented=parseHtmlText('<P align="left"><B>Força:</B>100<IND x="150"><B>Idade</B>:20</P>');
 assert.equal(indented.runs.find(run=>run.text==='Idade').indent,150,'UniHTMLabel <IND x=N> indentation is preserved');
 const font=fontSpec({'Font.Name':'Tahoma','Font.Height':-13,'Font.Style':['fsBold','fsUnderline'],'Font.Color':'clYellow'});
 assert.deepEqual({name:font.name,height:font.height,bold:font.bold,underline:font.underline,color:font.color},{name:'Tahoma',height:13,bold:true,underline:true,color:'#ffff00'});
 assert.equal(delphiColor(2982464),'rgb(64,130,45)','BGR integer 0x002D8240 -> rgb(64,130,45)');
}

// --- remaining supported classes (synthetic trees, same pure layout) -----
{
 const tree={class_name:'TFormSynth',name:'FormSynth',properties:{ClientWidth:320,ClientHeight:240,Color:'clBtnFace'},children:[
  {class_name:'TMemo',name:'Memo1',properties:{Left:5,Top:6,Width:120,Height:60,Lines:{Strings:['one','two']}},children:[]},
  {class_name:'TPageControl',name:'Pages',properties:{Left:10,Top:80,Width:200,Height:120,Color:'clBtnFace'},children:[
   {class_name:'TTabSheet',name:'Tab1',properties:{Caption:'First'},children:[{class_name:'TButton',name:'Inner',properties:{Left:4,Top:4,Width:40,Height:20,Caption:'A'},children:[]}]},
   {class_name:'TTabSheet',name:'Tab2',properties:{Caption:'Second'},children:[{class_name:'TButton',name:'Inner2',properties:{Left:8,Top:8,Width:40,Height:20,Caption:'B'},children:[]}]}
  ]},
  {class_name:'TStringGrid',name:'Sheet',properties:{Left:220,Top:10,Width:90,Height:60,ColCount:2,RowCount:2,FixedRows:1,ColWidths:[40,50],Cells:['H1','H2','a','b']},children:[]},
  {class_name:'TListView',name:'Report',properties:{Left:220,Top:80,Width:90,Height:50,Columns:[{Caption:'Name',Width:60},{Caption:'Age',Width:30}],Items:{Strings:['x']},ItemHeight:16},children:[]}
 ]};
 const layout=layoutForm(tree,{activePage:1});
 const memo=layout.primitives.find(primitive=>primitive.kind==='edit'&&primitive.multiline);
 assert.equal(memo.text,'one\ntwo','TMemo lines become text');
 assert.equal(memo.x,5);
 const page=layout.primitives.find(primitive=>primitive.kind==='page-control');
 assert.equal(page.active,1);
 assert.equal(page.tabs.length,2);
 assert.equal(layout.primitives.some(primitive=>primitive.kind==='button'&&primitive.caption==='B'),true,'active tab sheet is painted');
 assert.equal(layout.primitives.some(primitive=>primitive.kind==='button'&&primitive.caption==='A'),false,'inactive tab sheet is skipped');
 const sheet=layout.primitives.find(primitive=>primitive.kind==='grid'&&primitive.name==='Sheet');
 assert.equal(sheet.rows.length,2);
 assert.equal(sheet.rows[0].cells.col0,'H1');
 assert.equal(sheet.header,true,'fixed row becomes the header');
 const report=layout.primitives.find(primitive=>primitive.kind==='grid'&&primitive.name==='Report');
 assert.equal(report.columns.length,2);
 assert.equal(report.columns[0].caption,'Name');
 assert.equal(report.rows[0].cells.col0,'x');
}

console.log('vcl-renderer layout: original geometry/colours/fonts verified for Form1 menu, Form9 new-game settings, Form23 auction, Form46 match and Form87 lineup; TMemo/TPageControl/TStringGrid/TListView and unknown/invisible controls covered.');
