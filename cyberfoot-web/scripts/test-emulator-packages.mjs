import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import vm from 'node:vm';
import {inflateRawSync} from 'node:zlib';
const root=new URL('../public/emulator/',import.meta.url);
vm.runInThisContext(readFileSync(new URL('package-loader.js',root),'utf8'));
let active=0,peak=0,corrupt=false;const requests=new Map();
globalThis.window={};globalThis.location={search:''};
globalThis.fetch=async path=>{requests.set(path,(requests.get(path)??0)+1);active++;peak=Math.max(peak,active);await new Promise(r=>setTimeout(r,1));const bytes=readFileSync(new URL(path,root));if(corrupt&&path.includes('packages/'))bytes[0]^=1;active--;return new Response(bytes);};
const manifest=JSON.parse(readFileSync(new URL('packages.json',root))),patch=manifest['cyberfoot.zip'].patch;
location.search='?rng=original';const original=await CyberfootPackages.load('','cyberfoot.zip');
assert.equal(CyberfootPackages.crc32(original.subarray(patch.offset,patch.offset+patch.size)),patch.crc);
location.search='';const first=await CyberfootPackages.load('','cyberfoot.zip'),second=await CyberfootPackages.load('','cyberfoot.zip');
const seed=bytes=>new DataView(bytes.buffer).getUint32(patch.offset+patch.seed,true);
assert.notEqual(seed(first),seed(second));assert.equal(first[patch.offset+patch.randomize],0xc3);
for(let i=0;i<patch.size;i++)if(i!==patch.randomize&&(i<patch.seed||i>=patch.seed+4))assert.equal(first[patch.offset+i],original[patch.offset+i]);
assert.ok(peak<=4&&peak>1);
assert.throws(()=>CyberfootPackages.repairRandomness(first,patch,1),/Unexpected game executable/);
console.log('Original mode retains executable CRC; repaired mode changes only Randomize and seed; launch seeds differ; concurrency bounded to four.');

// Startup prefetches share the global download limit and are consumed once.
requests.clear();peak=0;
CyberfootPackages.prefetch('','boxedwine.zip');
CyberfootPackages.prefetch('','cyberfoot.zip');
CyberfootPackages.prefetch('','cyberfoot.zip');
const [wine,game]=await Promise.all([CyberfootPackages.load('','boxedwine.zip'),CyberfootPackages.load('','cyberfoot.zip')]);
assert.ok(peak<=4&&peak>1);assert.ok([...requests.values()].every(n=>n===1));
assert.notEqual(seed(game),seed(second));
function entries(bytes){
 const data=Buffer.from(bytes),result=new Map();let end=data.length-22;
 while(data.readUInt32LE(end)!==0x06054b50)end--;
 let at=data.readUInt32LE(end+16);
 for(let n=data.readUInt16LE(end+10);n>0;n--){
  assert.equal(data.readUInt32LE(at),0x02014b50);
  const length=data.readUInt16LE(at+28),name=data.toString('utf8',at+46,at+46+length),local=data.readUInt32LE(at+42);
  const start=local+30+data.readUInt16LE(local+26)+data.readUInt16LE(local+28),method=data.readUInt16LE(at+10);
  assert.equal(data.readUInt16LE(local+8),method);
  const compressed=data.subarray(start,start+data.readUInt32LE(at+20)),contents=method===8?inflateRawSync(compressed):compressed;
  assert.equal(contents.length,data.readUInt32LE(at+24));
  assert.equal(CyberfootPackages.crc32(contents),data.readUInt32LE(at+16),name);
  result.set(name,contents);at+=46+length+data.readUInt16LE(at+30)+data.readUInt16LE(at+32);
 }
 return result;
}
const originalWine=entries(Buffer.concat(Array.from({length:17},(_,i)=>readFileSync(new URL('wine.part'+i,root))))),restored=entries(wine);
const retainedCodepages=new Set([1252,1254,437,850,857,20127,28591,28599]);
const removedWine=new Set(manifest['boxedwine.zip'].removedFiles);
for(const [name,contents] of originalWine){
 const cp=name.match(/\/c_(\d+)\.nls$/),remove=cp&&!retainedCodepages.has(Number(cp[1]));
 assert.equal(removedWine.has(name),Boolean(remove),name);
 if(remove)assert.equal(restored.has(name),false,name);
 else assert.deepEqual(restored.get(name),contents,name);
}
assert.equal(restored.size,originalWine.size-removedWine.size);
const originalGame=entries(Buffer.concat(Array.from({length:3},(_,i)=>readFileSync(new URL('cyberfoot.part'+i,root))))),retainedGame=entries(original);
const retainedLanguages=new Set(['languages/97.cft','languages/971.cft','languages/default.cft','languages/192.cft']);
const removedGame=new Set(manifest['cyberfoot.zip'].removedFiles);
for(const [name,contents] of originalGame){
 const remove=name.startsWith('languages/')&&name.endsWith('.cft')&&!retainedLanguages.has(name);
 assert.equal(removedGame.has(name),remove,name);
 if(remove)assert.equal(retainedGame.has(name),false,name);
 else assert.deepEqual(retainedGame.get(name),contents,name);
}
assert.equal(retainedGame.size,originalGame.size-removedGame.size);
corrupt=true;CyberfootPackages.prefetch('','cyberfoot.zip');
await assert.rejects(CyberfootPackages.load('','cyberfoot.zip'),/checksum mismatch/);
corrupt=false;assert.ok(await CyberfootPackages.load('','cyberfoot.zip'));
assert.equal(await CyberfootPackages.load('','unknown.zip'),null);
console.log(`Prefetch consumes each part once with at most four downloads; ${restored.size} Wine entries and ${retainedGame.size} game entries match original bytes/CRC; only unrelated codepages/translations omitted; corruption rejects and retry succeeds.`);
