import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,record,writeSave} from '../save-format.mjs';
import {managerOfferView,selectManagerOfferView} from '../manager-offer-view.mjs';
const json=name=>JSON.parse(fs.readFileSync(new URL('../'+name,import.meta.url))),language=json('language.json'),crests=json('crest-assets.json'),save=readSave(fs.readFileSync(new URL('./original-career.s15',import.meta.url))),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),runtime={managerJobOffers:[11,12,-1,13]};
v(save.career).setInt32(0x10,v(record(save,'clubs',11)).getInt32(0x44,true),true);
const before=writeSave(save),frame=managerOfferView(save,runtime,language,crests);
assert.equal(frame.selected,0);assert.equal(frame.properties.r1.Checked,true);assert.equal(frame.properties.r3.Visible,false);assert.equal(frame.offerRoster.clubId,11);
assert.equal(selectManagerOfferView(frame,save,runtime,language,2),true);assert.equal(frame.selected,1);assert.equal(frame.properties.r1.Checked,false);assert.equal(frame.offerRoster.clubId,12);
assert.equal(selectManagerOfferView(frame,save,runtime,language,3),false);assert.equal(frame.selected,1);assert.equal(selectManagerOfferView(frame,save,runtime,language,0),false);
assert.deepEqual(writeSave(save),before);
// First offer bypasses the league lookup; later identical offers are hidden.
v(record(save,'clubs',11)).setInt32(0x3c,201,true);
for(let i=0;i<save.sections.find(s=>s.name==='records_0066aca0').count;i++)v(record(save,'records_0066aca0',i)).setInt32(0x140,0,true);
runtime.managerJobOffers=[11,11,-1,-1];const unusual=managerOfferView(save,runtime,language,crests);
assert.equal(unusual.properties.r1.Visible,true);assert.equal(unusual.properties.r2.Visible,false);
runtime.managerJobOffers=[-1,-1,-1,-1];const empty=managerOfferView(save,runtime,language,crests);assert.equal(empty.selected,-1);assert.equal(empty.offerRoster.rows.length,0);assert.equal(empty.properties.Label6,undefined);
console.log('Offer view: original captions, initial selection, radio Tags, missing offers, league asymmetry and no save mutation verified.');
