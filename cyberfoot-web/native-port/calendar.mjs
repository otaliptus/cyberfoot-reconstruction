// Original base dates 00656abc; competition assignment 00653a40 is separate.
const epoch=Date.UTC(1899,11,30),dayMs=86400000;
export function baseCalendar(season){const year=(season+2014)&65535;if(year<1||year>9999)throw RangeError('Invalid original calendar year');const date=new Date(0);date.setUTCHours(0,0,0,0);date.setUTCFullYear(year,0,1);const first=(date.getTime()-epoch)/dayMs;return Array.from({length:366},(_,i)=>({dayIndex:i+1,date:first+i,competition:-1}));}
export function currentCareerDate(save){const v=new DataView(save.career.buffer,save.career.byteOffset,save.career.byteLength),day=v.getInt32(0x16c,true);if(day<1||day>366)throw RangeError('Invalid original career calendar index');return baseCalendar(v.getInt32(0xc0,true))[day-1].date;}
