import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,record,writeSave,shortString} from '../save-format.mjs';
import {OriginalRandom} from '../match-core.mjs';
import {currentCareerDate} from '../calendar.mjs';
import {addContractMonths} from '../dates.mjs';
import {createContractSession,formatContractDate} from '../contract-window.mjs';
import {loanListedCount,loanedOutCount,loanedInCount,canListPlayerForLoan,listPlayerForLoan,withdrawPlayerFromLoanList,loanPlayerIn,loanPlayerOut,recallLoan,loanDivisionAllowed,createLoanSession} from '../loan-window.mjs';

const saveBytes=fs.readFileSync(new URL('./original-career.s15',import.meta.url)),language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url)));
const fresh=()=>readSave(saveBytes),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const save=fresh(),career=v(save.career),clubId=career.getInt32(8,true),date=currentCareerDate(save);
const playerId=224,playerRow=v(record(save,'players',playerId));
assert.equal(playerRow.getInt32(0x20,true),clubId,'fixture player 224 belongs to the human club');
const salaryUnits=Number(playerRow.getBigInt64(0x38,true)/10000n);

// Form24 view, invalid offer and refusal leave the real save untouched.
const initial=writeSave(save),session=createContractSession({save,id:playerId,rng:new OriginalRandom(2015),language});
const view=session.view();
assert.equal(view.form,'Form24');
assert.equal(view.properties.label32.HTMLText,`<p align="center"><shad>${language[378].text}</shad></p>`);
assert.equal(view.properties.combom.Items.length,4);
assert.equal(view.contract.name,shortString(record(save,'players',playerId),0,20));
assert.equal(view.contract.offer,String(salaryUnits));
assert.equal(view.properties.Label7.Caption.includes(formatContractDate(playerRow.getFloat64(0x70,true))),true);
assert.deepEqual(writeSave(save),initial,'contract view leaves the save untouched');
session.setOffer('nope');
assert.deepEqual(session.submitOffer(),{decision:'invalid',required:null});
session.setOffer('1');session.setDuration(2);
const rejected=session.submitOffer();
assert.equal(rejected.decision,'reject');assert.ok(rejected.required>1);
assert.deepEqual(writeSave(save),initial,'rejected offer leaves the save untouched');
assert.equal(session.counteroffer.required,rejected.required);
assert.equal(session.view().counteroffer.properties.label1.Caption,language[386].text);

// Accepting the counteroffer applies the verified renewal to the real save.
const accepted=session.acceptCounter();
assert.equal(accepted.decision,'accept');assert.equal(session.finished,true);
const renewed=v(record(save,'players',playerId));
assert.equal(renewed.getBigInt64(0x38,true),BigInt(rejected.required)*10000n);
assert.equal(renewed.getFloat64(0x70,true),addContractMonths(date,24));
assert.equal(renewed.getInt32(0xfc,true),0);
const reloaded=readSave(writeSave(save));
assert.equal(v(record(reloaded,'players',playerId)).getBigInt64(0x38,true),BigInt(rejected.required)*10000n);

// The same scripted negotiation is byte-deterministic.
const replay=()=>{const target=fresh(),run=createContractSession({save:target,id:playerId,rng:new OriginalRandom(2015),language});run.setOffer('1');run.setDuration(2);run.submitOffer();run.acceptCounter();return writeSave(target);};
assert.deepEqual(replay(),writeSave(save),'contract flow is deterministic');

// Excessive offers are refused by the original salary-limit branch.
const excessiveSave=fresh(),excessive=createContractSession({save:excessiveSave,id:playerId,rng:new OriginalRandom(2015),language});
excessive.setOffer('9999999');
const limit=excessive.submitOffer();
assert.equal(limit.decision,'excessive');assert.ok(limit.required>0);
assert.deepEqual(writeSave(excessiveSave),writeSave(fresh()),'excessive offer is not applied');

// Loan list gates: original TForm13 limit of two combined.
const loanSave=fresh();
assert.equal(loanListedCount(loanSave,clubId),0);assert.equal(loanedOutCount(loanSave,clubId),0);assert.equal(loanedInCount(loanSave,clubId),0);
assert.equal(canListPlayerForLoan(loanSave,playerId),true);
assert.equal(listPlayerForLoan(loanSave,playerId),true);
assert.equal(v(record(loanSave,'players',playerId)).getInt32(0x100,true),1);
assert.equal(loanListedCount(loanSave,clubId),1);
assert.equal(listPlayerForLoan(loanSave,225),true);
assert.equal(listPlayerForLoan(loanSave,226),false,'third listing is gated by the original pair limit');
assert.equal(withdrawPlayerFromLoanList(loanSave,playerId),true);
assert.equal(v(record(loanSave,'players',playerId)).getInt32(0x100,true),0);
assert.equal(loanListedCount(loanSave,clubId),1);

