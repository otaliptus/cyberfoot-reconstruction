import {parseOriginalInteger} from '../contract-view.mjs';
import {currentCareerDate,baseCalendar} from '../calendar.mjs';
import {negotiateContract,renewContract,clubPayroll,submitContractOffer,renewalPlayer} from '../contracts.mjs';import {addContractMonths} from '../dates.mjs';import {notificationRecord} from '../notifications.mjs';import {OriginalRandom} from '../match-core.mjs';import {readSave,writeSave,record} from '../save-format.mjs';
export async function checkContracts(){
 const load=name=>fetch(new URL(name,import.meta.url)).then(r=>r.json()),[decisions,dates,commits,notifications,integers,calendar]=await Promise.all(['negotiation-vectors.json','contract-date-vectors.json','contract-commit-vectors.json','notification-vectors.json','integer-vectors.json','calendar-vectors.json'].map(load));
 const eq=(a,b,label)=>{const sort=v=>v&&typeof v==='object'?Array.isArray(v)?v.map(sort):Object.fromEntries(Object.keys(v).sort().map(k=>[k,sort(v[k])])):v;if(JSON.stringify(sort(a))!==JSON.stringify(sort(b)))throw Error(label);};
 for(const [i,c] of decisions.entries())eq(negotiateContract(c),c.expected,`Decision ${i}`);
 for(const [i,c] of dates.entries())eq(addContractMonths(c.date,c.months),c.expected.contractEnd,`Date ${i}`);
 for(const [i,c] of commits.entries()){const p={clubId:0};for(const k of ['salary','field40','field48','field7D','fieldE4','fieldF0','fieldF4','fieldFC'])p[k]=c[k];const n=renewContract(p,c);delete p.clubId;eq({...p,notifications:n,payroll:clubPayroll(0,[{...p,clubId:0}])},c.expected,`Renewal ${i}`);}
 for(const [i,c] of notifications.entries()){const rng=new OriginalRandom(c.seed),row=notificationRecord(...c.args,...c.stack,c.date,rng);eq({rows:row?[Array.from(row)]:[],seed:rng.state},c.expected,`Notification ${i}`);}
 for(const c of integers)eq(parseOriginalInteger(c.text),c.expected,'Input parse');
 for(const c of calendar)eq(baseCalendar(c.season)[c.day-1],c.expected,'Calendar');
 const save=readSave(await fetch(new URL('./original-career.s15',import.meta.url)).then(r=>r.arrayBuffer())),rng=new OriginalRandom(2015),id=224,date=currentCareerDate(save),before=writeSave(save),p=renewalPlayer(save,id),rejected=submitContractOffer(save,id,{offer:1,durationIndex:2,currentDate:date},rng);eq(rejected.decision,'reject','Low offer');eq(Array.from(writeSave(save)),Array.from(before),'Rejection mutated save');
 const offer=Math.max(rejected.required,Math.floor(Number(BigInt(p.salary))/10000)*2+1000),old=save.sections.find(s=>s.name==='records_0066b770').count;
 eq(submitContractOffer(save,id,{offer,durationIndex:2,currentDate:date},rng).decision,'accept','Renewal rejected');const restored=readSave(writeSave(save)),rp=renewalPlayer(restored,id);eq(rp.salary,String(BigInt(offer)*10000n),'Saved salary');eq(rp.contractEnd,addContractMonths(date,24),'Saved contract date');
 const section=restored.sections.find(s=>s.name==='records_0066b770'),n=new DataView(section.data.buffer,section.data.byteOffset+old*48,48);eq(section.count,old+1,'Saved message count');eq(n.getInt32(28,true),id,'Message player');eq(n.getInt32(16,true),67,'Message type');
 const ledger=record(restored,'records_0066afec',p.clubId),lv=new DataView(ledger.buffer,ledger.byteOffset,ledger.byteLength),ps=restored.sections.find(s=>s.name==='players'),players=[];for(let i=0;i<ps.count;i++){const row=record(restored,'players',i),v=new DataView(row.buffer,row.byteOffset,row.byteLength);players.push({clubId:v.getInt32(0x20,true),salary:v.getBigInt64(0x38,true)});}eq(lv.getInt32(4,true),clubPayroll(p.clubId,players),'Saved payroll');
 return {cases:decisions.length+dates.length+commits.length+notifications.length+integers.length+calendar.length,failures:0,rejectionPreservesSave:true,renewalAndNotificationSurviveReload:true,payrollVerified:true};
}
