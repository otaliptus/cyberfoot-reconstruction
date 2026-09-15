# Bounded emulator archive cache — 15 September 2026

This pass reduces median local startup from 16.524 to 14.097 seconds across four control and four cache runs, a 14.7% reduction. It avoids repeatedly decoding the same archive members, adding 917 bytes to the emulator WASM and a bounded memory cache. Game behavior and appearance remain unchanged in the tested session. No package-download reduction or fix for the previously observed intermittent startup stall is claimed.

## Measured cause

A diagnostic build records file path, requested position, returned bytes, discarded seek bytes and decoder restarts for each archive read. Before the first `Showing Window` log it records 13,431 reads returning 27,979,640 bytes, while discarding another 625,794,328 bytes to seek through archives, with 2,013 decoder resets. These are decompressed or copied archive bytes inside the emulator, not network traffic or unique file contents.

The largest repeated seek costs belong to Wine's win32u, shell32, user32 and the C library. The archive reader shares one decoder per archive; changing members or seeking backward restarts decoding. This explains substantial repeated work even though the package is already downloaded. Per-read logging is intrusive and disrupted the timed interaction script; only the startup read-count evidence is used from that diagnostic run, never its latency or later gameplay results. The diagnostic logging is absent from the candidate. `diagnostic-trace.patch` in the evidence records the instrumentation applied to the previously released fork (`7589bd3` source patch); it is not part of the production source patch.

## Change

A separate bounded LRU per immutable archive caches fully decoded files of 64 KiB through 4 MiB, with an 8 MiB content budget per archive. The current three-archive launcher therefore has a maximum 24 MiB of cached contents plus small container overhead. Larger and smaller files retain the existing streaming reader. No entire archive is eagerly expanded.

The existing archive read mutex covers lookup, fill, eviction and copying. The cache identifies immutable members by their directory offset and verifies the expected length on a hit. It publishes a file only after reading every byte and receiving a successful CRC result when closing the decoder. Failed fills reset the decoder and fall back to the existing stream reader. Cache hits do not disturb the decoder's stream position. ZIP contents remain immutable; writable files and saves follow the existing filesystem and copy-to-filesystem paths. Cache storage is freed when its archive is destroyed.

Guest rules, executable, RNG, UI, match timers, Wine/game packages and network loader are unchanged. The new WASM is 2,365,254 bytes, adding 917 bytes to the previous release; JavaScript remains byte-identical. The additional memory budget is the tradeoff for less repeated archive processing.

## Controlled startup comparison

Apple M2 Pro, Chromium 153 headless, isolated threaded mode 3, 1280×960 viewport and test-only game seed 380188361. Runs are sequential, without CPU sampling, read logging or concurrent builds. The first two runs of each build use the normal gameplay script; the later alternating runs stop after startup. Startup uses the same visible-menu criterion in the existing profiler in every run. The production RNG remains ordinary per-launch randomness.

| Run | Current release | Bounded cache |
| --- | ---: | ---: |
| First | 16.036 s | 14.137 s |
| Second | 18.867 s | 14.057 s |
| Third | 17.000 s | 14.374 s |
| Fourth | 16.047 s | 13.529 s |
| Median | 16.524 s | 14.097 s |

The slower second control is retained. Every candidate startup is faster than every control in this sample; the range and limited sample size still matter. These are local measurements with fast local downloads, not a promise for all devices or internet connections. Settings, career creation and lineup timing remain broadly similar, so no general in-game UI speedup is claimed for this pass.

## Validation and limitations

The standalone cache contract test passes with UndefinedBehaviorSanitizer: byte ranges, backward reads, EOF, out-of-range and zero-length bypasses, entry-size limits, failed fills, immutable length mismatch, LRU eviction, distinct archive instances and capacity. AddressSanitizer could not run on this host: a process sample showed it spinning during sanitizer/macOS allocator initialization before entering the test. That process was stopped; this is not an AddressSanitizer pass.

The first experimental build failed immediately with an unaligned-access error because copied build dependencies retained their old target paths, leaving objects with inconsistent header layouts. All candidate objects/dependencies were removed and the entire candidate was rebuilt in its own directory. The clean build starts successfully. Reproduction instructions now warn against copying build artifacts between directories.

The initial clean settings, career, lineup and automatic-selection screenshots are pixel-identical to the previous release. The full 16-fixture cup round, same Bochum 0–2 Dortmund result/events, next fixture and player sale pass. Both match halves, results, next-fixture hub and auction screenshots are pixel-identical to the previous release. Save creation produces 2,656,864 bytes/version 1 with the unchanged 300/50 ms timers; a subsequent flush succeeds in 2 ms. This is not an end-to-end save-duration measurement. There are no browser errors. Fresh-session save reload and a full season are not tested. The four-run startup comparison passes. Four additional fresh launches with ordinary randomness pass in 14.424, 14.020, 13.769 and 14.573 seconds, with no browser errors. These timings include navigation and spinner readiness and are separate from the fixed-seed profiler table. The reusable startup checker preserves logs, runtime state and screenshots if a launch fails. The required web-game client reaches the original menu and its screenshot is inspected. Default mode, explicit fork mode 0, visibility-handler switching and single-thread fallback startup/settings checks pass; settings screenshot inspected. Targeted JS lint, Python syntax, staged binary hashes, reverse patch application, and the pinned build-script rerun pass. The source archive is 12,387,960 bytes and remains an optional download. Public deployment verification is pending. No broad device or battery-life claim is made. The earlier intermittent Wine startup stall remains unexplained.
