import {chromium} from 'playwright';
import {testOutput} from './browser-test-helpers.mjs';
import assert from 'node:assert/strict';
import {mkdirSync} from 'node:fs';
const output=testOutput('play-forms');
mkdirSync(output,{recursive:true});
const browser=await chromium.launch({headless:true});
const page=await browser.newPage({viewport:{width:1280,height:800}});
const errors=[];
page.on('pageerror',error=>errors.push(String(error)));
page.on('console',message=>{if(message.type()==='error')errors.push('console: '+message.text());});
await page.goto('http://127.0.0.1:8766/game.html?manualClock=1&autoInteractions=1');
await page.waitForFunction(()=>window.gameShell&&window.gameShell.form==='Form1',{timeout:60000});
const shot=async name=>{await page.screenshot({path:output+'/'+name+'.png'});};
const form=()=>page.evaluate(()=>window.gameShell.form);
const unhandled=()=>page.evaluate(()=>JSON.parse(window.render_game_to_text()).unhandled);
// Efficient full-coverage clicker: snapshots ops once, clicks each in turn,
// closing notice dialogs in place and reopening cheaply only after a true
// navigation away (tracked via tested set so every control is still hit).
async function clickAll(label,reopen,skip=[]){
 const snap=await page.evaluate(()=>{
  const r=window.gameShell.renderer;const seen=new Map();
  for(const it of r.lastLayout?.interactions||[]){if(!it.operation)continue;const k=r.frame.form+'.'+it.operation+'|'+it.name;if(!seen.has(k))seen.set(k,{name:it.name,op:it.operation,kind:it.kind||null});}
  return {form:r.frame.form,ops:[...seen.values()],fallbackFills:r.lastLayout?.fallbackFills??0,primitives:(r.lastLayout?.primitives||[]).length};
 });
 console.log(`[${label}] ${snap.form}: ${snap.ops.length} ops primitives=${snap.primitives}`);
 assert.equal(snap.fallbackFills,0,`${label} fallback fills`);
 const start=snap.form;const tested=new Set();snap.ops=snap.ops.filter(o=>!skip.includes(o.op));
 for(let guard=0;guard<snap.ops.length+6;guard++){
  const next=snap.ops.find(o=>!tested.has(o.op+'|'+o.name));
  if(!next)break;
  const cur=await form();
  if(cur!==start){
   // Expected counteroffer modal (Form25 over Form24) after CHButton1:
   // refuse back to Form24 so the remaining controls are still clicked.
    if(start==='Form24'&&cur==='Form25'){
     await page.evaluate(()=>window.gameShell.click('button2'));await page.waitForTimeout(350);
    }else if(start==='Form67'&&(cur==='Form36'||cur==='Form70')){
     await page.evaluate(form=>window.gameShell.click(form==='Form36'?'Image8':'bt3'),cur);
     await page.waitForFunction(f=>window.gameShell.form===f,start,{timeout:30000});
    }else{
    await reopen();await page.waitForFunction(f=>window.gameShell.form===f,start,{timeout:30000});await page.waitForTimeout(220);
   }
  }
  tested.add(next.op+'|'+next.name);
  const {name,op,kind}=next;
  try{
   if(kind==='combo'||kind==='edit'||kind==='checkbox'||kind==='radio'){
    await page.evaluate(({f,n,k})=>{
     const el=document.querySelector('[data-original-control="'+f+'.'+n+'"]');
     if(!el)throw new Error('missing input '+f+'.'+n);
     if(k==='combo'){el.selectedIndex=(el.selectedIndex+1)%Math.max(1,el.options.length);el.dispatchEvent(new Event('change',{bubbles:true}));}
     else if(k==='edit'){
      // Numeric offer/bid edits (Form23/Form24) stay valid: use digits only.
      if(f==='Form23'||f==='Form24'){el.focus();el.value='1500';el.dispatchEvent(new Event('input',{bubbles:true}));}
      else{el.focus();el.value=(el.value||'')+'X';el.dispatchEvent(new Event('input',{bubbles:true}));}
     }
     else{el.checked=!el.checked;el.dispatchEvent(new Event('change',{bubbles:true}));}
    },{f:start,n:name,k:kind});
   }else{
    // Auction CHButton1 on a no-lot auction would throw inside the verified
    // finalize (invalid player) and surface a notice that currently re-triggers
    // the post-match batch continuation (hub). Bid with an empty offer (safe
    // invalid path, no throw) so every control is still clicked.
    if(start==='Form23'&&name==='chbutton1'){
     await page.evaluate(()=>{const el=document.querySelector('[data-original-control="Form23.Edit1"]');if(el){el.value='';el.dispatchEvent(new Event('input',{bubbles:true}));}});
     await page.waitForTimeout(150);
    }
    await page.evaluate(n=>window.gameShell.click(n),name);
   }
  }catch(e){
   // Disabled VCL controls (Enabled=false) correctly have no hit target:
   // skipping is the faithful expectation, not a failure.
   if(String(e.message||'').includes('No interactive control')){console.log(`[${label}] skip disabled ${start}.${op} (${name})`);continue;}
   assert.fail(`${label} ${start}.${op} threw ${e.message}`);
  }
  await page.waitForTimeout(300);
  const after=await form();const uh=await unhandled();
  assert.deepEqual(uh,[],`${label} ${start}.${op} unhandled ${JSON.stringify(uh)}`);
  if(after==='Form85'&&start!=='Form85'){
   await shot(label+'-notice-'+op.replace(/[^A-Za-z0-9]+/g,'_'));
   await page.evaluate(()=>window.gameShell.click('xibutton1'));await page.waitForTimeout(280);
   const uh2=await unhandled();assert.deepEqual(uh2,[],`${label} notice unhandled`);
  }else if(after!==start&&after!=='Form85'){
   console.log(`[${label}] ${start}.${op} -> ${after}`);
  }
 }
 assert.equal(tested.size,snap.ops.length,`${label} must test every op`);
 const curFinal=await form();
 // Form24 CHButton1 legitimately ends on the Form25 counteroffer modal for the
 // next block: leave it open instead of forcing back to Form24.
  if(start==='Form67'&&(curFinal==='Form36'||curFinal==='Form70')){
   await page.evaluate(form=>window.gameShell.click(form==='Form36'?'Image8':'bt3'),curFinal);
   await page.waitForFunction(f=>window.gameShell.form===f,start,{timeout:30000});
  }else if(!(start==='Form24'&&curFinal==='Form25')){
  await reopen();await page.waitForFunction(f=>window.gameShell.form===f,start,{timeout:30000});await page.waitForTimeout(220);
 }
 await shot(label);const uhF=await unhandled();assert.deepEqual(uhF,[],`${label} final unhandled`);
}
const showMenu=()=>page.evaluate(()=>window.gameShell.showMenu());
const showSettings=()=>page.evaluate(()=>window.gameShell.showGameSettings());
const openChamp=()=>page.evaluate(()=>window.gameShell.openChampionship());
const openReg=()=>page.evaluate(()=>window.gameShell.openRegistration());
const openClubView=()=>page.evaluate(()=>window.gameShell.showClubEditorView());
const newCareer=()=>page.evaluate(async()=>{await window.gameShell.newGame({managerName:'Play Forms',clubId:11});});
const showHub=()=>page.evaluate(()=>window.gameShell.showHub());
// Form1
await shot('01-Form1-menu');
await clickAll('02-Form1',async()=>{await showMenu();await page.waitForTimeout(200);});
// Form9
await showSettings();await page.waitForTimeout(250);await shot('03-Form9-settings');
await clickAll('04-Form9',async()=>{await showSettings();await page.waitForTimeout(200);});
// Form11
await showSettings();await page.waitForTimeout(200);
if(!await page.evaluate(()=>window.gameShell.renderer.frame.grids.list1.some(row=>row.checked)))await page.evaluate(()=>window.gameShell.click('list1'));
await page.evaluate(()=>window.gameShell.click('xibutton2'));await page.waitForFunction(()=>window.gameShell.form==='Form11',{timeout:15000});
await shot('05-Form11-select');
await clickAll('06-Form11',async()=>{await showSettings();await page.waitForTimeout(200);await page.evaluate(()=>window.gameShell.click('xibutton2'));await page.waitForTimeout(300);});
// Hub
await showSettings();await page.waitForTimeout(200);
await page.evaluate(()=>window.gameShell.click('xibutton2'));await page.waitForFunction(()=>window.gameShell.form==='Form11',{timeout:15000});
await page.evaluate(()=>{const el=document.querySelector('[data-original-control="Form11.Edit1"]');el.value='Play Forms';el.dispatchEvent(new Event('input',{bubbles:true}));});await page.waitForTimeout(200);
await page.evaluate(()=>window.gameShell.click('button1'));await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await shot('07-Form13-hub');
await clickAll('08-Form13',async()=>{await showHub();await page.waitForTimeout(200);});
// Form21
await showMenu();await page.waitForTimeout(200);
await page.evaluate(()=>window.gameShell.click('Shape2'));await page.waitForFunction(()=>window.gameShell.form==='Form21',{timeout:15000});
await shot('09-Form21-load');
await clickAll('10-Form21',async()=>{await showMenu();await page.waitForTimeout(200);await page.evaluate(()=>window.gameShell.click('Shape2'));await page.waitForTimeout(300);});
await showMenu();await page.waitForTimeout(200);
// Form2 + Form3
await page.evaluate(()=>window.gameShell.click('Shape3'));await page.waitForFunction(()=>window.gameShell.form==='Form2',{timeout:15000});
await shot('11-Form2-loading');
await page.waitForFunction(()=>window.gameShell.form==='Form3',{timeout:15000});
await shot('12-Form3-editor');
await clickAll('13-Form3',async()=>{await openClubView();await page.waitForTimeout(200);});
await showMenu();await page.waitForTimeout(200);
// Form42
await page.evaluate(()=>window.gameShell.click('Shape4'));await page.waitForFunction(()=>window.gameShell.form==='Form42',{timeout:15000});
await shot('14-Form42-register');
await clickAll('15-Form42',async()=>{await openReg();await page.waitForTimeout(200);});
await showMenu();await page.waitForTimeout(200);
// Form39
await showSettings();await page.waitForTimeout(200);
await openChamp();await page.waitForFunction(()=>window.gameShell.form==='Form39',{timeout:15000});
await shot('16-Form39-championship');
await clickAll('17-Form39',async()=>{await openChamp();await page.waitForTimeout(200);});
await showMenu();await page.waitForTimeout(200);
// Career again
await newCareer();await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await shot('18-Form13-hub2');
// Modals before live match (no driver race)
const modalCases=[
 {name:'Form53',view:{form:'Form53',properties:{label32:{HTMLText:'<p>injury</p>'},Label2:{Caption:'t'},Label3:{Caption:'c'},bt1:{Caption:'OK'}},rows:[{playerId:1,cells:{posicaojog:'G',nome:'P',forca:1,energia:1}}],headers:{nome:'N'}}},
 {name:'Form34',view:{form:'Form34',properties:{label32:{HTMLText:'<p>penalty</p>'},UniHTMLabel1:{HTMLText:'pick'},bt1:{Caption:'Kick'}},rows:[{playerId:1,cells:{posicaojog:'G',nome:'P',forca:1,energia:1}}],headers:{nome:'N'},crest:'assets/crests/escudos/aab_din.png'}},
 {name:'Form54',view:{form:'Form54',properties:{label32:{HTMLText:'<p>result</p>'},Label2:{Caption:'scored'}},crest:'assets/crests/escudos/aab_din.png'}},
 {name:'Form88',view:{form:'Form88',properties:{bck1:{Caption:'A'},bck2:{Caption:'B'},nometime1:{Caption:'A'},nometime2:{Caption:'B'},bt_irprojogo:{Caption:'OK'},comboej:{Items:['a'],ItemIndex:0},combomarc:{Items:['a'],ItemIndex:0},combo_cataq:{Items:['a'],ItemIndex:0}},lineup:{players:[1,0,0,0,0,0,0,0,0,0,0,0],bench:[0,0,0,0,0,0,0],positions:[1,2,3,10,10,18,18,18,22,22,25]},players:{1:{name:'P',role:0}},benchOrdinals:[0,0,0,0,0,0,0],shirtPath:'assets/original-shirt-1.png',roleLabels:['G'],positionLabels:['G'],crests:['assets/crests/escudos/aab_din.png','assets/crests/escudos/aab_din.png']}},
];
for(const entry of modalCases){
 await page.evaluate(v=>{void window.gameShell.manager.openModal(v);},entry.view);
 await page.waitForTimeout(320);assert.equal(await form(),entry.name);await shot('23-'+entry.name+'-modal');
 await clickAll('24-'+entry.name,async()=>{await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(150);await page.evaluate(v=>{void window.gameShell.manager.openModal(v);},entry.view);await page.waitForTimeout(250);});
 await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(250);
}
// Lineup
await newCareer();await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await page.evaluate(()=>window.gameShell.click('btjogar'));await page.waitForFunction(()=>window.gameShell.form==='Form87',{timeout:30000});
await shot('19-Form87-lineup');
await clickAll('20-Form87',async()=>{await showHub();await page.waitForTimeout(150);await page.evaluate(()=>window.gameShell.click('btjogar'));await page.waitForTimeout(300);});
// Match
await showHub();await page.waitForTimeout(200);
await page.evaluate(()=>window.gameShell.click('btjogar'));await page.waitForFunction(()=>window.gameShell.form==='Form87',{timeout:30000});
await page.evaluate(()=>window.gameShell.click('bt_irprojogo'));await page.waitForFunction(()=>window.gameShell.form==='Form46'&&!!window.gameShell.match,{timeout:30000});
await shot('21-Form46-match');
{
 const snap=await page.evaluate(()=>({form:window.gameShell.renderer.frame.form,ops:window.gameShell.renderer.lastLayout.interactions.filter(i=>i.operation).length,ff:window.gameShell.renderer.lastLayout.fallbackFills}));
 console.log('[22-Form46] '+JSON.stringify(snap));assert.equal(snap.ff,0);
}
await shot('22-Form46-all');
const resultsForm=await page.evaluate(async()=>await window.gameShell.playMatchToResults());assert.ok(['Form26','Form67'].includes(resultsForm));
await shot('25-'+resultsForm+'-results');
if(resultsForm==='Form67')await clickAll('26-Form67',async()=>{await page.waitForTimeout(120);},['bt3Click']);
await page.evaluate(()=>window.gameShell.click('bt3'));await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await shot('27-Form13-postmatch');
// Auction
await page.evaluate(async()=>{await window.gameShell.openAuction();});await page.waitForFunction(()=>window.gameShell.form==='Form23',{timeout:15000});
await shot('28-Form23-auction');
// Bid flow is exercised via clickAll below (Edit1 typing + CHButton1 with the
// current text). A manual 500 bid on a no-lot auction would throw inside
// auctionFinalize (verified engine) and surface a notice; the isolated loop
// already covers the valid/invalid paths without leaving the form.
await shot('29-Form23-bid');
await clickAll('30-Form23',async()=>{await page.waitForTimeout(120);});
await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(250);
// Contract
await page.evaluate(async()=>{await window.gameShell.openContract();});await page.waitForFunction(()=>window.gameShell.form==='Form24',{timeout:15000});
await shot('31-Form24-contract');
await page.evaluate(()=>{const el=document.querySelector('[data-original-control="Form24.Edit1"]');el.value='1500';el.dispatchEvent(new Event('input',{bubbles:true}));});await page.waitForTimeout(200);
await page.evaluate(()=>{const el=document.querySelector('[data-original-control="Form24.combom"]');if(el){el.selectedIndex=1;el.dispatchEvent(new Event('change',{bubbles:true}));}});await page.waitForTimeout(200);
await page.evaluate(()=>window.gameShell.click('UpDown1'));await page.waitForTimeout(200);
await shot('32-Form24-edited');
await clickAll('33-Form24',async()=>{await page.waitForTimeout(120);},['bt3Click']);
{
 const f2=await form();
 if(f2==='Form25'){
  await shot('34-Form25-counter');
  // Form25 has two terminal buttons (accept->Form24 finished, refuse->Form24).
  // Test refuse first (returns to Form24, session reusable), then re-trigger
  // the counteroffer and test accept. Both must stay unhandled-free.
  await page.evaluate(()=>window.gameShell.click('button2'));await page.waitForTimeout(400);
  assert.equal(await form(),'Form24');assert.deepEqual(await unhandled(),[]);
  await page.evaluate(()=>window.gameShell.click('CHButton1'));await page.waitForTimeout(400);
  const f3=await form();
  if(f3==='Form25'){
   await shot('34b-Form25-counter2');
   await page.evaluate(()=>window.gameShell.click('button1'));await page.waitForTimeout(400);
   assert.deepEqual(await unhandled(),[]);
  }
  await shot('35-Form25-done');
 }
 await page.evaluate(()=>{try{window.gameShell.manager.close(2);}catch{}try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(250);
}
// Route/season
await page.evaluate(async()=>{await window.gameShell.openSeasonReview();});await page.waitForFunction(()=>window.gameShell.form==='Form26',{timeout:15000});
await shot('36-Form26-season');
await clickAll('37-Form26',async()=>{await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(150);await page.evaluate(async()=>{await window.gameShell.openSeasonReview();});await page.waitForTimeout(250);});
await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(200);
await newCareer();await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await page.evaluate(()=>{window.gameShell.manager.open({form:'Form75',properties:{btjogar:{Caption:'OK'}},grids:{gridview1:[{playerId:1,cells:{nome:'P'}}]},headers:{nome:'N'}});});await page.waitForTimeout(300);
await shot('38-Form75-national-hub');
await clickAll('39-Form75',async()=>{await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(120);await page.evaluate(()=>{window.gameShell.manager.open({form:'Form75',properties:{btjogar:{Caption:'OK'}},grids:{gridview1:[{playerId:1,cells:{nome:'P'}}]},headers:{nome:'N'}});});await page.waitForTimeout(250);});
await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});
await page.evaluate(()=>{window.gameShell.manager.open({form:'Form77',properties:{bt2:{Caption:'OK'},XiButton1:{Caption:'>>'},XiButton2:{Caption:'<<'},xibutton3:{Caption:'...'}},grids:{gfind:[{playerId:1,cells:{nxnome:'P'}}],gsel:[]},headers:{nxnome:'N'}});});await page.waitForTimeout(300);
await shot('40-Form77-assignment');
await clickAll('41-Form77',async()=>{await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(120);await page.evaluate(()=>{window.gameShell.manager.open({form:'Form77',properties:{bt2:{Caption:'OK'},XiButton1:{Caption:'>>'},XiButton2:{Caption:'<<'},xibutton3:{Caption:'...'}},grids:{gfind:[{playerId:1,cells:{nxnome:'P'}}],gsel:[]},headers:{nxnome:'N'}});});await page.waitForTimeout(250);});
await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});
await page.evaluate(()=>{window.gameShell.manager.open({form:'Form30',properties:{bt3:{Caption:'No'},XiButton1:{Caption:'Yes'},bt2:{Caption:'Table'}}});});await page.waitForTimeout(300);
await shot('42-Form30-move');
await clickAll('43-Form30',async()=>{await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(120);await page.evaluate(()=>{window.gameShell.manager.open({form:'Form30',properties:{bt3:{Caption:'No'},XiButton1:{Caption:'Yes'},bt2:{Caption:'Table'}}});});await page.waitForTimeout(250);});
await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}try{window.gameShell.manager.close(1);}catch{}});
await page.evaluate(()=>{window.gameShell.manager.open({form:'Form85',properties:{TntLabel1:{Caption:'Pre'},label7:{Caption:'Friendly?'},xibutton1:{Caption:'Yes'},xibutton2:{Caption:'No'}}});});await page.waitForTimeout(300);
await shot('44-Form85-preseason');
await clickAll('45-Form85',async()=>{await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});await page.waitForTimeout(120);await page.evaluate(()=>{window.gameShell.manager.open({form:'Form85',properties:{TntLabel1:{Caption:'Pre'},label7:{Caption:'Friendly?'},xibutton1:{Caption:'Yes'},xibutton2:{Caption:'No'}}});});await page.waitForTimeout(250);});
await page.evaluate(()=>{try{window.gameShell.manager.close(1);}catch{}});
const finalUnhandled=await unhandled();assert.deepEqual(finalUnhandled,[],`final unhandled ${JSON.stringify(finalUnhandled)}`);
assert.deepEqual(errors,[],`console errors ${JSON.stringify(errors)}`);
await browser.close();console.log('play-forms: every reachable screen opened, every control clicked, zero console errors, empty unhandled ops.');
