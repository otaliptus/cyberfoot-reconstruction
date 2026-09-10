import {record} from './save-format.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Whole5f9e54. Restore players temporarily assigned to national sides,
 * remove temporary human managers (except club0), then clear66acd0. This
 * flag is distinct from the league-finished flag at66ace0. */
export function restoreNationalAssignments(save,runtime){
 if(!Number.isInteger(runtime.nationalManagerCount))throw Error('Original national manager count66b57c required.');
 const section=save.sections.find(s=>s.name==='records_0066b544'),v=view(section.data),c=view(save.career);
 for(let i=0;i<section.count;i++){const id=v.getInt32(i*8,true),club=v.getInt32(i*8+4,true);view(record(save,'players',id)).setInt32(0x20,club,true);}
 section.data=new Uint8Array();section.count=0;section.marker=0;
 for(let i=0;i<runtime.nationalManagerCount;i++){const id=c.getInt32(0x604+i*4,true);if(id>0){const club=view(record(save,'clubs',id));club.setInt32(0x44,-1,true);club.setUint8(0x39,0);}}
 runtime.nationalAssignmentsActive=false;
}
