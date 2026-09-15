# Cyberfoot Boxedwine fork

An instrumented, reproducible, whole-program optimized fork of Boxedwine 26R1.0, maintained as a patch in the existing Cyberfoot repository. The source checkout, SDK and build output live under ignored `output/emulator-fork/`. This does not modify the game executable, Wine package, rules or clocks.

Upstream commit: `d7d5a1421bd781a81cbdf8f222cced11a7ebd76e` (annotated tag `26R1.0`). Emscripten SDK: `4.0.23`, SDK repository commit `c0bb220cb6e6f4e0fabb6f6db9efd53390ef5e56`. Patches and derived emulator binaries are GPL-2.0-or-later, consistent with upstream. Corresponding source is the pinned upstream plus `runtime.patch` and these build instructions.

## Build and serve locally

From the repository root:

```sh
python3 cyberfoot-web/emulator-fork/build.py
python3 cyberfoot-web/emulator-fork/serve.py
```

The release compiles every translation unit with `-flto` and links with `-O3 -flto`. `Build/DirectCpu` separates these objects from earlier non-LTO builds, because make does not detect compiler-flag changes. No tail-call or additional browser feature is required.

The first build downloads the source and SDK. Existing checkouts must match their pinned commits; the script checks whether the patch is already applied. Builds use six jobs at most and the existing 12-worker pool. No shell profile is modified and nothing is deployed automatically.

The local server on port 8778 serves the existing game files with the fork JS/WASM and a diagnostic hook. `forkmode` selects independent experimental features:

| Mode | Queue wakeups | Deferred XFlush presentation |
| --- | --- | --- |
| 0 | Off | Off |
| 1 | On | Off |
| 2 | Off | On |
| 3 | On | On |

The production launcher defaults to mode 3; use explicit mode 0 for the control. The normal timer-based event pump remains in place. Wakeups use a dedicated Emscripten proxy queue to notify the main thread only when an SDL callback is queued; duplicate pending notifications combine. Workers still wait for operations that return results. The main loop remains the fallback if a wake notification cannot be scheduled.

In batching modes, XFlush sets a pending-presentation flag and returns after previously issued drawing operations have already updated their surfaces. The normal main loop presents at most once per 16 ms, after servicing native events. Intermediate presentation requests combine; the latest surface data is rendered using the original compositor. Display/window dirty flags are atomic, and window dirty state is consumed while its surface is locked, so a later update is not erased by completion of a previous draw. These modes require gameplay validation before production use.

## Measurement

```sh
PROFILE_SAMPLES=0 PROFILE_FORK_MODE=0 PROFILE_SEED=380188361 \
CYBERFOOT_EMULATOR_BASE=http://127.0.0.1:8778 \
PROFILE_OUTPUT="$PWD/output/emulator-fork/profiles/control" \
node cyberfoot-web/scripts/profile-emulator.mjs \
< docs/evidence/emulator-ui-paint-2026-09-15/actions.jsonl
```

Repeat sequentially with modes 1, 2 and 3 and separate output directories. Avoid concurrent benchmark browsers or compilation. Use identical seed/actions and inspect screenshots as well as latency. Production randomness is not fixed.

The diagnostic callback exposes cumulative counters through `window.cyberfootForkMetrics()`. The profiler records phase deltas; `maxQueueUs` and `maxExecutionUs` remain lifetime high-water marks. Timings use Boxedwine's common process clock, which has millisecond resolution in this build despite the `Us` units. Queue time starts immediately before enqueueing; execution time includes callback drawing; resume time measures callback completion to worker continuation. These are aggregate wall times across threads, not CPU time or a sum that necessarily equals user-visible latency. `compositionUs` overlaps callback execution time and must not be added to it. Presentation and image-upload counters do not count every emulated GDI or Delphi operation.

The original fixed-offset browser frame-copy probe (`PROFILE_PAINT=1`) is tied to the official binary and should not be used with this fork; native counters provide the relevant display measurements.

## Stage for publication

