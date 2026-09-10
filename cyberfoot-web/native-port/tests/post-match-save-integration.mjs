import {readSave,writeSave,record} from '../save-format.mjs';import {careerAgenda,savedFixtures} from '../schedule.mjs';import {commitFixtureResult,archiveFixtureEvents,updateManagerStatistic} from '../match-records.mjs';import {applyMatchFinances} from '../match-finances.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
export function checkPostMatchSave(bytes){
 const save=readSave(bytes),agenda=careerAgenda(save),scheduled=agenda.fixtures[agenda.fixtureId],career=view(save.career);
 // Explicit fixture data tests serialization; these amounts are not a reconstruction of attendance generation.
 const fixture={id:1,savedFixtureId:agenda.fixtureId,clubs:scheduled.clubs,counters:{0x48:2,0x4c:1},income:125001,attendance:[100,200,300,400]};
 career.setInt32(0x16c,agenda.nextDay,true);career.setInt32(0x88,scheduled.competition,true);
 const section=save.sections.find(s=>s.name==='records_0066b160'),oldEvents=section.count;
 commitFixtureResult(save,fixture);archiveFixtureEvents(save,[[4,fixture.clubs[0],224,-1,40,1],[13,fixture.clubs[1],225,1,41,2],[4,fixture.clubs[1],226,-1,42,1]],1,123);
 applyMatchFinances(save,fixture);updateManagerStatistic(save,0,fixture.clubs[0],1,'j');updateManagerStatistic(save,0,fixture.clubs[0],3,'pr');
 const targets=['records_0066afa0','records_0066b160','records_0066afec','records_0066b474','records_0066b718','clubs'];const encoded=writeSave(save),loaded=readSave(encoded);
 for(const name of targets){const a=save.sections.find(s=>s.name===name),b=loaded.sections.find(s=>s.name===name);if(a.count!==b.count||a.data.some((n,i)=>n!==b.data[i]))throw Error(`Post-match save mismatch ${name}`);}
 const result=view(record(loaded,'records_0066afa0',fixture.savedFixtureId));
 if(result.getInt32(8,true)!==2||result.getInt32(12,true)!==1||result.getInt32(0x40,true)!==1000||result.getInt32(0x3c,true)!==125001||!savedFixtures(loaded)[fixture.savedFixtureId].complete)throw Error('Saved fixture result fields mismatch');
 const history=loaded.sections.find(s=>s.name==='records_0066b160'),h=view(history.data);if(history.count!==oldEvents+2||h.getInt32((oldEvents+1)*24+20,true)!==123)throw Error('Permanent event history index mismatch');
 return {scope:'original result/event/manager/finance save integration with explicit test result and attendance, not complete finalization',savedFixtureId:fixture.savedFixtureId,score:[2,1],completedFixture:true,archivedEvents:2,allChangedSectionsSurviveReload:true};
}
