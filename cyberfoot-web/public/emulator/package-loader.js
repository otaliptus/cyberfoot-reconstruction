/* Emulator packaging and opt-out timing repair; no registration changes. */
(function () {
  const crcTable = Array.from({length:256},(_,i)=>{for(let j=0;j<8;j++)i=(i>>>1)^((i&1)?0xedb88320:0);return i>>>0;});
  function crc32(bytes){let crc=0xffffffff;for(const b of bytes)crc=(crc>>>8)^crcTable[(crc^b)&255];return (crc^0xffffffff)>>>0;}
  function repairRandomness(bytes,patch,seed){
    const v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),exe=bytes.subarray(patch.offset,patch.offset+patch.size);
    if(crc32(exe)!==patch.crc||exe[patch.randomize]!==0x83)throw Error('Unexpected game executable; refusing timing repair.');
    // Keep the original Borland generator. Seed it once per launch instead of
    // repeatedly resetting it from a coarse virtual Windows clock.
    exe[patch.randomize]=0xc3;
    new DataView(exe.buffer,exe.byteOffset,exe.byteLength).setUint32(patch.seed,seed,true);
    const crc=crc32(exe);v.setUint32(patch.header+14,crc,true);
    let end=bytes.length-22;
    while(end>=Math.max(0,bytes.length-65557)&&v.getUint32(end,true)!==0x06054b50)end--;
    if(end<0)throw Error('Missing archive directory.');
    let at=v.getUint32(end+16,true),found=false;
    for(let n=v.getUint16(end+10,true);n>0;n--){
      if(v.getUint32(at,true)!==0x02014b50)throw Error('Invalid archive directory.');
      if(v.getUint32(at+42,true)===patch.header){v.setUint32(at+16,crc,true);found=true;}
      at+=46+v.getUint16(at+28,true)+v.getUint16(at+30,true)+v.getUint16(at+32,true);
    }
    if(!found)throw Error('Missing executable archive entry.');
    return bytes;
  }
  async function restoreAliases(bytes,aliases){
    const v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);let end=bytes.length-22;
    while(end>=0&&v.getUint32(end,true)!==0x06054b50)end--;
    if(end<0)throw Error('Missing ZIP directory');
    const start=v.getUint32(end+16,true),count=v.getUint16(end+10,true),entries=new Map();let at=start;
    for(let i=0;i<count;i++){
      const n=v.getUint16(at+28,true),extra=v.getUint16(at+30,true),comment=v.getUint16(at+32,true);
      entries.set(new TextDecoder().decode(bytes.subarray(at+46,at+46+n)),{at,size:46+n+extra+comment});at+=46+n+extra+comment;
    }
    const locals=[bytes.subarray(0,start)],directory=[bytes.subarray(start,end)];let offset=start;
    for(const [name,source] of Object.entries(aliases)){
      const entry=entries.get(source);if(!entry)throw Error('Missing locale source '+source);
      const c=entry.at,local=v.getUint32(c+42,true),compressed=v.getUint32(c+20,true),method=v.getUint16(c+10,true);
      const dataAt=local+30+v.getUint16(local+26,true)+v.getUint16(local+28,true);
      // The whole transport archive has already passed SHA-256 validation.
      // Reuse its compressed stream instead of inflating every duplicate locale.
      const data=bytes.subarray(dataAt,dataAt+compressed);
      if(method!==0&&method!==8)throw Error('Unsupported locale compression');
      const nameBytes=new TextEncoder().encode(name),header=new Uint8Array(30+nameBytes.length),h=new DataView(header.buffer);
      h.setUint32(0,0x04034b50,true);h.setUint16(4,20,true);h.setUint16(6,0x800,true);h.setUint16(8,method,true);h.setUint16(10,v.getUint16(c+12,true),true);h.setUint16(12,v.getUint16(c+14,true),true);h.setUint32(14,v.getUint32(c+16,true),true);h.setUint32(18,data.length,true);h.setUint32(22,v.getUint32(c+24,true),true);h.setUint16(26,nameBytes.length,true);header.set(nameBytes,30);
      const central=new Uint8Array(46+nameBytes.length);central.set(bytes.subarray(c,c+46));central.set(nameBytes,46);const cv=new DataView(central.buffer);
      cv.setUint16(8,0x800,true);cv.setUint16(28,nameBytes.length,true);cv.setUint16(30,0,true);cv.setUint16(32,0,true);cv.setUint32(42,offset,true);
      locals.push(header,data);directory.push(central);offset+=header.length+data.length;
    }
    const directorySize=directory.reduce((n,b)=>n+b.length,0),tail=new Uint8Array(22),t=new DataView(tail.buffer),total=count+Object.keys(aliases).length;
    t.setUint32(0,0x06054b50,true);t.setUint16(8,total,true);t.setUint16(10,total,true);t.setUint32(12,directorySize,true);t.setUint32(16,offset,true);
    return new Uint8Array(await new Blob([...locals,...directory,tail]).arrayBuffer());
  }
  let manifest,active=0;
  const waiting=[],prefetched=new Map();
  async function download(url){
    if(active>=4)await new Promise(resolve=>waiting.push(resolve));
    else active++;
    try{
      const response=await fetch(url,{cache:'force-cache'});
      if(!response.ok)throw Error('Download failed: '+url);
      return new Uint8Array(await response.arrayBuffer());
    }finally{
      if(waiting.length)waiting.shift()();
      else active--;
    }
  }
  async function prepare(prefix,name){
    manifest??=fetch('packages.json',{cache:'no-cache'}).then(r=>{if(!r.ok)throw Error('Package manifest unavailable');return r.json();});
    const entry=(await manifest)[name];
    if(!entry)return null;
    const pieces=Array.from({length:entry.parts.length});let next=0,done=0;
    await Promise.all(Array.from({length:Math.min(4,pieces.length)},async()=>{
      while(next<pieces.length){const i=next++;pieces[i]=await download(prefix+entry.parts[i]);done++;window.reportStatus?.('Loading '+(name==='boxedwine.zip'?'Windows compatibility files':'Cyberfoot 2015')+' · '+Math.round(done/pieces.length*100)+'%');}
    }));
    let bytes=new Uint8Array(pieces.reduce((sum,p)=>sum+p.length,0)),offset=0;
    for(const piece of pieces){bytes.set(piece,offset);offset+=piece.length;}
    const digest=Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256',bytes)),b=>b.toString(16).padStart(2,'0')).join('');
    if(digest!==entry.sha256)throw Error('Package checksum mismatch. Reload to retry.');
    if(entry.encoding==='gzip')bytes=new Uint8Array(await new Response(new Blob([bytes]).stream().pipeThrough(new DecompressionStream('gzip'))).arrayBuffer());
    if(entry.restoreAliases)bytes=await restoreAliases(bytes,entry.restoreAliases);
    return {bytes,entry};
  }
  function prefetch(prefix,name){
    if(!name)return;
    const key=prefix+'\n'+name;
    if(!prefetched.has(key)){
      const promise=prepare(prefix,name);
      // Report any failure when the emulator consumes this request, with no
      // unhandled rejection while its WebAssembly runtime is still starting.
      promise.catch(()=>{});
      prefetched.set(key,promise);
    }
  }
  async function load(prefix,name){
    const key=prefix+'\n'+name,pending=prefetched.get(key);
    prefetched.delete(key);
    const prepared=await (pending??prepare(prefix,name));
    if(!prepared)return null;
    const {bytes,entry}=prepared;
    if(entry.patch&&new URLSearchParams(location.search).get('rng')!=='original'){
      const seed=crypto.getRandomValues(new Uint32Array(1))[0];repairRandomness(bytes,entry.patch,seed);
      window.cyberfootRandomness={mode:'continuous-original-generator',seeded:true};
    }else if(entry.patch)window.cyberfootRandomness={mode:'original-timer-reseeding'};
    return bytes;
  }
  globalThis.CyberfootPackages={load,prefetch,repairRandomness,crc32,restoreAliases};
})();
