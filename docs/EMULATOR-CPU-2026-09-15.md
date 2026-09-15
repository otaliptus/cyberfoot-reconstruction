# Emulator CPU/compiler experiments — 15 September 2026

Selected change: compile and link the existing fork with whole-program LLVM optimization (`-flto`, release link `-O3`). Two local runs measure approximately **8% faster automatic lineup** and the generated runtime files are **13.7% smaller**. Startup and settings improvements are small. Tail-call variants were tested but are not selected for publication.

This pass compares the deployed display-batching fork with compiler changes intended to reduce interpreter overhead. The game executable, Wine/game packages, clocks, RNG configuration and original UI are unchanged.

## Method

Sequential Chromium 153 headless runs on the same Apple M2 Pro, fresh browser contexts, 1280×960 viewport, fixed benchmark-only seed 380188361, no CPU sampling, and no compilation concurrent with measurements. The launcher uses fork mode 3 in every comparison. Last visual change is sampled approximately every 100 ms; final screenshots and quiet intervals are checked. Team selection is excluded because its caret animates. Renderer CPU is measured across the full observation window, including subsequent idle time.

The control is the published Emscripten 4.0.23 fork. Tail-call experiment: recompile only normalCPU.cpp with `-mtail-call`, then link with that flag. The resulting WASM contains 1,253 indirect tail calls; source instruction behavior is unchanged. [V8 explains this interpreter dispatch technique](https://v8.dev/blog/wasm-tail-call). Whole-program experiment: compile every translation unit with `-flto`, link with `-O3 -flto`, keeping all existing thread and library flags. This gives LLVM access to code across translation units, unlike the prior post-link Binaryen-only experiment.

Initial observations (single runs, not final speed claims):

| Action | Published control | Tail calls | Whole-program |
| --- | ---: | ---: | ---: |
| Startup | 17.164 s | 16.761 s | 16.704 s |
| Settings | 2.062 s | 2.163 s | 2.048 s |
| Career creation | 7.896 s | 7.272 s | 7.149 s |
| Open lineup | 3.980 s | 3.773 s | 3.789 s |
| Automatic lineup | 5.676 s | 5.113 s | 4.998 s |

Settings, career, lineup and automatic-lineup screenshots match the control pixel for pixel for both experiments. Both report no console/page errors. Tail-call lineup CPU is 9.450 s compared with control 9.322 s over the 15-second observation; whole-program is 8.875 s. Idle CPU over six seconds is recorded in the accompanying raw results. This is not a battery-life measurement.

The whole-program runtime is 2,241,776 bytes WASM plus 231,075 bytes JavaScript, versus 2,371,652 plus 494,897 bytes in the control: 393,698 bytes (13.7%) smaller before HTTP compression. Game/package download size is unchanged.

## Repeat and selection

The published control repeats at 5.422 s for automatic lineup, versus its first 5.676 s. The selected build repeats at 5.213 s, versus its first 4.998 s. The two-run medians are 5.549 and 5.106 s, a 7.99% reduction. These are local measurements with limited repetition, not a universal device benchmark. Both selected runs finish sooner than either new control, while older prior-day/turn controls show why small differences should not be generalized.

The combined LTO plus tail-call experiment measures 17.300 s startup, 2.261 s settings, 7.367 s career, 3.892 s opening lineup and 5.312 s automatic lineup. It adds no demonstrated benefit over LTO alone, so neither tail-call experiment is published. No new browser instruction-set requirement is introduced.

Selected automatic-lineup renderer CPU is 8.875/9.000 CPU-seconds versus control 9.322/9.249 during each 15-second observation window. Idle renderer CPU remains low (selected first run 0.344 CPU-seconds in six seconds; control 0.323). This does not measure battery life. Small career/open-lineup/startup differences are retained in raw evidence but are not release headline claims.

## Build and validation

The release uses `Build/LTO`, separate from old object files because make does not detect compiler flag changes. `build.py`, `stage.py`, the local server default, README reproduction commands and manifest reflect the selected flags. The pinned build script rerun succeeds without rebuilding. The source patch itself is unchanged; this is a compiler/build change. JS/WASM URLs advance together to `cf-3aa8778bca34`. The original single-thread fallback remains available.

WASM SHA-256: `3aa8778bca3485e88929e4214b3e5cda8c09285a03b97e7afb9045e07385aca4`; JS: `a5b57995c506cbbb78c721c820defd6e9587c1c68614995c65bbba70896b33b0`. The separately downloaded source archive remains 12,386,074 bytes and is not loaded during play.

Targeted launcher lint, Python syntax and Git whitespace checks pass. Full gameplay validation passes: all 16 cup fixtures complete with the same Bochum 0–2 Dortmund result and events. Automatic lineup, both halves, detailed results, next-fixture hub and auction sale are pixel-identical to the previous release. The sale leaves 18 players and cash 3,491,649. Save creation produces 2,656,864 bytes/version 1 with original 300/50 ms timers; subsequent storage flush takes 1 ms with no error. This does not test fresh-session reload or a full season. No browser console/page errors. Match and post-sale screenshots inspected. The required web-game client passes with the original menu screenshot inspected and no error artifact. Default mode3, explicit mode0, visibility-handler switching and the unchanged single-thread fallback all pass startup/settings with no console/page errors. Published implementation commit `86b9892` as deployment `8bcac68b` at https://cyberfoot-original-emulator.pages.dev/. Public HTML, configuration, generated JS/WASM, patch and full source archive match the local files byte for byte. Public Chromium starts isolated in mode3, uses versioned WASM, opens settings, dismisses the spinner and reports no console/page errors. No source archive is requested while playing. Public settings screenshot inspected. Full local screenshots/logs live under `output/emulator-tail/profiles/`; compact measurements and reproduction inputs are in `docs/evidence/emulator-cpu-2026-09-15/`.
