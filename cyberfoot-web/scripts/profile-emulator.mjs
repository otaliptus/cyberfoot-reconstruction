// Interactive original-game profiling; no production runtime or game mutations.
import {chromium} from 'playwright';
import {mkdirSync,writeFileSync,appendFileSync} from 'node:fs';
import readline from 'node:readline';
const out=process.env.PROFILE_OUTPUT??new URL('../../output/emulator-profile/',import.meta.url).pathname;
mkdirSync(out,{recursive:true});
const base=process.env.CYBERFOOT_EMULATOR_BASE??'http://127.0.0.1:8771';
const sampleCpu=process.env.PROFILE_SAMPLES!=='0';
const samplingIntervalUs=Number(process.env.PROFILE_INTERVAL_US??1000);
if(!Number.isInteger(samplingIntervalUs)||samplingIntervalUs<100||samplingIntervalUs>1000000)throw Error('PROFILE_INTERVAL_US must be an integer from 100 to 1000000.');
const samplePaint=process.env.PROFILE_PAINT==='1';
const browser=await chromium.launch({headless:true}),context=await browser.newContext({viewport:{width:1280,height:960}}),page=await context.newPage();
writeFileSync(out+'/environment.json',JSON.stringify({base,cpuSampling:sampleCpu,paintSampling:samplePaint,samplingIntervalUs:sampleCpu?samplingIntervalUs:null,seed:process.env.PROFILE_SEED??'random',browser:browser.version(),platform:process.platform,arch:process.arch,viewport:{width:1280,height:960}},null,2));
writeFileSync(out+'/actions.jsonl','');
if(process.env.PROFILE_SEED){
 // A reproducible seed only in this isolated benchmark page. Production keeps
 // cryptographic per-launch randomness and the original game RNG sequence.
 await page.addInitScript(seed=>{
  const original=crypto.getRandomValues.bind(crypto);
  crypto.getRandomValues=array=>{if(array instanceof Uint32Array&&array.length===1){array[0]=seed;return array;}return original(array);};
 },Number(process.env.PROFILE_SEED));
}
const root=await browser.newBrowserCDPSession(),main=await context.newCDPSession(page);
const sessions=new Map(),pending=new Map(),results=[],logs=[];let messageId=0,phase=null;
function workerSend(sessionId,method,params={}){
 const id=++messageId;
 return new Promise((resolve,reject)=>{
  const timer=setTimeout(()=>{pending.delete(id);reject(Error('CDP timeout '+method));},10000);
  pending.set(id,{resolve,reject,timer});
  root.send('Target.sendMessageToTarget',{sessionId,message:JSON.stringify({id,method,params})}).catch(reject);
 });
}
root.on('Target.receivedMessageFromTarget',event=>{
 const message=JSON.parse(event.message),request=pending.get(message.id);if(!request)return;
 clearTimeout(request.timer);pending.delete(message.id);
 if(message.error)request.reject(Error(message.error.message));else request.resolve(message.result);
});
async function attach(target){
 if(!sampleCpu||target.type!=='worker'||sessions.has(target.targetId))return;
 const item={name:'worker-'+sessions.size,url:target.url};sessions.set(target.targetId,item);
 try{
  const {sessionId}=await root.send('Target.attachToTarget',{targetId:target.targetId,flatten:false});item.send=(method,params)=>workerSend(sessionId,method,params);
  await item.send('Profiler.enable');await item.send('Profiler.setSamplingInterval',{interval:samplingIntervalUs});
  if(phase){await item.send('Profiler.start');item.recording=true;}
 }catch(e){item.error=String(e);}
}
root.on('Target.targetCreated',({targetInfo})=>{void attach(targetInfo);});
await root.send('Target.setDiscoverTargets',{discover:true});
if(sampleCpu){await main.send('Profiler.enable');await main.send('Profiler.setSamplingInterval',{interval:samplingIntervalUs});}
page.on('console',m=>logs.push({ms:Date.now(),type:m.type(),text:m.text()}));
page.on('pageerror',e=>logs.push({ms:Date.now(),type:'pageerror',text:String(e)}));
async function processes(){return(await root.send('SystemInfo.getProcessInfo')).processInfo;}
function summarize(profile){
 const nodes=new Map(profile.nodes.map(n=>[n.id,n])),times=new Map();
 for(let i=0;i<(profile.samples??[]).length;i++){const id=profile.samples[i];times.set(id,(times.get(id)??0)+(profile.timeDeltas?.[i]??0));}
 return [...times].map(([id,us])=>({function:nodes.get(id)?.callFrame.functionName,url:nodes.get(id)?.callFrame.url,line:nodes.get(id)?.callFrame.lineNumber,sampledMs:Math.round(us/1000)})).sort((a,b)=>b.sampledMs-a.sampledMs).slice(0,14);
}
async function start(name){
 if(phase)throw Error('A phase is already recording');
 if(samplePaint)await page.evaluate(()=>window.cyberfootPaintProbe?.reset());
 phase={name,started:performance.now(),cpu:await processes(),fork:await page.evaluate(()=>window.cyberfootForkMetrics?.()??null)};if(sampleCpu)await main.send('Profiler.start');
 for(const item of sessions.values())if(item.send&&!item.error){await item.send('Profiler.start');item.recording=true;}
}
async function finish(extra={}){
 if(!phase)throw Error('No recording phase');
 const current=phase;phase=null;const endCpu=await processes();
 const profiles={};
 if(sampleCpu){const {profile}=await main.send('Profiler.stop');writeFileSync(out+'/'+current.name+'-main.cpuprofile',JSON.stringify(profile));profiles.main=summarize(profile);}
 for(const item of sessions.values())if(item.recording){
  item.recording=false;try{const {profile}=await item.send('Profiler.stop');writeFileSync(out+'/'+current.name+'-'+item.name+'.cpuprofile',JSON.stringify(profile));profiles[item.name]=summarize(profile);}catch(e){profiles[item.name]={error:String(e)};}
 }
 const before=new Map(current.cpu.map(p=>[p.id,p.cpuTime]));
 const cpu=endCpu.map(p=>({type:p.type,seconds:Math.max(0,p.cpuTime-(before.get(p.id)??0))}));
 const paint=samplePaint?await page.evaluate(()=>window.cyberfootPaintProbe?.read()??null):undefined;
 const forkNow=await page.evaluate(()=>window.cyberfootForkMetrics?.()??null);
 const fork=forkNow?Object.fromEntries(Object.entries(forkNow).map(([key,value])=>[key,key.startsWith('max')?value:value-(current.fork?.[key]??0)])):undefined;
 const result={name:current.name,wallMs:Math.round(performance.now()-current.started),cpuSampling:sampleCpu,cpu,profiles,paint,fork,...extra};results.push(result);
 writeFileSync(out+'/results.json',JSON.stringify(results,null,2));writeFileSync(out+'/console.json',JSON.stringify(logs,null,2));
 const compact={...result};delete compact.profiles;console.log(JSON.stringify(compact));return result;
}
async function signature(mask=[]){return page.evaluate(mask=>{
 const c=document.getElementById('canvas');if(!c||c.width<1024)return '';
 const s=document.createElement('canvas');s.width=256;s.height=192;const ctx=s.getContext('2d',{willReadFrequently:true});ctx.drawImage(c,0,0,256,192);
 for(const [x,y,w,h] of mask)ctx.clearRect(x/4,y/4,w/4,h/4);
 const p=ctx.getImageData(0,0,256,192).data;let h=2166136261;for(let i=0;i<p.length;i+=4)h=Math.imul(h^p[i]^p[i+1]^p[i+2],16777619);return String(h>>>0);
 },mask);}
