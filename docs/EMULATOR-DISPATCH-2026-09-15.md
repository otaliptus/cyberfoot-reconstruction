# Emulator CPU dispatch investigation — 15 September 2026

This pass investigates remaining delay in career creation and lineup changes. The candidate removes a virtual call when entering the web interpreter's instruction runner. Two control and two candidate measurements show median career creation 3.6% faster and automatic selection 4.4% faster. These are small local gains with limited samples; the complete gameplay session and CPU compatibility suite pass. Implementation commit `efc5aa7` is deployed as `85f44250` at https://cyberfoot-original-emulator.pages.dev/. Public verification passes.

## Evidence and exact scope

A diagnostic relink of the current release's existing objects adds function names with `--profiling-funcs`. It uses 10 ms CPU sampling through the existing profiler. The lineup phase still includes `NormalCPU::run()` (312 sampled wall milliseconds) and ordinary interpreter operations such as register/memory moves, pushes, branches and string moves. Waiting workers dominate the aggregate wall samples and are not active CPU work. The profile is used to choose an experiment, not as a speed benchmark. Archive reading is much less prominent than in the earlier pre-cache startup profile; this does not establish an exact before/after CPU saving because these are separate sampled runs.

The selected source path is `source/emulation/cpu/normal/normalPlatformMultiThreaded.cpp`. In this pinned interpreter build, `CPU::allocCPU` in `source/emulation/cpu/common/cpu.cpp` constructs `NormalCPU`, and the thread owns that CPU. Under `__EMSCRIPTEN__` without `BOXEDWINE_JIT`, the candidate calls `NormalCPU::run()` explicitly on the same object, allowing LTO to inline it. It does not replace or duplicate the run implementation. Other builds retain the original virtual call. The surrounding exception handling, termination checks, memory cleanup and thread teardown remain unchanged.

No game instructions, UI, executable, assets, clocks, RNG, archive cache or browser loader behavior change. The candidate is a clean build in `Build/DirectCpu` with the same pinned SDK, LTO flags and worker pool. Its WASM grows by five bytes, from 2,365,254 to 2,365,259. The prior ZIP-cache release was retained as the unchanged comparison build.

## First unsampled comparison

Same Apple M2 Pro, Chromium 153 headless, isolated threaded mode 3, 1280×960 viewport, test-only seed 380188361. Runs are sequential without CPU sampling or concurrent compilation. UI times are the last observed canvas change, sampled approximately every 100 ms and followed by a quiet window; they are not internal completion timestamps. Production randomness is unchanged.

| Action | Current release | Direct call |
| --- | ---: | ---: |
| Startup | 13.897 s | 14.324 s |
| Settings | 1.948 s | 1.971 s |
| Create career | 6.871 s | 6.661 s |
| Open lineup | 3.782 s | 3.581 s |
| Automatic lineup | 4.831 s | 4.612 s |

Settings, career, lineup and automatic-selection screenshots are pixel-identical between these runs. Startup/settings show no improvement in this pair. The small in-game differences require repeats before making a release claim. No battery, general device or broad performance guarantee is implied.

## Repeat comparison

| Action | Control median | Candidate median | Change |
| --- | ---: | ---: | ---: |
| Startup | 13.722 s | 13.853 s | 1.0% slower |
| Settings | 1.956 s | 1.905 s | 2.6% faster |
| Create career | 6.863 s | 6.613 s | 3.6% faster |
| Open lineup | 3.629 s | 3.522 s | 3.0% faster |
| Automatic lineup | 4.767 s | 4.557 s | 4.4% faster |

Two runs per build, with order candidate/control/control/candidate. Both candidate career and automatic-lineup measurements are below both corresponding control measurements. Settings and opening-lineup ranges overlap, and startup shows no improvement; these are not strong claims for those screens. `comparison.json` retains every timing. The second candidate sample is from the complete match/transfer/save session. No benefit in battery consumption is established.

## Gameplay validation

The complete 16-fixture cup round, same Bochum 0–2 Dortmund result and events, next fixture and player auction pass. Settings, career, lineup, both match halves, results, next-fixture hub and auction screenshots are pixel-identical to the current ZIP-cache release. The match screenshot is inspected. The sale leaves 18 players and cash 3,491,649. Save creation produces 2,656,864 bytes/version 1, retaining the 300/50 ms timers; a subsequent storage flush succeeds in 1 ms. This is not end-to-end save duration. No browser console/page errors. Fresh-session save reload and a full season are not tested in this pass.

The source patch reverse-check and release manifest update pass. The corrected CPU suite passes 805 test groups with zero failures and no browser page errors. This covers 16/32-bit addressing, page boundaries, self-modifying code, locked instructions, arithmetic, floating point, MMX and SSE; these are groups, not individual assertions. The pinned release build script reruns successfully and the staged binary identities match. Four fresh ordinary-randomness launches pass in 14.158, 13.771, 14.380 and 14.125 seconds without browser errors. These include navigation/spinner readiness and are not mixed into the profiler timing table. The required game client reaches the original menu and its screenshot is inspected. Default threaded mode 3, explicit mode 0, visibility-handler switching and the single-thread fallback pass startup/settings checks; the settings screenshot is inspected. Targeted JS lint, Python syntax, patch reverse-application and staged runtime hashes pass. JS/WASM URLs use `cf-11916c1840d5`, and the optional corresponding-source archive is 12,388,104 bytes. No earlier intermittent startup stall was reproduced in these checks; its cause remains unresolved. Public startup/settings and spinner dismissal pass in isolated mode 3 without browser errors. HTML, runtime configuration, JS/WASM, patch and full corresponding-source archive match the tested local bytes and hashes. The browser loads version `cf-11916c1840d5`; optional source files are not fetched during play. The public settings screenshot is pixel-identical to the inspected local screen. See `public-check.json` in the evidence. Temporary local test servers are stopped.

The first custom CPU-test build timed out with zero test groups because the pinned makefile selects `TEST_SOURCES` automatically only for `Build/Test`. That empty build is not a compatibility result. The corrected command explicitly passes the literal `SRCS=$(TEST_SOURCES)` make argument for `Build/TestDirect`; the README now records this requirement. Production source/build flags were unaffected by the test recipe mistake.
