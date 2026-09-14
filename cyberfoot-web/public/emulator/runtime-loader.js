/* Select the faster official runtime only when shared memory is available. */
(()=>{
 const requested=new URLSearchParams(location.search).get('engine');
 const threaded=requested!=='single'&&globalThis.crossOriginIsolated&&typeof SharedArrayBuffer!=='undefined';
 window.cyberfootRuntime={engine:threaded?'threaded':'single',isolated:globalThis.crossOriginIsolated};
 // Start the two large downloads while the emulator's WASM compiles and its
 // workers initialize. load() consumes these promises without downloading twice.
 CyberfootPackages.prefetch(Config.locateRootBaseUrl,getRootZipFile('root'));
 if(!getPayload('app-payload'))CyberfootPackages.prefetch(Config.locateAppBaseUrl,getAppZipFile('app'));
 const script=document.createElement('script');script.src=threaded?'threaded/boxedwine.js':'boxedwine.js';
 script.onerror=()=>window.reportFailure?.('Could not load the emulator. Reload, or use engine=single.');
 document.body.append(script);
})();
