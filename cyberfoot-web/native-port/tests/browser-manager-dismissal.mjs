import {chromium} from 'playwright';import assert from 'node:assert/strict';
import {testOutput} from './browser-test-helpers.mjs';
const output=testOutput('native-manager-dismissal');
const browser=await chromium.launch({headless:true});
try{for(const action of ['button','Enter','Escape']){
 const page=await browser.newPage({viewport:{width:1024,height:768}}),errors=[];page.on('pageerror',e=>errors.push(String(e)));
 await page.goto('http://127.0.0.1:8766/manager-dismissal-preview.html'+(action==='Escape'?'?resigned=1':''));await page.waitForFunction(()=>window.dismissalDevelopment?.host.active&&window.dismissalDevelopment.renderer.frame?.form==='Form31');
 const before=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));assert.equal(before.finished,false);assert.equal(before.humanClubs,0);assert.equal(before.oldManagerClub,-1);assert.equal(before.clubManager,before.notice.replacement);assert.notEqual(before.clubManager,before.oldManager);assert.equal(before.notice.reason,action==='Escape'?420:416);
 await page.screenshot({path:output+'/'+action+'.png'});
 if(action==='button')await page.locator('[data-original-control="Form31.xibutton2"]').click();else {if(action==='Escape')await page.locator('[data-original-control="Form31.xibutton2"]').focus();await page.keyboard.press(action);}
 await page.waitForFunction(()=>JSON.parse(window.render_game_to_text()).finished);const after=JSON.parse(await page.evaluate(()=>window.render_game_to_text()));assert.equal(after.form,null);assert.equal(after.notice,null);assert.equal(after.clubManager,before.clubManager);assert.equal(after.error,null);assert.deepEqual(errors,[]);
 assert.equal(await page.locator('[data-original-control="Form31.xibutton2"]').isVisible(),false);
 await page.evaluate(async()=>{const {readSave,writeSave}=await import('./save-format.mjs'),bytes=window.dismissalDevelopment.save(),roundtrip=writeSave(readSave(bytes));if(bytes.length!==roundtrip.length||bytes.some((b,i)=>b!==roundtrip[i]))throw Error('Dismissal save roundtrip mismatch');});await page.close();
}}finally{await browser.close();}
console.log('Original manager-change flow opens Form31, applies dismissal once, awaits OK/Enter/Escape, then resumes; names, reason, save persistence and hidden closed controls verified.');
