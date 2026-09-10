import assert from 'node:assert/strict';import fs from 'node:fs';import {readSave,writeSave,record,shortString} from '../save-format.mjs';
import {prepareManagerDismissal} from '../manager-dismissal.mjs';import {OriginalRandom} from '../match-core.mjs';
const original=fs.readFileSync(new URL('./original-career.s15',import.meta.url)),view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
for(const scenario of [{performance:14,cash:1n,reason:0x1a0},{performance:15,cash:-1n,reason:0x1a1},{performance:15,cash:0n,reason:0x1a2},{performance:14,cash:-1n,special:true,reason:0x1a4}]){
 const save=readSave(original),club=view(record(save,'clubs',11)),old=club.getInt32(0x44,true),oldName=shortString(record(save,'records_0066b718',old),0,25),runtime={nationalManagerCount:10,dismissalSpecialReason:!!scenario.special},rng=new OriginalRandom(6421);
 club.setInt32(0x54,scenario.performance,true);club.setBigInt64(0x48,scenario.cash,true);
 const notice=prepareManagerDismissal(save,11,{rng,runtime});assert.equal(notice.reason,scenario.reason);assert.equal(notice.closed,false);assert.equal(notice.outgoing,old);assert.equal(notice.outgoingName,oldName);assert.notEqual(notice.replacement,old);assert.equal(club.getInt32(0x44,true),notice.replacement);assert.equal(club.getUint8(0x39),0);assert.equal(view(record(save,'records_0066b718',old)).getInt32(0x1c,true),-1);assert.equal(view(save.career).getInt32(0x13c,true),0);assert.equal(runtime.dismissalSpecialReason,!!scenario.special);
 const bytes=writeSave(save);assert.deepEqual(writeSave(readSave(bytes)),bytes);
}
console.log('Original career: human dismissal assigns replacement, removes human employment, preserves notice names/reasons and saves/reloads; financial/performance/special reason precedence checked.');
