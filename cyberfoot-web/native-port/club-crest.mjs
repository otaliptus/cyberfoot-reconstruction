import {record,shortString} from './save-format.mjs';
/** Original 645508: a missing file produces no crest; club and national-team directories differ. */
export function clubCrestPath(save,clubId,assets){
 const c=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),limit=(c.getInt32(0x3c,true)+c.getInt32(0x40,true))|0;
 const directory=clubId<limit?'escudos':'selecoes',name=shortString(record(save,'clubs',clubId),0x1a,30),key=`teams/${directory}/${name}.png`.toLowerCase();
 return assets[key]??null;
}
