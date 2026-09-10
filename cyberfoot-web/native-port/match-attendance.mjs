import {record} from './save-format.mjs';
import {precision64,nearestEven,multiplyRound} from './x87.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const coefficients={reputation:[14757395258967641293n,-64],prestige:[11068046444225730970n,-66],country:[12912720851596686131n,-65],seats:[14757395258967641293n,-67],price:[17708874310761169551n,-67]};
const multiply=([n,d],v)=>precision64(n*BigInt(v),d);
const coefficient=(v,[n,e])=>precision64(BigInt(v)*n,1n<<BigInt(-e));
const rounded=([n,d])=>Number(BigInt.asIntN(32,nearestEven(n,d)));
/** Original 616014, including the country-29 self-comparison and post-cap minimum repairs. */
export function leagueAttendance(save,homeId,awayId,rng){
 const home=view(record(save,'clubs',homeId)),away=view(record(save,'clubs',awayId)),career=view(save.career),division=home.getInt32(0x7c,true);
 const original=Array.from({length:4},(_,i)=>home.getInt32(0x204+i*4,true)),capacity=[...original];
 const limits=division===4?[[3000,1000,2000],[15000,2000,13000],[1000,100,900],[150,50,100]]:division===3?[[15000,2000,13000],[35000,5000,30000],[4000,1000,3000],[500,200,300]]:division===2?[null,[70000,10000,60000]]:[];
 limits.forEach((limit,i)=>{if(limit&&capacity[i]>limit[0])capacity[i]=rng.below(limit[1])+limit[2];});
 const reference=view(record(save,'records_0066b608',division)),difference=capacity.map((_,i)=>(reference.getInt32(i*4,true)-home.getInt32(0x1f4+i*4,true))|0);
 const opening=career.getInt32(0x4c,true)===1&&career.getInt32(0x50,true)===1;
 const attendance=capacity.map(c=>{
  let value;if(opening)value=precision64(BigInt(rng.below(30)+50),100n);
  else {const draw=rng.below(20),[n,d]=coefficient(home.getInt32(0x54,true),coefficients.reputation),sum=precision64(n+BigInt(draw)*d,d);value=precision64(sum[0],sum[1]*100n);}
  return rounded(multiply(value,c));
 });
 const boost=(i,c)=>{attendance[i]=(attendance[i]+multiplyRound(attendance[i],c))|0;};
 if(away.getInt32(0x98,true)>home.getInt32(0x98,true)){boost(0,coefficients.prestige);boost(1,coefficients.prestige);}
 if(home.getInt32(0x3c,true)===29&&away.getInt32(0x3c,true)===29){boost(0,[1n,-2]);boost(1,coefficients.country);boost(2,coefficients.seats);}
 return finishAttendance(attendance,capacity,original,difference,home,rng,[1,2,0]);
}
function finishAttendance(attendance,capacity,original,difference,home,rng,order){
 for(const i of order)if(attendance[i]<0)attendance[i]=rng.below([100,200,50][i])+50;
 if(attendance[3]<0)attendance[3]=0;
 if(home.getUint8(0x39))difference.forEach((delta,i)=>{if(delta!==0){attendance[i]=(attendance[i]+rounded(multiply(coefficient(attendance[i],coefficients.price),delta)))|0;attendance[i]=Math.min(original[i],Math.max(0,attendance[i]));}});
 capacity.forEach((c,i)=>{if(attendance[i]>c)attendance[i]=c;});
 for(const [i,minimum,bound] of [[0,50,100],[1,100,200],[2,10,50]])if(attendance[i]<minimum)attendance[i]=rng.below(bound)+50;
 if(attendance[3]<0)attendance[3]=0;
 return attendance;
}
const capacityOf=home=>Array.from({length:4},(_,i)=>home.getInt32(0x204+i*4,true));
const percentage=(capacity,base,bound,rng)=>capacity.map(c=>rounded(multiply(precision64(BigInt(rng.below(bound)+base),100n),c)));
function priceDifferences(save,home,continental=false,guardDivision=false){
 const division=home.getInt32(0x7c,true);
 if(guardDivision&&(division<1||division>4))return [0,0,0,0];
 const reference=continental?[20,35,55,150]:Array.from({length:4},(_,i)=>view(record(save,'records_0066b608',division)).getInt32(i*4,true));
 return reference.map((n,i)=>(n-home.getInt32(0x1f4+i*4,true))|0);
}
/** Original national cup routine 616628. Valid cup stages are 0..5. */
export function cupAttendance(save,homeId,awayId,rng){
 const home=view(record(save,'clubs',homeId)),away=view(record(save,'clubs',awayId)),career=view(save.career),capacity=capacityOf(home),difference=priceDifferences(save,home);
 const stage=career.getInt32(0x110,true),mode=career.getInt32(0x168,true),h=home.getInt32(0x7c,true),a=away.getInt32(0x7c,true);
 const parameters=[[40,65,55,25],[40,65,55,25],[70,90,85,10],[80,95,90,5],[90,100,100,1],[95,100,100,1]][stage];
 if(!parameters)throw RangeError('Invalid original cup stage');
 const [low,high,equal,bound]=parameters;let attendance=[0,0,0,0];
 if((mode===4&&[3,4,5].includes(h)&&[1,2].includes(a))||(mode===2&&[5,3,2].includes(h)&&a===1))attendance=percentage(capacity,high,bound,rng);
 if((mode===4&&[1,2].includes(h)&&[4,5].includes(a))||(mode===2&&h===1&&[2,3].includes(a)))attendance=percentage(capacity,low,15,rng);
 if((mode===4&&[1,2].includes(h)&&[1,2].includes(a))||(mode===2&&h===1&&a===1))attendance=percentage(capacity,equal,bound,rng);
 if(attendance[0]===0&&attendance[1]===0)attendance=capacity.map(c=>{const draw=rng.below(30),[n,d]=precision64(BigInt(home.getInt32(0x54,true)),2n),[sum,den]=precision64(n+BigInt(draw)*d,d);return rounded(multiply(precision64(sum,den*100n),c));});
 return finishAttendance(attendance,capacity,capacity,difference,home,rng,[1,2,0]);
}
function continentalBase(reputation,round,secondary){
 const tier=reputation>=81?2:reputation>=51?1:0,index=(round>>>0)<4?0:round===4?1:round===5?2:round===6?3:round>=7&&round<=100?4:-1;
 if(index<0)return [0,0];
 const table=secondary?[
  [[15,25],[20,30],[30,40],[45,50],[60,60]],
  [[20,30],[25,30],[35,40],[55,55],[65,65]],
  [[25,35],[30,40],[40,45],[60,60],[65,75]]
 ]:[
  [[30,35],[50,60],[60,65],[70,75],[80,80]],
  [[40,45],[60,65],[70,75],[80,80],[85,85]],
  [[45,55],[60,65],[70,75],[80,85],[85,85]]
 ];return [...table[tier][index]];
}
/** 61794c always takes the same-country path because the machine code compares EAX with itself. */
export function continentalAttendance(save,homeId,awayId,rng,subgroup){
 const home=view(record(save,'clubs',homeId)),career=view(save.career),capacity=capacityOf(home),difference=priceDifferences(save,home,true);
 let [base]=continentalBase(home.getInt32(0x54,true),career.getInt32(0x194,true),false);
 if(subgroup===1)base-=5;if(subgroup===2)base=80;
 // Original first estimates are overwritten, but the four draws remain observable.
 for(const c of capacity)rounded(multiply(precision64(BigInt(rng.below(25)*2+75),200n),c));
 const attendance=percentage(capacity,base,15,rng);
 return finishAttendance(attendance,capacity,capacity,difference,home,rng,[0,1,2]);
}
/** Secondary continental competition, 617e08. */
export function secondaryContinentalAttendance(save,homeId,awayId,rng,subgroup){
 const home=view(record(save,'clubs',homeId)),away=view(record(save,'clubs',awayId)),career=view(save.career),capacity=capacityOf(home),difference=priceDifferences(save,home,false,true);
 let [same,different]=continentalBase(home.getInt32(0x54,true),career.getInt32(0x1a0,true),true);
 if(subgroup===2){same+=5;different+=10;}
 percentage(capacity,40,20,rng);
 const attendance=percentage(capacity,home.getInt32(0x3c,true)===away.getInt32(0x3c,true)?same:different,15,rng);
 return finishAttendance(attendance,capacity,capacity,difference,home,rng,[0,1,2]);
}
/** 613d57..613e53 retains the low signed 32 bits of every ticket-price product. */
export function ticketIncome(attendance,prices){return attendance.reduce((sum,n,i)=>(sum+Math.imul(n,prices[i]))|0,0);}
export function prepareLeagueAttendance(save,fixture,rng){
 return prepareFixtureAttendance(save,fixture,rng,{competitionType:1});
}
export function prepareFixtureAttendance(save,fixture,rng,{competitionType,subgroup=0}){
 const attendanceFunction={1:leagueAttendance,2:cupAttendance,4:continentalAttendance,6:secondaryContinentalAttendance}[competitionType];
 if(!attendanceFunction)throw RangeError('Attendance not implemented for this competition');
 const home=view(record(save,'clubs',fixture.clubs[0]));fixture.attendance=attendanceFunction(save,...fixture.clubs,rng,subgroup);
 fixture.field28=fixture.attendance.reduce((sum,n)=>(sum+n)|0,0);
 fixture.income=ticketIncome(fixture.attendance,Array.from({length:4},(_,i)=>home.getInt32(0x1f4+i*4,true)));
 return fixture;
}
