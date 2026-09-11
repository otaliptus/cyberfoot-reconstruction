import {chromium} from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';
import assert from 'node:assert/strict';import {mkdirSync,writeFileSync} from 'node:fs';

// Native human route: Form13's original F9 menu shortcut opens Form81, where
// booking a date appends the event/fixture and removes that date from the list.
const output='/Users/talip/Documents/ChatGPT/misc/cyberfoot-web/output/friendly';mkdirSync(output,{recursive:true});
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1280,height:800}}),errors=[];
page.on('pageerror',error=>errors.push(String(error)));page.on('console',message=>{if(message.type()==='error')errors.push('console: '+message.text());});
const clickControl=async name=>{
 const point=await page.evaluate(name=>{const renderer=window.gameShell.renderer,target=renderer.hitTargets.find(entry=>entry.name===name&&entry.operation);if(!target)return null;const rect=renderer.canvas.getBoundingClientRect();return {x:rect.left+(target.x+target.width/2)*rect.width/renderer.canvas.width,y:rect.top+(target.y+target.height/2)*rect.height/renderer.canvas.height};},name);
 if(point)await page.mouse.click(point.x,point.y);else await page.evaluate(name=>window.gameShell.click(name),name);
};
await page.goto('http://127.0.0.1:8766/game.html?manualClock=1&autoInteractions=1');
await page.waitForFunction(()=>window.gameShell?.form==='Form1',{timeout:60000});
await clickControl('Shape1');await page.waitForFunction(()=>window.gameShell.form==='Form9');
await clickControl('xibutton2');await page.waitForFunction(()=>window.gameShell.form==='Form11');
await page.locator('[data-original-control="Form11.Edit1"]').fill('Friendly Tester');await clickControl('button1');
await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await page.keyboard.press('F9');await page.waitForFunction(()=>window.gameShell.form==='Form81',{timeout:30000});
const before=await page.evaluate(()=>{const frame=window.gameShell.renderer.frame;return {dates:frame.friendly.dates.length,opponents:frame.friendly.opponents.length,place:frame.friendly.friendlyPlace};});
assert.ok(before.dates>0);assert.ok(before.opponents>0);assert.equal(before.place,0);
await page.locator('[data-original-control="Form81.combo3"]').selectOption({index:1});
assert.equal(await page.evaluate(()=>window.gameShell.renderer.frame.friendly.friendlyPlace),1);
await clickControl('bt1');await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:30000});
await page.keyboard.press('F9');await page.waitForFunction(()=>window.gameShell.form==='Form81',{timeout:30000});
const after=await page.evaluate(()=>{const frame=window.gameShell.renderer.frame;return {dates:frame.friendly.dates.length,opponents:frame.friendly.opponents.length};});
assert.equal(after.dates,before.dates-1);assert.ok(after.opponents>0);assert.deepEqual(await page.evaluate(()=>JSON.parse(window.render_game_to_text()).unhandled),[]);assert.deepEqual(errors,[]);
await page.screenshot({path:output+'/booked-friendly.png'});await clickControl('XiButton1');await page.waitForFunction(()=>window.gameShell.form==='Form13');
writeFileSync(output+'/checks.json',JSON.stringify({before,after,errors},null,2));await browser.close();
console.log('Friendly browser route: native F9 shortcut opened Form81, a home/away friendly was booked, the date was removed, and no console errors occurred.');
