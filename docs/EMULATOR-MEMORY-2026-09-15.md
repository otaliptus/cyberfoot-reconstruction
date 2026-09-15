# Emulator memory-access optimization — 15 September 2026

The selected optimization reduces median local startup time by 7.4%, career creation by 7.6%, opening lineup by 9.5% and automatic selection by 8.1% across two control and two optimized runs. It inlines only the existing common RAM-access branch, adding 122,561 bytes to the emulator WASM. The existing game executable, Wine/game packages, original graphics, match timers and RNG configuration are unchanged.

## Evidence before changing code

A diagnostic build uses the exact release's LTO objects and `--profiling-funcs` at link time to expose emulator function names. The profiling harness now accepts `PROFILE_INTERVAL_US`; the diagnostic run uses 10,000 microseconds instead of the previous 1,000. Normal no-sampling benchmarks remain unchanged, and invalid interval values are rejected before browser startup.

The lineup profile identifies frequent `normal_movr32e32`, `KMemory::readd`, `normal_move32r32` and `KMemory::writed` execution. Archive inflation also appears during startup, but does not dominate the lineup profile. Waiting threads account for most aggregate sampled wall time: those samples are not active CPU work. Most `_emscripten_get_now` samples belong to condition-variable and socket/poll waits, so this pass does not change clock behavior.

Profiling still has overhead even at 10 ms: the diagnostic idle observation uses 0.872 renderer CPU-seconds over six seconds, versus roughly 0.3 without profiling. All speed comparisons below therefore disable CPU sampling. Raw profiles remain in ignored `output/emulator-hotspots/profile`; compact named hotspots, clock call stacks and timing evidence are in `docs/evidence/emulator-memory-2026-09-15/`.

## Change and alternatives

The first experiment forces the complete byte/word/dword read and write methods inline. It improves some latency measurements, but expands WASM from 2,241,776 to 2,984,201 bytes. It is not the selected approach.

The narrower implementation inlines only the original fast branch for permitted RAM access within one guest page. It retains exactly the original page-boundary and `canReadRam`/`canWriteRam` checks and address translation. The complete original implementations remain as out-of-line fallback methods. Cross-page accesses, special pages, permissions and code invalidation continue through those existing methods. Byte accesses retain their original RAM-permission check and cannot span a page boundary. Native builds retain the original implementations; only Emscripten builds use the wrappers.

The narrower WASM is 2,364,337 bytes: 122,561 bytes larger than the current release, versus the broad experiment's 742,425-byte increase. The JavaScript remains 231,075 bytes. Game/package download size is unchanged.

## Initial controlled comparison

Same Apple M2 Pro, Chromium 153 headless, isolated threaded mode3, 1280×960 viewport, fixed test-only seed 380188361. Runs are sequential, without CPU sampling or concurrent compilation. UI times are the last observed canvas change sampled approximately every 100 ms, followed by a quiet interval and screenshot comparison; they are not internal completion timestamps. Team-picker timing is excluded because its caret animates.

| Action | Current release | Broad inlining | Narrow RAM path |
| --- | ---: | ---: | ---: |
| Startup | 16.944 s | 16.108 s | 15.662 s |
| Settings | 2.282 s | 2.053 s | 2.061 s |
| Create career | 7.342 s | 7.051 s | 6.730 s |
| Open lineup | 3.986 s | 3.659 s | 3.452 s |
| Automatic lineup | 5.000 s | 4.797 s | 4.587 s |

The narrow variant's settings, career, lineup and automatic-lineup screenshots are pixel-identical to the control. The full gameplay run supplies a second timing sample. Both variants preserve those screens; the broad variant is not selected. Lineup renderer CPU over the complete 15-second observation is 9.202 s control, 9.511 s broad and 9.374 s narrow; shorter latency does not establish lower active CPU or battery consumption.

## Validation

The narrowed build compiles successfully with the pinned Emscripten 4.0.23 toolchain and existing LTO/thread settings. The upstream CPU suite passes 805 test groups with 0 failures and no browser page errors. The suite includes 16/32-bit memory addressing, split-page writes, self-modifying code, locked operations, integer arithmetic, floating-point, MMX and SSE operations. These are groups, not individual assertion counts. Two-run medians (local measurements, limited sample size):

| Action | Current release median | Optimized median | Reduction |
| --- | ---: | ---: | ---: |
| Startup | 17.011 s | 15.761 s | 7.4% |
| Create career | 7.244 s | 6.694 s | 7.6% |
| Open lineup | 3.886 s | 3.518 s | 9.5% |
| Automatic lineup | 5.001 s | 4.595 s | 8.1% |

Settings vary enough that no strong improvement is claimed for that transition. The complete repeat values are in the evidence. No broad device or battery-life guarantee is implied.

Release build instructions and staging now use `Build/MemoryFast`; the manifest records the changed source patch and generated binaries. The pinned build script reruns successfully and staged hashes match. JS/WASM cache versions advance together to `cf-898c69654bbf`. The corresponding-source archive is 12,386,816 bytes and remains an optional download. Git attributes preserve the upstream CRLF/context bytes of the unified patch; the patch's reverse-apply check succeeds against the compiled source. Targeted JS lint, Python syntax and whitespace checks pass.

Full game validation passes: all 16 cup fixtures, the same Bochum 0–2 Dortmund result/events, next fixture and player auction. Automatic lineup, both match halves, results, next-fixture hub and auction screenshots are pixel-identical to the previous release. The sale leaves 18 players and cash 3,491,649. Save creation produces 2,656,864 bytes/version 1 and retains 300/50 ms timers; a subsequent storage flush completes in 1 ms without error. No browser console/page errors; match and auction screenshots inspected. Fresh-session reload and full-season progression are not tested in this pass. Default threaded mode, explicit fork mode 0 and single-thread fallback startup/settings checks pass, including visibility-handler switching. The required web-game client repeat reaches the original menu, with its screenshot inspected. Published implementation commit `7589bd3` as deployment `a4a19ac4` at https://cyberfoot-original-emulator.pages.dev/. Public startup, settings/spinner, isolated mode 3 and versioned WASM checks pass without browser errors. Public HTML, configuration, JS/WASM, patch and full corresponding-source archive match local bytes and hashes. The optional source archive is not fetched during play. The public settings screenshot is pixel-identical to the inspected local compatibility screen. See `public-check.json` in the evidence.

## Startup reliability qualification

Two initial ordinary-launch checks were incomplete: the game client still showed the starting indicator after 30 seconds, and the first compatibility run timed out after 120 seconds. The captured client output stopped during Wine initialization before the game window appeared. No cause has been established; this is not claimed to be fixed or attributed to the random seed. The timeout is retained in the evidence.

Subsequent candidate launches passed with the fixed benchmark seed, a high-bit seed, one recorded ordinary random seed, four fresh ordinary launches without any random-number wrapper, the complete three-mode compatibility repeat, and the required game client repeat. Alternating previous-release controls also passed. The four unmodified-random candidate launches took 15.968, 16.467, 16.495 and 16.752 seconds. These successful repeats do not rule out an intermittent emulator startup problem. No automatic retry, RNG workaround or guest timing change was added to hide it.
