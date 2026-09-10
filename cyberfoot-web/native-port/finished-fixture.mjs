import {record} from './save-format.mjs';import {commitFixtureResult,appendRows} from './match-records.mjs';import {applyCompetitionResult} from './competition-result.mjs';import {applyMatchFinances} from './match-finances.mjs';import {multiplyRound} from './x87.mjs';
const view=b=>new DataView(b.buffer,b.byteOffset,b.byteLength);
/** Original620344..6204af: final displayed counters are adjusted after settlement. */
export function adjustFinishedCounters(fixture,playStyles){
 const c=fixture.counters;
 for(const off of [0x90,0x94])if((c[off]??0)===0)c[off]=1;
 const home=c[0x48]??0,away=c[0x4c]??0;
 if(home!==away){const off=home>away?0x8c:0x88;c[off]=multiplyRound(c[off]??0,['16602069666338596454',-64]);}
 for(let side=0;side<2;side++)if(playStyles[side]===2){const off=0x88+side*4;c[off]=multiplyRound(c[off]??0,['12912720851596686131',-64]);}
}
/** Per-fixture settlement61f691..6204af. Match-history/ratings, knockout outcomes,
 * competition progression and final presentation follow this in the original.
 */
export function settleFinishedFixture(save,fixture,state,options={}){
 const career=view(save.career),competition=career.getInt32(0x88,true),clubs=fixture.clubs.map(id=>view(record(save,'clubs',id)));
 if(competition===3&&!Number.isInteger(options.competition3TableValue))throw Error('Original competition3 scheduling entry is required.');
 commitFixtureResult(save,fixture);
 if(competition>0&&(competition<7||competition===10)){
  const home=fixture.counters[0x48]??0,away=fixture.counters[0x4c]??0,inc=(i,off,n)=>clubs[i].setInt32(off,(clubs[i].getInt32(off,true)+n)|0,true),off=competition*12;
  if(home>away)inc(0,0x234+off,3);else if(home<away)inc(1,0x234+off,3);else{inc(0,0x234+off,1);inc(1,0x234+off,1);}
  inc(0,0x238+off,home);inc(0,0x23c+off,away);inc(1,0x238+off,away);inc(1,0x23c+off,home);
 }
 // Original catches access exceptions for each club's bench-clearing loop.
 for(const club of clubs)state.lineups?.[club.getInt32(0x60,true)]?.bench?.fill(0);
 if(competition>0)applyCompetitionResult(save,fixture,options);
 if(competition<7||competition===10)appendRows(save,'records_0066ae84',[[...fixture.clubs,fixture.counters[0x48]??0,fixture.counters[0x4c]??0,career.getInt32(0xc0,true),competition]]);
 applyMatchFinances(save,fixture);
 adjustFinishedCounters(fixture,clubs.map(c=>c.getInt32(0x220,true)));
}
