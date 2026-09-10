import {readFileSync} from 'node:fs';import assert from 'node:assert/strict';import {prepareInjuryDialog,createInjuryDecision} from '../injury-dialog.mjs';
const cases=JSON.parse(readFileSync(new URL('./injury-dialog-vectors.json',import.meta.url)));
for(const c of cases){
 const state={players:c.players},fixture={clubs:c.clubs,substitutions:[...c.substitutions]},lineup={bench:c.bench};
 assert.deepEqual({...prepareInjuryDialog(lineup,1,fixture,c.side,state),substitutions:fixture.substitutions},c.expected);
 const flow=createInjuryDecision({lineup,injured:1,fixture,side:c.side,state,present:()=>{}});
 if(c.expected.rows.length){assert.equal(flow.confirm(),false);flow.select(c.expected.rows[0]);assert.equal(flow.confirm(),true);assert.equal(await flow.result,c.expected.rows[0]);assert.equal(flow.confirm(),false);}
 else if(c.expected.canContinueEmpty){assert.equal(flow.confirm(),true);assert.equal(await flow.result,-1);}
 else assert.equal(flow.confirm(),false);
}
console.log(`Original injury dialog: ${cases.length} candidate/count cases and selection flows passed.`);
