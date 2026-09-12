import {chromium} from 'playwright';
import {testOutput} from './browser-test-helpers.mjs';
import assert from 'node:assert/strict';import {writeFileSync} from 'node:fs';
const output=testOutput('native-route-screens');
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1024,height:768}}),errors=[];
page.on('pageerror',e=>errors.push(String(e)));page.on('console',m=>{if(m.type()==='error')errors.push('console: '+m.text());});
const continueControl={Form13:'Form13.btjogar',Form26:'Form26.bt3',Form75:'Form75.btjogar',Form77:'Form77.bt2'};
const observed=new Set();
async function text(){return JSON.parse(await page.evaluate(()=>window.render_game_to_text()));}
async function playRound(label){
 const target=await page.evaluate(()=>window.careerLoop.rounds+1);
 await page.waitForFunction(()=>window.careerLoop?.renderer.frame?.form==='Form87');
 const start=await text();observed.add(start.form);
 const lineup={competition:start.fixtureCompetition,day:start.roundDay};
 await page.locator('[data-original-control="Form87.bt_irprojogo"]').click();
 await page.waitForFunction(()=>!!window.careerLoop.match);
 await page.evaluate(()=>{window.__drive=(async()=>{let guard=0;while(window.careerLoop.match&&guard++<400)await window.careerLoop.match.advance();})();});
 let stepped=false;
 for(let i=0;i<80;i++){
  const state=await text();observed.add(state.form);
  if(state.routeScreen&&continueControl[state.routeScreen])await page.locator(`[data-original-control="${continueControl[state.routeScreen]}"]`).click().catch(()=>{});
  else if(state.form==='Form67')await page.locator('[data-original-control="Form67.bt3"]').click().catch(()=>{});
  if(state.form==='Form87'&&state.rounds===target&&!state.routeScreen){stepped=true;break;}
  await page.waitForTimeout(150);
 }
 assert.ok(stepped,`${label} round did not return to the lineup`);
 const end=await text();
 assert.ok(end.continuations.length>=target,`${label} continuation recorded`);
 return {lineup,end};
}
await page.goto('http://127.0.0.1:8766/career-loop-preview.html?manualClock=1&automaticInteractions=1&skipHalftime=1');
await page.waitForFunction(()=>window.careerLoop?.renderer.frame?.form==='Form87');
const first=await text();assert.equal(first.fixtureCompetition,1,'First round is the domestic league');
const league=await playRound('league');
const cup=await playRound('cup');
assert.equal(cup.lineup.competition,2,'Second round is the national cup');
assert.ok(cup.lineup.day>league.lineup.day,'Cup round advances the calendar');
assert.ok(cup.end.continuations.some(record=>record.played===2),'Cup route recorded with the played competition');
assert.ok(observed.has('Form46'),'Match screen rendered');
assert.ok(observed.has('Form13'),'Route screen rendered through the native hub view');
assert.ok(!cup.end.startMessage||!String(cup.end.startMessage).includes('Non-league route'),'No non-league route stop');
assert.deepEqual(errors,[]);
await page.screenshot({path:output+'/cup-route.png'});
writeFileSync(output+'/checks.json',JSON.stringify({first,league,cup,observed:[...observed],errors},null,2));
await browser.close();
console.log(`Career route screens: league and cup rounds played in-browser; cup route presented ${[...observed].join('/')} with no console errors.`);
