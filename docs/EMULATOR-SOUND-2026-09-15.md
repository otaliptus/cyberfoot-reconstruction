# Sound-enabled original emulator — 15 September 2026

The standalone landing page now opens Cyberfoot with sound enabled and displays the exact requested text, `username: esektas, code: 5222334`, above the game. A 40px note area keeps the text outside the canvas, and the loading indicator sits below it. The new tracked `public/emulator/index.html` supplies the standalone deployment's root redirect. Explicit `sound=false` remains available; this does not enter or validate registration details.

Enabling the setting exposed two existing audio defects. The official minimal Wine image contained the system stub for `mciwave.dll` but omitted its implementation, so the game's WaveAudio devices could not open. The matching implementation and two PE stubs from the pinned official full Wine11 image are now in the compatibility overlay. Existing overlay entries remain byte-identical. This adds 16,272 download bytes, with a versioned overlay request preventing reuse of the old cached archive. `scripts/extend-emulator-audio.py` checks the full-image hash and reproduces the addition idempotently.

With that driver restored, a match exposed a worker-thread crash in the pinned SDL web audio backend: context creation is proxied to the main thread, while its sample-rate lookup reads the worker's undefined `Module.SDL2`. The Boxedwine fork now sends enabled audio open/write/close/activation/shutdown operations through its existing synchronous main-thread dispatch. Audio callbacks, voice lists and buffer mutations therefore share the browser thread. Open-state polling uses an atomic flag. Synchronous dispatch retains caller return values and buffer lifetimes. The muted path and other native targets retain their prior execution paths. No game instructions, registration checks or clocks were changed.

The clean `Build/AudioMain` retains the pinned SDK, LTO flags and 12-worker pool. WASM is 2,368,239 bytes, 2,980 bytes larger; generated JS remains 231,075 bytes, with a new matching hash. JS/WASM URLs use `cf-f598b8995579`. The source patch, manifest, build/stage/server defaults and corresponding source archive are updated. The pinned build rerun and staging hash checks pass; corresponding source is 12,388,567 bytes.

## Validation

- Original career creation, automatic lineup, both match halves and the complete 16-fixture results screen run without browser errors. Bochum loses 0–2 to Dortmund in the fixed-seed check. Screenshots are inspected.
- Real output buffers contain audio: 1,080 observed buffers, 36 with nonzero output, peak magnitude 0.743647; AudioContext state is `running`. This verifies delivered audio samples, not a subjective speaker-listening check. The earlier driver-only worker failure is retained as pre-fix evidence.
- Default sound-enabled, explicit muted and single-thread fallback startup/settings checks pass. Desktop/mobile note visibility and horizontal bounds pass. Full match audio is verified in the default threaded runtime; fallback match audio and full seasons are not covered here.
- The required game client, source patch reverse-check, build reproduction and JS/Python syntax checks are part of the validation. Targeted lint for maintained scripts/runtime loader passes. The inherited shell has 156 baseline lint diagnostics; the changed shell has the same diagnostic messages, with no new ones.
- The performance profiler maps its recorded reference clicks into the canvas's current bounds, so the new top note does not invalidate existing action recordings. `scripts/check-emulator-audio.mjs` preserves the audio integration check.

Compact evidence is in `docs/evidence/emulator-sound-2026-09-15/`; full screenshots and test output remain under ignored `output/emulator-sound/`. Screen-size checks record backing-canvas versus displayed dimensions separately; they are geometry checks, not fresh speed benchmarks.

## Window size and performance

Fresh Chromium contexts with the same requested 1024×768 guest resolution produced these measured dimensions:

| Browser window | Device pixel ratio | Canvas backing pixels | Displayed canvas | Backing pixel count |
| --- | --- | --- | --- | --- |
| 1280×960 | 1 | 1024×768 | 1024×768 | 786,432 |
| 1280×720 | 1 | 1280×720 | approximately 1209×680 | 921,600 |
| 390×844 | 1 | 390×844 | approximately 372×804 | 329,160 |
| 1280×960 | 2 | 1024×768 | 1024×768 | 786,432 |

The SDL window creation path substitutes the browser's dimensions when the requested guest display does not fit, scaling each axis independently in whole percentages. Therefore a shorter browser window can increase the backing pixel count (17.2% in this example), even though CSS shrinks the displayed canvas below the new header. High device pixel ratio did not multiply backing resolution in this check. Resizing an already-running page can differ from a fresh launch. Narrow-window stretching is existing emulator behavior.

CSS-only scaling leaves guest work and canvas pixel count unchanged. Increasing actual render width and height increases pixel work; doubling both means four times as many pixels, not four times the total game latency. The previous lineup control measured about 409ms of composition during a 4.591s operation. Most observed latency was elsewhere, so resizing alone is unlikely to solve slow game screens. These are geometry observations and a prior profile, not a new screen-size speed comparison.

The fresh narrow-window check also uncovered a launcher defect: its boot detector refused to inspect canvases narrower than 530px, leaving the spinner active and blocking input after the menu was rendered. The detector now samples the same guest region using SDL's axis scaling. Desktop, short-window, fresh narrow-window and device-pixel-ratio-2 starts all dismiss the spinner. No change to guest resolution, scaling behavior or game code is involved.
