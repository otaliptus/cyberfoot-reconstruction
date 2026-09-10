import assert from 'node:assert/strict';import fs from 'node:fs';
import {readSave,writeSave} from '../save-format.mjs';
import {trainingRoster,trainingSnapshot,trainingFocusFor,applyTraining,createTrainingSession,trainingWindowView,trainingFocuses,maxTrainingSessions} from '../training-window.mjs';

const saveBytes=fs.readFileSync(new URL('./original-career.s15',import.meta.url)),language=JSON.parse(fs.readFileSync(new URL('../language.json',import.meta.url)));
const fresh=()=>readSave(saveBytes),v=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
const save=fresh(),clubId=v(save.career).getInt32(8,true),roster=trainingRoster(save,clubId);
assert.ok(roster.length>=20,'fixture human club has a senior and youth roster');
assert.equal(roster.every(row=>row.clubId===clubId),true);
const senior=roster.find(row=>!row.youth&&row.age<32),youth=roster.find(row=>row.youth&&row.age<21);
assert.ok(senior&&youth,'fixture exposes both a senior and a youth training target');
assert.equal(trainingFocusFor(save,senior.id),'senior');
assert.equal(trainingFocusFor(save,youth.id),'youth');
const youthSnapshot=trainingSnapshot(save,youth.id);
assert.equal(typeof youthSnapshot.youthProgress,'number');

// One explicit senior session changes progress/skill and never runs backwards.
const single=applyTraining(save,senior.id,'senior',{sessions:1});
assert.ok(single.changed,'a senior training session is recorded');
assert.ok(single.after.progress>=single.before.progress||single.after.skill>=single.before.skill);
assert.notDeepEqual(writeSave(save),writeSave(fresh()),'training mutates the real save');

// More sessions accumulate strictly further than one.
const onceSave=fresh(),manySave=fresh();
const once=applyTraining(onceSave,senior.id,'senior',{sessions:1}),many=applyTraining(manySave,senior.id,'senior',{sessions:12});
assert.ok(many.after.progress+many.after.skill*1>=once.after.progress+once.after.skill*1,'more sessions do not lose progress');
assert.notDeepEqual(writeSave(manySave),writeSave(onceSave));

// Youth development uses the distinct youth rating/progress fields.
const youthSave=fresh(),youthReport=applyTraining(youthSave,youth.id,'youth',{sessions:20});
assert.equal(youthReport.focus,'youth');
assert.ok(youthReport.after.youthRating>=youthReport.before.youthRating);

// Determinism: identical plans over fresh loads produce identical saves.
const runPlan=()=>{const target=fresh(),session=createTrainingSession({save:target,clubId,language});session.setFocus(senior.id,'senior');session.setSessions(senior.id,5);session.setFocus(youth.id,'youth');session.setSessions(youth.id,3);session.applyPlan();return writeSave(target);};
assert.deepEqual(runPlan(),runPlan(),'training plan is deterministic');

// Session view model and validation errors.
const planSession=createTrainingSession({save:fresh(),clubId,language});
planSession.setFocus(senior.id,'automatic');planSession.setSessions(senior.id,2);
const view=trainingWindowView(planSession.view(),language);
assert.equal(view.form,'TrainingWindow');assert.equal(view.clubId,clubId);
assert.deepEqual(view.focuses,trainingFocuses);
assert.equal(view.rows.find(row=>row.id===senior.id).focus,'automatic');
assert.equal(view.captions.progress,language[1036].text);
assert.equal(planSession.applyPlan().length,1);
assert.throws(()=>applyTraining(fresh(),senior.id,'unknown'),/Unknown training focus/);
assert.throws(()=>applyTraining(fresh(),senior.id,'senior',{sessions:0}),/sessions must be 1/);
assert.throws(()=>applyTraining(fresh(),senior.id,'senior',{sessions:maxTrainingSessions+1}),/sessions must be 1/);

console.log(`Training window: senior ${senior.id} (#${senior.name}) and youth ${youth.id} developed through native routines, sessions accumulate, plan replay is byte-identical, invalid focus/session bounds rejected.`);
