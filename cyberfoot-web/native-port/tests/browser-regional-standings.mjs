import {chromium} from 'playwright';import assert from 'node:assert/strict';
import {testOutput} from './browser-test-helpers.mjs';
const output=testOutput('native-regional-screen');const browser=await chromium.launch({headless:true});
try{for(let format=Number(process.env.REGIONAL_FORMAT)||1;format<=7;format++){
 const page=await browser.newPage({viewport:{width:format===7?640:1024,height:768}}),errors=[];page.on('pageerror',e=>{errors.push(String(e));console.error('Regional format '+format+': '+e.stack);});
 await page.goto('http://localhost:8766/manager-offer-preview.html?manualClock=1&regionalFixture='+format);await page.waitForFunction(()=>window.offerDevelopment?.host.active);const hash=()=>page.evaluate(async()=>Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256',window.offerDevelopment.save()))).map(n=>n.toString(16).padStart(2,'0')).join(''));const before=await hash();
 await page.locator('[data-original-control="Form30.bt2"]').click();await page.waitForFunction(()=>window.offerDevelopment.renderer.frame?.regionalBrackets?.length===3);
 assert.equal(await page.evaluate(()=>window.offerDevelopment.renderer.frame.standingsData.formatId),format);await page.screenshot({path:output+'/format-'+format+'.png'});
 const picker=page.locator('[data-original-control="Form36.combobox1"]');assert.equal(await picker.locator('option').count(),2);await picker.selectOption({index:1});await page.waitForFunction(()=>window.offerDevelopment.standings.active.state.subgroup===1);
 const more=page.locator('[data-original-control="Form36.Image12"]');if(await more.isVisible()){
  await more.click();await page.waitForFunction(()=>window.offerDevelopment.standings.active.state.lowerDivisions===true);assert.equal(await page.evaluate(()=>window.offerDevelopment.renderer.frame.regionalBrackets.length),0);assert.equal(await more.isVisible(),false);await page.screenshot({path:output+'/lower-'+format+'.png'});
  await page.locator('[data-original-control="Form36.Image2"]').click();await page.waitForFunction(()=>window.offerDevelopment.standings.active.state.lowerDivisions===false);
 }
 await page.locator('[data-original-control="Form36.lab1"]').click();await page.waitForFunction(()=>window.offerDevelopment.standings.active.state.competition===1);assert.equal(await picker.isVisible(),false);
 await page.locator('[data-original-control="Form36.Image2"]').click();await page.waitForFunction(()=>window.offerDevelopment.standings.active.state.competition===3);assert.equal(await picker.isVisible(),true);
 await page.keyboard.press('Escape');await page.waitForFunction(()=>window.offerDevelopment.renderer.frame?.form==='Form30');assert.equal(await hash(),before);assert.deepEqual(errors,[]);await page.close();
}}finally{await browser.close();}
console.log('All seven regional screens: initial view, selectors, lower divisions, league return, modal close, scaled controls and unchanged save passed.');
