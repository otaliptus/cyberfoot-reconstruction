# Cyberfoot reconstruction: detailed current-state audit

**Audited 14 September 2026. Baseline commit: `3852ba828d244f70f18cfebe6a35c3ba63c03d63`, dated 12 September.**

This is a fresh inspection of code, repository state, public deployment and executable tests. It is not a restatement of the 10 September report. No game logic was changed during this audit.

## Assessment

**The project is now a deployed, playable native web preview with substantial verified simulation logic and working single-manager career paths. It is not yet an exact, fully functional recreation of the original.**

The earlier report significantly understates progress: national setup, club-world selection, season transitions, native publication, the game shell, auctions and persistence have since received implementations. Conversely, newer claims such as “complete” or “every control works” overstate what the evidence establishes. Passing component tests and opening forms are not sufficient proof of correct career integration.

The largest remaining risks are integration correctness, fidelity and breadth of coverage. A second human manager can be created but did not receive a lineup turn in the audited two-round flow. Main-shell preparation forces a flag that suppresses ordinary job-offer processing. Some controls are explicitly empty handlers. Tournament settings being enabled is not evidence that every tournament completes correctly.

## Repository and deployment

| Item | Fresh evidence |
|---|---|
| Working repository | `/Users/talip/Documents/ChatGPT/misc` |
| Source directories | Single copies of `cyberfoot-web` and `cyberfoot-analysis`; no duplicate reconstruction directory |
| Branch | `main` |
| Local and GitHub commit | Both `3852ba828d244f70f18cfebe6a35c3ba63c03d63` |
| Working tree before audit | Clean |
| Changes since consolidation | 41 commits after `837d865` |
| Native public game | https://cyberfoot-reconstruction.pages.dev/game.html |
| Deployment checks | Game HTML and main module HTTP 200; public desktop/mobile startup succeeds |
| Main module comparison | Public `game-shell.mjs` and local file have identical SHA-256 `d18b99382cc9259de56a1574be593a41b808d4dc819fc2833c10166baa26731b` |

The matching main-module hash is direct deployment evidence for that file; it is not a hash audit of every deployed asset. Public startup produced no observed HTTP error responses or page exceptions after assets settled. GitHub remains the repository established earlier; the audit did not redeploy or push changes.

## What now works

### Native gameplay and career shell

The ordinary game shell boots the recovered main menu and drives settings, club/manager selection, the career hub, lineup, match, results and continuation. It uses JavaScript modules and reconstructed VCL-style rendering, rather than the original executable or emulator.

A fresh shell test exercised real pointer interaction, new-game creation, named saving, page reload, loading, player sale through auction, saving/loading the sold-player state, retirement-dialog entry, lineup drag/drop, match completion, continuation and auction entry. That test passed without browser errors.

The match engine has native modules for random-number behavior, x87-style arithmetic, formations, incidents, substitutions, tactical changes, result settlement, finance, statistics and history. Existing original-execution vectors continue to pass. This audit reran those vectors; it did not regenerate them or re-execute every original routine.

### Save persistence

The original-format parser/writer still supports all 39 save sections and the 2,658,632-byte reference save. The current career store compresses saves using gzip/base64 in localStorage, records metadata separately, and includes rollback handling for storage writes.

F2 now opens the save-name form and creates durable career records. Loading after a browser reload restores the tested manager/club state and a completed player-sale transaction. These are browser-local saves: this is not cloud synchronization or protection against clearing site storage. Long-term quota behavior and many accumulated careers were not load-tested here.

### Seasons

Fresh browser tests crossed the season boundary in both supported league formats:

| Format | Human fixtures played by test | Final season | Appended league fixtures | Final day | Browser errors |
|---|---:|---:|---:|---:|---:|
| Four divisions of ten | 20 | 2 | 360 | 122 | 0 |
| Two divisions of twenty | 35 | 2 | 760 | 90 | 0 |

The paths visited the career hub, calendar, lineup, match, results/tables, standings and preseason screens. The implementation invokes promotion/relegation rotation, prize processing, aging, youth intake and next-season fixture generation.

**Scope limit:** the test begins from the current fresh-start path, which is based on a bundled original save and sets day 119. It uses `manualClock`, automatic interactions, accelerated match completion and scripted renewals of expired contracts. It verifies reaching the next season and a valid next fixture—not a complete unassisted calendar year, all competitions, or repeated seasons indefinitely. Next-season fixture generation in `advanceCareerSeason` defaults to league competition 1; complete rebuilding of every other competition is not established by these tests.

