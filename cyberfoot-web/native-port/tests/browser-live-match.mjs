import {chromium} from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';
import assert from 'node:assert/strict';import {mkdirSync,writeFileSync} from 'node:fs';
// Live Form46 playback: manual clock, real pointer clicks from the main menu
// into a new career, then the watched match plays start-to-finish on the
// shell's live tick driver (manager.refresh + WebAudio sounds) until Form67.
// NOT registered in run-all.mjs (manual-clock live play only).
const output='/Users/talip/Documents/ChatGPT/misc/cyberfoot-web/output/live-match';mkdirSync(output,{recursive:true});
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1280,height:800}}),errors=[];
page.on('pageerror',error=>errors.push(String(error)));page.on('console',message=>{if(message.type()==='error')errors.push('console: '+message.text());});
await page.goto('http://127.0.0.1:8766/game.html?manualClock=1&autoInteractions=1');
await page.waitForFunction(()=>window.gameShell&&window.gameShell.form==='Form1',{timeout:60000});
const clickControl=async name=>{
 const point=await page.evaluate(name=>{
  const renderer=window.gameShell.renderer,target=renderer.hitTargets.find(entry=>entry.name===name&&entry.operation);
  if(!target)return null;const rect=renderer.canvas.getBoundingClientRect();
  return {x:rect.left+(target.x+target.width/2)*rect.width/renderer.canvas.width,y:rect.top+(target.y+target.height/2)*rect.height/renderer.canvas.height};
 },name);
 if(!point)return page.evaluate(name=>window.gameShell.click(name),name);
 await page.mouse.click(point.x,point.y);
 return true;
};
await clickControl('Shape1');await page.waitForFunction(()=>window.gameShell.form==='Form9',{timeout:30000});
await clickControl('xibutton2');await page.waitForFunction(()=>window.gameShell.form==='Form11',{timeout:30000});
await page.locator('[data-original-control="Form11.Edit1"]').fill('Live Tester');
await clickControl('button1');await page.waitForFunction(()=>window.gameShell.form==='Form13',{timeout:60000});
await clickControl('btjogar');await page.waitForFunction(()=>window.gameShell.form==='Form87',{timeout:60000});
await clickControl('bt_irprojogo');await page.waitForFunction(()=>window.gameShell.form==='Form46'&&!!window.gameShell.match,{timeout:30000});
// Visible live play: the tick driver advances Form46 on its timer; two samples
// must show the match clock moving while still on Form46.
const first=await page.evaluate(()=>window.gameShell.match.tick);
await page.waitForFunction(previous=>window.gameShell.match&&window.gameShell.match.tick>previous,first,{timeout:60000});
assert.equal(await page.evaluate(()=>window.gameShell.form),'Form46');
await page.screenshot({path:output+'/live-mid-match.png'});
const mid=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
assert.equal(mid.form,'Form46');assert.ok(mid.match.tick>first);
const resultsForm=await page.evaluate(async()=>await window.gameShell.playMatchLive({timeoutMs:170000}));
assert.equal(resultsForm,'Form67');
const results=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
assert.equal(results.form,'Form67');assert.equal(results.matchFailure,null);
// Full time proof: the continuation cleared the live session after the 61f604
// finalizer recorded its fimjogo request (match is null once Form67 owns it).
assert.equal(results.match,null);
// Sound: the session recorded original sons/*.wav requests across live play
// and the WebAudio player drained them (headless-safe: recorded, never throws).
const sounds=await page.evaluate(()=>({session:window.gameShell.soundRequests,played:window.gameShell.soundPlayed}));
assert.ok(sounds.session.length>0,'live match recorded session sound requests');
assert.ok(sounds.played.length>0,'live match played sounds through the WebAudio player');
assert.ok(sounds.session.includes('fimjogo'),'full-time fimjogo request was recorded');
await page.screenshot({path:output+'/live-results.png'});
assert.deepEqual(errors,[]);
writeFileSync(output+'/checks.json',JSON.stringify({firstTick:first,midTick:mid.match.tick,results,sounds,errors},null,2));
await browser.close();console.log('Live match: manual-clock shell played Form46 start-to-finish visibly to Form67 with recorded sound requests and no console errors.');
