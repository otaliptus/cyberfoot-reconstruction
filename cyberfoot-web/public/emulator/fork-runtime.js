// Configure the tested Boxedwine UI queue/display improvements.
Module.postRun.push(() => {
  if (window.cyberfootRuntime?.engine !== 'threaded') return;
  if (typeof _cyberfoot_mode !== 'function' || typeof _cyberfoot_metric !== 'function') throw Error('Expected the instrumented Boxedwine build.');
  const requested = Number(new URLSearchParams(location.search).get('forkmode') ?? 3);
  const mode = Number.isInteger(requested) && requested >= 0 && requested <= 3 ? requested : 3;
  _cyberfoot_mode(mode);
  window.cyberfootRuntime.forkMode = mode;
  const names = ['dispatches', 'queueUs', 'executionUs', 'resumeUs', 'maxQueueUs', 'maxExecutionUs', 'frames', 'compositionUs', 'uploads', 'uploadPixels', 'flushes', 'putImages', 'putImageUs', 'wakes', 'coalescedWakes', 'deferredFlushes', 'mainTicks'];
  window.cyberfootForkMetrics = () => Object.fromEntries(names.map((name, id) => [name, _cyberfoot_metric(id)]));
});
