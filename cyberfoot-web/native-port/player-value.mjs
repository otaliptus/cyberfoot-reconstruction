import {record} from './save-format.mjs';import {countryGroups} from './score-tables.mjs';import {multiplyRound,nearestEven} from './x87.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
function multiplySingleRound(integer,single){const b=new DataView(new ArrayBuffer(4));b.setFloat32(0,single,true);const bits=b.getUint32(0,true),sig=BigInt((bits&0x7fffff)|0x800000),exponent=(bits>>>23&255)-150;return Number(BigInt.asIntN(32,nearestEven(BigInt(integer)*sig,1n<<BigInt(-exponent))));}
/** Whole652134 for valid club-backed player records. Preserve signed32
 * arithmetic, x87 constants, ties-to-even and the Single goals factor. */
export function originalPlayerValue(save,playerId){
 const p=view(record(save,'players',playerId)),club=view(record(save,'clubs',p.getInt32(0x20,true))),c=view(save.career),get=o=>p.getInt32(o,true),region=countryGroups[club.getInt32(0x3c,true)]??0,strength=club.getInt32(0x98,true),age=get(0x18),skill=(get(0x28)*2)|0;
 let base=region===0?(strength>=21?750:strength>=20?600:strength>=18?500:strength>=12?400:366):[366,366,326,326,300,300][region]??366;
 if(p.getUint8(0x15)!==0){if(region===0&&strength>=22)base=Math.imul(base,3);else if(region===0&&strength===21)base=(base*2)|0;else base=(base+multiplyRound(base,['11068046444225730970',-64]))|0;}
 if(get(0x50)===1)base=(base+multiplyRound(base,['14757395258967641293',-66]))|0;
 if(age<20)base=(base+Math.imul((32-age)|0,27))|0;
 if(age>=20&&age<=25)base=(base+Math.imul((32-age)|0,region===0?28:20))|0;
 if(age>=26&&age<32)base=(base+Math.imul((32-age)|0,15))|0;
 if(age>=32&&age<34)base=(base+Math.imul((35-age)|0,50))|0;
 if(age>=34){base=(base-Math.imul((age-34)|0,200))|0;if(base<=0)base=100;}
 const season=c.getInt32(0xc0,true);let goals=season>=1?Number(nearestEven(BigInt(get(0x104)),BigInt(season))):0;
 const factor=goals>0?Math.fround(Math.min(goals,100)/100):0;
 let amount=Math.imul(Math.imul(skill,skill),base);
 if(factor>0)amount=(amount+multiplySingleRound(amount,factor))|0;
 if(p.getUint8(0x120)!==0||(get(0x11c)>0&&get(0x11c)===season))amount=Math.imul(Math.trunc(amount/30),get(0x30));
 return amount;
}
