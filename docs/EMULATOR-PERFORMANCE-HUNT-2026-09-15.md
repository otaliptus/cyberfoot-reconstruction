# Emulator performance investigation — 15 September 2026

This pass tested four further optimizations against the live DirectCpu release. None is selected for publication: the results do not establish an overall benefit that justifies the frame-cadence, browser-compatibility or memory tradeoffs. The original 16ms presentation floor, scalar WASM, 8MiB archive budget and responsive event pump remain in production. This is an investigation result, not a claim of a new speedup.

The useful retained changes are in the benchmark and cache test: event-pump selection is explicit and recorded, failed commands now stop the benchmark with a nonzero exit status, and the LRU test verifies eviction at the configured capacity rather than assuming two large entries always fill it.

## Controlled experiments

All runs use the same Apple M2 Pro, Chromium 153 headless, isolated threaded mode 3, 1280×960 viewport and test-only seed 380188361. Runs are sequential, without CPU sampling, concurrent builds or another benchmark browser. The normal short action sequence opens settings, creates a Bochum career, opens lineup and selects 4-4-2. Production randomness is unchanged.

Builds are fresh independent object directories using the pinned Emscripten 4.0.23 toolchain, 12-worker pool, compile `-flto` and link `-O3 -flto`. No copied objects or dependency files. Their exact runtime sizes/hashes are in `docs/evidence/emulator-present-2026-09-15/variants.json`.

- **Present33:** change only `cfPresentTick`'s presentation floor from 16 to 33ms. Automatic-lineup composition falls from 409 to 325ms and frames from 148 to 112, but the visible completion time increases from 4.591 to 4.711s. Some other screens are faster. This single mixed result does not justify reducing display cadence.
- **Simd:** restore 16ms and build the current source with `-msimd128` in compile/link flags. WASM grows 27,809 bytes; JS is identical. Automatic lineup is 4.597s versus 4.591s, with no rendering-cost improvement. No extra browser feature requirement or fallback is introduced into the release.
- **Cache32:** restore scalar flags and increase only the immutable archive cache budget from 8 to 32MiB. Startup is 13.061s versus 13.040s; automatic lineup is 4.507s. This is not a compelling gain for up to 24MiB additional cached contents with these packages. The budget is restored to 8MiB.
- **Browser frame scheduling:** run the current DirectCpu binary with the existing `pump=original` option. Main-loop ticks fall, but startup takes 14.014s and lineup 4.499s in the exploratory run. Fewer ticks are not evidence of reduced CPU consumption; measured menu-idle renderer CPU is 0.342s versus 0.337s over approximately six seconds, including the benchmark's canvas sampling. No battery claim is made.

The timing table below retains the exploratory results and repeated unchanged-release control. These are small samples, not statistical proof that a candidate can never help. UI completion is the last canvas change observed at roughly 100ms intervals followed by a quiet window, not an internal game timestamp. The team-picker caret still animates, so its last-change time is excluded.

| Action | Control 1 | Control 2 | 33ms | SIMD | 32MiB cache | Frame pump |
| --- | --- | --- | --- | --- | --- | --- |
| startup | 13.040s | 13.582s | 13.238s | 13.805s | 13.061s | 14.014s |
| new-game-settings | 2.073s | 1.752s | 1.853s | 1.849s | 1.852s | 1.863s |
| create-career | 6.966s | 6.727s | 6.554s | 6.527s | 6.669s | 6.421s |
| open-lineup | 3.567s | 3.475s | 3.460s | 3.475s | 3.363s | 3.369s |
| automatic-lineup | 4.591s | 4.387s | 4.711s | 4.597s | 4.507s | 4.499s |


The repeated control completes automatic lineup in 4.387s, below every exploratory candidate. The first control's settings time is also higher than the repeat. This visible run-to-run variation is why single-screen differences are not promoted to release gains. Only two controls and one run per candidate were collected; this pass screens candidates, not certifies speedups.

## Archive-cache investigation

Offline replay of the earlier pre-cache startup read trace predicts 157 fills / 104,351,288 decoded bytes with an 8MiB Wine cache versus 76 fills / 43,793,112 bytes at 32MiB. This uses current archive entry sizes and the old observed read order; it is not live cache instrumentation or a timing prediction. Thread interleaving may change the order. The direct benchmark shows why avoided work alone is not sufficient evidence for a release.

The source limit is per archive. With the current three packages, eligible contents cap the proposed total at 38,139,946 bytes: 33,554,432 Wine, 908,984 game and 3,676,530 graphics. That is 24MiB more than the existing maximum for these contents, plus small metadata overhead. The general three-archive theoretical limit would be 96MiB if each archive had enough eligible files. Entry-size bounds and CRC verification are unchanged. No larger cache is shipped.

## Verification and retained tooling

Settings, career, lineup and automatic-selection screenshots for all four candidates are pixel-identical to the initial control when compared in RGB. The career and lineup screenshots are visually inspected; no browser console/page errors are recorded in those runs. The required game client's menu/state checks are also recorded. Full matches, save reload and seasons are not revalidated for discarded experiments. The existing release's prior validation remains separate evidence, not a new test result here.

The standalone LRU test passes UndefinedBehaviorSanitizer against both 8 and 32MiB configurations. It checks data ranges, EOF, invalid ranges, bypasses, failed fills, immutable-length mismatch, least-recently-used eviction, separate archive instances and capacity. The new capacity-dependent section fills a separate cache, touches its oldest entry, forces eviction and proves which entry must reload.

`PROFILE_EVENT_PUMP=original` now selects the existing browser-frame option; the default is `responsive`. Unsupported values fail before browser launch. `environment.json` records the requested scheduling mode. A failing input/evaluation command now propagates to the process instead of logging an error and continuing, preventing an invalid benchmark sequence from appearing successful. A deliberate evaluation failure exits with status 1 and prevents the next action from executing; an invalid scheduling option exits with status 1 before browser launch. Browser cleanup is protected even if final capture fails. Targeted lint, syntax and whitespace checks pass. Validation results are in the evidence directory.

Both experimental C++ edits are reverted byte-for-byte. Reverse application of the checked-in source patch succeeds, and production assets/build configuration remain unchanged. The benchmark and test improvements plus this report are committed to the existing repository; no duplicate project or new deployment is needed. Temporary test servers are stopped. Production JS/WASM and source-patch hashes still match the released manifest.

## Reproduce

Serve `Build/DirectCpu` with the existing `emulator-fork/serve.py`, then run from the repository root:

```sh
PROFILE_SAMPLES=0 PROFILE_SEED=380188361 PROFILE_EVENT_PUMP=original \
CYBERFOOT_EMULATOR_BASE=http://127.0.0.1:8787 \
PROFILE_OUTPUT=output/emulator-present/frame-repeat \
node cyberfoot-web/scripts/profile-emulator.mjs \
< docs/evidence/emulator-ui-paint-2026-09-15/actions.jsonl
```

Use `PROFILE_EVENT_PUMP=responsive` for the current release. Source changes for discarded variants are described above; build fresh directories using the same pinned toolchain, never reuse copied object files. The untouched DirectCpu build is the control. Full diagnostic captures remain under ignored `output/emulator-present/`; compact actions, environment, timings, console output and comparisons are checked into `docs/evidence/emulator-present-2026-09-15/`.
