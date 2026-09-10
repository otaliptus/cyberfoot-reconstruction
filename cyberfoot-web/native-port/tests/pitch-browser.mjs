import {chromium} from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';import assert from 'node:assert/strict';
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:700,height:700}}),errors=[];
page.on('pageerror',e=>errors.push(e.message));await page.goto('http://127.0.0.1:8765/lineup-pitch-preview.html?check=tactics');await page.waitForFunction(()=>typeof window.setFormation==='function');
for(let n=1;n<=10;n++){
 await page.evaluate(n=>window.setFormation(n),n);const state=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));assert.equal(state.formation,n);assert.equal(state.targets.length,18);assert.equal(state.targets[0].position,1);assert.equal(state.tacticalChecks.failures,0);
 for(const target of state.targets){assert.ok(target.x>=0&&target.y>=0);assert.ok(target.x+target.width<=465&&target.y+target.height<=602);}
}
await page.screenshot({path:new URL('../../output/native-lineup-formation10.png',import.meta.url).pathname});assert.deepEqual(errors,[]);await browser.close();console.log('All ten original formation image layouts render within original pitch dimensions; no browser errors.');
