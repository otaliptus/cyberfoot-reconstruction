/* Select the faster official runtime only when shared memory is available. */
(()=>{
 const requested=new URLSearchParams(location.search).get('engine');
 const threaded=requested!=='single'&&globalThis.crossOriginIsolated&&typeof SharedArrayBuffer!=='undefined';
 window.cyberfootRuntime={engine:threaded?'threaded':'single',isolated:globalThis.crossOriginIsolated};
 const script=document.createElement('script');script.src=threaded?'threaded/boxedwine.js':'boxedwine.js';
 script.onerror=()=>window.reportFailure?.('Could not load the emulator. Reload, or use engine=single.');
 document.body.append(script);
})();
