/* Select the tested threaded fork when shared memory is available. */
(()=>{
 const requested=new URLSearchParams(location.search).get('engine');
 const threaded=requested!=='single'&&globalThis.crossOriginIsolated&&typeof SharedArrayBuffer!=='undefined';
 window.cyberfootRuntime={engine:threaded?'threaded':'single',isolated:globalThis.crossOriginIsolated};
 // Keep the generated JS and WASM from the same build across browser caches.
 const build='cf-11916c1840d5';
 if(threaded)Module.locateFile=(path,prefix)=>prefix+path+(path.endsWith('.wasm')?'?v='+build:'');
 // Start the two large downloads while the emulator's WASM compiles and its
 // workers initialize. load() consumes these promises without downloading twice.
 CyberfootPackages.prefetch(Config.locateRootBaseUrl,getRootZipFile('root'));
 if(!getPayload('app-payload'))CyberfootPackages.prefetch(Config.locateAppBaseUrl,getAppZipFile('app'));
 const script=document.createElement('script');script.src=threaded?'threaded/boxedwine.js?v='+build:'boxedwine.js';
 script.onerror=()=>window.reportFailure?.('Could not load the emulator. Reload, or use engine=single.');
 document.body.append(script);
})();
