import {chromium} from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';
import assert from 'node:assert/strict';import {mkdirSync,writeFileSync} from 'node:fs';
const output='/Users/talip/Documents/ChatGPT/misc/output/native-season-transition';mkdirSync(output,{recursive:true});
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1024,height:768}}),errors=[];page.on('pageerror',e=>errors.push(String(e)));page.on('console',m=>{if(m.type()==='error')errors.push('console: '+m.text());});
await page.goto('http://127.0.0.1:8766/career-loop-preview.html?manualClock=1');await page.waitForFunction(()=>window.careerLoop&&window.careerLoop.renderer.frame?.form==='Form87');
const before=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
assert.equal(before.season,1);assert.ok(before.agenda&&before.agenda.fixtureId>=0);
// The real season-move dialog host opens Form30 and resolves on the original Accept button.
await page.evaluate(()=>{window.__move=window.careerLoop.showSeasonMove({slot:2,destination:3});});
await page.waitForFunction(()=>window.careerLoop.renderer.frame?.form==='Form30');
await page.locator('[data-original-control="Form30.bt3"]').click();
await page.waitForFunction(()=>window.careerLoop.renderer.frame?.form==='Form87');
await page.evaluate(()=>{window.__transition=window.careerLoop.forceSeasonEnd();});
// Season settlement then the Form26 review with the native standings outcome.
await page.waitForFunction(()=>window.careerLoop.renderer.frame?.form==='Form26',null,{timeout:240000});
const review=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
assert.equal(review.form,'Form26');
await page.screenshot({path:output+'/season-review.png'});
await page.locator('[data-original-control="Form26.bt3"]').click();
// Original pre-season friendly question, then the next season's first fixture.
await page.waitForFunction(()=>window.careerLoop.renderer.frame?.form==='Form85');
await page.locator('[data-original-control="Form85.xibutton1"]').click();
await page.waitForFunction(()=>window.careerLoop.renderer.frame?.form==='Form87',null,{timeout:240000});
const after=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
assert.equal(after.season,2);assert.ok(after.agenda&&after.agenda.fixtureId>=0);assert.equal(after.startMessage,null);assert.equal(after.seasonTransitions.length,1);assert.ok(after.seasonTransitions[0].fixtures>0);assert.deepEqual(errors,[]);
await page.screenshot({path:output+'/next-season.png'});
writeFileSync(output+'/checks.json',JSON.stringify({before,review,after,errors},null,2));
await browser.close();console.log('Career loop season transition: Form30 move dialog, Form26 review and Form85 pre-season question presented, season advanced to 2 and the first fixture reopened with no console errors.');
