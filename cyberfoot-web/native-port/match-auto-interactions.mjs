/** Deterministic unattended resolution of the original modal match decisions.
 *
 * A watched match whose fixture involves a human club normally pauses on:
 *  - Form53 injury replacement (`chooseHumanReplacement`),
 *  - Form34 attacking penalty / Form54 defending penalty,
 *  - Form88 red-card and halftime tactics prompts.
 * The original automatic AI path never opens these dialogs, but a human club
 * still does. This module resolves each dialog with the first option in the
 * original row order (the same order the original TNextGrid renders) so a
 * watched match can finish unattended without altering the engine's random
 * sequence or the human decision branch.
 *
 * Selected defaults:
 *  - Injury: first replacement row; when the original dialog has no candidate
 *    the automatic path continues without a replacement (the original
 *    keeper-only branch can render a disabled empty list).
 *  - Penalty: first active taker row, then the original runup/shot/result
 *    timers are pumped to completion. Defending penalties are timer-only.
 *  - Tactics: the informational red-card/halftime Form88 is closed once shown.
 *
 * Sound: the decompiled game references sons/*.wav (gol1, goladv, fimjogo,
 * penalty, contusao, intervalo, expulsao), but cyberfoot-web contains no audio
 * assets, so this module never plays audio and callers keep recording sound
 * requests only.
 */
const waitIntervalMs=20,waitTimeoutMs=10000;
function delay(ms){return new Promise(resolve=>setTimeout(resolve,ms));}
async function waitFor(description,check){
 const start=Date.now();
 for(;;){
  const value=check();if(value)return value;
  if(Date.now()-start>=waitTimeoutMs)throw Error(`Automatic interaction timed out waiting for ${description}.`);
  await delay(waitIntervalMs);
 }
}
/** First row of the original Form53 list, in its rendered order. */
export function autoInjuryChoice(view){
 return {select:view.rows.length?view.rows[0].playerId:undefined,confirm:true,fallback:true};
}
/** First row of the original Form34 taker list; defending Form54 needs no selection. */
export function autoPenaltyChoice(view,context){
 return context.humanAttacks&&view.rows.length?{select:view.rows[0].playerId,kick:true}:{};
}
export function createMatchAutoInteractions({renderer,injuryHost,penaltyHost,tacticsHost}){
 if(!renderer||!injuryHost||!penaltyHost||!tacticsHost)throw TypeError('Automatic interactions require the match renderer and modal hosts.');
 const resolved={injury:0,penalty:0,tactics:0};
 async function settleInjury(context){
  const decided=injuryHost.decide(context);
  const active=await Promise.race([waitFor('the Form53 injury dialog',()=>injuryHost.active),decided.then(()=>null)]);
  if(!active)return decided;
  const choice=autoInjuryChoice(active.view);
  if(choice.select!==undefined)active.select(choice.select);
  if(!active.confirm()&&choice.fallback)active.resolveDefault();
  resolved.injury++;
  return decided;
 }
 async function settlePenalty(context){
  const decided=penaltyHost.decide(context);
  const active=await Promise.race([waitFor('the penalty dialog',()=>penaltyHost.active),decided.then(()=>null)]);
  if(!active)return decided;
  const choice=autoPenaltyChoice(active.view,context);
  if(choice.select!==undefined)active.select(choice.select);
  if(choice.kick)active.kick();
  let phases=0;
  while(active.view.phase!=='closed'){
   if(++phases>8)throw Error('Automatic penalty did not reach the original closed phase.');
   active.advanceTime(10000);
   await Promise.resolve();
  }
  resolved.penalty++;
  return decided;
 }
 async function closeTactics(){
  await waitFor('the Form88 tactics prompt',()=>renderer.frame?.form==='Form88'&&tacticsHost.active&&!tacticsHost.active.busy);
  if(!tacticsHost.close())throw Error('Automatic tactics prompt could not be closed.');
  resolved.tactics++;
 }
 return {injury:settleInjury,penalty:settlePenalty,tactics:closeTactics,get resolved(){return {...resolved};}};
}
