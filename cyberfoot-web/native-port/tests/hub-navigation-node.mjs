import fs from 'node:fs';
import assert from 'node:assert/strict';
import {readSave} from '../save-format.mjs';
import {openCareer} from '../career-state.mjs';
import {readStoredCareerSave} from '../career-menu.mjs';
import {saveCareerFromForm40} from '../hub-navigation.mjs';

const language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url))),bytes=fs.readFileSync(new URL('./original-career.s15',import.meta.url)),save=readSave(bytes),state=openCareer(save,{currentDate:42000}),storageData=new Map(),storage={getItem:key=>storageData.has(key)?storageData.get(key):null,setItem:(key,value)=>storageData.set(key,String(value)),removeItem:key=>storageData.delete(key)};
state.scorers.push([224,1,1,11]);
const entry=await saveCareerFromForm40({save,state,language,localStorage:storage,name:'Stats Save',id:'stats-save'}),loaded=readSave(await readStoredCareerSave(storage,entry.id));
assert.deepEqual(openCareer(loaded,{currentDate:42000}).scorers.find(row=>row[0]===224&&row[2]===1),[224,1,1,11],'live scorer rows survive Form40 save/reload');
console.log('Form40 save: live career statistic rows are committed before encoding and survive reload.');