### Transfers, managers and standings

Auctions, contract operations, player returns, paid/AI transfers, manager employment changes and job-offer components have native implementations and passing targeted tests. The separate manager-career browser suite exercises offer acceptance/rejection and nested information screens.

League, regional and continental standings suites all passed. Custom championship creation and the tested first-match path passed. National squad setup and continental post-round whole-routine tests are now present, unlike the state described in the old report.

### Registered options

The public shell has a persistent `Registered unlock: OFF/ON` control. Toggling it exposes registered controls and clubs. Registration UI tests also pass. The older claim that no unlock mechanism exists is therefore stale.

This proves access gating and the tested downstream paths. It does **not** prove that every newly exposed option has complete behavior. It also introduces a visible control outside the original game canvas, so the presentation is not literally unchanged.

### Audio

Web Audio playback is implemented in `live-match-driver.mjs`, with asset loading and decoding. Earlier statements that audio is only recorded are stale. However, the `played` list is updated before successful decoding/playback, and errors can be swallowed; a nonempty list is not proof that sound was audible. This audit did not conduct listening-based audio validation.

## Fresh verification

The full Node runner completed successfully. It directly imports **168 test modules**. Its first nine vector groups report **71,757 cases, zero failures**, followed by many additional comparison and integration tests. The 71,757 figure is **not the total for the whole runner**.

All 13 selected browser suites passed:

1. Main game shell and persistence.
2. Settings, two-manager creation and mode-2 first match.
3. Registered toggle and persistence.
4. Custom championship.
5. Route screens.
6. Reachable-form/control sweep.
7. Registration settings and first match.
8. Auction.
9. Career menu/storage.
10. Manager-career dialogs.
11. League standings.
12. Regional standings.
13. Continental standings.

Additional checks: both season-boundary paths, the independent two-manager probe, public desktop/mobile startup, public asset-error monitoring, and screenshot inspection. Logs and screenshots are in [audit evidence](evidence/audit-2026-09-14/).

No test failures were hidden. The independent multi-manager probe intentionally recorded behavior rather than inheriting existing assertions; it exposed the gap below despite no JavaScript exceptions.

## Findings that prevent a completion claim

### 1. Multi-manager creation does not establish multi-manager play — high priority

Two managers were created through Form9/Form11. The save contained human clubs 11 (Erzgebirge Aue) and 1 (Augsburg). Across two consecutive played rounds, both lineup screens belonged to club 11. Career day advanced from 119 to 130; manager two never received a lineup turn in that flow.

Source inspection aligns with the observation: `addCareerManager` adds the human slots while retaining the primary career pointer; the shell's `clubId` is set in `enterCareer` and then reused for preparation. Existing browser-settings coverage verifies two-manager creation and one first match, not a turn for each human manager.

**Required next proof:** two human managers independently edit lineups, play their scheduled matches, receive their own decisions and resume correctly after save/reload. Evidence: [independent probe](evidence/audit-2026-09-14/multi-manager-audit.json); `game-shell.mjs` around 557–572, 611–630 and 1115; `career-menu.mjs` around 155.

### 2. Normal-shell job offers are suppressed by forced fast mode — high priority

`prepareRound` unconditionally writes 1 to career field `0x6c8`. `continueLeagueResults` invokes employed/unemployed offers only when that field is zero. Consequently, passing standalone offer tests does not prove that ordinary shell play will produce offers.

This finding is based on the connected source path, not waiting for a probabilistic offer. The stored career before entering the shell may have fast mode zero; it is preparation that overwrites it. Review this together with original fast-mode semantics. Evidence: `game-shell.mjs` around 623; `results-career-continuation.mjs` around 19–21.

### 3. All registered competitions are not verified — high priority

The standard mode-2 settings path explicitly rejects anything other than the single bundled league selection. The registration browser test verifies enabled controls, stored competition flags, higher-division club access and one match reaching results. It does not play a World Cup, continental tournament and regional competition through their complete schedules.

`applyNewGameSettings` also explicitly forces fields `0x170` and `0x709` false. The original behavior and reachability of the corresponding options need a requirement-by-requirement check. Evidence: `game-shell.mjs` around 140–154 and 361–362; `browser-registration.mjs`.

### 4. National selection may be overwritten after the dialog — static risk needing reproduction

The Form77 controls call manual assignment/removal helpers. But `presentScreens` invokes `selectNationalPlayers` after Form77 closes. That routine clears/replaces national-club assignments based on its own candidate selection. Manual choices may therefore be replaced on confirmation.

