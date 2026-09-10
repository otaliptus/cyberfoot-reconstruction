import {record} from './save-format.mjs';
import {appendRows} from './match-records.mjs';
import {findAvailableManager} from './manager-selection.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
export const managerFirstNames=['João','Paulo','André','Salvador','Juarez','Epitácio','Jacozinho','Gerard','Firmino','Sandro','Vítor'];
export const managerLastNames=['Silva','Pinto','Souza','Oliveira','Magalhães','Ferreira','Peres','Batista','Silveira','Nascimento','Santos'];
/** Whole656098: two draws from the original eleven-name tables. */
export function generateManagerName(rng){return managerFirstNames[rng.below(11)]+' '+managerLastNames[rng.below(11)];}
/** Whole655ebc returns a CLUB index. Its caller65612c uses that value as a
 * manager index; preserve the original behavior rather than correcting it. */
export function findNonLeagueReplacement(save,country){
 const c=view(save.career);
 for(let id=0;id<c.getInt32(0x3c,true);id++){
  const club=view(record(save,'clubs',id));
  if(club.getUint8(0x39)===0&&club.getInt32(0x3c,true)===country&&club.getInt32(0x7c,true)===0&&club.getInt32(0x44,true)>=0)return id;
 }
 return -1;
}
/** Whole65612c: human-dismissal replacement selection and manager creation. */
export function selectDismissalReplacement(save,clubId,rng){
 const club=view(record(save,'clubs',clubId)),country=club.getInt32(0x3c,true),division=club.getInt32(0x7c,true);
 let id=findAvailableManager(save,country,division);
 if(id===-1)id=findAvailableManager(save,country);
 if(id===-1&&division>=2)id=findNonLeagueReplacement(save,country);
 if(id===-1)id=findAvailableManager(save,-1);
 if(id!==-1)return id;
 id=appendRows(save,'records_0066b718',[Array(32).fill(0)]);
 const bytes=record(save,'records_0066b718',id),manager=view(bytes),name=generateManagerName(rng).slice(0,25);
 bytes[0]=name.length;for(let i=0;i<name.length;i++)bytes[i+1]=name.charCodeAt(i);
 manager.setInt32(0x1c,-1,true);manager.setInt32(0x3c,country,true);manager.setInt32(0x20,-1,true);manager.setInt32(0x24,division,true);manager.setUint8(0x31,0);manager.setInt32(0x28,0,true);
 return id;
}
