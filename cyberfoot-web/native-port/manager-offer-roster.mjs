import {record,shortString} from './save-format.mjs';
import {originalMoney} from './finance-view.mjs';
import {precision64,nearestEven} from './x87.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Form30 roster builder 005d61ac. The original groups roles 0..4 and
 * preserves player IDs within each role. It does not repair player traits.
 * A missing offer clears rows while retaining the existing caption. */
export function managerOfferRoster(save,clubId,language,{previousCaption='',roles=[143,147,145,149,151].map(i=>language[i].text),traits=Array.from({length:14},(_,i)=>language[157+i*2].text)}={}){
 if(clubId<0)return {clubId,caption:previousCaption,rows:[]};
 const caption=(shortString(record(save,'clubs',clubId),0,25)+' ').slice(0,26)+language[550].text+':',players=save.sections.find(s=>s.name==='players'),groups=Array.from({length:5},()=>[]);
 const money=(p,offset)=>{const [n,d]=precision64(p.getBigInt64(offset,true),10000n);return originalMoney(Number(BigInt.asIntN(32,nearestEven(n,d))));};
 for(let playerId=1;playerId<players.count;playerId++){
  const bytes=record(save,'players',playerId),p=view(bytes),club=p.getInt32(0x20,true),role=p.getInt32(0x24,true);
  if(club<0||club!==clubId||p.getUint8(0x120)!==0||role<0||role>4)continue;
  groups[role].push({playerId,role,star:p.getUint8(0x15)!==0,cells:[roles[role],shortString(bytes,0,20),String(p.getInt32(0x28,true)),p.getInt32(0x78,true)+'%',money(p,0x38),money(p,0x40),traits[p.getInt32(0x5c,true)]+'/'+traits[p.getInt32(0x60,true)],String(p.getInt32(0x18,true))]});
 }
 return {clubId,caption,rows:groups.flat()};
}
