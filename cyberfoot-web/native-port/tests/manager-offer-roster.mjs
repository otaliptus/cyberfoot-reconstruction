import assert from 'node:assert/strict';
import fs from 'node:fs';
import {readSave,record,writeSave} from '../save-format.mjs';
import {managerOfferRoster} from '../manager-offer-roster.mjs';
const language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url))),save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const initial=writeSave(save),roster=managerOfferRoster(save,11,language);
assert.ok(roster.rows.length>10);assert.deepEqual(writeSave(save),initial);
for(let i=1;i<roster.rows.length;i++){const a=roster.rows[i-1],b=roster.rows[i];assert.ok(a.role<b.role||(a.role===b.role&&a.playerId<b.playerId));}
// Deliberately interleave roles and include excluded records. ID zero is never listed.
for(let id=0;id<save.sections.find(s=>s.name==='players').count;id++)v(record(save,'players',id)).setInt32(0x20,-1,true);
for(let id=0;id<8;id++){const p=v(record(save,'players',id));p.setInt32(0x20,11,true);p.setInt32(0x24,[0,4,2,0,2,1,3,9][id],true);p.setUint8(0x120,id===6?1:0);p.setBigInt64(0x38,25000n,true);p.setBigInt64(0x40,-35000n,true);p.setInt32(0x5c,2,true);p.setInt32(0x60,3,true);p.setUint8(0x15,id===2?1:0);}
const before=writeSave(save),result=managerOfferRoster(save,11,language);
assert.deepEqual(result.rows.map(r=>r.playerId),[3,5,2,4,1]);
assert.equal(result.rows[0].cells[4],'$   2');assert.equal(result.rows[0].cells[5],'$-   4');
assert.equal(result.rows[0].cells[6],language[161].text+'/'+language[163].text);
assert.equal(result.rows.find(r=>r.playerId===2).star,true);
assert.deepEqual(managerOfferRoster(save,-1,language,{previousCaption:result.caption}),{clubId:-1,caption:result.caption,rows:[]});
assert.deepEqual(writeSave(save),before);
console.log('Offer roster: original career, role/ID order, exclusions, ties-to-even money, traits, stars, empty selection and immutable save verified.');
