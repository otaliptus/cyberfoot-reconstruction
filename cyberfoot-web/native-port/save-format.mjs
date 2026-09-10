import {saveSections} from './save-schema.mjs';
const cp1252=new TextDecoder('windows-1252');
/** Native parser/writer of original .s15 saves. Unknown bytes remain intact.
 * This is a lossless record container; full career-field semantics are separate.
 */
export function readSave(input){
 const bytes=input instanceof Uint8Array?input:new Uint8Array(input),view=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);let offset=0;
 function take(size){if(!Number.isSafeInteger(size)||size<0||size>bytes.length-offset)throw Error(`Truncated or invalid save at byte ${offset}.`);const a=Uint8Array.from(bytes.subarray(offset,offset+size));offset+=size;return a;}
 function int(){if(offset+4>bytes.length)throw Error('Truncated save header.');const n=view.getInt32(offset,true);offset+=4;return n;}
 const version=int();if(version!==1)throw Error(`Unsupported original save version ${version}.`);
 const career=take(1888),sections=[];
 for(const spec of saveSections){
  const marker=int(),count=spec.fixedCount??marker;
  if(spec.marker!==undefined&&marker!==spec.marker)throw Error(`Invalid marker for ${spec.name}.`);
  if(count<0||count>Math.floor((bytes.length-offset)/spec.recordSize))throw Error(`Invalid record count for ${spec.name}.`);
  const data=take(count*spec.recordSize);sections.push({...spec,marker,count,data});
 }
 if(offset!==bytes.length)throw Error(`Unrecognized trailing save data: ${bytes.length-offset} bytes.`);
 return {version,career,sections};
}
export function writeSave(save){
 if(save.version!==1||save.career.length!==1888||save.sections.length!==saveSections.length)throw Error('Invalid original save structure.');
 let length=4+1888;
 for(let i=0;i<saveSections.length;i++){
  const spec=saveSections[i],section=save.sections[i];
  if(section.name!==spec.name||section.data.length%spec.recordSize!==0)throw Error(`Invalid section ${spec.name}.`);
  if(spec.fixedCount!==undefined&&section.data.length!==spec.fixedCount*spec.recordSize)throw Error(`Invalid fixed section ${spec.name}.`);
  length+=4+section.data.length;
 }
 const bytes=new Uint8Array(length),view=new DataView(bytes.buffer);let offset=0;
 function int(v){view.setInt32(offset,v,true);offset+=4;}function put(a){bytes.set(a,offset);offset+=a.length;}
 int(1);put(save.career);
 save.sections.forEach((section,i)=>{const spec=saveSections[i];int(spec.marker??section.data.length/spec.recordSize);put(section.data);});
 return bytes;
}
export function record(save,name,index){
 const s=save.sections.find(s=>s.name===name);if(!s||!Number.isInteger(index)||index<0||index>=s.data.length/s.recordSize)throw RangeError(`Invalid ${name} record ${index}.`);
 return s.data.subarray(index*s.recordSize,(index+1)*s.recordSize);
}
export function shortString(bytes,offset,capacity){
 if(offset<0||offset+capacity+1>bytes.length||bytes[offset]>capacity)throw Error('Invalid original short string.');return cp1252.decode(bytes.subarray(offset+1,offset+1+bytes[offset]));
}
export function inspectCareer(save){
 const v=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),clubId=v.getInt32(8,true);
 return {clubId,clubName:shortString(record(save,'clubs',clubId),0,25),playerCount:save.sections.find(s=>s.name==='players').count,clubCount:save.sections.find(s=>s.name==='clubs').count,sections:save.sections.map(s=>({name:s.name,count:s.count,recordSize:s.recordSize}))};
}
