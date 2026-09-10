import assert from 'node:assert/strict';import fs from 'node:fs';import {readSave,writeSave,record} from '../save-format.mjs';import {currentCareerDate} from '../calendar.mjs';import {OriginalRandom} from '../match-core.mjs';import {nativeResultsCareerEffects} from '../results-native-effects.mjs';
const save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),club=id=>v(record(save,'clubs',id)),career=v(save.career),date=currentCareerDate(save),rng=new OriginalRandom(653268),runtime={nationalManagerCount:0},effects=nativeResultsCareerEffects(save,runtime,{rng,temporary:{lineups:[],matchTeams:[]}}),history=save.sections.find(s=>s.name==='records_0066b070'),clubCount=save.sections.find(s=>s.name==='clubs').count;let completed=0;
for(let attempt=0;attempt<30;attempt++){
 const cash=Array.from({length:clubCount},(_,id)=>club(id).getBigInt64(0x48,true)),before=history.count;
 effects.aiTransfer(-1);assert.ok(history.count===before||history.count===before+1);
 if(history.count===before)continue;
 const row=v(record(save,history.name,before)),playerId=row.getInt32(0,true),seller=row.getInt32(16,true),buyer=row.getInt32(20,true),fee=row.getInt32(24,true),player=v(record(save,'players',playerId));
 assert.equal(club(seller).getUint8(0x39),0);assert.equal(club(buyer).getUint8(0x39),0);assert.notEqual(seller,buyer);assert.equal(player.getInt32(0x20,true),buyer);assert.equal(row.getFloat64(8,true),date);assert.equal(player.getFloat64(0x70,true),date+(career.getInt32(0x168,true)===2?168:70));assert.equal(club(seller).getBigInt64(0x48,true),cash[seller]+BigInt(fee)*10000n+4100n);assert.equal(club(buyer).getBigInt64(0x48,true),cash[buyer]-BigInt(fee)*10000n);completed++;
}
assert.ok(completed>0,'Original career must exercise actual AI transfers');const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
console.log(`Original career: ${completed} AI transfers in30 attempts; human clubs excluded, settlement and contract dates checked, all saved bytes survive reload.`);
