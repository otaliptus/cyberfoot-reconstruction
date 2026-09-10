# Native reconstruction — development work, not a released game

Request: replace emulation with a native web implementation while preserving original gameplay and UI, with all gameplay features available.

The shipped emulator edition is not this port. This directory is intentionally outside public assets and application routes: unfinished reconstruction must not replace the working game or be presented as complete.

## Verified implementation

`match-core.mjs` reconstructs the original random generator, clock reseeding, x87 threshold arithmetic, side/zone helpers, and possession transition at 0x607264 in native JavaScript. It loads no executable, Wine, WebAssembly, or CPU interpreter.

`tests/original-vectors.json` records outputs produced from the original instructions by the separate development-only oracle (`cyberfoot-analysis/scripts/native_oracle.py`). The tests compare result, final RNG state, and clock-read count. Fixed and advancing clock inputs are both covered. The combined suites now cover 155,095 cases, including 10,000 possession transitions, 20,000 player/set-piece cases, 6,000 formation-strength cases, 12,000 card/injury/substitution cases 5,000 integrated dispatcher cases, 6,000 stamina/time cases, 2,500 player-statistic cases, 2,000 fixture-step cases 1,000 event-record business cases, 1,000 finance calculations, 2,000 loan actions 1,010 money-format cases, 3,000 wage-demand cases 1,000 payroll cases, 3,000 contract decisions, 2,000 contract dates, 2,000 contract commits 3,000 notification records, 1,526 integer parses and 1,470 base-calendar dates. Matching these cases does not prove complete equivalence for all inputs or cover the complete match engine.

The original probability helper 0x6071c4 reseeds from QueryPerformanceCounter before every test. The native code takes an explicit clock provider; a platform-clock mapping has not been finalized. Floating arithmetic is reconstructed with a 64-bit significand and nearest-even rounding, not Math.round. This restores meaningful arithmetic omitted from the decompiler's 0x6071e8 output.

Additional native modules:

- `match-players.mjs`: position-based incident/scorer selection, own goals, free kicks and automatic penalties.
- `lineup.mjs` / `x87.mjs`: formation strength and original rounding/penalties, including order-dependent keeper effects.
- `match-incidents.mjs`: cards, injuries, bench selection and automatic substitutions, with state mutations checked against the original.
- `match-events.mjs`: event dispatcher, including branches lost by automatic decompilation. Its original-code integration comparisons cover automatic interactions. Human penalty and replacement dialogs remain integration work.

The expanded oracle uses a fixed-storage adapter for Delphi dynamic-array allocation. It does not replace game routines. Both Node and Chromium execute the same shared native evaluators; all 155,095 comparisons passed in both environments. These are routine-level and dispatcher-level comparisons, not complete-match or career tests.

Further implementation:

- `match-clock.mjs`: original age/keeper-dependent fatigue and regulation end tick.
- `fixture-step.mjs`: possession, counters, score suppression, event dispatch and formation recalculation per original tick.
- `career-stats.mjs`: scorer/appearance/season statistics, card bans, injury skill/recovery effects and event rows.
- `save-format.mjs` / `save-schema.mjs`: all 39 original save sections, preserving unknown record bytes. The original 2,658,632-byte sample round-trips byte-for-byte. A one-byte record edit changes exactly one byte.
- `career-state.mjs`: live player/club record views and statistic-table serialization. A native goal survives original-format save/reload.

Scope of verification: fixture-step comparisons isolate the event recorder; event-record comparisons isolate debug text and player-stat calls; the player-stat routine is tested separately, with notification delivery captured by a host adapter. These checks are not a whole-original-game equivalence proof. A separate integration smoke test runs 185 ticks using actual saved players and explicitly selected test lineups, ends 0–1, and reloads the resulting player/statistic changes. It does not cover original lineup generation, match UI, halftime handling, competition finalization or season progression.

## Original visual evidence

All 91 form trees and 190 embedded image resources have been extracted with source hashes. `ui-surface.mjs` starts original-form rendering; `browser-proof.html` is a development-only comparison fixture and does not implement menu actions. Missing operations throw UnportedOperationError. The menu rendering is not certified pixel-identical: native controls, font metrics, and runtime-painted text still need comparison.

## Release blockers

- Match presentation, halftime/finalization and competition integration.
- Original human penalty and injury-replacement dialogs connected to the dispatcher.
- Generation of player/club/lineup state from the original database.
- Career finances, transfers, development, contracts, AI managers and season progression.
- Exact competition scheduling/rules, including registered-edition competitions.
- Remaining save-field semantics, generated calendar, and full-career save integration.
- All interactive forms and dynamic localization/layout behavior.
- Registered-edition behavior reference for features unavailable through the supplied UI.

