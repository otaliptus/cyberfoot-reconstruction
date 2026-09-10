import {record} from './save-format.mjs';
import {precision64,nearestEven,multiplyRound} from './x87.mjs';
// Original Form22_FormCreate at 005a06d4. Field IDs verified from Delphi RTTI.
export const financeLanguage={Label1:350,Label6:351,Label3:352,Label2:353,Label4:354,Label11:355,Label20:356,Label5:357,Label7:358,Label8:359,Label9:360,Label12:361,Label23:362,Label25:363,Label10:357,Label13:364,Label18:365,Label14:366,Label15:367};
export function financeAmounts(ledger,cash){
 const v=ledger instanceof DataView?ledger:new DataView(ledger.buffer,ledger.byteOffset,ledger.byteLength),get=o=>v.getInt32(o,true),sum=offsets=>offsets.reduce((n,o)=>(n+get(o))|0,0);
 const income=sum([0x10,0x18,0x24,0x20,0x2c]),expenses=sum([0x34,0x30,0x1c,0x14,8,0x28]);
 const [a,b]=precision64(BigInt(cash),10000n);
 const result={l1:get(0x10),l2:get(0x18),l3:get(0x24),l4:get(0x20),l7:get(0x14),l8:get(8),l9:get(0x28),Label21:get(0x2c),l5:income,l10:expenses,l11:(income-expenses)|0,l6:get(0x1c),Label24:get(0x34),Label26:get(0x30),Label16:get(4),Label17:Number(BigInt.asIntN(32,nearestEven(a,b)))};
 if(get(0x20)>0)result.Label19=multiplyRound(get(0x20),['17708874310761169551',-69]);
 return result;
}
// Delphi's literal spaces remain even when optional leading # digits are empty.
export function originalMoney(value){const n=value|0,s=String(Math.abs(n)),groups=Math.floor((s.length-1)/3);return '$'+(n<0?'-':'')+' '.repeat(3-groups)+s.replace(/\B(?=(\d{3})+(?!\d))/g,' ');}
export function financeView(save,language){
 const c=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),clubId=c.getInt32(8,true),club=record(save,'clubs',clubId),clubView=new DataView(club.buffer,club.byteOffset,club.byteLength);
 const amounts=financeAmounts(record(save,'records_0066afec',clubId),clubView.getBigInt64(0x48,true));
 const properties={label32:{HTMLText:`<p align="center"><shad>${language[109].text}</shad></p>`}};
 for(const [name,index] of Object.entries(financeLanguage))properties[name]={Caption:' '+language[index].text};
 for(const [name,value] of Object.entries(amounts))properties[name]={Caption:originalMoney(value)};
 return {form:'Form22',clubId,amounts,properties,background:'assets/original-f01.jpg'};
}
