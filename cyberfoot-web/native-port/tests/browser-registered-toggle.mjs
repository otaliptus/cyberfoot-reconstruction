import {chromium} from 'playwright';
import assert from 'node:assert/strict';

const baseUrl=process.env.CYBERFOOT_BASE_URL??'http://127.0.0.1:8766';
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1280,height:800}}),errors=[];
page.on('pageerror',error=>errors.push(String(error)));page.on('console',message=>{if(message.type()==='error')errors.push('console: '+message.text());});
await page.goto(`${baseUrl}/game.html?manualClock=1`);await page.waitForFunction(()=>window.gameShell?.form==='Form1',{timeout:60000});
const toggle=page.locator('#registered-toggle');assert.equal(await toggle.getAttribute('aria-pressed'),'false');assert.equal(await toggle.textContent(),'Registered unlock: OFF');assert.equal(await page.evaluate(()=>window.gameShell.registered),false);
await toggle.click();assert.equal(await toggle.getAttribute('aria-pressed'),'true');assert.equal(await toggle.textContent(),'Registered unlock: ON');assert.equal(await page.evaluate(()=>window.gameShell.registered),true);
await page.reload();await page.waitForFunction(()=>window.gameShell?.form==='Form1',{timeout:60000});assert.equal(await toggle.getAttribute('aria-pressed'),'true');assert.equal(await page.evaluate(()=>window.gameShell.registered),true);
await page.evaluate(()=>window.gameShell.showGameSettings());await page.waitForFunction(()=>window.gameShell.form==='Form9');
assert.equal(await page.locator('[data-original-control="Form9.ComboBox2"] option').count(),10);assert.equal(await page.locator('[data-original-control="Form9.ckcopamundo"]').isDisabled(),false);
await toggle.click();assert.equal(await toggle.getAttribute('aria-pressed'),'false');assert.equal(await page.evaluate(()=>window.gameShell.registered),false);assert.equal(await page.locator('[data-original-control="Form9.ComboBox2"] option').count(),1);assert.equal(await page.locator('[data-original-control="Form9.ckcopamundo"]').isDisabled(),true);
await page.setViewportSize({width:375,height:667});const box=await toggle.boundingBox();assert.ok(box&&box.x+box.width<=375&&box.y+box.height<=667);assert.equal(await toggle.isVisible(),true);
assert.deepEqual(errors,[]);await browser.close();console.log('Registered unlock toggle: top-right runtime switch enabled and disabled the full registered Form9 controls without console errors.');
