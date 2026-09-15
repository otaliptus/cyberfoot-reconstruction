// Fresh ordinary launches, with diagnostics retained on failure. No RNG override.
import {chromium} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';

const base=process.env.CYBERFOOT_EMULATOR_BASE??'http://127.0.0.1:8778';
const out=resolve(process.env.STARTUP_OUTPUT??'output/emulator-startup');
const runs=Number(process.env.STARTUP_RUNS??4);
if(!Number.isInteger(runs)||runs<1||runs>20)throw Error('STARTUP_RUNS must be an integer from 1 to 20.');
await mkdir(out,{recursive:true});
const results=[];
for(let run=1;run<=runs;run++){
 const browser=await chromium.launch({headless:true});
 const page=await browser.newPage({viewport:{width:1280,height:960}});
 const errors=[];let failure=null;
 page.on('pageerror',e=>errors.push(e.message));
 page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
 const started=performance.now();
 try{
  try{
   await page.goto(base+'/emulator/game.html?app=cyberfoot&overlay=graphics&p=cf2015.exe&resolution=1024x768&sound=false&storage=indexeddb');
   await page.waitForFunction(()=>{
    const state=window.CyberfootLoading?.state();
    if(state?.failed)throw Error(document.getElementById('status')?.textContent??'Startup failed');
    return state&&!state.starting;
   },null,{timeout:45000});
  }catch(e){failure=String(e);}
  const elapsedMs=Math.round(performance.now()-started);
  const state=await page.evaluate(()=>({
   runtime:window.cyberfootRuntime??null,
   loading:window.CyberfootLoading?.state()??null,
   output:document.getElementById('output')?.value?.slice(-12000)??'',
   workers:typeof PThread==='undefined'?null:PThread.runningWorkers.length,
   unusedWorkers:typeof PThread==='undefined'?null:PThread.unusedWorkers.length,
  }));
  if(!failure&&(state.runtime?.engine!=='threaded'||!state.runtime.isolated||state.loading?.failed||errors.length))failure='Runtime or browser error check failed';
  await page.screenshot({path:resolve(out,'startup-'+run+'.png')});
  const result={run,base,browser:browser.version(),elapsedMs,failure,errors,...state};
  results.push(result);
  await writeFile(resolve(out,'results.json'),JSON.stringify(results,null,2)+'\n');
  console.log(JSON.stringify({run,elapsedMs,failure,errors}));
  if(failure)throw Error(failure);
 }finally{await browser.close();}
}
