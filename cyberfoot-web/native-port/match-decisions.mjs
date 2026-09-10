/** Drive one suspended original-engine invocation without restarting its work.
 * A yielded function invokes the host decision at the original modal boundary.
 */
export function runMatchDecisionFlow(flow){
 let step=flow.next();
 while(!step.done){
  const value=step.value();
  if(value&&typeof value.then==='function')throw TypeError('Asynchronous manager decisions require the asynchronous match API.');
  step=flow.next(value);
 }
 return step.value;
}
export async function runMatchDecisionFlowAsync(flow){
 let step=flow.next();
 while(!step.done)step=flow.next(await step.value());
 return step.value;
}
