/** Live Form46 tick driver and WebAudio sound bank.
 *
 * The watched match session (route-match-session.mjs) advances one regulation
 * tick per `advance()` call and records original `sons/*.wav` requests in
 * `snapshot().soundRequests` without playing audio. This driver advances a
 * session live on a timer, refreshing Form46 through the form manager and
 * letting the session's existing auto/manual modal hosts resolve Form53/34/
 * 54/88, until full time and the Form67 results screen.
 *
 * Sound mapping (original sons/ requests -> native-port/assets/sounds/):
 * - 'gol'/'gol1' -> gol1.wav (human scores; human-penalty + presentation)
 * - 'goladv' -> goladv.wav (opponent scores in a watched human fixture)
 * - 'penalty' -> penalty.wav (Form34/54 opens via penalty-dialog-host)
 * - 'contusao' -> contusao.wav (Form53 opens via injury-dialog)
 * - 'intervalo' -> intervalo.wav (0061c834 halftime via regulation-controller)
 * - 'expulsao' -> expulsao.wav (human red card via match-event-presentation)
 * - 'fimjogo' -> fimjogo.wav (61f604 finalization via match-finalization)
 *
 * Headless/test guard: without `window.AudioContext` (node, headless
 * playwright without audio) `play()` only records the request and resolves;
 * fetch/decode failures never throw so node tests never break.
 */

/** Original sound request -> wav file in assets/sounds/. */
export const soundResourceFiles={
 gol:'gol1.wav',
 gol1:'gol1.wav',
 goladv:'goladv.wav',
 penalty:'penalty.wav',
 contusao:'contusao.wav',
 intervalo:'intervalo.wav',
 expulsao:'expulsao.wav',
 fimjogo:'fimjogo.wav'
};

export function soundFileForRequest(name){
 return soundResourceFiles[String(name??'')]??null;
}

/** WebAudio player for the 7 original wavs. Recording only when headless. */
export function createMatchSoundPlayer({basePath='assets/sounds'}={}){
 const played=[];
 let context=null;
 const buffers=new Map();
 function ensureContext(){
  if(typeof window==='undefined')return null;
  const AC=window.AudioContext||window.webkitAudioContext;
  if(!AC)return null;
  try{
   if(!context)context=new AC();
   if(context.state==='suspended')void context.resume().catch(()=>{});
   return context;
  }catch{return null;}
 }
 async function play(name){
  const key=String(name??'');
  played.push(key);
  const file=soundFileForRequest(key);
  if(!file)return null;
  const ctx=ensureContext();
  if(!ctx)return null;
  try{
   let buffer=buffers.get(file);
   if(!buffer){
    const response=await fetch(`${basePath}/${file}`);
    if(!response.ok)return null;
    const bytes=await response.arrayBuffer();
    buffer=await ctx.decodeAudioData(bytes);
    buffers.set(file,buffer);
   }
   const source=ctx.createBufferSource();
   source.buffer=buffer;
   source.connect(ctx.destination);
   source.start();
   return key;
  }catch{return null;}
 }
 return {
  play,
  get played(){return [...played];},
  get context(){return context;},
  dispose(){
   buffers.clear();
   try{void context?.close?.().catch(()=>{});}catch{}
   context=null;
  }
 };
}

/** Live driver: timer-driven `session.advance()` with manager Form46 refresh.
 *
 * - `session`: openRouteMatchSession handle (`advance/snapshot/pending`).
 * - `manager`: form-manager (Form46 refresh goes through `manager.update`).
 * - `renderer`: VCL renderer facade (frame check + fallback refresh).
 * - `soundPlayer`: optional match sound player; new `soundRequests` entries
 *   are played in order and recorded for tests.
 * Modal hosts (auto or manual) own their dialogs: while `snapshot().modal`
 * or `session.pending` is set the driver waits instead of advancing.
 */
export function createLiveMatchDriver({session,manager,renderer,intervalMs=120,soundPlayer=null,onTick,onFinish}={}){
 if(!session||typeof session.advance!=='function'||typeof session.snapshot!=='function')throw TypeError('A live match session with advance/snapshot is required.');
 let timer=null,playing=false,done=false,seen=0,lastError=null;
 const sounds=Array.isArray(snapshotRequests())?[]:[];
 function snapshotRequests(){
  try{return session.snapshot().soundRequests??[];}catch{return [];}
 }
 async function drainSounds(){
  const requests=snapshotRequests();
  while(seen<requests.length){
   const name=requests[seen++];
   sounds.push(String(name));
   if(soundPlayer){
    try{await soundPlayer.play(name);}catch{}
   }
  }
 }
 function refreshForm(){
  try{
   if(renderer?.frame?.form==='Form46'&&manager&&typeof manager.update==='function'){
    manager.update(renderer.frame);
   }
  }catch{}
 }
 async function tick(){
  if(done||!session)return false;
  try{
   let snapshot=null;
   try{snapshot=session.snapshot();}catch(error){lastError=String(error);return false;}
   if(snapshot.error)lastError=snapshot.error;
   await drainSounds();
   if(snapshot.finished){
    refreshForm();
    try{onTick?.(snapshot);}catch{}
    return true;
   }
   if(session.pending||snapshot.modal){
    try{onTick?.(snapshot);}catch{}
    return true;
   }
   await session.advance();
   await drainSounds();
   refreshForm();
   try{onTick?.(session.snapshot());}catch{}
   return true;
  }catch(error){
   lastError=String(error);
   return false;
  }
 }
 function isFinished(){
  if(done)return true;
  try{
   if(session.snapshot().finished&&renderer?.frame?.form==='Form67')return true;
   return !!session.snapshot().finished;
  }catch{return false;}
 }
 function start(){
  if(playing||done)return;
  playing=true;
  try{seen=snapshotRequests().length;}catch{seen=0;}
  timer=setInterval(()=>{
   void tick().then(()=>{
    if(isFinished()){
     stop();
     done=true;
     try{onFinish?.(session.snapshot());}catch{}
    }
   });
  },Math.max(10,Number(intervalMs)||120));
 }
 function stop(){
  if(timer){clearInterval(timer);timer=null;}
  playing=false;
 }
 async function playToEnd({maxSteps=600}={}){
  stop();
  for(let step=0;step<maxSteps;step++){
   if(renderer?.frame?.form==='Form67')return renderer.frame.form;
   let snapshot=null;
   try{snapshot=session.snapshot();}catch(error){lastError=String(error);throw error;}
   if(snapshot.finished){
    await drainSounds();
    if(renderer?.frame?.form==='Form67')return 'Form67';
    return 'finished';
   }
   if(lastError&&snapshot.error)throw Error(snapshot.error);
   if(session.pending||snapshot.modal){
    await new Promise(resolve=>setTimeout(resolve,10));
    continue;
   }
   await session.advance();
   await drainSounds();
   refreshForm();
  }
  throw Error('Live match did not reach full time.');
 }
 return {
  tick,
  start,
  stop,
  playToEnd,
  drainSounds,
  get playing(){return playing;},
  get finished(){return done||isFinished();},
  get soundRequests(){return [...sounds];},
  get seenSounds(){return seen;},
  get lastError(){return lastError;}
 };
}
