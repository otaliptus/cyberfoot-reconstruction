import {chromium} from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';
import assert from 'node:assert/strict';import {mkdirSync,writeFileSync} from 'node:fs';
const resultsProof=process.env.RESULTS_PROOF==='1',output='/Users/talip/Documents/ChatGPT/misc/output/'+(resultsProof?'native-results-window':'native-lineup-match');mkdirSync(output,{recursive:true});
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1024,height:768}}),errors=[];page.on('pageerror',e=>errors.push(String(e)));
await page.goto('http://127.0.0.1:8766/lineup-window-preview.html?manualClock=1'+(resultsProof?'&resultsIntegration=1':''));await page.waitForFunction(()=>window.lineupDevelopment);
await page.evaluate(()=>window.lineupDevelopment.renderer.onLineupDrop({source:{slot:2},targetSlot:3,x:0,y:0}));
const before=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));
await page.locator('[data-original-control="Form87.rd2"]').check();
await page.locator('[data-original-control="Form87.bt_irprojogo"]').click();
await page.waitForFunction(()=>window.lineupDevelopment.match);
const kickoff=await page.evaluate(()=>{const d=window.lineupDevelopment,s=d.match,f=s.fixtures.find(f=>f.clubs.includes(11)),team=s.teamsFor(f)[f.clubs.indexOf(11)];return {players:[...team.players],bench:[...team.bench],kit:d.state.clubs[11].selectedKit,lineupCount:d.state.lineups.length,form:d.renderer.frame.form};});
assert.equal(kickoff.form,'Form46');assert.deepEqual(kickoff.players,[...before.slots.slice(1,11).map(s=>s.playerId),before.slots[0].playerId]);assert.equal(kickoff.kit,2);assert(kickoff.lineupCount>1);
assert.equal(await page.locator('[data-original-control="Form87.rd2"]').isVisible(),false);
await page.screenshot({path:output+'/kickoff.png'});
await page.evaluate(async()=>{const s=window.lineupDevelopment.match;await s.advance();});
assert.equal(JSON.parse(await page.evaluate(()=>window.render_game_to_text())).match.tick,1);
// Open the existing tactics host on the actual human fixture, and ensure
// Form87's old pointer targets cannot receive input in this modal.
await page.evaluate(()=>{const d=window.lineupDevelopment,s=d.match,f=s.fixtures.find(f=>f.clubs.includes(11));window.lineupModal=s.tacticsHost.open({fixture:f,teams:s.teamsFor(f),side:f.clubs.indexOf(11)+1,minute:0,period:1});});
await page.waitForFunction(()=>window.lineupDevelopment.renderer.frame.form==='Form88');
await page.evaluate(()=>window.advanceTime(5000));assert.equal(JSON.parse(await page.evaluate(()=>window.render_game_to_text())).match.tick,1);
await page.screenshot({path:output+'/tactics.png'});
await page.evaluate(()=>window.lineupDevelopment.renderer.invoke({operation:'bt_irprojogoClick'}));await page.evaluate(()=>window.lineupModal);
await page.evaluate(async()=>{await window.lineupDevelopment.match.advance();});
const after=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));assert.equal(after.match.tick,2);assert.equal(after.form,'Form46');
await page.evaluate(()=>{window.lineupDevelopment.state.automaticInteractions=true;});
for(let i=0;i<195;i++){
 const done=await page.evaluate(()=>window.lineupDevelopment.match.snapshot().finished);if(done)break;
 await page.evaluate(()=>{window.lineupDevelopment.match.advance();});
 await page.waitForFunction(()=>{const s=window.lineupDevelopment.match;return !s.pending||s.tacticsHost.active;});
 if(await page.evaluate(()=>!!window.lineupDevelopment.match.tacticsHost.active)){
  await page.evaluate(()=>window.lineupDevelopment.renderer.invoke({operation:'bt_irprojogoClick'}));
  await page.waitForFunction(()=>!window.lineupDevelopment.match.pending);
 }
}
const final=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));assert.equal(final.match.finished,true);assert(final.nextRoute);assert.equal(final.resultsReady,true);assert.equal(final.round,before.round+1);
const archivedResults=await page.evaluate(async()=>{
 const {readSave}=await import('./save-format.mjs'),{selectResultHistory,resultRows,resultDetailLabels,resultLineupRows}=await import('./results-data.mjs'),{record}=await import('./save-format.mjs');
 const save=readSave(window.lineupDevelopment.save()),language=await fetch('language.json').then(r=>r.json()),ids=selectResultHistory(save,{subgroup:0});
 return resultRows(save,ids).map(row=>({...row,labels:resultDetailLabels(record(save,'records_0066b154',row.historyId),language),lineups:row.clubs.map(club=>resultLineupRows(save,row.historyId,club))}));
});
assert.equal(archivedResults.length,final.match.fixtures.length);
for(let i=0;i<archivedResults.length;i++){const result=archivedResults[i],fixture=final.match.fixtures[i];assert.deepEqual(result.score,[fixture.homeScore,fixture.awayScore]);assert.equal(result.labels.Label5,fixture.homeScore+' x '+fixture.awayScore);assert(result.lineups.every(rows=>rows.length>0&&rows.length<=11));}
await page.screenshot({path:output+'/fulltime.png'});
if(resultsProof){
 assert.equal(final.form,'Form67');assert.equal(final.results.rows.length,20);
 const target=await page.evaluate(()=>window.lineupDevelopment.renderer.hitTargets.find(t=>t.name==='result-'+window.lineupDevelopment.results.active.rows.at(-1).historyId));
 await page.mouse.click(target.x+10,target.y+10);const selected=JSON.parse(await page.evaluate(()=>window.render_game_to_text())).results;assert.equal(selected.selectedHistoryId,final.results.rows.at(-1).historyId);assert(selected.lineups.every(rows=>rows.length>0));
 await page.screenshot({path:output+'/selected-human.png'});
}
writeFileSync(output+'/checks.json',JSON.stringify({kickoff,after,final,archivedResults,errors},null,2));await browser.close();assert.deepEqual(errors,[]);console.log('Lineup → match: selected starters and kit preserved; shared tactics modal pauses and resumes successfully.');