// Division gate (FUN_0059bd18) blocks borrowing from a top-division club.
const playerCounts=save.sections.find(s=>s.name==='players').count;
let topPlayer=-1,peerPlayer=-1,peerClub=-1;
for(let id=1;id<playerCounts&&(topPlayer<0||peerPlayer<0);id++){
 const row=v(record(save,'players',id));
 if(row.getInt32(0x20,true)===clubId)continue;
 const club=v(record(save,'clubs',row.getInt32(0x20,true))),division=club.getInt32(0x7c,true);
 if(division===1&&topPlayer<0)topPlayer=id;
 if(division===4&&peerPlayer<0){peerPlayer=id;peerClub=row.getInt32(0x20,true);}
}
assert.ok(topPlayer>=0&&peerPlayer>=0,'fixture has top-division and peer-division players');
assert.equal(loanDivisionAllowed(save,topPlayer,{clubId}),false);
assert.equal(loanDivisionAllowed(save,peerPlayer,{clubId}),true);

// Loan in: original schedule-return + complete-move pair, then recall.
const loanInSave=fresh(),inRng=new OriginalRandom(640218);
const inSession=createLoanSession({save:loanInSave,playerId:peerPlayer,clubId,rng:inRng,language});
assert.equal(inSession.mode,'in');
assert.equal(inSession.view().form,'Form59');
assert.equal(inSession.view().title,language[704].text);
assert.equal(inSession.view().message,language[705].text);
const parentClub=v(record(save,'players',peerPlayer)).getInt32(0x20,true);
const inReport=inSession.confirm();
assert.equal(inReport.completed,true);
const pending=loanInSave.sections.find(s=>s.name==='records_0066b05c');
const pendingRow=Array.from({length:pending.count},(_,i)=>i).find(i=>v(record(loanInSave,pending.name,i)).getInt32(0,true)===peerPlayer);
assert.ok(pendingRow!==undefined,'loan-in scheduled the original return row');
assert.equal(v(record(loanInSave,pending.name,pendingRow)).getInt32(0x10,true),parentClub);
assert.equal(v(record(loanInSave,pending.name,pendingRow)).getFloat64(8,true),date+180);
const borrowed=v(record(loanInSave,'players',peerPlayer));
assert.equal(borrowed.getInt32(0x20,true),clubId);
assert.equal(borrowed.getInt32(0x100,true),2);
assert.equal(borrowed.getFloat64(0x70,true),date+180);
assert.equal(loanedInCount(loanInSave,clubId),1);
const recalled=recallLoan(loanInSave,peerPlayer,{rng:inRng,date});
assert.equal(recalled.to,parentClub);
assert.equal(v(record(loanInSave,'players',peerPlayer)).getInt32(0x20,true),parentClub);
assert.equal(v(record(loanInSave,'players',peerPlayer)).getInt32(0x100,true),0);
assert.equal(loanedInCount(loanInSave,clubId),0);

// Loan out: the pending return points back at the human club.
const loanOutSave=fresh(),outRng=new OriginalRandom(640219);
const outReport=loanPlayerOut(loanOutSave,playerId,peerClub,{clubId,rng:outRng,date});
assert.equal(outReport.completed,true);
const outRow=v(record(loanOutSave,'players',playerId));
assert.equal(outRow.getInt32(0x20,true),peerClub);
assert.equal(outRow.getInt32(0x100,true),2);
const outPending=loanOutSave.sections.find(s=>s.name==='records_0066b05c');
const outIndex=Array.from({length:outPending.count},(_,i)=>i).find(i=>v(record(loanOutSave,outPending.name,i)).getInt32(0,true)===playerId);
assert.ok(outIndex!==undefined,'loan-out scheduled the original return row');
assert.equal(v(record(loanOutSave,outPending.name,outIndex)).getInt32(0x10,true),clubId);
assert.equal(v(record(loanOutSave,outPending.name,outIndex)).getFloat64(8,true),date+180);
assert.equal(loanedOutCount(loanOutSave,clubId),1);
assert.equal(canListPlayerForLoan(loanOutSave,226),true);
assert.equal(listPlayerForLoan(loanOutSave,226),true);
assert.equal(canListPlayerForLoan(loanOutSave,227),false,'listed + loaned-out pair is gated by the original limit');

// Whole loan flow is deterministic across fresh loads and seeds.
const loanReplay=()=>{const target=fresh(),rng=new OriginalRandom(650218);listPlayerForLoan(target,playerId);withdrawPlayerFromLoanList(target,playerId);loanPlayerIn(target,peerPlayer,{clubId,rng,date});recallLoan(target,peerPlayer,{rng,date});loanPlayerOut(target,playerId,peerClub,{clubId,rng,date});return writeSave(target);};
assert.deepEqual(loanReplay(),loanReplay(),'loan flow is deterministic');

console.log(`Contract/loan window: player ${playerId} refused at 1, accepted counteroffer ${rejected.required} for 24 months, excessive offer blocked; loan list cap, division gate, loan-in+recall and loan-out (${playerId} → club ${peerClub}) all mutated the real save deterministically.`);
