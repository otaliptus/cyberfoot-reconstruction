# Emulator startup follow-up — 14 September 2026

The original emulator remains at https://cyberfoot-original-emulator.pages.dev/. This update changes package preparation and download scheduling. It does not change game rules, UI, registration, save paths, or the existing random-seeding repair.

## Changes and evidence

- Begin the configured Wine and game package downloads before loading the emulator runtime. WebAssembly download, compilation and worker initialization can now overlap package downloads. A single queue limits optimized package requests to four across both archives. The filesystem loader consumes the prefetched promises once; the test verifies no duplicate requests.
- Restore the 76 duplicate Wine locale files by copying their already-verified compressed streams into ZIP entries. Previously each duplicate was inflated, checksummed again and appended uncompressed. This reduces the assembled Wine ZIP from 56,756,915 to 49,115,308 bytes (7,641,607 fewer temporary bytes). This is not a measurement of total emulator memory or a reduction in network download size.
- Two local preparation comparisons measured 251/157 ms before and 21/18 ms after. These are Node measurements of that preparation step only, not whole-game speed.
- Extend the browser benchmark to report package and WebAssembly request timing and transferred bytes. In the optimized local sample, package requests began at 235 ms and finished at 2,486 ms; WebAssembly downloaded from 298 to 563 ms. The first visible menu image rendered at 20,746 ms; this detector does not prove that every menu control has finished initializing. A subsequent ten-second sample had zero browser long tasks and no browser errors. Browser animation callbacks are not game FPS.
- The earlier pre-change sample took 52,244 ms on this busy host. Host load varied, so the whole-boot difference cannot be attributed to this patch or used as a controlled speedup claim.

## Verification

`scripts/test-emulator-packages.mjs` verifies all 3,251 restored Wine entries against the original archive, including decompressed bytes and CRCs. It also checks original/repaired executable behavior, distinct launch seeds, prefetch request reuse, the global concurrency limit, corrupted-package rejection, successful retry and unknown-package fallback. Targeted lint and `git diff --check` passed. The required browser game client booted the original menu; its screenshot was inspected. The interactive original New Game screen loaded its country list and enabled options correctly, and a new Aue career reached the club screen with a transfer offer. The single-thread fallback also booted (21,578 ms, no browser errors); its idle sample retained eight long tasks totaling 677 ms, so the threaded engine remains preferred. Menu screenshots for both runtimes were inspected.

## Remaining costs

The main archives still require 55,137,315 downloaded bytes before the runtime and graphics overlay are counted. An inventory found only about 0.38 MB of additional non-locale duplicate compressed data; that alone would not materially change loading. More substantial pruning requires dependency evidence and broader game coverage. Missing wineboot messages come from files deliberately hidden in the supplied minimal Wine image; enabling services speculatively could slow or break this working runtime.

Most elapsed startup after downloads is now inside Wine and the original game. This patch makes no new claim about match throughput. A further runtime change should be assessed with repeatable full-round timings, save/reload checks and several devices, preserving the game's timing semantics.

## Registered edition availability

The official site, https://www.cyberfoot.org/, currently directs users to Android. Searches of its indexed pages did not find an official public 2015 activation code or registered Windows download. The linked maintained Android listing identifies support as cyberfootgame@gmail.com: https://play.google.com/store/apps/details?id=com.cyberfoot.app. This does not establish that support still issues 2015 licenses. No message was sent, no code was invented and registration remains unmodified.

## Publication

Published code `80c8825` as deployment https://17366257.cyberfoot-original-emulator.pages.dev/. The stable site serves byte-identical loader files and the required isolation headers. Its cold browser check reached the first menu image at20,756ms, with package requests536–4,193ms overlapping WASM590–1,059ms; zero browser errors and zero long tasks in the ten-second idle sample. The public New Game screenshot was inspected.

## English/Turkish locale reduction

At the user's request, the current package profile now omits 120 unrelated Wine code-page files (60 tables in two locations) and 14 game translation files. Keep Windows 1252/1254, OEM 437/850/857, ASCII 20127, Latin-1/Latin-5 28591/28599. Shared `locale.nls`, `l_intl.nls`, `sortdefault.nls` and all normalization tables remain. These contain shared Unicode/locale services and are not independent removable language packs. Wine's locale initialization uses the locale mapping, case table and ANSI/OEM tables: https://raw.githubusercontent.com/wine-mirror/wine/wine-11.0/dlls/ntdll/locale.c.

| Download measure | Before | After |
| --- | ---: | ---: |
| Unique Wine NLS compressed streams (excluding ZIP headers) | 2,684,827 bytes | 1,981,634 bytes |
| Wine transport archive | 46,419,497 bytes | 45,702,970 bytes |
| Game transport archive | 8,717,818 bytes | 8,566,343 bytes |
| Combined archives | 55,137,315 bytes | 54,269,313 bytes |

Total download saving is 868,002 bytes, about 1.57% of those archives. The original Wine NLS files, including duplicate filesystem copies, occupied 20,652,868 uncompressed bytes. Most of that was already compressed and deduplicated; removing languages does not save that entire uncompressed size on the network. Runtime and graphics-overlay transfers are additional to the combined archive figures.

English `97.cft`, legacy English `971.cft`, English fallback `default.cft` and Turkish `192.cft` remain byte-identical. The visible language selector offers exactly English and Türkçe. The original source archives are retained; pruning applies to generated delivery packages. No game executable, graphics, teams or players were altered by this profile.

The expanded package test verifies all 3,131 retained Wine entries and 1,684 retained game entries against original bytes and CRCs, with independently constrained omission rules. Integrity rejection/retry, prefetch reuse, fresh random seeds and original-executable mode still pass. Targeted lint and diff checks pass. Required browser-client English startup screenshot and interactive English/Turkish menu, two-language dropdown and Turkish settings screenshots were inspected, including accented Turkish text. Evidence: `output/emulator-locales/`.