No registration checker has been patched, activation key generated, or claim of unlocking the original executable made. Full gameplay functionality would require its actual native implementation and verification; enabling checkboxes alone is not a port.

Run `node native-port/tests/run-all.mjs` from the site root. The oracle requires the original executable and Python dependencies only for development. `browser-proof.html` must be served locally from this directory to run browser comparisons. Do not publish it as a finished game.

## Finance and loan screens

`native-ui.html` is an interactive development fixture for original Form22 (Finances) and Form28 (Bank Loan); `?view=loan` opens the latter. Form coordinates, captions, background, loan limits and $500,000 increments are recovered from original resources/instructions. Borrowing and repayment mutate original save records; the 3-borrow limit / 3-repayment flow, finance interest/totals and save reload are browser-tested. This is not a complete career interface. Font and native control rendering still need original-screen pixel comparison.

Money rendering preserves the literal leading spaces in the original Delphi format string; 1,010 outputs are compared before string allocation. Finance and loan oracles adapt text/control calls but execute original calculations and cash/debt mutations. No loan checks depend on replacement business logic in the oracle.

`contracts.mjs` reconstructs wage demand (0x652590) and club payroll (0x652900). Contract decision and renewal business effects are implemented; the contract and counteroffer forms are available in the development fixture. Preserves the unreachable second cash threshold and per-player rounding before payroll addition. Unassigned-player and unknown-category inputs require the original incoming register explicitly; no guessed wage is returned.

Contract continuation: `submitContractOffer` now connects original wage demand, negotiation (0x5a1ad0), renewal mutations (0x5a1eb4), date extension (0x647c9c), payroll and original notification records (0x64cbf0) to the original save format. A rejected offer leaves the save byte-identical; an accepted renewal persists salary, contract date, player fields, payroll and its notification through reload. Current date is recovered from the original season/day; the RNG must be supplied.

The contract commit oracle skips only UI/grid text blocks and captures notification delivery; the full notification routine is separately compared including output bytes and RNG state. Browser fixture `native-ui.html?check=contracts` checks the 10,000 new vectors and save integration, reporting results in `render_game_to_text`. Add `view=contract` to display the contract screen.

## Interactive contract flow

`native-ui.html?view=contract` renders original Form24 controls and Form25 counteroffers over the parent window. Salary validation, adjustment arrows, durations, keyboard Offer, cancel/Escape, counteroffer refuse/accept, direct acceptance, and narrow-screen coordinates are browser-tested. Salary limits currently use a browser alert; exact original message-box styling remains pending. Date display format is explicitly a fixture locale setting; font/native-control pixel fidelity remains unverified. Current date itself now comes from the original calendar: year `(season + 2014) & 65535`, 366 consecutive rows, one-based saved day. Competition assignment is implemented separately in schedule.mjs; complete day progression remains pending.

Counteroffer fidelity correction: renewal writes the accepted wage, but its pay-rise comparison uses the original text-field offer. The original commit oracle now compares distinct entered/accepted wages. Do not collapse them into one value.

## Competition scheduling

`schedule.mjs` and generated `schedule-sequence.mjs` reconstruct original 0x653a40 and date-slot assignment 0x6539b4, including reserved disabled competitions, extra cup rounds and national tournament cycles. Calendar cursor 0x656a18 and dated fixture lookup 0x65b414 are also ported. 500 complete calendar configurations, 1,000 cursor cases and 1,000 fixture lookups match original instructions. One original-save integration runs the original calendar generator, cursor advance and fixture lookup together: next day130 / May10,2015, fixture39, club IDs11 and4 (Erzgebirge Aue and Bochum). Reading the agenda leaves the save unchanged.

`native-ui.html?check=schedule` checks those 2,501 cases in Chromium. These routines choose calendar slots and existing fixtures; full day processing, fixture generation, match finalization and season transition remain separate work.


## Original AI lineup generation

`ai-lineup.mjs` ports complete 0x4e24d0 including player availability 0x64fbb8, specialty 0x65173c, fitness recovery, original rounded ratings, formation choice, ordered fallback selection 0x4e21e4, bench selection, assignment 0x6514e8 and strength calculation. Literal formation/priority tables are in `ai-lineup-tables.mjs`. `ai-selection.mjs` preserves original quicksort tie order, including the ineffective first median swap; JavaScript stable sorting is not equivalent.

6,780 additional original-instruction comparisons pass Node and Chromium: 1,280 specialty combinations, 4,000 selection scenarios including selected flags, 1,000 sorts including ties/extreme ratings, and 500 complete lineup scenarios comparing all lineup fields, player mutations, availability counters and final RNG state. Complete-lineup/sort oracles replace only Delphi storage allocation with fixed memory, not game logic.

