import {record} from './save-format.mjs';import {currentCareerDate} from './calendar.mjs';import {multiplyRound} from './x87.mjs';
const cashStore=n=>n<-(1n<<63n)||n>=(1n<<63n)?-(1n<<63n):n;
/** Financial block61fadb..620344 inside61f604. This is not the whole finalizer. */
export function settleMatchFinance({competition,day,weekday,income,clubs}){
 const addCash=(club,amount)=>{club.cash=cashStore(club.cash+BigInt(amount)*10000n);};
 const payroll=()=>{for(const club of clubs)club.payrollExpense=(club.payrollExpense+club.payroll)|0;};
 const weekly=(competition===1||competition===3)&&weekday===1;
 if(weekly){
  addCash(clubs[0],clubs[0].payroll>0?-clubs[0].payroll:clubs[0].payroll);
  // Original away nonpositive-payroll branch credits home using home payroll again.
  if(clubs[1].payroll>0)addCash(clubs[1],-clubs[1].payroll);else addCash(clubs[0],clubs[0].payroll);
  payroll();
 }
 if(competition===0&&day<10){for(const club of clubs)addCash(club,-club.payroll);payroll();}
 if(competition===2){const half=Math.trunc(income/2);for(const club of clubs){addCash(club,half);club.gateIncome=(club.gateIncome+half)|0;}}
 else if(competition<7||competition===10){addCash(clubs[0],income);clubs[0].gateIncome=(clubs[0].gateIncome+income)|0;}
 if(weekly)for(const club of clubs)if(club.debt>0){const interest=multiplyRound(club.debt,['17708874310761169551',-69]);addCash(club,-interest);club.interestExpense=interest;}
}
export function applyMatchFinances(save,fixture){
 const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength),career=view(save.career);
 const pairs=fixture.clubs.map(id=>[view(record(save,'clubs',id)),view(record(save,'records_0066afec',id))]);
 const clubs=pairs.map(([c,l])=>({cash:c.getBigInt64(0x48,true),payroll:l.getInt32(4,true),payrollExpense:l.getInt32(8,true),gateIncome:l.getInt32(0x10,true),debt:l.getInt32(0x20,true),interestExpense:l.getInt32(0x28,true)}));
 const serial=Math.trunc(currentCareerDate(save)),weekday=((serial+6)%7+7)%7+1;
 settleMatchFinance({competition:career.getInt32(0x88,true),day:career.getInt32(0x16c,true),weekday,income:fixture.income,clubs});
 pairs.forEach(([c,l],i)=>{c.setBigInt64(0x48,clubs[i].cash,true);l.setInt32(8,clubs[i].payrollExpense,true);l.setInt32(0x10,clubs[i].gateIncome,true);l.setInt32(0x28,clubs[i].interestExpense,true);});
}
