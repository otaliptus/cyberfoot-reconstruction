import {record} from './save-format.mjs';
/** Original 006233cc: first matching HOME club, falling back to record zero. */
export function findDeciderFixture(fixtures,homeClub,awayClub){
 const index=fixtures.findIndex(f=>f.clubs[0]===homeClub||f.clubs[0]===awayClub);
 return index<0?0:index;
}
/** Automatic branch of 0061eb40; interactive shootout dialogs are separate. */
export function settleAutomaticDecider(save,savedFixtureId,fixtures,rng){
 const bytes=record(save,'records_0066afa0',savedFixtureId),v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
 const homeDraw=rng.below(7)+2,awayDraw=rng.below(7)+2;
 const fixtureIndex=findDeciderFixture(fixtures,v.getInt32(0,true),v.getInt32(4,true));
 const fixture=fixtures[fixtureIndex];if(!fixture)throw Error('Original decider requires transient fixture zero');
 const winner=homeDraw<awayDraw?2:1,high=winner===2?awayDraw:homeDraw;
 fixture.field170=1;fixture.field174=winner===2?high-1:high;fixture.field178=winner===2?high:high-1;
 v.setInt32(0x10,fixture.field174,true);v.setInt32(0x14,fixture.field178,true);
 return {winner,fixtureIndex};
}
