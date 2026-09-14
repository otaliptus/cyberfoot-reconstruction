# Cyberfoot emulator performance — 15 September 2026

This pass reduces the original emulator's package download by **7,394,865 bytes (13.6%)** and improves automatic lineup selection by about **15%** in the tested career. It preserves the game executable, graphics, logic, RNG configuration and match timers. Career creation remains about eight seconds; this is a targeted improvement, not a general speed multiplier.

## Changes selected

The threaded emulator now services its native UI queue using Emscripten's browser-timer scheduler in foreground tabs. Previously it serviced the queue on animation frames. Successive synchronous Windows UI operations can therefore complete between display frames. Hidden tabs revert to the original animation-frame scheduler, and the single-thread fallback is unchanged. `pump=original` provides an explicit scheduling opt-out.

This uses the existing runtime scheduler, without modifying the emulator binary or adding an independent polling loop. Browser timer clamping limits the repeated timer callbacks. It does not use the no-delay `setImmediate` experiment, which consumed a full CPU core even while idle. The implementation is `public/emulator/event-pump.js`.

The downloadable Wine ZIP now omits 1,410 entries under `opt/wine/include/`: SDK headers and interface definitions used when compiling software. The original source archive remains intact. All retained game and runtime file contents are byte-identical. Package tests compare 1,721 Wine entries and 1,684 game entries against the source archives, check CRCs, validate the exact omission policy, and exercise download integrity, concurrency, retries and the existing RNG repair.

| Package bytes | Before | After |
| --- | ---: | ---: |
| Wine transport | 45,702,970 | 38,308,105 |
| Game transport | 8,566,343 | 8,566,343 |
| Combined | 54,269,313 | 46,874,448 |

These totals exclude the unchanged emulator JavaScript/WASM and graphics overlay. The reduction helps network transfer; it is not a claim that local boot became 13.6% faster.

## Measurements

Apple M2 Pro, 12 logical CPUs, 16 GiB RAM; Chromium 153 headless; isolated threaded runtime; 1280×960 viewport and 1024×768 canvas. Each run uses a fresh browser session and seed 380188361 in the test page only. Production continues to seed randomly. No CPU sampling is enabled. Runs were sequential, with no simultaneous benchmark browsers launched for these comparisons.

Times below are the last observed canvas change followed by a quiet interval, sampled approximately every 100 ms and checked against screenshots. They exclude the rest of the fixed observation window. Team selection is omitted because caret/small UI changes interfere with settling detection.

| Action | Fresh baseline | Combined build |
| --- | ---: | ---: |
| Focused menu from navigation | 18.32s | 18.50s |
| Open new-game settings | 2.42s | 2.59s |
| Create career | 8.30s | 8.11s |
| Open lineup | 4.40s | 4.19s |
| Automatic 4-4-2 | 7.81s | 6.67s |

An independent timer-scheduler experiment measured 6.45s for the same automatic lineup. The entire final lineup screenshot is pixel-identical to the baseline. Changes of a few tenths of a second in other actions should not be treated as established improvements or regressions from these small samples.

Idle renderer CPU over six-second observation windows was 0.342 CPU-seconds in the baseline, 0.302 in the isolated timer-scheduler experiment, and 0.221 in the combined build. These include the benchmark's canvas probes. Automatic-lineup renderer CPU over the entire 15-second observation window rose from 8.31 to 8.80 CPU-seconds in the combined run: the latency improvement is not a promise of lower active CPU usage.

## Gameplay validation

The combined build completed the same 16-fixture German Cup round as the earlier control: Bochum lost 2–0 to Dortmund, the career advanced to the next fixture, and selling Luthe left 18 players and cash 3,491,649. Results, next-fixture hub and post-transfer screenshots are pixel-identical to the September 14 control. The new lineup screenshot is also pixel-identical to this pass's fresh baseline.

The test saved a 2,656,864-byte career. The saved match timer is still 300 ms and the background timer 50 ms; a subsequent storage flush returned no error. This confirms the configured timing values, not the exact end-to-end durability latency of a save click. No browser page errors occurred. The generic Emscripten animation-frame advisory for the deliberately timer-scheduled loop is retained at informational level; other error output is unchanged. The recorded full-gameplay log predates that log-level adjustment. Observed match segments were 45.59 + 39.52 + 6.70 seconds, including programmed pacing and excluding user waits; this does not establish a substantial match-speed improvement over the earlier approximately 93-second run.

Default scheduling, visibility-handler switching, pump=original, and single-thread fallback startup/settings checks also pass. The required web-game client screenshot was inspected.

## Experiments rejected

| Experiment | Automatic lineup | Reason not shipped |
| --- | ---: | --- |
| Unpack Wine ZIP entries once before emulation | 7.94s | No gameplay gain; over 140 MB larger archive |
| Final WebAssembly O3 optimization | 7.87s | Smaller binary but no measured gameplay gain |
| Aggressive WebAssembly function inlining | 7.70s | Binary grew from 2.34 MB to 8.95 MB without useful gain |
| Pixel-identical PNG scanlines with simpler decoding | 7.69s | Small/no gain; larger download |
| No-delay event polling | 6.14s | About one full CPU core consumed while idle |

A preliminary optimizer run enabling every experimental WebAssembly feature produced unsupported compact imports. It was rejected before gameplay and was never published. The shipped WASM remains the original release binary.

## Evidence and remaining work

Compact results, environment, replay actions and comparison screenshots are in `docs/evidence/emulator-performance-2026-09-15/`. Full local captures are in ignored `output/perf-2026-09-15/`. The profiler now waits for the startup spinner to release input before sending actions, and fails promptly on a reported loading failure.

Further major improvements to career creation require tracing the original game's work inside the emulator and isolating expensive calculations or drawing calls. The tested archive and compiler changes did not solve that bottleneck. Results here cover one desktop and one fixed career, not a range of phones or full seasons.

The scheduling rationale is supported by the matching Boxedwine source: [threaded main loop](https://github.com/danoon2/Boxedwine/blob/26R1.0/source/sdl/emscripten/mainloop.cpp) processes due timers and input events, while [SDL event processing](https://github.com/danoon2/Boxedwine/blob/26R1.0/platform/sdl/knativeinputSDL.cpp) executes queued callbacks and wakes waiting threads. The rejected archive experiment followed inspection of [ZIP read positioning](https://github.com/danoon2/Boxedwine/blob/26R1.0/source/io/fszip.cpp), which can restart decompression. These source observations informed experiments; the measurements determine the selected changes.
