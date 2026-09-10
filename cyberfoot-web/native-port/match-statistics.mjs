import {multiplyRound,precision64,nearestEven} from './x87.mjs';
/** 00603beb..00603e3f. Displayed possession deliberately adjusts the trailing
 * team by 0.9 and defensive style (2) by 0.7 before calculating percentages.
 * Each adjustment uses the original x87 nearest-even rounding.
 */
export function matchStatistics(fixture,state){
 const c=fixture.counters,get=offset=>c[offset]??0;
 let home=get(0x88),away=get(0x8c);
 if(get(0x48)>get(0x4c))away=multiplyRound(away,['16602069666338596454',-64]);
 else if(get(0x48)<get(0x4c))home=multiplyRound(home,['16602069666338596454',-64]);
 if(state.clubs[fixture.clubs[0]].playStyle===2)home=multiplyRound(home,['12912720851596686131',-64]);
 if(state.clubs[fixture.clubs[1]].playStyle===2)away=multiplyRound(away,['12912720851596686131',-64]);
 if(home===0&&away===0)home=away=1;
 const denominator=(home+away)|0;if(denominator===0)throw RangeError('Original possession calculation divides by zero.');
 const numerator=Math.imul(home,100),[n,d]=precision64(BigInt(denominator<0?-numerator:numerator),BigInt(Math.abs(denominator))),percentage=Number(BigInt.asIntN(32,nearestEven(n,d)));
 return {possession:[percentage,(100-percentage)|0],shots:[get(0x90),get(0x94)],tackles:[get(0x98),get(0x9c)],wrongPasses:[get(0xa0),get(0xa4)],fouls:[get(0xa8),get(0xac)]};
}
export function matchStatisticsRows(statistics,language,{englishFallback=false}={}){
 return [['possession',657,'Ball possession'],['shots',658,'Shots'],['tackles',659,'Tackles'],['wrongPasses',660,'Wrong Passes'],['fouls',661,'Fouls committed']].map(([key,id,fallback])=>({label:englishFallback?fallback:language[id].text,values:statistics[key].map(n=>String(n)+(key==='possession'?'%':'')),labelIndent:key==='shots'?45:40,valueIndent:150}));
}
