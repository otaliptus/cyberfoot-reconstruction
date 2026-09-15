# Sequential UI loading investigation — 15 September 2026

The visible sequence is real: automatic lineup emits approximately 178 complete framebuffer updates over 6.7 seconds. Copying those frames into the browser canvas accounts for only about 105 milliseconds. The bulk of the delay occurs upstream, inside the emulated application/runtime and its synchronization. This measurement does not separate game calculations from Wine drawing or emulator execution.

No new production performance change is published from this investigation. A local experiment to defer immediate Delphi repaints preserved the tested final screens but did not establish a useful general improvement. Its scope was too broad to justify shipping for a small, single-run lineup difference.

## Measurements

Same M2 Pro desktop, Chromium 153 headless, isolated threaded emulator, fixed test-only seed 380188361 and Bochum career as the previous performance pass. Two fresh, sequential browser sessions, CPU sampling disabled. The deployed timer scheduler is enabled in both. Timing uses the last sampled canvas change followed by a quiet interval, not an internal game-completion event. The approximately 100 ms sampling and single run per condition limit precision.

| Transition | Current build | Deferred repaint experiment | Current frame copies | Time in frame-copy callback |
| --- | ---: | ---: | ---: | ---: |
| New-game settings | 2.237 s | 2.424 s | 24 | 13.45 ms |
| Create career | 7.886 s | 7.991 s | 60 | 32.86 ms |
| Open lineup | 4.322 s | 4.199 s | 50 | 28.52 ms |
| Automatic lineup | 6.692 s | 6.233 s | 178 | 104.83 ms |

The experiment still emitted 177 frame copies for automatic lineup. Its renderer CPU over the full 15-second observation was 8.99 CPU-seconds versus 8.94 for the current build. Idle CPU was 0.318 versus 0.347 CPU-seconds over six-second windows. These small samples do not establish an improvement in CPU use. Team-picker timing is excluded because of caret changes.

The probe wraps the matching release's SDL software-frame callback (`ASM_CONSTS[335233]`), timing the existing pixel copy, alpha conversion and `putImageData` call without changing its arguments or return value. It measures synchronous browser-side copying only. It does **not** measure guest rendering, GPU completion or when the monitor presents the pixels. Main-loop counts from an early attempted wrapper were ineffective and are omitted from the saved evidence.

## Original drawing behavior and experiment

Recovered `TForm87_combtatClick` at `005eb9b4` calls the formation-layout routine `005e5264`, followed by automatic selection `005e82a0`. The layout moves the shirt and label controls slot by slot. Automatic selection also updates individual shirt images and labels, and saves the lineup after each successful assignment. Those saves and selection rules were not changed.

The caption setter `00545088` calls virtual slot `+98`. Resolving the actual label class's VMT at `0053f6fc` identifies `005450e4`, which already calls virtual `Invalidate` (`+7c`). Thus it would be incorrect to assume that every label setter forces an immediate `Repaint`.

The local-only experiment replaced the first five bytes of the base `TControl.Repaint` (`00466760`) and `TWinControl.Repaint` (`0046c9d0`) with a tail call to the object's virtual `Invalidate` method. Original instruction bytes were checked first, and ZIP CRCs were refreshed. Original source archives were untouched. The two routines are identified by disassembly and their VMT positions; the recovered behavior agrees with Embarcadero's documentation: [Repaint draws immediately](https://docwiki.embarcadero.com/Libraries/Alexandria/en/Vcl.Controls.TControl.Repaint), whereas [Invalidate permits repaint requests to combine](https://docwiki.embarcadero.com/Libraries/Florence/en/Vcl.Controls.TControl.Invalidate).

Pixel comparisons found no differences between the two runs for settings, career hub, open lineup and automatic lineup. The automatic-lineup screenshot was visually inspected. The experiment was not subjected to a full season, save/reload or match regression suite because its performance result did not justify pursuing a production patch. It remains confined to temporary experiment files; no game/runtime patch from this experiment is committed or deployed.

## Reusable diagnostic and next work

`scripts/profile-emulator.mjs` now accepts `PROFILE_PAINT=1`. It checks the expected callback before attaching the probe and records `calls`, `copyMs` and `maxCopyMs` per phase. Startup paint statistics are deliberately null: the probe is installed after the menu becomes ready. The normal profiling mode and production launcher do not install this probe. A separate browser check of the committed probe recorded 24 settings frame copies, with no browser errors; targeted lint passes.

Replay the committed action file with `PROFILE_SAMPLES=0 PROFILE_PAINT=1 PROFILE_SEED=380188361`, `CYBERFOOT_EMULATOR_BASE` pointing to an isolated local server, and `PROFILE_OUTPUT` pointing to an ignored output directory. Compact results and logs are in `docs/evidence/emulator-ui-paint-2026-09-15/`; full local screenshots are under `output/ui-paint-2026-09-15/`.

The next investigation should count and time guest GDI/text/image operations within one slow screen transition, then test batching at the specific operation boundary. Repeated whole-form invalidation, text layout and image assignment are candidates, not proven dominant hotspots. A spinner or delayed presentation can conceal intermediate frames but cannot remove this upstream execution cost. Browser-canvas copy optimization alone cannot recover most of the measured delay.