This was not reproduced as a complete human-national career during this audit, so it is a targeted investigation item rather than a claimed observed gameplay failure. Evidence: `game-shell.mjs` around 885–922; `national-setup.mjs` around 29–51.

### 5. No-error control coverage is weaker than functionality coverage — high priority

The shell explicitly registers several empty handlers, including some national, settings and fallback match controls. Some are legitimately hidden chrome; others require a semantic check. The form-sweep test uses fabricated data for some modal screens, invokes shell APIs directly, skips disabled targets and often asserts only an empty “unhandled” list.

For example, the results competition selector repaints with an index notice but does not rebuild result selection in that handler. Directly opened penalty/injury/tactics screens may hit fallback handlers rather than a live session.

Therefore “every reachable control clicked” must not be presented as “every original feature works.” Evidence: `game-shell.mjs` around 896–917 and 1000; `browser-play-forms.mjs`.

### 6. Exact logic fidelity is incomplete

Original-routine comparisons provide strong evidence within their scope. They are not whole-game equivalence. The shell starts from a saved-career template, explicitly starts fresh games on day 119, and initializes its RNG at 2015 with a synthetic incrementing clock callback. Those integration choices need original-runtime justification before claiming unchanged overall behavior.

The original game's clock-dependent RNG is especially important: matching its arithmetic with a synthetic clock does not establish matching real-world stochastic behavior. Evidence: `game-shell.mjs` around 70–77 and 1115; `career-menu.mjs` around 138–146.

### 7. Visual fidelity and mobile usability remain incomplete

The original artwork and forms are visible. Nevertheless, desktop hub screenshots show very low-contrast labels on dark backgrounds, mixed translated/original captions and some awkward text rendering. The lineup screenshot has crowded/overlapping text near the remember-lineup control.

At 390×844, the public menu scales into a roughly 202-pixel-wide region with extremely small text and click targets, surrounded by large unused space. Assets were allowed to settle; no asset errors were observed. This is an actual usability limitation, not an early loading screenshot. Only desktop Chromium and a Chromium mobile-size viewport were inspected; Safari, Firefox and real touch-device interaction were not certified.

The language menu exposes one loaded language option, despite many recovered language datasets. The registered toggle is a deliberate extra UI element. No pixel-by-pixel comparison against the original Windows rendering was performed.

![Public mobile menu after assets load](evidence/audit-2026-09-14/public-mobile-settled.png)

### 8. Documentation and metrics are inconsistent

The root README and 10 September report still say the native version is unpublished and that several now-implemented systems are missing. The newest progress entries themselves predate the last persistence/multi-manager changes. `status.json` contains stale booleans and a 217,527 comparison count; the preview index claims 255,507; older reporting cites 249,407; 71,757 is only the first group of the current runner.

The saved file inventory has 32 entries whose current content differs, and 148 currently tracked paths absent from that inventory. None of the inventoried paths is missing. This reflects subsequent development, not established data loss. No single current, reconciled coverage total should be advertised until generated from the runners.

## Security and provenance status

The historical ClamAV assessment remains a 9 September single-engine scan with zero detections, not an exhaustive security certification. This audit did not rescan with new signatures or audit all web dependencies. The current extracted executable's SHA-256 still matches the assessed sample: `bb5132cfcf9c7f17733c6d8c73ff0cebb5b4b19e34dff34c614919beedc308d0`.

The native game does not need to run that executable. The old emulator edition and native deployment must remain clearly distinguished in documentation. Original assets and third-party rights are unchanged.

## Recommended completion sequence

1. Fix human-manager turn ownership and prove two-manager play across multiple fixtures and reloads.
2. Remove unintended fast-mode forcing and verify normal offer/dismissal/auction routes from ordinary career play.
3. Verify that manual national choices survive confirmation; finish the national and registered competition matrix.
4. Verify new-season rebuilding for every enabled competition and play beyond the first fixture of season two.
5. Replace no-error-only assertions with state-change checks for every visible action; inventory genuinely unsupported actions.
6. Validate fresh-career generation and clock/RNG integration against original behavior.
7. Correct visible typography/contrast/overlap issues, test language selection, and compare matching Windows/browser screenshots. Establish desktop support separately from mobile support.
8. Generate current status, coverage totals and inventory from authoritative tests/files; update the landing page and README.
9. Run an ordinary-user acceptance pass without developer helpers, then publish a completion claim only for the features that pass.

The next phase should emphasize complete player journeys and closing these concrete integration gaps. Adding more isolated comparison cases alone will not satisfy the remaining request.