async function shot(name){await page.screenshot({path:out+'/'+name+'.png'});}
async function action(a){
 if(a.type==='click')await page.mouse.click(a.x,a.y,{delay:80});
 if(a.type==='key')await page.keyboard.press(a.key);
 if(a.type==='text')await page.keyboard.type(a.text,{delay:60});
}
try{
 await start('startup');await page.goto(base+'/emulator/game.html?app=cyberfoot&overlay=graphics&p=cf2015.exe&resolution=1024x768&sound=false&storage=indexeddb'+(process.env.PROFILE_FORK_MODE===undefined?'':'&forkmode='+encodeURIComponent(process.env.PROFILE_FORK_MODE)));
 await page.waitForFunction(()=>{
  if(window.CyberfootLoading?.state().failed)throw Error(document.getElementById('status').textContent);
  const c=document.getElementById('canvas');if(!c||c.width!==1024)return false;
  const s=document.createElement('canvas');s.width=256;s.height=192;const ctx=s.getContext('2d');ctx.drawImage(c,0,0,256,192);
  const pixels=ctx.getImageData(96,88,32,7).data;let blue=0;
  for(let i=0;i<pixels.length;i+=4)if(pixels[i]<100&&pixels[i+1]>100&&pixels[i+1]<190&&pixels[i+2]>190)blue++;
  return blue>10;
 },null,{polling:100,timeout:120000});
 const menuReadyMs=Math.round(performance.now()-phase.started);
 const runtime=await page.evaluate(()=>window.cyberfootRuntime);
 if(runtime?.engine!=='threaded'||!runtime.isolated)throw Error('This profile requires the isolated threaded runtime; check the server COOP/COEP headers.');
 const downloads=await page.evaluate(()=>performance.getEntriesByType('resource').filter(r=>r.name.includes('/packages/')||new URL(r.name).pathname.endsWith('.wasm')).map(r=>({name:r.name.split('/').at(-1),startMs:Math.round(r.startTime),endMs:Math.round(r.responseEnd),transferBytes:r.transferSize})));
 await shot('startup');await finish({menuReadyMs,runtime,menuReadyCriterion:'English selector focus visible at fixed 1024x768 canvas coordinates',downloads});
 await page.waitForFunction(()=>!window.CyberfootLoading?.state().starting,null,{timeout:10000});
 if(samplePaint)await page.evaluate(()=>{
  // Official 26R1.0 SDL software-frame callback. Measure copying the guest
  // framebuffer into canvas, not guest drawing, GPU completion or presentation.
  const render=globalThis.ASM_CONSTS?.[335233];
  if(typeof render!=='function'||!String(render).includes('SDL2.ctx.putImageData'))throw Error('Unknown runtime software-frame callback; paint probe not installed.');
  let stats;
  const reset=()=>{stats={calls:0,copyMs:0,maxCopyMs:0};};reset();
  ASM_CONSTS[335233]=function(...args){
   const start=performance.now();
   try{return render(...args);}finally{
    const elapsed=performance.now()-start;stats.calls++;stats.copyMs+=elapsed;stats.maxCopyMs=Math.max(stats.maxCopyMs,elapsed);
   }
  };
  window.cyberfootPaintProbe={reset,read:()=>({...stats})};
 });
 console.log('READY: Commands: finish, measure, start, shot, eval, close.');
 for await(const line of readline.createInterface({input:process.stdin})){
  try{
   const c=JSON.parse(line);
   appendFileSync(out+'/actions.jsonl',JSON.stringify(c)+'\n');
   if(c.action==='finish'){await shot(phase.name);await finish();}
   if(c.action==='start')await start(c.name);
   if(c.action==='shot'){await shot(c.name??'screen');console.log('SCREENSHOT',c.name);}
   if(c.action==='input'){for(const a of c.actions??[])await action(a);console.log('INPUT');}
   if(c.action==='eval')console.log(JSON.stringify(await page.evaluate(c.code)));
   if(c.action==='measure'){
    await start(c.name);const changes=[],initial=await signature(c.mask),t=performance.now();let previous=initial;
    for(const a of c.actions??[])await action(a);
    const actionEndMs=Math.round(performance.now()-t),duration=c.observeMs??6000;
    while(performance.now()-t<duration){const value=await signature(c.mask);if(value!==previous){changes.push(Math.round(performance.now()-t));previous=value;}await page.waitForTimeout(100);}
    await shot(c.name);await finish({actionEndMs,firstVisualChangeMs:changes[0]??null,lastVisualChangeMs:changes.at(-1)??null,changedSamples:changes.length,visualQuietMs:Math.round(performance.now()-t)-(changes.at(-1)??0),mask:c.mask??[],observationMs:Math.round(performance.now()-t)});
   }
   if(c.action==='close')break;
  }catch(e){console.log('ERROR',String(e));}
 }
}finally{if(phase)await finish();await browser.close();}
