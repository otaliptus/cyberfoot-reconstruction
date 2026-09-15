# Boxedwine fork — 15 September 2026

The custom emulator implements work-triggered UI queue wakeups and deferred XFlush presentation. In the first controlled comparison, automatic lineup improves from **6.45 to 5.31 seconds (17.6%)**. This preserves the original game's computation and drawing operations; the change is when the emulator waits for and presents their results. Initial startup and settings are essentially unchanged. The remaining seconds of UI loading are not solved by this change.

## Source and build

The fork is maintained in `cyberfoot-web/emulator-fork/` as a pinned upstream reference, a source patch, a build script and a local test server. Source checkout, SDK and build output are ignored under `output/emulator-fork/`; there is no duplicate Cyberfoot project. Boxedwine 26R1.0 resolves to commit `d7d5a1421bd781a81cbdf8f222cced11a7ebd76e`. The compiler is Emscripten 4.0.23. A tested-build manifest records source/patch/compiler identifiers and binary hashes.

The threaded WASM is 2,371,652 bytes, 36,544 bytes larger than the prior official binary. The 12-worker pool, fixed memory setting, game/Wine packages, English/Turkish resources, RNG configuration and match clocks remain unchanged. The existing official single-thread fallback is retained.

## Changes and mechanism

**Queue wakeups.** `sdlDispatch` still waits for callbacks whose operations require completion. After enqueueing, it also sends a notification through a dedicated Emscripten proxy queue. The main thread drains pending SDL events promptly. Concurrent pending notifications combine, the existing periodic loop remains a fallback, and nothing spins while idle. Startup notifications wait for the normal loop to establish main-thread identity.

**Display batching.** Upstream's `x11_Flush` calls `XServer::draw(true)`, potentially forcing composition, screen presentation and a synchronous main-thread round trip. In batching mode it marks presentation pending and returns; previously issued drawing operations have already modified the emulated surfaces. After processing native events, the normal main loop presents pending work at most once per 16 ms. It uses the existing compositor and pixel data. Window/display dirty flags are atomic, and window dirtiness is consumed under the surface lock, preventing completion of an old draw from clearing a later update.

This differs from the previous unsuccessful Delphi Repaint experiment: the change is in the emulator's XFlush/display boundary, downstream of the application's UI setters. Original game calculations, GDI requests and stored data are not bypassed.

**Instrumentation.** Native counters track queue waits, callback execution, worker resume delay, presentation, surface uploads, XFlush and XPutImage calls. Timings have millisecond resolution despite microsecond units. They are aggregate wall times across threads, not sampled CPU time. Composition overlaps callback execution and must not be added to it. The profiler records phase deltas; maximum values are lifetime high-water marks. This does not identify every individual Wine or Delphi hotspot.

Relevant upstream sources: [dispatch and wait](https://github.com/danoon2/Boxedwine/blob/26R1.0/platform/sdl/sdlcallback.cpp), [XFlush](https://github.com/danoon2/Boxedwine/blob/26R1.0/source/x11/x11common.cpp), [window composition](https://github.com/danoon2/Boxedwine/blob/26R1.0/source/x11/xserver.cpp), and [browser main loop](https://github.com/danoon2/Boxedwine/blob/26R1.0/source/sdl/emscripten/mainloop.cpp).

## Controlled comparison

Apple M2 Pro, Chromium 153 headless, isolated threaded runtime, 1280×960 viewport, fixed test-only seed 380188361. Fresh browser contexts, sequential runs, no CPU sampling or simultaneous compilation. Every mode uses the same instrumented binary and existing timer scheduler, isolating the feature switches from compiler/version changes.

Times represent the last canvas change sampled approximately every 100 ms, followed by a quiet interval and screenshot verification. They are not internal completion timestamps. Team-picker timing is excluded because of caret animation.

| Action | Fork control | Wakeups only | Batching only | Both |
| --- | ---: | ---: | ---: | ---: |
| Startup menu | 17.146 s | 17.506 s | 17.067 s | 17.240 s |
| Settings | 2.167 s | 2.868 s | 2.160 s | 2.137 s |
| Create career | 7.751 s | 7.790 s | 7.461 s | 7.454 s |
| Open lineup | 4.087 s | 4.197 s | 3.763 s | 3.869 s |
| Automatic lineup | 6.448 s | 6.161 s | 5.314 s | 5.314 s |

These single-run comparisons do not establish small gains or explain the wake-only settings outlier. Automatic-lineup improvements are larger and repeat across the two batching modes. The full gameplay validation provides another combined-mode observation.

For automatic lineup, the control records 178 synchronous dispatches, 457 ms in queue waits, 539 ms in callback execution, and 177 presentations. Wakeups alone reduce queue waits to 11 ms, while keeping 179 dispatches and 178 presentations. Both features reduce this to one synchronous dispatch, queue wait below the 1 ms measurement resolution, and 155 presentations. Thus the main improvement comes from removing display round trips; fewer frames alone do not explain it.

Idle renderer CPU over six seconds: control 0.354 CPU-seconds, wake 0.250, batching 0.348, both 0.318. Automatic-lineup renderer CPU over the complete 15-second observation: control 8.798, wake 8.941, batching 9.566, both 9.154. Both features improve latency with approximately 4% more measured active CPU in this run; no battery-life improvement is claimed.

## Validation and publication

The fork control's settings, career hub, open-lineup and automatic-lineup screenshots are pixel-identical to the prior build. Those four screens also match across all three experimental modes. Startup screenshot comparisons exclude the animated browser spinner.

The combined-mode repeat measured 5.323 seconds for automatic lineup. A full German Cup round reproduced Bochum's 2–0 defeat, the same match events, the next fixture and the auction sale. Automatic lineup, both match halves, results, next-fixture hub and post-sale screenshots are pixel-identical to the previous deployed build. The sale leaves 18 players and cash 3,491,649. The 2,656,864-byte save retains the 300 ms match timer and 50 ms background timer; a subsequent storage flush returns no error. This checks save creation and flushing, not a fresh-session reload or full-season progression.

No browser console or page errors occurred in the four comparisons or full validation. The original menu and match screenshots were visually inspected. The required web-game client passes against the integrated launcher and reports mode 3 with loading complete. The pinned build script reruns successfully; staged JS/WASM hashes match the tested artifacts. Generated compiler whitespace is retained byte-for-byte and marked as generated in Git attributes.

The launcher enables both improvements by default. `forkmode=0` disables them for comparison; `engine=single` retains the official fallback. Versioned JS/WASM requests and revalidation headers keep the pair consistent across browser caches. A 12,386,074-byte corresponding-source download is published separately and is not loaded while playing.

Compact experiment evidence is in `docs/evidence/emulator-fork-2026-09-15/`; full local captures are under `output/emulator-fork/profiles/`. Integrated default mode3, explicit mode0, visibility-handler switching and official single-thread startup/settings checks pass with no console/page errors. Published implementation commit `4e1164a` as deployment `59b77b63` at https://cyberfoot-original-emulator.pages.dev/. Public HTML, configuration scripts, compiled JS/WASM, patch and full corresponding-source archive match local bytes/hashes. A real public browser starts isolated in mode3, opens settings, dismisses its spinner and reports no console/page errors. Versioned WASM loading and absence of source-archive requests during play are verified; public screenshot inspected.
