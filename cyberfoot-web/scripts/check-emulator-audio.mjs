// Exercise original match audio; test-only fixed seed and output-sample observation.
import {chromium} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const base=process.env.CYBERFOOT_EMULATOR_BASE??'http://127.0.0.1:8787';
const out=process.env.SOUND_OUTPUT??new URL('../../output/emulator-sound/audio-play/',import.meta.url).pathname;await mkdir(out,{recursive:true});
const b=await chromium.launch({headless:true});const p=await b.newPage({viewport:{width:1280,height:960}});const errors=[];
p.on('pageerror',e=>errors.push(String(e)));p.on('console',m=>{if(m.type()==='error')errors.push(m.text())});
await p.addInitScript(()=>{const random=crypto.getRandomValues.bind(crypto);crypto.getRandomValues=a=>{if(a instanceof Uint32Array&&a.length===1){a[0]=380188361;return a;}return random(a)}});
async function click(x,y){const c=await p.locator('#canvas').boundingBox();await p.mouse.click(c.x+(x-128)*c.width/1024,c.y+(y-96)*c.height/768,{delay:80})}
try{
 await p.goto(base+'/emulator/index.html');await p.waitForFunction(()=>window.CyberfootLoading&&!CyberfootLoading.state().starting,null,{timeout:120000});
 await p.evaluate(()=>{window.audioProof={buffers:0,nonzeroBuffers:0,peak:0};const hooked=new WeakSet();window.audioProofTimer=setInterval(()=>{const node=Module.SDL2?.audio?.scriptProcessorNode;if(!node||hooked.has(node))return;hooked.add(node);node.addEventListener('audioprocess',e=>{let peak=0;for(let c=0;c<e.outputBuffer.numberOfChannels;c++){const v=e.outputBuffer.getChannelData(c);for(let i=0;i<v.length;i++)peak=Math.max(peak,Math.abs(v[i]));}audioProof.buffers++;if(peak>0.00001)audioProof.nonzeroBuffers++;audioProof.peak=Math.max(audioProof.peak,peak);});},50)});
 await click(777,443);await p.waitForTimeout(3500);await click(925,725);await p.waitForTimeout(5000);
 await click(655,547);await click(254,765);await p.keyboard.type('Profiler');await click(870,765);await p.waitForTimeout(8500);
 await click(310,744);await p.waitForTimeout(5000);await click(749,668);for(const key of ['Home','ArrowDown','ArrowDown','ArrowDown','Enter'])await p.keyboard.press(key);await p.waitForTimeout(6500);
 await p.screenshot({path:out+'/lineup.png'});await click(978,755);await p.waitForTimeout(55000);await p.screenshot({path:out+'/first-half.png'});
 await click(927,769);await p.waitForTimeout(55000);await p.screenshot({path:out+'/match.png'});
 await click(967,770);await p.waitForTimeout(12000);await p.screenshot({path:out+'/results.png'});
 const state=await p.evaluate(()=>({proof:audioProof,sound:Config.isSoundEnabled,audio:Module.SDL2?.audioContext?.state??null,audioTime:Module.SDL2?.audioContext?.currentTime??null,output:document.getElementById('output').value,loading:CyberfootLoading.state()}));
 await writeFile(out+'/checks.json',JSON.stringify({state,errors},null,2)+'\n');console.log(JSON.stringify({proof:state.proof,audio:state.audio,errors}));
 assert.deepEqual(errors,[]);assert.equal(state.sound,true);assert.equal(state.audio,'running');assert.ok(state.proof.nonzeroBuffers>0);assert.ok(!state.output.includes('MCI_LoadMciDriver'));
}finally{await b.close()}
