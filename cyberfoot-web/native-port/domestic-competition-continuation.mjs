import {continueCompetitionBatch} from './competition-batch.mjs';
import {developRoundPlayers} from './player-development.mjs';

/** End of 621ed0/6225c8. Player development precedes the league round/leg
 * increment. Presentation and additional batch work remain caller-owned. */
export function continueDomesticCompetition(save,runtime,effects,selectors){
 return continueCompetitionBatch(save,runtime,async(name,...args)=>{
  if(name==='results'){developRoundPlayers(save);return;}
  if(typeof effects[name]!=='function')throw Error(`Domestic continuation requires ${name}.`);
  return effects[name](...args);
 },selectors);
}
