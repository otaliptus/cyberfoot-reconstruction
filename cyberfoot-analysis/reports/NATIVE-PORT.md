# Native reconstruction status

The new request supersedes the emulation approach. A development-only native JavaScript reconstruction exists in `cyberfoot-web/native-port/`; it has not replaced the live site.

## Confirmed progress

- Extracted all 91 original form trees and 190 embedded image resources with provenance hashes.
- Reconstructed the RNG, repeated clock reseeding, x87 threshold arithmetic, spatial helpers and possession transition at 0x607264.
- Compared 17,257 input cases directly with the original isolated instructions, including 10,000 possession transitions. Result, final RNG state and clock-call count all matched, in both Node and Chromium.
- A browser-only rendering fixture draws the original menu without Wine, an executable, a CPU interpreter or WebAssembly. It does not implement the menu actions and is not a playable release.

## Important recovered behavior

The original probability helper reseeds on each call using QueryPerformanceCounter, falling back to GetTickCount. The arithmetic helper at 0x6071e8 computes a rating-adjusted threshold in extended precision and rounds to the nearest even integer; its decompiled listing incorrectly appears to have no meaningful arithmetic. Some intermediate event assignments are overwritten, but their RNG draws still affect subsequent outcomes and must be retained.

## Incomplete work

The full event dispatcher, match finalization, career generation, finances, transfers, player development, schedules, registered-edition competitions, binary save format and interactive UI handlers remain incomplete. The original registration mechanism has not been altered and no activation bypass was implemented. A registered reference build would help verify features unavailable in the supplied UI. Successful comparison of the reconstructed routines is not proof of complete-game equivalence.
