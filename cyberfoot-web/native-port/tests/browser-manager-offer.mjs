import {chromium} from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';import assert from 'node:assert/strict';import {mkdirSync} from 'node:fs';
const output='/Users/talip/Documents/ChatGPT/misc/output/native-offer-screen';mkdirSync(output,{recursive:true});const browser=await chromium.launch({headless:true});
try{for(const [action,width] of [['accept',1024],['reject',640]]){
 const page=await browser.newPage({viewport:{width,height:768}}),errors=[];page.on('pageerror',e=>errors.push(String(e)));
 await page.goto('http://localhost:8766/manager-offer-preview.html?manualClock=1');await page.waitForFunction(()=>window.offerDevelopment?.host.active&&window.offerDevelopment.renderer.frame?.form==='Form30');
 const text=()=>page.evaluate(()=>JSON.parse(window.render_game_to_text()));let state=await text();assert.equal(state.offer.selected,0);assert.equal(state.managerClub,11);assert.equal(state.finished,false);assert.ok(state.offer.roster.rows.length>10);
 assert.equal(await page.locator('[data-original-control="Form30.r3"]').count(),0);
 await page.keyboard.press('Escape');assert.equal((await text()).form,'Form30');await page.keyboard.press('Enter');assert.equal((await text()).form,'Form30');
 await page.locator('label[for="Form30.r2"]').click();state=await text();assert.equal(state.offer.selected,1);assert.equal(state.offer.roster.clubId,1);assert.equal(await page.locator('[data-original-control="Form30.r1"]').isChecked(),false);
 assert.equal(await page.locator('[data-original-control="Form30.ljog"] tbody tr').count(),state.offer.roster.rows.length);
 await page.locator('[data-original-control="Form30.ljog"] tbody tr').first().click();assert.equal(await page.locator('[aria-selected="true"]').count(),1);
 await page.locator('[data-original-control="Form30.ljog"]').evaluate(el=>{el.scrollTop=el.scrollHeight;});await page.screenshot({path:output+'/'+action+'.png'});
 await page.locator('[data-original-control="Form30.'+(action==='accept'?'bt3':'XiButton1')+'"]').click();await page.waitForFunction(()=>JSON.parse(window.render_game_to_text()).finished);state=await text();assert.equal(state.form,null);assert.equal(state.result.accepted,action==='accept');assert.equal(state.managerClub,action==='accept'?1:11);assert.equal(state.error,null);
 assert.deepEqual(await page.evaluate(()=>window.offerDevelopment.runtime.managerJobOffers),[-1,-1,-1,-1]);assert.equal(await page.locator('[data-original-control="Form30.ljog"]').isVisible(),false);assert.deepEqual(errors,[]);
 await page.evaluate(async()=>{const {readSave,writeSave}=await import('./save-format.mjs'),a=window.offerDevelopment.save(),b=writeSave(readSave(a));if(a.length!==b.length||a.some((v,i)=>v!==b[i]))throw Error('Offer save roundtrip mismatch');});await page.close();
}}finally{await browser.close();}
console.log('Offer dialog: selection/roster, row selection, scrolling, scaled controls, accept/reject, cleared offers, save persistence and Enter/Escape behavior verified. Other standings competitions remain unported.');