`native-ui.html?check=ai` also loads the original saved career and runs regulation for its next Aue–Bochum fixture using native AI selection for both clubs. Player changes and statistics survive save/reload. This is an integration fixture, not original whole-match parity or a human lineup interface; the original player-facing selection and match presentation still need implementation.


## Human lineup groundwork

Human selection 0x5e9a30 and sorting comparator 0x5e8248 are separate from AI behavior: sort ascending by skill, condition and the original field10; scan backward; no keeper-role fallback; selection marks starters1 or substitutes2. 3,000 selection and 1,000 sorting comparisons execute the original instructions (grid text updates/storage are adapted). `saved-lineup.mjs` ports 0x5e9970 and compares 500 complete resulting record buffers, including duplicate club IDs and appended rows.

`lineup-screen.mjs` contains formation/pitch geometry from 0x5e5264/0x5eb518 and the reconstructed 0x5e82a0 selection coordination. Its complete controller is not yet compared against original UI execution, and its roster rows must be supplied with original ordering/statuses. It is not an interactive lineup screen yet. `native-ui.html?check=human-lineup` checks the 4,500 verified helper/save cases in the browser. Existing AI regressions continue to pass after sharing the sorting/selection implementation.


`lineup-pitch.mjs` renders the recovered `CAMPOGRANDE` JPEG and original PNG shirts at the exact extracted formation coordinates. `lineup-pitch-preview.html` is a component preview; all ten formation layouts are browser-checked, but it does not yet show player labels, the roster, or drag-and-drop. These assets are copied unchanged from executable resources. Club-specific shirt graphics remain a caller-provided image.

`tactics.mjs` ports AI tactical choices 0x4e2a64 and the three immediate-write Form87 combo handlers. Play style, marking and attack focus are live original club fields +0x220/+0x224/+0x228. 1,000 original-instruction comparisons include final RNG state; direct changes survive save/reload. `lineup-pitch-preview.html?check=tactics` runs the browser checks. These fields still require the remaining original pre-match/match integration; their storage alone is not proof of tactical match behavior.


`lineup-roster.mjs` reconstructs roster inclusion, role order, numeric availability/icon fields and original trait-code repair from 0x5e547c. Full routine/UI parity is still pending. Roster sorting has 1,000 original comparisons. The controller's selection-reset branch was corrected from assembly: grid statuses lexically below "3" reset to0; statuses3 and4 remain excluded. A decompiler equality error previously suggested resetting3 itself. 500 cases now execute the original grid-loop comparison and branching instructions with adapted grid storage.

The saved-career integration builds20 roster rows, chooses all ten formations, rejects unavailable selections and preserves saved slot records. `lineup-pitch-preview.html?career=1&check=roster` populates the pitch image layer with these selections and checks1,500 original helper cases. Default extracted shirts are used in this component fixture; club-specific kit loading, labels, roster rendering and manual interaction remain pending.


## Lineup development window

