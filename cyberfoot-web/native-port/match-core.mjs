/** Native JavaScript reconstruction. Addresses refer to cf2015.exe.
 * This module covers the possession transition, not complete match/career logic.
 * Every random read, including overwritten intermediate results, is preserved.
 */
export const tables = {
 shot:[0,0,0,1,1,1,10,20,10,60,85,60],
 pass:[5,3,5,30,30,30,50,45,50,40,40,40],
 duel:[5,3,5,20,20,20,40,40,40,30,30,30],
 foul:[5,3,5,10,10,10,10,10,10,10,2,10],
 foulAfterDuel:[5,3,5,20,20,20,40,40,40,30,2,30],
 moveA:[4,5,6,7,8,9,10,11,12,11,12,11],
 moveB:[5,4,5,8,7,8,11,12,11,12,10,10],
 moveC:[3,6,1,9,9,12,12,10,10,8,8,8],
 moveD:[2,8,2,5,11,5,8,5,8,7,9,9],
};
export class OriginalRandom {
 constructor(seed,clock){this.state=seed>>>0;this.clock=clock;this.clockReads=0;}
 // 004032c8: 32-bit Borland LCG and unsigned multiply-high scaling.
 below(bound){this.state=(Math.imul(this.state,0x08088405)+1)>>>0;return Number((BigInt(bound>>>0)*BigInt(this.state))>>32n);}
 randomize(){if(!this.clock)throw Error('Original clock provider is required.');this.state=this.clock()>>>0;this.clockReads++;}
 // 006071c4 calls Randomize before every probability test.
 chance(threshold,bound){this.randomize();return this.below(bound)+1<=threshold;}
}
export const otherSide=side=>side===1?2:1; // 006077f0
export const goalKickZone=side=>side===1?2:11; // 00607800
export const kickoffZone=side=>side===1?5:8; // 00607810
export const mirrorZone=(zone,side)=>side===1?zone:13-zone; // 006078a8
export function cornerZone(side,rng){return rng.below(100)<51?(side===1?12:3):(side===1?10:1);} // 00607820
export function restartZone(_zone,side,rng){ // 0060774c; zero deliberately falls through to literal 1.
 const n=rng.below(100);
 if(n===0)return 1;
 return mirrorZone(n<=33?5:n<=66?6:n<=80?4:n<=85?8:n<=91?9:7,side);
}
const coefficients={half:[0x8000000000000000n,64],threeTenths:[0x999999999999999an,65],oneFifth:[0xcccccccccccccccdn,66]};
function nearestEven(numerator,denominator){
 const sign=numerator<0n?-1n:1n;const n=numerator*sign;
 const q=n/denominator,r=n%denominator;return sign*(q+(r*2n>denominator||(r*2n===denominator&&(q&1n)===1n)?1n:0n));
}
function precision64(n){const sign=n<0n?-1n:1n;const a=n*sign;if(!a)return 0n;const discard=a.toString(2).length-64;if(discard<=0)return n;const unit=1n<<BigInt(discard);return nearestEven(n,unit)*unit;}
// 006071e8 + 00402c38. Retain the x87 64-bit significand and ties-to-even,
// rather than substituting JavaScript Math.round or binary64 intermediates.
export function adjustedThreshold(base,attack,defence,coefficient){
 const [significand,shift]=coefficients[coefficient];const divisor=1n<<BigInt(shift);
 const delta=precision64(BigInt((defence-attack)|0)*significand);
 const total=precision64(BigInt(base|0)*divisor+delta);
 return Number(BigInt.asIntN(32,nearestEven(total,divisor)));
}
export function duel(zone,attack,defence,side,rng){ // 006078b4
 const threshold=adjustedThreshold(tables.duel[mirrorZone(zone,side)-1],attack,defence,'threeTenths');
 let result=rng.chance(threshold,100)?-1:2;
 if(attack>0&&defence===0)result=2;
 return result;
}
export function pass(zone,attack,defence,side,rng){ // 00607854
 return rng.chance(adjustedThreshold(tables.pass[mirrorZone(zone,side)-1],attack,defence,'half'),100)?-1:2;
}
export function shot(_zone,attack,_defence,keeper,rng){ // 00607918 intentionally ignores zone and defence argument.
 const bound=keeper<6?108:keeper<10?105:98;
 return rng.chance(adjustedThreshold(92,attack,keeper,'oneFifth'),bound)?-1:2;
}
export function moveZone(zone,side,opponentTeam,rng){ // 00607570
 let table=tables.moveA;
 if(rng.below(100)<51){table=tables.moveB;if(rng.below(100)<51)table=rng.below(100)<51?tables.moveD:tables.moveC;}
 let target=mirrorZone(table[mirrorZone(zone,side)-1],side);
 const mirrored=mirrorZone(zone,side);
 if(opponentTeam.defence[1]===0){if([5,2,4,6].includes(mirrored))target=mirrorZone(11,side);}
 else if(opponentTeam.defence[0]===0){if([5,4,6].includes(mirrored))target=mirrorZone(12,side);}
 else if(opponentTeam.defence[2]===0){if([5,4,6].includes(mirrored))target=mirrorZone(10,side);}
 return target;
}
/** 00607264. Team arrays correspond to original lineup records at offsets
 * attack 0x88..0xb4, defence 0xb8..0xe4, keeper 0xe8. Output event codes
 * remain numeric until their downstream semantics have been fully verified.
 */
export function transition(zone,side,previousEvent,teams,rng){
 const own=teams[side-1],opponent=teams[otherSide(side)-1];
 const attack=own.attack[mirrorZone(zone,side)-1];
 const defence=opponent.defence[mirrorZone(zone,otherSide(side))-1];
 const index=mirrorZone(zone,side)-1;
 if(previousEvent===3)return [restartZone(zone,side,rng),side,2];
 if(previousEvent===2&&attack===0)return [zone,otherSide(side),10];
 if(rng.below(100)<tables.foul[index]&&defence>0)return [zone,side,5];
 // The original evaluates the duel even when previousEvent is 8.
 if(duel(zone,attack,defence,side,rng)===-1&&previousEvent!==8){
  if(rng.below(100)<tables.foulAfterDuel[index])return [zone,side,5];
  return [zone,otherSide(side),1];
 }
 if(rng.below(100)<tables.shot[index]){
  if(shot(zone,attack,defence,opponent.keeper,rng)===-1){
   // This draw stores event 6 in the original, but the next branch always
   // overwrites its output. Removing the draw would change subsequent events.
   rng.below(100);
   if(rng.below(100)<51)return [cornerZone(side,rng),side,7];
   return [goalKickZone(otherSide(side)),otherSide(side),3];
  }
  return [zone,otherSide(side),4];
 }
 if(pass(zone,attack,defence,side,rng)===-1)return [zone,otherSide(side),9];
 return [moveZone(zone,side,opponent,rng),side,2];
}
