import {record} from './save-format.mjs';
import {precision64,nearestEven} from './x87.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),f=Math.fround;
const constants={
 declineLow:[14757395258967641293n,-64],declineMid:[11068046444225730970n,-63],
 selected:[14757395258967641293n,-68],morale:[11805916207174113034n,-70],
 skill30:[17708874310761169551n,-69],skill41:[11805916207174113034n,-68],skill71:[17708874310761169551n,-68],potentialLow:[14757395258967641293n,-67],
 talent7:[10330176681277348905n,-67]
};
function rational(value){
 const b=new DataView(new ArrayBuffer(4));b.setFloat32(0,value,true);const bits=b.getUint32(0,true),exp=bits>>>23&255;
 if(exp===255)throw RangeError('Player development requires finite saved progress.');
 const sig=BigInt((bits&0x7fffff)+(exp?0x800000:0))*(bits>>>31?-1n:1n),e=(exp||1)-150;
 return e<0?[sig,1n<<BigInt(-e)]:[sig<<BigInt(e),1n];
}
function single(n,d){
 [n,d]=precision64(n,d);if(n===0n)return 0;const a=n<0n?-n:n;
 let e=a.toString(2).length-d.toString(2).length;if(e>=0?a<(d<<BigInt(e)):(a<<BigInt(-e))<d)e--;
 const shift=Math.min(23-e,149),q=shift>=0?nearestEven(n<<BigInt(shift),d):nearestEven(n,d<<BigInt(-shift));
 return f(Number(q)*2**-shift);
}
function addConstant(value,key,sign=1){const [n,d]=rational(value),[sig,e]=constants[key],den=1n<<BigInt(-e);return single(n*den+BigInt(sign)*sig*d,d*den);}
function scaledInteger(value,key){const [sig,e]=constants[key];return single(BigInt(value)*sig,1n<<BigInt(-e));}
const div=(a,b)=>{const [n,d]=rational(a);return single(n,d*BigInt(b));};
function fields(save,id){const p=view(record(save,'players',id)),club=view(record(save,'clubs',p.getInt32(0x20,true))),career=view(save.career);return {p,club,career};}
/** Original 61ac98 allows the boundary value itself to gain one point. */
export function canImprovePlayer(save,id){const {p,club}=fields(save,id),limit={2:80,3:60,4:40,5:30}[club.getInt32(0x7c,true)];return limit===undefined||p.getInt32(0x28,true)<=limit;}
/** Original 618310, with Single stores and original extended constants. */
export function declineOlderPlayer(save,id){
 const {p,club,career}=fields(save,id),division=club.getInt32(0x7c,true),skill=p.getInt32(0x28,true);
 if((division===1&&skill<=35)||(division===2&&skill<=25)||(division===3&&skill<=10))return;
 const ageFactor=(p.getInt32(0x18,true)-31-(club.getInt32(0x98,true)>=20?2:0))|0;
 const amount=skill>=1&&skill<=50?scaledInteger(ageFactor,'declineLow'):skill>=51&&skill<=70?scaledInteger(ageFactor,'declineMid'):skill>=71&&skill<=100?f(ageFactor*1.5):0;
 if(amount<1)return;
 const mode=career.getInt32(0x168,true),option=career.getUint8(0x170)!==0;
 const increment=mode===2?div(amount,option?70:60):mode===4?div(amount,option?50:30):0;
 let progress=f(p.getFloat32(0x80,true)+increment),next=skill;
 if(progress>=1&&next>1){next--;progress=f(progress-1);}
 p.setInt32(0x28,Math.max(1,next),true);p.setFloat32(0x80,progress,true);
}
function divisor(club,career,youth){
 const strength=club.getInt32(0x98,true),human=club.getUint8(0x39)!==0,mode2=career.getInt32(0x168,true)===2,option=career.getUint8(0x170)!==0;
 const tier=!human&&strength>=21?0:!human&&strength>=19?1:2;
 const values=youth?(option?[[35,22],[37,24],[43,25]]:[[28,15],[30,18],[35,20]]):(option?[[45,32],[47,34],human?[40,30]:[53,35]]:[[38,25],[40,28],human?[35,25]:[55,40]]);
 return values[tier][mode2?0:1];
}
/** Original 61b518, youth progress at128/12c is distinct from senior skill. */
export function developYouthPlayer(save,id){
 const {p,club,career}=fields(save,id),age=p.getInt32(0x18,true);if(age>=21)return;
 let amount=age===16||age===17?div(20,divisor(club,career,true)):age===18||age===19?div(15,divisor(club,career,true)):age===20?div(5,divisor(club,career,true)):0;
 const talent=p.getInt32(0x30,true);if(talent>=1&&talent<=3)amount=addConstant(amount,'morale');else if(talent>=4&&talent<=6)amount=addConstant(amount,'skill41');else if(talent>=7&&talent<=8)amount=addConstant(amount,'talent7');else if(talent>=9&&talent<=10)amount=addConstant(amount,'potentialLow');
 if(amount<=0)amount=f(.01);
 let progress=f(p.getFloat32(0x12c,true)+amount),rating=p.getInt32(0x128,true);
 if(progress>=1&&rating<100){rating=(rating+1)|0;progress=f(progress-1);}
 p.setInt32(0x128,rating,true);p.setFloat32(0x12c,progress,true);
}
/** Original 61ad68, including the original talent caps and one-point gain. */
export function developSeniorPlayer(save,id){
 const {p,club,career}=fields(save,id),age=p.getInt32(0x18,true),strength=club.getInt32(0x98,true);let base=0;
 if(age>=16&&age<=31){
  if(strength>=19)base=age<=18||age===20||age===21?7:age===19||age===22?6:age<=28?5:4;
  else if(strength>=15)base=age<=17||age>=20&&age<=24?6:5;
  else if(strength>=11)base=age===18||age>=26?5:4;
  else base=age<=18?3:age===19?2:1;
 }
 let amount=div(base,divisor(club,career,false));
 if(p.getUint8(0x7c))amount=addConstant(amount,'selected');if(p.getInt32(0xe4,true)===3)amount=addConstant(amount,'morale');
 let skill=p.getInt32(0x28,true);const potential=p.getInt32(0x128,true),talent=p.getInt32(0x30,true);
 if(skill>=30&&skill<=40)amount=addConstant(amount,'skill30',-1);else if(skill>=41&&skill<=50)amount=addConstant(amount,'skill41',-1);else if(skill>=51&&skill<=70)amount=addConstant(amount,'selected',-1);else if(skill>=71&&skill<=100)amount=addConstant(amount,'skill71',-1);
 if(potential>0){if(potential<50)amount=addConstant(amount,'potentialLow',-1);else if(potential<80)amount=addConstant(amount,'selected',-1);if(talent>7)amount=addConstant(amount,'selected');}
 if(amount<=0)amount=f(.01);
 let progress=f(p.getFloat32(0x80,true)+amount);
 if(progress>=1&&skill<100&&canImprovePlayer(save,id)){skill=(skill+1)|0;progress=f(progress-1);}
 if(potential>0){if(skill>90&&talent<8)skill=90;if(skill>95&&talent<9)skill=95;}
 p.setInt32(0x28,Math.max(1,skill),true);p.setFloat32(0x80,progress,true);
}
/** Original 61ab38: senior pass first, then youth pass for every competition. */
export function developRoundPlayers(save,{senior=developSeniorPlayer,older=declineOlderPlayer,youth=developYouthPlayer}={}){
 const career=view(save.career),kind=career.getInt32(0x88,true),lastClub=career.getInt32(0x3c,true)+career.getInt32(0x40,true)-1,players=save.sections.find(s=>s.name==='players');
 if(kind===1||kind===3)for(let id=1;id<players.count;id++){
  const p=view(record(save,'players',id)),clubId=p.getInt32(0x20,true);if(clubId<0||clubId>lastClub||p.getUint8(0x120))continue;
  if(kind===1&&view(record(save,'clubs',clubId)).getInt32(0x7c,true)<=0)continue;
  (p.getInt32(0x18,true)<32?senior:older)(save,id);
 }
 for(let id=1;id<players.count;id++){const p=view(record(save,'players',id)),clubId=p.getInt32(0x20,true);if(clubId>=0&&clubId<=lastClub&&p.getUint8(0x120)&&p.getInt32(0x18,true)<21)youth(save,id);}
}