After validation, `python3 cyberfoot-web/emulator-fork/stage.py` verifies the tested binary/patch hashes and stages JS/WASM plus a corresponding-source archive in the existing public directory. It does not deploy. The archive contains the patched source, headers, bundled libraries, platform code and original web build files, excluding build output. It can also be built directly after extraction: activate Emscripten 4.0.23 and run `make -C project/emscripten -j6 BUILD_DIR=Build/DirectCpu EXTRA_CPP_FLAGS='-DBOXEDWINE_MULTI_THREADED -pthread -flto' EXTRA_LD_FLAGS='-pthread -sPTHREAD_POOL_SIZE=12 -O3 -flto' SHELL_FILE=shell.html` from its root. Runtime switches are configured separately by the launcher.

## Memory-access optimization

The web build inlines the existing permitted, single-page RAM branches for byte/word/dword reads and writes. It keeps the complete original operations out of line for all other accesses, including page boundaries, permissions, special pages and code invalidation. The native build retains the original functions. The patch is tested with the upstream CPU suite as well as the original game.

CPU regression build: activate the pinned SDK, then run `make -C project/emscripten -j6 BUILD_DIR=Build/TestDirect 'SRCS=$(TEST_SOURCES)' EXTRA_CPP_FLAGS="-D__TEST -DBOXEDWINE_MULTI_THREADED -pthread -flto" EXTRA_LD_FLAGS="-pthread -sPTHREAD_POOL_SIZE=12 -O3 -flto" SHELL_FILE=shelltest.html`. Serve `Build/TestDirect` with cross-origin isolation headers and open `boxedwine.html`; the tested release reports 805 groups passing and 0 failures. These are test groups, not a count of individual assertions.

## Bounded ZIP read cache

The web build keeps an LRU of fully decoded, CRC-verified immutable ZIP members, capped at 8 MiB of file contents per mounted archive. Only entries from 64 KiB through 4 MiB qualify; other reads keep the original streaming implementation. The current launcher mounts three archives, giving a maximum 24 MiB content budget plus small container overhead. Entries load on demand and are discarded with their archive. This does not cache writable saves or alter the existing copy-to-filesystem behavior.

Every lookup, load and eviction runs under the archive's existing read mutex. A failed or incomplete fill is never published and falls back to the original reader with the decoder position reset. Cache hits preserve the decoder's independent position. The standalone contract test covers ranges, backward reads, EOF, bypasses, failed fills, length mismatch, LRU eviction, archive separation and capacity:

```sh
clang++ -std=c++20 -fsanitize=undefined \
  -I output/emulator-fork/Boxedwine/source/io \
  cyberfoot-web/emulator-fork/test-zip-cache.cpp -o /tmp/cyberfoot-zip-cache-test
/tmp/cyberfoot-zip-cache-test
```

Run this from the repository root after applying the source patch. Also validate original-game screens, matches, transfers and saves. Fresh ordinary startup checks retain a screenshot and runtime/log diagnostics on failure:

```sh
CYBERFOOT_EMULATOR_BASE=http://127.0.0.1:8778 \
STARTUP_OUTPUT=output/emulator-startup STARTUP_RUNS=4 \
node cyberfoot-web/scripts/check-emulator-startup.mjs
```

Use the build directory produced by the build script. Do not copy object/dependency files between build directories: generated dependency targets contain the original directory name and can silently leave header-dependent objects stale.

## Direct interpreter entry

For the Emscripten build without `BOXEDWINE_JIT`, the native thread loop invokes the existing `NormalCPU::run()` implementation explicitly. The pinned `CPU::allocCPU` factory constructs that concrete type, so this removes a virtual dispatch and permits LTO inlining without changing executed instructions. Other targets retain the original virtual call. Exception handling, termination checks and thread/memory cleanup remain in the original loop. Recheck the factory/type invariant if rebasing this patch onto a different upstream revision.

The pinned upstream makefile automatically selects its test sources only for `Build/Test`. When using a distinct test directory such as `Build/TestDirect`, pass the literal `SRCS=$(TEST_SOURCES)` make argument (quoted as shown). Otherwise the output can contain no CPU tests; require a positive test-group count as well as zero failures.
