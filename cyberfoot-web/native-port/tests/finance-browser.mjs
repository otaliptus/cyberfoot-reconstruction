import {chromium} from 'playwright';
import assert from 'node:assert/strict';
const browser=await chromium.launch({headless:true}),page=await browser.newPage({viewport:{width:1024,height:768}}),errors=[];
page.on('pageerror',e=>errors.push(e.message));await page.goto('http://127.0.0.1:8765/native-ui.html?view=loan');await page.waitForFunction(()=>window.nativeUI);
const state=async()=>JSON.parse(await page.evaluate(()=>render_game_to_text()));
async function click(name){const s=await state(),c=s.controls.find(c=>c.name===name);assert(c,`Enabled control ${name}`);await page.mouse.click(c.x+c.width/2,c.y+c.height/2);await page.waitForTimeout(20);}
const initial=await state();assert.equal(initial.loan.enabled.bt2,false);
for(let i=1;i<=3;i++){await click('bt1');const s=await state();assert.equal(s.loan.debt,i*500000);assert.equal(BigInt(s.loan.cash),BigInt(initial.loan.cash)+BigInt(i)*5000000000n);}
assert.equal((await state()).loan.enabled.bt1,false);
await page.screenshot({path:'output/native-loan/at-limit.png'});
const persisted=await page.evaluate(async()=>{const {readSave}=await import('./save-format.mjs'),{openLoan}=await import('./loan-view.mjs');const s=openLoan(readSave(nativeUI.save())).state;return {...s,cash:String(s.cash)};});assert.equal(persisted.debt,1500000);
await page.evaluate(()=>nativeUI.openFinance());assert.equal((await state()).finance.l4,1500000);assert.equal((await state()).finance.Label19,45000);
await page.evaluate(()=>nativeUI.openBank());
for(let i=2;i>=0;i--){await click('bt2');assert.equal((await state()).loan.debt,i*500000);}
assert.equal((await state()).loan.enabled.bt2,false);assert.equal((await state()).loan.cash,initial.loan.cash);
await click('bt3');assert.equal((await state()).form,null);await page.evaluate(()=>nativeUI.openBank());await page.keyboard.press('Escape');assert.equal((await state()).form,null);
const vectors=await page.evaluate(async()=>{
 const [{financeAmounts,financeLanguage,originalMoney},{loanAction,loanEnabled},finances,loans,money]=await Promise.all([import('./finance-view.mjs'),import('./loan-view.mjs'),fetch('tests/finance-vectors.json').then(r=>r.json()),fetch('tests/loan-vectors.json').then(r=>r.json()),fetch('tests/money-vectors.json').then(r=>r.json())]);
 for(const [i,c] of finances.entries()){const v=new DataView(new ArrayBuffer(56));c.ledger.forEach((n,i)=>v.setInt32(i*4,n,true));const actual=financeAmounts(v,BigInt(c.cash));for(const k of new Set([...Object.keys(actual),...Object.keys(c.expected)]))if(actual[k]!==c.expected[k])throw Error(`Finance ${i} ${k}`);for(const [k,n] of Object.entries(financeLanguage))if(c.language[k]!==n)throw Error(`Language ${k}`);}
 for(const [i,c] of loans.entries()){const s={category:c.category,debt:c.debt,cash:BigInt(c.cash),enabled:loanEnabled(c.debt,c.category)};loanAction(s,c.action);if(s.debt!==c.expected.debt||String(s.cash)!==c.expected.cash||s.enabled.bt1!==c.expected.enabled.bt1||s.enabled.bt2!==c.expected.enabled.bt2)throw Error(`Loan ${i}`);}
 for(const c of money)if(originalMoney(c.value)!=='$'+c.text)throw Error(`Money ${c.value}`);
 const [{wageDemand,clubPayroll},wages,payroll]=await Promise.all([import('./contracts.mjs'),fetch('tests/wage-vectors.json').then(r=>r.json()),fetch('tests/payroll-vectors.json').then(r=>r.json())]);
 for(const c of wages)if(wageDemand(c.player,c.club)!==c.expected)throw Error('Wage mismatch');
 for(const c of payroll)if(clubPayroll(0,c.players)!==c.expected)throw Error('Payroll mismatch');
 return finances.length+loans.length+money.length+wages.length+payroll.length;
});assert.deepEqual(errors,[]);console.log(JSON.stringify({vectors,loanLimit:true,repayment:true,saveReload:true,financeIntegration:true,closeControls:true,browserErrors:errors}));await browser.close();
