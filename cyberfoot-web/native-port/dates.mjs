const dayMs=86400000,epoch=Date.UTC(1899,11,30);
// Delphi TDateTime's fraction is an absolute time of day even for negative dates.
export function addContractMonths(serial,months){
 const whole=Math.trunc(serial),fraction=Math.abs(serial-whole),date=new Date(epoch+whole*dayMs),day=date.getUTCDate();
 date.setUTCDate(1);date.setUTCMonth(date.getUTCMonth()+months);
 const last=new Date(date);last.setUTCMonth(last.getUTCMonth()+1);last.setUTCDate(0);date.setUTCDate(Math.min(day,last.getUTCDate()));
 const result=(date.getTime()-epoch)/dayMs;return result+(result<0?-fraction:fraction);
}