`lineup-window-preview.html` now assembles original Form87 bounds, pitch artwork, player labels, roster grid and controls. Formation changes use the reconstructed human selector. Team attitude, defense pressure, attack focus, captain, set-piece taker and the saved-career remember-lineup byte can be edited; browser checks confirm these fields/selected slots survive reload. Roster row selection and Back work. Normal and600px viewport screenshots were inspected, including DOM overlays (the skill client's canvas export omits the grid/inputs).

This remains an incomplete development window: manual assignment/dragging, saved-formations dialog, kit selection and Start Match are unported. Those operations are not silently replaced with fake actions. Roster icon/trait/goal/foot cells, exact HTML-label rendering, control/gradient pixels and original global preference-file persistence remain unfinished. Initialization explicitly auto-selects formation4 for this fixture; original complete FormCreate/saved-lineup restoration is not yet replicated. The window must not be published as the finished game.


Manual roster-to-shirt dragging, shirt/label swaps, and outfield repositioning are now connected in the development window. These preserve the original distinction between moving a roster player (displacing the destination player) and swapping two shirt slots. Position drops use the original25 target rectangles, including excluded right/bottom edges. The original transparent target artwork appears during an outfield drag.1,225 original lookup/target comparisons pass; the complete drag handler still needs original-execution parity validation.

Browser tests use real drag gestures, verify row statuses and player slots, and test Back with Remember both off and on. Manual edits are transient until the original conditional save on Back; automatic formation selection retains its original per-assignment save behavior. Player-label dragging is also tested. The saved-formations dialog, kit selection and Start Match remain unported.


`human-lineup-commit.mjs` ports the business path of Start Match0x5ebb84: optional save before eleven-player validation, roster flag reset, keeper-last match layout, exhausted-player notifications, expired-contract fitness penalties, dense substitute list, availability count and lineup strength.300 comparisons execute the original handler and its calculation helpers; UI storage/text, notification delivery and next-screen dispatch are adapted. They compare every lineup byte, saved-tactic byte, relevant player mutation and notification arguments. Original notification generation is separately verified and used by the normal native function.

A saved-career integration commits the human lineup, generates the opponent lineup and runs regulation with automatic test decisions; player changes survive save/reload. It does not implement the original next-manager/match-screen dispatch, halftime interaction, finalization or career advancement. The Start Match button remains unconnected until that flow exists; the test fixture must not be presented as a completed playable game.

## Pre-match scoring and regulation controller

`match-score-plan.mjs` adds the original pre-scheduled goal path, separate from live fixture events: x87 outcome probabilities 60cb40/60cc6c, score planning 60c85c, strength/country adjustment 60cd60, complete kickoff scheduling 61c174, scheduled goal delivery 61c6f4, and minute conversion651e70. Original literal tables are in score-tables.mjs. An additional8,726 original-code comparisons pass Node and Chromium, including clock reseeds, unique unsorted goal ticks, own-goal selection and event-index presentation boundaries. Allocation, record delivery and presentation adapters are explicitly scoped in the oracle scripts.

`regulation-controller.mjs` reconstructs61c834 sequencing with required presentation, halftime and finalization dependencies. It snapshots starters before preparing goals; continues the shared clock to190 even when fixture simulation stops earlier; delivers scheduled goals after fixture stop; pauses at92; and signals finalization at190. A saved-career test produces Aue3–3Bochum with six planned goals,190 controller ticks and184 fixture ticks. This is an integration test with automatic human choices and test halftime/finalization callbacks, **not full original controller parity or completed career progression**. Transient fixture IDs are1..N, separate from saved fixture IDs. Match UI and actual61f604finalization remain unimplemented. New live club fields country3c,field58 andfield98 support original planning.

## Result persistence and financial settlement

`match-records.mjs` implements original scheduled-result persistence61ef04 (score, attendance, income and completion flag), permanent event archiving61de24 (transient fixture ID remapped to history ID), and manager statistics6494f8. The manager helper creates a row with one game played on first use regardless of requested statistic, as the original does. Its prestige totals change only for existing rows and `pr`; competition3 omits the second prestige total. The remaining match-finalization orchestration and competition standings are not implemented by these helpers.

`match-finances.mjs` implements the original financial block61fadb..620344 from61f604: Sunday payroll in competitions1/3, early preseason payroll, shared competition2 income, other home income, and rounded loan interest. It preserves the unusual away nonpositive-payroll branch that adds home payroll to home cash again, and the original signed64-bit overflow result. The oracle runs the whole financial instruction block, including date and x87 helpers. Additional5,500 original comparisons and an original-format save/reload integration pass in Node/Chromium. Test attendance and result values are explicit fixtures; attendance generation and full end-of-match progression remain work.

## Standings and connected fixture settlement

`competition-result.mjs` reconstructs full61cdb4: manager played/win/loss/prestige updates, competition and round gates for club tables, score/last-result fields, and severe-defeat notifications. Competition3 requires its active scheduling-table value; other phase fields are read from the career. Original asymmetric defeat thresholds and the away-defeat write to the home club are preserved.2,500 original executions compare every club byte and ordered manager/notification delivery calls. Real manager/notification helpers are defaults; their save integration is separately exercised.

`finished-fixture.mjs` connects the full per-fixture block61f691..6204af: scheduled result, second set of competition totals, bench clearing, standings/manager outcomes, compact result history, financial settlement and final display-counter adjustment.500 whole-block original executions compare all resulting club, ledger, saved-fixture, history, lineup and counter fields. Originalx870.9/0.7counter factors retain their64-bit significands. These are still **not the complete61f604finalizer**: detailed match history/player ratings, knockout outcomes and competition/day progression follow the block and remain unported. The saved-career integration now runs human lineup selection,190regulation ticks, a3–3result, settlement, and original-format save/reload; attendance/income and human dialog choices remain explicit test inputs.

## Player match ratings

`player-rating.mjs` reconstructs complete657b68, event summaries657978/657ac8, and aggregate updater6428ac. Ratings retain original Single precision after every update, extended-precision shot thresholds, exact random-draw order, goalkeeper overrides,10-point cap and short-appearance rules. Event summary matching includes either player or detail ID without a fixture filter, and retains the original substitution-duration arithmetic. Aggregate updates preserve every duplicate matching player/competition record and the original role/foot-position eligibility rules.5,000 complete original ratings,2,000 event summaries and2,000 aggregate cases pass in Node/Chromium. `rating-records.mjs` persists the original24-byte float/integer records; save/reload integration covers28 actual saved players with an explicit test match. Per-player history and individual detailed records are now implemented as described below; day-wide weekly-award work remains; these checks do not prove complete history-controller parity.

## Detailed match and player history

`player-history.mjs` implements65867c/6588a4 with original ratings, appearance statistics, incident flags, substitution/final-player32-byte history,28-byte weekly candidates, and accumulated ratings. Source instructions resolve several erroneous decompiler arguments: ratings receive the transient fixture index; saved rows store history IDs and discipline/injury counts. Substituted players require more than one yellow incident for their yellow flag; final-lineup players require at least one. Position10 is displayed as14 only in its saved final-player row.500 complete original executions compare every saved/candidate/aggregate byte and random state, with appearance-stat delivery adapted.

`match-history.mjs` reconstructs original round selection and600-byte record layout from61efa4 and connects individual detailed records to event and player history. Required metadata is explicit.600 original comparisons cover all competition branches and copied fields, with player-history routines adapted separately. A saved-career regulation test now performs settlement and detailed history, verifies added record counts and saves/reloads all affected sections. Match metadata/attendance/income and human choices remain explicit test inputs; weekly awards and full day-wide history orchestration remain outstanding. The complete native game is not yet playable or published.

Weekly awards now reproduce original candidate sorting, division/position selection and league lookup (1,500 comparisons). The match-day history wrapper connects weekly awards to player histories and passes a saved-career regulation/save integration with explicit test metadata. Whole day-history original-execution parity remains unverified. Two-leg knockout decisions reproduce the original wins-first, aggregate and conditional away-goal/ranking rules (3,000 comparisons). The automatic knockout decider preserves its two random draws, one-goal margin, first-home-club lookup and saved scores (1,000 comparisons). Interactive shootout dialogs and knockout progression are still pending. These modules do not make the complete game playable.

Knockout progression now includes elimination records (6490a8/61dec8), club outcome updates (622ec8), round lookup (65a250), and connected two-leg advancement (61dfe4). Outcome/elimination comparisons cover 1,500 cases; 300 connected-round cases cover competition 2 rounds 2–5 and competitions 4/6 rounds 4–7, including both competition-6 subgroup paths. The connected comparisons use explicit adapters for decider and champion controllers and compare all club, fixture and history bytes plus callback order. Interactive shootouts and champion rewards are not supplied by this test. All new cases passed Node and Chromium.

Champion records, reputation updates, prize money, manager title counts and player awards are implemented. 1,500 original comparisons cover the record helpers and reputation; 1,000 cover champion finalization with record/award/statistic delivery adapters; 1,000 cover the full player-award selector with original sorting and prizes. The connected native knockout-final integration uses their real implementations in an original career save with explicit test fixtures for competitions 2, 4 and 6; all resulting records survive reload. This does not verify whole-season or complete-game behavior.

National knockout progression (61e4fc) and scheduled fixture creation (65a1c0) now pass 600 original-execution comparisons in Node and Chromium across phases 11, 12, 21, 22, 41 and 42. These verify complete fixture/club/group/history bytes and callback ordering with decider and national-champion adapters. National champion finalization and the normal career entry into these controllers remain incomplete.

National champion finalization (6243c8) now passes 1,000 original comparisons with record, award and statistic delivery adapters. The native one- and two-leg national-final integration uses the real helpers and verifies all save sections after reload, including both player-award payments. Normal career entry into these screens and complete-season gameplay are still pending.

League and cup batch routing (6225c8), including its post-match entry (621ed0), now passes 1,500 original comparisons with selector and preparation/UI effect adapters. Four real selectors pass 1,000 additional cases. Round/leg transitions and watched/automatic routing are implemented, but the preparation and presentation effects still require real controllers; this is not yet a normal playable career flow.

The automatic-match controller (621ee0) and non-presented goal delivery (61c5c0) now pass 1,300 original comparisons. An original-career integration runs AI lineups through the real engine, per-fixture settlement, history, weekly awards, and save/reload. Preparation, attendance and some match metadata remain explicit test inputs; the controller does not yet provide a complete career session.

Schedule selection and transient fixture initialization (6133b1–6135a9 / 6104c0) pass 1,000 original comparisons. A real scheduled batch of 20 matches now runs with original competition-record IDs and divisions through AI lineups, automatic matches, settlement, history and save/reload. This league batch now uses original attendance and ticket income. The transient competition field is a metadata ID, distinct from the career competition type.

League attendance (616014) and ticket income (613d57–613e53) pass 2,500 original-instruction comparisons, including random-state equality, division capacity caps, country bonuses, ticket-price adjustments, minimum repairs and signed multiplication overflow. The 20-match league integration uses these calculations, and all save sections survive reload. Node’s complete regression suite and the Chromium preparation check pass. Attendance for other competitions and the normal match/career UI remain incomplete.

National cup (616628) and both continental attendance routines (61794c / 617e08) pass 3,600 original-execution comparisons with final random-state equality. The cup comparison covers all stages 0–5, both league formats and club divisions 1–4; continental checks cover reputation/round boundaries and subgroup adjustments. A real 16-match cup schedule now runs through original attendance, automatic simulation, settlement, history and save/reload in Node and Chromium. Cup-bracket advancement and normal career presentation remain separate, unfinished integration work.

The business portion of full silent match preparation (612a00) passes 600 original-routine comparisons with presentation and string-allocation adapters: every transient fixture byte except normalized managed-string pointers, stadium text, human fixture IDs, timer intervals and final random state. Watched kickoff (618d28) passes 500 comparisons for 0–21 stored fixture settings. Both real scheduled batch integrations now call this preparation function. The visible preparation screen and complete career orchestration remain pending.

Post-match player recovery (621e48 / 61dc50) passes 1,200 original-instruction comparisons including age/position boundaries, condition overflow, AI minimum recovery and random state. Full finalization control order (61f604) passes 800 cases with settlement, recovery, knockout, history and continuation adapters. Scheduled league/cup integrations now use real per-fixture settlement, recovery and history through this controller; continuation is still a test boundary, and complete career progression is not yet connected.

A visible Form46 match preview now draws the recovered four-division layout with original team colours, stadiums, attendance, score columns and f03 background image. The original positioning helpers pass 40 spacing comparisons. Chromium completed a 20-fixture, 190-tick regulation run with real settlement, recovery and history. This preview uses automatic test decisions; event icons/messages, crests, interactive decisions and normal lineup-to-match handoff remain incomplete.

Match-event display data (61b828) now passes 700 whole-routine comparisons with string/widget adapters: exact HTML, icon selection, score labels, sound selection and human sending-off dialog requests. The live preview draws the original extracted icons and message colours/boldness, and completes regulation with visible events. Human dialog requests and sound playback remain unconnected in this development preview.

Original club and national-team crest lookup (645508) passes 300 original-routine comparisons, including missing images and the career club-count boundary. All 477 available PNG crests were copied byte-for-byte and hash-verified. The live match preview loads all 40 participating club crests in the original 17×17 positions.


### Suspended human match decisions

`match-decisions.mjs` drives shared generator continuations through injury, event dispatch and fixture stepping. The existing synchronous APIs retain their original automatic behavior; `injuryAsync`, `dispatchEventAsync` and `stepFixtureAsync` await manager callbacks at the decision boundary. The regulation controller uses the asynchronous fixture API and waits for presentation callbacks. No event is retried and no random draw is replayed when a decision resolves.

`tests/human-decision-async.mjs` compares complete state, fixture, lineups, event calls and RNG for 2,000 fixture scenarios with explicit human test choices, exercising 29 pending penalties and five pending injury replacements. These are continuation regression checks, not original human-dialog parity. Original modal interfaces and their decision rules still need integration. The existing 71,757 engine comparisons continue to pass.


### Original human penalty resolution

`human-penalty.mjs` reconstructs the shot resolution from Form34.Timer2 (005fe940, human attacker) and Form54.Timer2 (005fd96c, human defender). Base success threshold70 is modified by taker traits9 and keeper traits1, with veteran modifiers. Neither skill nor condition enters this particular threshold. The two dialogs use different commentary random bounds and distributions; both draws, outcome codes, sounds and result delays are retained.

1,200 complete original timer executions with UI, language and sleep adapters match the native result and final RNG state in Node and Chromium. This brings recorded original comparisons to166,535. Taker selection, goalkeeper selection and the preceding dialog timers still require integration; this module is not substituted for the original automatic penalty function.


### Attacking penalty screen

`penalty-window-preview.html` now provides the standalone Form34 taker selection and timed penalty sequence using an original save. `humanPenaltyRoster` preserves the25-position ordering at00664440 and active-player filter. The keeper selection block005fe608..005fe76a is verified in300 original-code cases, including retained previous values and fallback order. `createAttackingPenalty` returns a promise for the suspended match decision and exposes a deterministic clock for the two2000ms timers and2500ms result delay. It consumes the preceding RNG5 andRNG4 commentary draws before the verified shot resolver.

The browser checks cover selection of the last roster row through keyboard navigation, kickoff, both timers, result display and promise resolution. The screen uses original Form34 bounds, f01 background and club crest, with a reconstructed canvas grid. Full Windows grid/font parity, sound playback, the defending-human dialog, and connection to the normal match flow remain unfinished. Current original comparison count:166,835.


### Penalty dialog connected to regulation

`penalty-dialog-host.mjs` now exposes an asynchronous `decide` callback for the original attacking-manager penalty. It opens Form34 over the existing match, preserves the previous keeper value, returns the chosen player/result directly to the suspended fixture, and restores the match frame. Sound requests are an explicit host dependency; the development preview records them without audio playback.

`FormRenderer.paintFrame` allows the complete match to render behind a modal. `PenaltyWindow` shares the match renderer, so there is one canvas and one set of pointer listeners. Standalone and match-hosted dialogs share the same view builder.

The browser integration enters a deliberately forced penalty boundary through the real regulation controller, chooses a player, verifies the clock remains paused, advances both timers, verifies exactly one original penalty event and score increment, closes the dialog and resumes the next tick. The normal20-fixture regression still finishes. This demonstrates the attacking-penalty connection, not complete interactive career play: defending penalties, injury replacements, red-card decisions, sound playback and normal Start Match routing remain incomplete.


### Defending-manager penalty dialog

Form54 now runs through the same modal host as Form34. It automatically selects the taker, shows the original two2000ms stages, applies the verified defending-dialog shot rule and closes after its2000ms result delay. The initial stages consume no random draws. The original positive goalkeeper-ID behavior and fallback into the attacking lineup are preserved.500 original selection-block executions match the native code, bringing recorded original comparisons to167,335.

Browser integration confirms the clock pauses, exactly one penalty event is recorded, the score changes consistently with that result, and play resumes after the modal closes. The preview still captures sound requests instead of playing audio. Injury and red-card decisions and the normal career-to-match flow remain incomplete; this is not a complete playable release.


### Injury replacement integrated with the match

Form53 now opens over the match and returns the selected replacement to the suspended injury routine. Its active/role filters, bench ordering, keeper-only branch, empty-list handling, sound requests and remaining-substitution mutations match700 executions of the original selection/business blocks. The keeper-only branch deliberately skips the original empty-list handling and sound call; this is preserved, including a disabled empty dialog if a keeper exists but all listed keepers are active.

Browser checks cover an outfield replacement, a keeper-only replacement and an empty bench. They verify paused clock, one lineup replacement, bench removal, substitution count, original injury/replacement events and resumed play. Audio requests remain captured rather than played.

`match-lineup-screen.mjs` starts the Form88 reconstruction with geometry from006053e0, verified in600 original helper executions. It preserves keeper-last slots and compact bench placement. Red-card/substitution/tactics UI integration remains unfinished. Original comparison total:168,635.


`manual-match-substitution.mjs` reconstructs the bench/pitch business branch of Form88 (00601970–00601dbc). In 600 isolated original-code comparisons, it preserves player flag resets, event delivery before bench removal, both substitution-count clamps, period/minute history, and recalculation ordering. Rendering, event creation and recalculation are adapters in this comparison; full drag/drop UI integration remains unfinished. The 67 successful cases additionally test pending asynchronous presentation. Original comparison total: 169,235.


`manual-match-tactics.mjs` adds the Form88 pitch-swap and reposition business branches (792 original executions with rendering/hit-test/calculation adapters). `match-tactics-window.mjs` and `match-tactics-host.mjs` connect original form resources to live lineup changes in the development match preview. Opening consumes the original 36 shirt-coordinate random draws. Browser tests cover pitch swap/movement, substitution/event, retained bench gaps until team refresh, AI edit protection, tactical changes and resume. A real second-yellow event opens Form88 and holds regulation tick2 until dismissal, then resumes through tick3. Use `match-window-preview.html?tacticsIntegration=auto` to inspect the screen.

Form88 remains incomplete: original club kit selection, full labels/HTML styling, side-selection visual state, event log, warning labels, match-statistics dialog and full FormCreate fidelity are pending. The normal career-to-match route is still unconnected. This preview is not a finished game or an exact UI-parity claim. Original comparison total: 170,027.


Form88 statistics and event log are now connected. `match-statistics.mjs` preserves the original score/tactic adjustments and x87 rounding (1,200 original comparisons). `match-event-log.mjs` matches the complete original HTML output in 400 cases, including running scores, period labels, club-based filtering and the 15-event limit. The popup retains its creation-time statistics snapshot and blocks background controls until dismissed. Original dialog colors/fonts/indents/buttons are used, but popup autosizing and exact text rasterization remain uncertified. Comparison total: 171,627.


Original club and national kits are connected: 519 unchanged PNGs (1,863,674 bytes), with original path/existence helpers checked in 800 executions. The match kit selection branch is checked in another 800 executions: AI reset to kit1, away colour-clash selection, fallback to kit1/stock, and preservation of the stored choice when its image is absent. Form87 shows kit thumbnails and radio controls; kit selection survives original-format save serialization. Form88 uses the selected kit on outfield players, with the original stock keeper/bench shirts. Original comparison total: 173,227. Full UI and career completion are still pending.


The lineup development entry now connects Start Match to the native mode-4 league session, preserving manual player placement and kit choice. Domestic AI preparation follows original club order; 400 additional original executions verify its dispatch and player cleanup. Browser coverage reaches full time through the shared match and tactics windows. This remains a development integration: next-manager/day routing, the return to career play, complete message presentation, and sound playback are unfinished. It is not a complete or published native game.


Round completion now applies the original player development routines before advancing the league round. Four thousand whole-routine executions verify senior growth, older-player decline, youth progress, and dispatch. The development match reaches Form67 behind the resultsIntegration query; subsequent career-day routing remains unfinished. Save loading now also isolates Node Buffer inputs, preventing separate loaded careers from sharing mutations.


The results data model now reads saved match archives with the original match filtering, statistics/score labels, and lineup order. It passes 2,200 original instruction-block comparisons and a completed browser-match/save-reload check. The Form67 results renderer now shows archived results, statistics and substitutions behind the development query. Its Continue action remains unconnected until all career children are complete.


Post-match career reconstruction now includes controller order, participation checks, player reset and valuation, referee assignments, national-assignment restoration, and scheduled player returns. Loan returns preserve payroll changes, contract dates, history, set-piece replacement, squad/availability counts and news. The original capacity constant is30; scheduled returns use120-day contracts and immediate recalls use180. These transactions match2,000 whole original executions with only allocation adapters, including their original child routines. An original-save integration covers delayed returns, retries, recalls and persistence. Total original comparison cases:217,527. Controller tests still adapt unported manager, tournament and navigation children; the native game remains incomplete and unpublished.


Paid transfer settlement650ec4 and complete AI transfer selection653268 are now native. They preserve compensation, individual rounding/cash stores, original contract periods, bounded selection attempts, role/country restrictions, move history and notifications. They pass1,600 paid-transfer and800 complete AI-transfer original comparisons, with only array allocation adapted. The AI cases include283 actual transactions; an original-career integration completes30 AI transactions and checks accounting, dates and persistence. These are connected to the native effects factory; remaining manager, tournament and screen controllers still prevent enabling the full Continue flow.

Manager participation helpers now match 2,000 complete original executions without adapters. Country participation uses the domestic club count; regional participation scans exactly the first 27 clubs regardless of country. These feed the native manager departure and appointment routines.

Manager employment now reproduces complete649824 departure and649138 appointment, including human slot sorting, regional/league eligibility, contract renewal and status resets, pending-friendly cancellation, notification cleanup, ticket prices, cash initialization and appointment history. 1,600 original executions pass with only allocation adapted; an original-career integration moves a human manager between clubs and verifies persistence. Replacement selection and automatic AI manager changes are native; dismissal/offer dialogs remain unfinished.

Replacement selection passes4,000 complete original executions with no adapters. The manager-change controller passes500 original executions covering5,527 appointments:400 AI-only cases adapt only allocation, while100 cases adapt the human notice/recap boundaries. Native career integration verifies a poor-performing AI club is replaced, changes are reported, saving/reloading retains the appointment, and a second pass does not repeat it. Form31 human-dismissal creation effects and Form57 recap rendering remain required before exposing this controller in the playable career flow.

Human-dismissal replacement selection now passes1,200 original executions, including785 generated managers. Name generation preserves the original two random draws and name tables. Non-rendering dismissal effects and reason precedence are extracted and verified on an original saved career; whole Form31 rendering and complete FormCreate differential parity remain pending.

Form31 now has a development renderer and dismissal host connected to the actual manager-change controller. The original notice uses recovered geometry, colors, crest, caption IDs and text wrapping; OK, Enter and Escape resume the waiting controller. Browser tests verify employment changes occur once, save/reload preserves them, and closed controls disappear. Font rasterization and the glow-button skin remain provisional; the complete career flow and Form57 recap are still unfinished.

Form57 manager-change recap is now connected alongside Form31 through the native career-effects factory when both dialog hosts are supplied. The original list labels, reason mapping, row spacing, scrolling and fast-mode timer are implemented. Browser checks cover the human dismissal→AI recap sequence, acknowledgement, timer boundary, temporary-row cleanup and saved career persistence. Remaining work includes job offers and full career navigation; typography, button and scrollbar pixel parity remain provisional.

Job-offer selection is native for employed and unemployed managers, matching9,000 complete original executions with no adapters. It preserves the original mode-specific search positions, random draw order, preferred-country handling, duplicate/former-club exclusions and national-competition one-attempt behavior. Original-career checks produce30 employed offers and74 unemployed offers without save mutation. Offer timing and acceptance state effects are native; the offer UI remains pending.

Offer timing controllers5f9800/5f9f2c pass1,200 original executions with only the modal boundary adapted. Acceptance5d6b3c passes800 full original executions with allocation/radio/close adapters, preserving swaps, a second contract-renewal pass and welcome news. An original-career integration exercises timed offers and acceptance for employed and unemployed managers. Form30 presentation and its club-information child still need implementation.
