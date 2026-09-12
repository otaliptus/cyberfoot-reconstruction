import {chromium} from 'playwright';import assert from 'node:assert/strict';
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1100,height:800}}),errors=[];page.on('pageerror',e=>errors.push(e.message));
await page.goto('http://127.0.0.1:8765/lineup-window-preview.html');await page.waitForFunction(()=>typeof window.render_game_to_text==='function');
const control=n=>page.locator(`[data-original-control="Form87.${n}"]`),state=async()=>JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
assert.equal((await state()).roster.length,20);
for(const [index,formation] of [['0',1],['9',10],['3',4]]){await control('combtat').selectOption({index:Number(index)});assert.equal((await state()).formation,formation);}
await control('comboej').selectOption({index:2});await control('combomarc').selectOption({index:1});await control('combo_cataq').selectOption({index:1});
await control('combo1').selectOption({index:0});await control('combo2').selectOption({index:1});await control('ckescalacao').check();
let s=await state();assert.deepEqual(s.tactics,{playStyle:2,marking:1,attackFocus:1});assert.equal(s.captain,s.roster[0].playerId);assert.equal(s.setPiecePlayer,s.roster[1].playerId);assert.equal(s.remember,true);
await control('gridview1').locator('tbody tr').first().click();assert.equal((await state()).selectedPlayerId,s.roster[0].playerId);
const restored=await page.evaluate(async()=>{const {readSave}=await import('./save-format.mjs'),{openCareer}=await import('./career-state.mjs'),{readScreenLineup}=await import('./saved-lineup.mjs');const save=readSave(window.lineupDevelopment.save()),c=openCareer(save).clubs[11];return {captain:c.captain,setPiecePlayer:c.setPiecePlayer,playStyle:c.playStyle,marking:c.marking,attackFocus:c.attackFocus,slots:readScreenLineup(save,11)};});
assert.equal(restored.captain,s.captain);assert.equal(restored.setPiecePlayer,s.setPiecePlayer);assert.equal(restored.playStyle,2);assert.equal(restored.marking,1);assert.equal(restored.attackFocus,1);assert.deepEqual(restored.slots.map(s=>s.playerId),s.slots.map(s=>s.playerId));
await page.screenshot({path:new URL('../../output/native-lineup-window-full.png',import.meta.url).pathname});
await page.setViewportSize({width:600,height:720});await control('combtat').selectOption({index:8});assert.equal((await state()).formation,9);await page.screenshot({path:new URL('../../output/native-lineup-window-small.png',import.meta.url).pathname});
await control('bt_voltar').click();assert.equal((await state()).form,undefined);assert.deepEqual(errors,[]);await browser.close();console.log('Lineup window formation/tactics/captain/set pieces/remember/roster selection/back controls pass; save reload and narrow viewport pass. Remaining manual assignment and match controls are not tested or complete.');
