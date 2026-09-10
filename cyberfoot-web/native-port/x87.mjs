// Finite rational arithmetic rounded after each x87 operation to 64 significant bits.
export function nearestEven(n,d){const s=n<0n?-1n:1n;n*=s;const q=n/d,r=n%d;return s*(q+(r*2n>d||(r*2n===d&&(q&1n))?1n:0n));}
export function precision64(n,d=1n){
 if(n===0n)return [0n,1n];const a=n<0n?-n:n;
 let e=a.toString(2).length-d.toString(2).length;
 if(e>=0?a<(d<<BigInt(e)):(a<<BigInt(-e))<d)e--;
 const shift=63-e;
 return shift>=0?[nearestEven(n<<BigInt(shift),d),1n<<BigInt(shift)]:[nearestEven(n,d<<BigInt(-shift))<<BigInt(-shift),1n];
}
export function multiplyRound(value,coefficient){
 const [sig,exponent]=coefficient,n=BigInt(value)*BigInt(sig);
 const [a,b]=exponent<0?precision64(n,1n<<BigInt(-exponent)):precision64(n<<BigInt(exponent));
 return Number(BigInt.asIntN(32,nearestEven(a,b)));
}
export function conditionStrength(skill,condition){
 const [a,b]=precision64(BigInt(condition),100n);
 const [c,d]=precision64(a*BigInt(skill),b);
 return Number(BigInt.asIntN(32,nearestEven(c,d)));
}
