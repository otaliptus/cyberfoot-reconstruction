import {chromium} from 'playwright';
import {mkdirSync,writeFileSync} from 'node:fs';
const output=new URL('../../output/emulator-performance/',import.meta.url);mkdirSync(output,{recursive:true});
const base=process.env.CYBERFOOT_EMULATOR_BASE??'http://127.0.0.1:8771';
const browser=await chromium.launch({headless:true});const results=[];
try{for(const engine of (process.env.ENGINES??'single,threaded').split(',')){
 const page=await browser.newPage({viewport:{width:1280,height:900}}),errors=[];
 page.on('pageerror',e=>errors.push(String(e)));page.on('console',m=>{if(m.type()==='error'&&!m.text().includes('wine:')&&!m.text().includes('err:')&&!m.text().includes('fixme:'))errors.push(m.text());});
 await page.addInitScript(()=>{window.bench={gaps:[],longTasks:[]};let last;const frame=t=>{if(last)window.bench.gaps.push(t-last);last=t;requestAnimationFrame(frame);};requestAnimationFrame(frame);new PerformanceObserver(list=>window.bench.longTasks.push(...list.getEntries().map(e=>e.duration))).observe({type:'longtask',buffered:true});});
 const start=Date.now();await page.goto(`${base}/emulator/game.html?app=cyberfoot&overlay=graphics&p=cf2015.exe&resolution=1024x768&sound=false&storage=indexeddb&engine=${engine}`);
 await page.waitForFunction(()=>{
  const c=document.getElementById('canvas');if(!window.cyberfootRuntime||c.width<1024||typeof isRunning==='undefined'||!isRunning)return false;
  const scratch=document.createElement('canvas');scratch.width=100;scratch.height=75;const ctx=scratch.getContext('2d');ctx.drawImage(c,0,0,100,75);const pixels=ctx.getImageData(0,0,100,75).data,colors=new Set();for(let i=0;i<pixels.length;i+=40)colors.add(pixels[i]+','+pixels[i+1]+','+pixels[i+2]);return colors.size>40;
 },null,{timeout:120000});
 const bootMs=Date.now()-start;await page.screenshot({path:new URL(engine+'-menu.png',output).pathname});
 await page.evaluate(()=>{window.bench.gaps=[];window.bench.longTasks=[];});await page.waitForTimeout(10000);
 const metrics=await page.evaluate(()=>{const values=window.bench.gaps.sort((a,b)=>a-b);return {...window.cyberfootRuntime,frames:values.length,medianGapMs:values[Math.floor(values.length/2)],p95GapMs:values[Math.floor(values.length*.95)],worstGapMs:values.at(-1),blockedMs:window.bench.longTasks.reduce((a,b)=>a+b,0),longTaskCount:window.bench.longTasks.length,workers:typeof PThread!=='undefined'?{running:PThread.runningWorkers.length,unused:PThread.unusedWorkers.length}:null};});
 await page.mouse.click(777,413,{delay:80});await page.waitForTimeout(2000);await page.screenshot({path:new URL(engine+'-new-game.png',output).pathname});
 const result={engine,bootMs,...metrics,errors};results.push(result);console.log(JSON.stringify(result));await page.close();
}}finally{writeFileSync(new URL('results.json',output),JSON.stringify(results,null,2));await browser.close();}
