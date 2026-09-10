import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave,record} from '../save-format.mjs';import {competitionFiveEligible,clubWorldCountries,leagueRankingRecords} from '../club-world.mjs';import {OriginalRandom} from '../match-core.mjs';
const load=()=>readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const append=(section,rows)=>{const data=new Uint8Array(section.data.length+rows.length*section.recordSize),dv=new DataView(data.buffer);data.set(section.data);rows.forEach((row,i)=>row.forEach((value,j)=>dv.setInt32(section.data.length+i*section.recordSize+j*4,value,true)));section.data=data;section.count=data.length/section.recordSize;};
const prepare=()=>{const save=load(),c=v(save.career),season=c.getInt32(0xc0,true),metadata=save.sections.find(s=>s.name==='records_0066b6ac'),mv=v(metadata.data),groups={};
 for(let i=1;i<metadata.count;i++)if(mv.getInt32(i*12,true)===4&&mv.getInt32(i*12+4,true)===-1)groups[mv.getInt32(i*12+8,true)]=i;
 for(let group=0;group<6;group++)if(!(group in groups)){groups[group]=metadata.count;append(metadata,[[4,-1,group]]);}
 append(save.sections.find(s=>s.name==='records_0066b058'),Object.entries(groups).map(([group,id])=>[season,id,50+Number(group),1,0]));
 for(let i=0;i<clubWorldCountries.length;i++)v(record(save,'clubs',20+i)).setInt32(0x3c,clubWorldCountries[i],true);
 return {save,season};};
const {save,season}=prepare(),runtime={},rng=new OriginalRandom(0x634498),beforeFlags=Array.from({length:save.sections.find(s=>s.name==='clubs').count},(_,id)=>record(save,'clubs',id)[0x21b]);
assert.deepEqual(leagueRankingRecords(save,season),leagueRankingRecords(save,season));
assert.equal(competitionFiveEligible(save,runtime,{rng}),true);assert.equal(runtime.clubWorldErrorMessage,null);
const af90=save.sections.find(s=>s.name==='records_0066af90').data,field=offset=>new DataView(af90.buffer,af90.byteOffset,af90.byteLength).getInt32(offset,true),six=[field(0),field(4),field(0x30),field(0x34),field(0x60),field(0x90)];
assert.equal(new Set(six).size,6);for(const id of six){assert.ok(id>=0&&id<beforeFlags.length);assert.equal(record(save,'clubs',id)[0x21b],1);}
for(let id=0;id<beforeFlags.length;id++)assert.equal(record(save,'clubs',id)[0x21b],six.includes(id)?1:beforeFlags[id]);
const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
const second=prepare().save;competitionFiveEligible(second,{}, {rng:new OriginalRandom(0x634498)});assert.deepEqual(writeSave(second),bytes);
const empty=load(),emptyRuntime={},emptyRng=new OriginalRandom(0x634498),emptyBytes=writeSave(empty);
assert.equal(competitionFiveEligible(empty,emptyRuntime,{rng:emptyRng}),false);assert.equal(emptyRuntime.clubWorldErrorMessage,'Erro no jogo, reinstale os times');assert.deepEqual(writeSave(empty),emptyBytes);assert.notEqual(emptyRng.state,0x634498);
const guarded=prepare().save,guardedBytes=writeSave(guarded);assert.throws(()=>competitionFiveEligible(guarded,{}, {}),/random generator/);assert.deepEqual(writeSave(guarded),guardedBytes);
console.log('Original career fixture: club-world champions, 18-country table, six-flag field, deterministic replay, save round-trip, error path and guards passed.');
