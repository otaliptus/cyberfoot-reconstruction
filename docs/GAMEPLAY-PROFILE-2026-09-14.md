# Cyberfoot emulator gameplay profile — 14 September 2026

The slowest repeatable interactions measured so far are career creation and automatic lineup selection. These take roughly 8 seconds even with CPU sampling disabled. The application spends this time in the emulator/game process after all downloads have finished. No production code or game settings were changed for this investigation.

## Method

Local Apple M2 Pro, 12 logical CPUs, 16 GiB RAM, macOS 26.4; headless Chromium 153.0.8010.12; 1024×768 game canvas in a 1280×960 viewport. The current threaded Boxedwine runtime and English/Turkish packages were served locally with cross-origin isolation. This removes public-network latency from gameplay measurements; it is not a mobile-device or slow-network benchmark.

Two independent browser sessions ran the original game. The first collected 1ms CPU samples from the page and 12 workers. The second disabled CPU sampling and reused the first session's seed 380188361 in the isolated test page. It reproduced Bochum, the same 19-player initial squad, the German Cup fixture against Borussia Dortmund, and the same 2–0 defeat. The seed override is confined to the profiling script; the published game still seeds randomly.

Each action records process CPU counters, screenshots and approximately 100ms canvas samples. The reported interaction time is the last observed visual change followed by a quiet observation window, not the duration of the entire test window. Small changes, caret blinking and partial painting can invalidate that criterion, so screenshots are inspected and uncertain phases are excluded from headline timing comparisons. The startup detector waits for the English language selector's focus highlight at known canvas coordinates; it is specific to this fixture and viewport. Inputs include an 80ms mouse press and local automation overhead.

## Key findings

- Local package/WASM downloads finished at 0.52s; the focused English menu appeared at 18.07s. Startup after download remains a substantial cost.
- Opening New Game settled at 2.47s; creating the career at 8.43s; opening Line-up at 4.40s; automatic 4-4-2 selection at 7.68s. The longer automatic-lineup observation is important: the first six-second sampled test ended while shirts/labels were still being painted.
- An idle six-second control used 0.287 renderer CPU-seconds, including canvas probes. The sampled equivalent used 3.291 CPU-seconds. Sampling all worker stacks introduces large CPU overhead; sampled idle CPU must not be presented as the game's normal idle consumption. Interaction times were much closer: New Game 2.50s sampled vs 2.47s control, career creation 8.17s vs 8.43s.
- The first half settled at 45.87s and the second half reached a 90th-minute red-card pause at 40.03s after Resume. These include programmed match pacing, simulation and painting. They exclude the human delay before clicking Resume. A pause waiting for the user is not a processing stall.
- Most page-thread samples are idle. Worker stacks contain the running emulation code and extensive synchronization waits. There is no evidence that further trimming the web wrapper or locale files would fix these multi-second in-game interactions.

## Control timings

These are approximate user-visible completion times, using the final visual update followed by a quiet window and screenshot inspection. Renderer CPU time in the raw files covers the entire observation window and must not be confused with these timings.

| Action | Time |
| --- | ---: |
| Focused main menu from navigation | 18.07s |
| Open New Game settings | 2.47s |
| Create a career | 8.43s |
| Open Line-up | 4.40s |
| Select automatic 4-4-2 | 7.68s |
| Kickoff through fully drawn halftime panel | 45.87s |
| Resume through the 90th-minute red-card panel | 40.03s |
| Resume after the card through full-round results | 6.92s |
| Results Continue through next fixture/club screen | 5.03s |
| Open player transfer dialog | 0.82s |
| Complete auction sale and update roster/cash | 4.30s |
| Close save dialog after Save | 0.61s |

The match segments total about 92.82 seconds to results, excluding time waiting for the user at the two prompts. This is not 92.82 seconds of pure computation. Reading the actual test save confirmed a 300ms watched-match timer and 50ms background timer. The recovered match clock uses two ticks per displayed minute, so regulation playback alone represents roughly 54 seconds at the configured pace, before stoppage time and UI transitions. Those timers were not changed. Source evidence: `native-port/match-preparation.mjs` (original 612a00) and `native-port/match-score-plan.mjs:matchMinute` (original 651e70), with the save values in `save-and-timers.json`.

The sale removed Luthe from the roster (19→18 players) and left cash 3,491,649 in both runs. The save contained 2,656,864 bytes; a subsequent explicit IndexedDB flush completed in 3ms with no error. That flush occurred after the ten-second observation, so it does not establish end-to-end save durability latency. No browser page errors occurred. Existing Wine compatibility diagnostic messages remain in the logs.

## Interpretation and next experiments

Prioritize automatic lineup and form creation/redrawing. A symbolized emulator build or guest-level tracing of those operations should identify which original Windows calls and repeated paint operations account for the delay. Test batching redundant redraws or reusing decoded artwork only after proving they are the hot path; preserve the final UI and game calculations. At present the measurements locate the cost inside emulation but do not distinguish all Delphi computations from Wine painting and memory emulation.

Avoid optimizing a function solely because it dominates sampled stacks: the large `wasm-function[7651]` frame structurally matches a condition-variable wait (mutex ownership check, optional nanosecond limit, waiter queue, unlock/wait/relock), rather than a useful-work loop. This is an inference from the binary and the [Emscripten/musl source](https://raw.githubusercontent.com/emscripten-core/emscripten/main/system/lib/libc/musl/src/thread/pthread_cond_timedwait.c), not a symbol-table identification of this release. Other hot frames are unsymbolized; assigning them definitive game-function names would overstate the evidence. The matching [Boxedwine CPU source](https://raw.githubusercontent.com/danoon2/Boxedwine/26R1.0/source/emulation/cpu/normal/normalCPU.cpp) provides the next instrumentation boundary.

The team-selection quiet-time detector was disturbed by small persistent visual changes even with a text-input mask, so that phase is retained as raw evidence but not reported as a reliable completion latency. The first sampled startup recording ended manually and includes idle time; use the automatically detected control startup instead. Results are from one machine and one fixed career, with selected operations repeated under two instrumentation modes, not a statistically representative device study.

## Reproduction and evidence

`scripts/profile-emulator.mjs` provides interactive JSON commands for measured actions, CPU recording, screenshots and read-only state inspection. `PROFILE_SAMPLES=0` disables CPU sampling; `PROFILE_SEED=380188361` reproduces this fixture; `CYBERFOOT_EMULATOR_BASE` selects the local server; `PROFILE_OUTPUT` selects the evidence directory. The control run's `actions.jsonl` can be piped into the script after setting the same environment. Use a separate output directory for each run. The server must send `Cross-Origin-Opener-Policy: same-origin` and `Cross-Origin-Embedder-Policy: require-corp`; the harness rejects a fallback to the single-thread runtime. No files from the live user's browser session are read or changed.

Compact results and reproduction inputs are in `docs/evidence/emulator-profile-2026-09-14/`. Full browser CPU profiles and screenshots remain in `output/emulator-profile/`; control screenshots and full logs are in `output/emulator-profile-control/`. Open `.cpuprofile` files in Chromium DevTools' JavaScript Profiler. The sampled startup interval and capped observation windows should not be substituted for user-visible completion timings.

The standard web-game browser client also passed a separate startup check after the profiling sessions; its screenshot was inspected. The profiling script passed targeted lint and repository diff checks. This pass added only measurement tooling, evidence and documentation; there was no live deployment.
