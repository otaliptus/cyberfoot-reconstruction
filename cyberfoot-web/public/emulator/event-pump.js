// The threaded runtime's main loop handles queued native UI work and due timers.
// Service it between display frames so successive Windows UI calls can finish
// sooner. The guest clocks, match timers and rendering code are unchanged.
(() => {
  if (new URLSearchParams(location.search).get('pump') === 'original') return;
  const originalPrintErr = Module.printErr;
  Module.printErr = function(text, ...rest) {
    // Emscripten labels this generic rendering advice as an error. Our loop
    // services the native UI queue; retain the advice at informational level.
    if (window.cyberfootRuntime?.eventPump === 'responsive' && String(text).startsWith('Looks like you are rendering without using requestAnimationFrame')) {
      console.info(text);
    } else originalPrintErr.call(this, text, ...rest);
  };
  Module.postRun.push(() => {
    if (window.cyberfootRuntime?.engine !== 'threaded' || typeof MainLoop === 'undefined' || !MainLoop.func || typeof _emscripten_set_main_loop_timing !== 'function') return;
    const update = () => {
      // Keep the original browser behavior for a hidden tab. Foreground nested
      // timers are clamped by the browser; never spin with setImmediate.
      const mode = document.hidden ? 1 : 0;
      const result = _emscripten_set_main_loop_timing(mode, mode === 1 ? 1 : 0);
      if (result === 0) window.cyberfootRuntime.eventPump = mode === 0 ? 'responsive' : 'display';
    };
    document.addEventListener('visibilitychange', update);
    update();
  });
})();
