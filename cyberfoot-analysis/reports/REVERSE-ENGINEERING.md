# Cyberfoot 2015 — initial reverse engineering

The supplied game is a native 32-bit x86 Delphi application using Windows/VCL-style components. Ghidra selected its Borland Delphi compiler model. This is an initial structural and behavioral reconstruction, not recovered original source code or a complete account of every gameplay formula.

## What was recovered

- 91 binary Delphi forms, all successfully parsed through their exact end.
- 88 form classes with 989 published method names recovered from virtual-method-table metadata.
- 7,932 function entries identified by Ghidra, including runtime/library functions and thunks. This count is a tool result, not a count of original source functions.
- 547 routines exported as C-like pseudocode, covering core forms, match-related code and direct callees. No export timed out or failed, but successful output can still be inaccurate.
- A function inventory, static call graph, raw resources, strings with addresses, PE imports, and full extracted assets.
- Decoded club, name-pool and language data; see `DATA-FORMATS.md`.

The UI contains substantial Portuguese identifiers and Brasfoot references alongside Cyberfoot branding. This is evidence of shared branding/code heritage, not proof of the exact compiler version, source provenance, or legitimacy of this distributor.

## Architecture map

| Area | Evidence-backed entry points |
|---|---|
| Startup/language selection | TForm1 and its create/show handlers |
| Editor database loading | TForm2.carregatimes at `0x56e41c` |
| Club/national-team editor | TForm3; listtime, timesalvar, selecaosalvar, transferejogador |
| New-game configuration | TForm9: country/custom competition controls |
| Career dashboard | TForm13: finances, transfers, retirement, loans, rankings, tactics and save actions |
| Team selection | TForm67: addnaescalacao and get_substituto |
| Pre-match tactical UI | TForm88: formation drag/drop, stats, tactical choices |
| Match screen | TForm46; a dynamically created timer advances fixtures |
| Penalty shootout | TForm38, with five separate timers |

These links come from form properties, method tables and decompiled call sites. Some UI labels are replaced through language lookups at runtime; static form captions alone can be misleading.

## Database loading and writing: confirmed binary layout

`TForm2.carregatimes` searches `teams\\*.b15` and reads, in order:

1. Four bytes into a temporary field.
2. A 200-byte club record.
3. Another four-byte field.
4. A 1,800-byte roster record (`0x708`).

This exactly explains the observed 2,008-byte files. The club and roster are kept in separate arrays. It also replaces the club's asset identifier with the filename stem. National-team loading similarly reads a four-byte prefix and a 1,748-byte record (`0x6d4`), explaining the 1,752-byte `.s11` files.

`TForm3.timesalvar` at `0x569930` writes the reciprocal club layout, using integer 1 for both four-byte separators. It assigns an ID when absent and performs validation/counting over the first 25 roster slots. The files physically provide 40 name slots; the role of the remaining slots needs further tracing before assigning exact senior/youth semantics.

## The real match clock: assembly-verified callback

The published `TForm46.TimerlTimer` at `0x61ab2c` is only a `ret` instruction. Reading its name alone gives the wrong architecture.

`TForm46.FormCreate` at `0x624b48` creates another timer, stores it at global `0x6d4918`, disables it initially, sets its interval to 1,000 ms, and names it `ralt1`. Instructions at `0x624bf1`–`0x624bf9` pass the form instance and callback `0x61ab30` to the event setter. That callback calls `0x61c834`.

This connection is confirmed directly in `verified-assembly.txt`; Ghidra's pseudocode omitted the callback arguments.

The tick routine at `0x61c834`:

