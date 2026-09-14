// Browser-only feedback. Game timers, input and the executable stay untouched.
(() => {
  const panel = document.getElementById('loading');
  const label = document.getElementById('loading-label');
  const detail = document.getElementById('status');
  const spinner = document.getElementById('spinner');
  const canvas = document.getElementById('canvas');
  let starting = true;
  let failed = false;
  let busyCursor = false;
  let message = 'Preparing Cyberfoot…';
  let watch;
  const operations = new Set();
  function render() {
    panel.hidden = !starting && !failed && !busyCursor && !operations.size;
    spinner.hidden = failed;
    label.textContent = failed ? 'Unable to continue' : 'Please wait…';
    detail.textContent = failed || starting ? message : operations.size ? [...operations].at(-1) : 'The game is working…';
    canvas.setAttribute('aria-busy', String(!panel.hidden && !failed));
    const pointerEvents = starting && !failed ? 'none' : '';
    if (canvas.style.pointerEvents !== pointerEvents) canvas.style.pointerEvents = pointerEvents;
  }
  function status(text) {
    if (text && !failed) message = text;
    render();
    if (text) parent.postMessage({type: 'cyberfoot-status', text}, location.origin);
  }
  function fail(text) {
    failed = true;
    message = text;
    clearInterval(watch);
    clearInterval(busyWatch);
    render();
    parent.postMessage({type: 'cyberfoot-error', text}, location.origin);
  }
  function ready() {
    starting = false;
    clearInterval(watch);
    render();
    parent.postMessage({type: 'cyberfoot-status', text: 'Original game session · click inside to play'}, location.origin);
  }
  function runtimeStarted() {
    if (watch || failed) return;
    status('Starting Cyberfoot…');
    // Runtime initialization precedes Wine and the game's first complete paint.
    // Sample only during boot, using the language selector's final focus paint.
    const sample = document.createElement('canvas');
    sample.width = 128;
    sample.height = 16;
    const ctx = sample.getContext('2d', {willReadFrequently: true});
    let focusedFrames = 0;
    watch = setInterval(() => {
      if (canvas.width < 530 || canvas.height < 300 || failed) return;
      try {
        ctx.drawImage(canvas, canvas.width / 2 - 128, canvas.height / 2 - 32, 128, 16, 0, 0, 128, 16);
        const pixels = ctx.getImageData(0, 0, 128, 16).data;
        let blue = 0;
        for (let i = 0; i < pixels.length; i += 4) {
          if (pixels[i] < 100 && pixels[i + 1] > 100 && pixels[i + 1] < 190 && pixels[i + 2] > 190) blue++;
        }
        focusedFrames = blue > 100 ? focusedFrames + 1 : 0;
        if (focusedFrames >= 3) ready();
      } catch (error) {
        fail('Could not display the game. Please reload. ' + error.message);
      }
    }, 250);
  }
  // Wine sometimes leaves the browser's busy cursor in place until the next
  // mouse move. End that stale indicator after the screen has settled too.
  const activity = document.createElement('canvas');
  activity.width = 256;
  activity.height = 192;
  const activityContext = activity.getContext('2d', {willReadFrequently: true});
  let busyWatch;
  let lastCursor = '';
  function trackBusyCursor() {
    clearInterval(busyWatch);
    let previous;
    let lastChange = performance.now();
    busyWatch = setInterval(() => {
      if (starting || failed) return;
      try {
        activityContext.drawImage(canvas, 0, 0, 256, 192);
        const pixels = activityContext.getImageData(0, 0, 256, 192).data;
        let changed = 0;
        if (previous) {
          for (let i = 0; i < pixels.length; i += 4) {
            if (pixels[i] !== previous[i] || pixels[i + 1] !== previous[i + 1] || pixels[i + 2] !== previous[i + 2]) changed++;
          }
        }
        // Ignore a blinking text caret or a few cursor pixels.
        if (!previous || changed > 32) lastChange = performance.now();
        previous = pixels;
        if (performance.now() - lastChange >= 1500) {
          busyCursor = false;
          clearInterval(busyWatch);
          render();
        }
      } catch {
        clearInterval(busyWatch); // Keep the real cursor signal if sampling fails.
      }
    }, 250);
  }
  new MutationObserver(() => {
    const cursor = canvas.style.cursor;
    if (cursor === lastCursor) return;
    lastCursor = cursor;
    busyCursor = /^(wait|progress)$/.test(cursor);
    if (busyCursor) trackBusyCursor();
    else clearInterval(busyWatch);
    render();
  }).observe(canvas, {attributes: true, attributeFilter: ['style']});
  window.CyberfootLoading = {
    status, fail, runtimeStarted,
    begin(text) {
      const operation = text || 'Loading…';
      operations.add(operation);
      render();
      return () => { operations.delete(operation); render(); };
    },
    state: () => ({starting, failed, busy: busyCursor || operations.size > 0, visible: !panel.hidden})
  };
  window.reportStatus = status;
  window.reportFailure = fail;
  render();
})();