- Disables its timer while handling the current tick.
- At tick zero, initializes each active fixture's lineup-related state in 444-byte (`0x1bc`) match records.
- Advances global counter `0x6d48f4`.
- Iterates the active fixtures, calls step routine `0x609bc8`, and updates visible events.
- Updates the displayed clock on even ticks during normal play.
- At tick 92 (`0x5c`), displays language entry 506, “Half Time”, and runs interval handling.
- At tick 182 (`0xb6`), displays entry 507, “Extra Time”. This label alone does not establish regulation extra-time rules; it may represent the game's end-of-match added-time presentation.
- At tick 190 (`0xbe`), displays entry 508, “Full Time”, resets the clock and calls finalization at `0x61f604`; otherwise re-enables the timer.

Match-screen initialization at `0x618ac8` resets state and dispatches through different setup routines according to the competition-mode field at state offset `0x88`. Exact mode-to-competition names are not yet mapped.

`0x609bc8` is a useful next focus: it maintains per-fixture state, invokes transition routine `0x608da4`, and branches on the resulting event values. It is evidence of a stateful simulation rather than a single final-score draw. The full goal, injury, card and player-strength formulas have not yet been reconstructed.

## Penalty shootouts and randomness

Both `TForm38.Timer1Timer` (`0x5fba2c`) and `Timer2Timer` (`0x5fbf8c`) call the bounded-random function with 3. Values 0 or 1 increment that side's score and display language entry 485 (“Goal”); the other outcome displays entry 486 (“Missed”). They compare the score difference with remaining kicks, and the second-side handler handles a decisive score after the initial five rounds.

Thus, these two handlers implement approximately a two-thirds scoring chance per kick. No player-rating term appears in their scoring branch. This conclusion is limited to this shootout path, not penalties during ordinary match play.

The random routine at `0x4032c8`, checked in assembly, is:

```text
state = (state * 0x08088405 + 1) modulo 2^32
random_below(n) = high_32_bits(unsigned_64(n) * state)
```

The state resides at `0x662008`. Initial seeding and every consumer have not yet been traced.

## Career save path

`TForm13.SalvarClick` at `0x63eed4` calls save routine `0x64af08`. That routine requests a save name when absent and writes a fixed state block of `0x760` bytes (1,888 bytes) after an initial four-byte value. It then serializes many array blocks using counts and fixed record sizes, including `0x130`, `0x2f8`, `0x30`, and `0x80` bytes. The dashboard's play action also calls it for certain option values.

This is a custom binary snapshot format with multiple state collections, not a standard database. Exact field names, every block contract and load/save round-trip behavior remain unverified. There is no saved career in the supplied archive.

## Decompiler reliability and next work

Ghidra emitted warnings about some resource candidates, stack/global interpretation and unreachable blocks. Two specific examples matter: the dynamically installed timer callback disappears from its C-like output, and clock conversion at `0x651e70` loses floating-point arguments. The exact callback was recovered from assembly. Do not interpret every `return`, inferred pointer type or “unreachable” block as authentic source behavior.

The next substantive reverse-engineering work is to assign structures and Delphi calling conventions to the match state, trace `0x608da4` and its helpers into readable event formulas, map competition-mode values, pair save writes with the load routine, and eventually compare behavior in an isolated Windows run. Those steps are not complete in this initial pass.


## Continuation: complete automatic export

The follow-up export completed for all 8,050 function entries present in the saved Ghidra project, with zero reported export failures. The listings remain machine-generated and are not a complete validated source reconstruction. `reports/ghidra-full-export.txt` records the run. The user subsequently requested publishing the exact original game through browser emulation, so the active implementation moved to the neighboring `cyberfoot-web` project.


## Playable original browser edition

The user subsequently selected exact-original emulation. The unchanged executable and 1,698 original payload files are packaged in `cyberfoot-web/public/emulator/cyberfoot.zip`. Boxedwine 26R1 SingleThreaded plus the matching Wine 11 filesystem, image-codec libraries and mlang implementation run the original game. A full first cup match, halftime, results, career save, exported backup, import into a fresh browser context, reload and reopening of the same saved career were verified. The production launcher also opens the original menu. This is execution compatibility work, not a claim that all 8,050 decompiled routines have been semantically reconstructed. Original registration restrictions remain unchanged.
