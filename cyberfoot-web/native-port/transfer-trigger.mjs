/** Transfer-auction (TForm23) and contract (Form24) triggers.
 *
 * Original sites ported:
 * - 005f99c4 humanNext auction branch: when career+0x88==1 (league) and the
 *   humanParticipation flag (DAT_006d3f40, set by 005f92d8) is true, the
 *   original clears DAT_0066b2e0, runs 005f996c (hasUnderLimitHumanClub,
 *   already verified in results-routing.mjs) and on Random(3)>=1 resets
 *   DAT_0066ad44 (auctionPlayer) to -1 and shows TForm23 (class 005a2804)
 *   instead of the TForm13 hub (class 00634a00). Cup/other (non-1, non-7..9)
 *   shows the hub; 7..9 runs the national assignment chain then the hub.
 * - 005a3ac8 auctionStart eligibility scan: first career 0x13c/0x140 club with
 *   cash>=base*10000, senior strength 0x64<limit (originalSeniorSquadLimit=30,
 *   verified in auction.mjs) and player club!=id starts bidding, otherwise the
 *   original resolves immediately via 005a3d1c. This module reuses that scan as
 *   a pure check without UI/resolve side effects.
 * - 005a3014 selection prefix + base-price block (005a38e4-005a3934): the
 *   native selectAuctionLot omits the base price. Here the base is
 *   originalPlayerValue (verified in player-value.mjs); the original adds
 *   Random(1000) via 004032c8 when *0066b668==0, which is intentionally
 *   omitted for determinism (see uncertainties).
 * - TForm23 lifecycle: FormCreate 005a2d24 calls 005a3014 then 005a3ac8;
 *   Timer2 005a4ae0 calls 005a42e0 (auctionNextLot clearing, verified in
 *   auction.mjs). Manual sell TForm44_bt1Click 005b9200 presets 0066ad44/
 *   0066b0a4/0066b668 before showing TForm23; that manual path is distinct and
 *   not returned here (runtime preset lots are honoured when present).
 * - Form24: tiny helper 0063f294 shows TForm24 (class 005a109c); called only
 *   from manual hub buttons TForm13_Alterarsalrio1Click 0063f28c and
 *   TForm13_btalterasalClick 0063f87c. No automatic post-results or hub-day
 *   Form24 opening was found. pendingContractOffer is therefore a hub
 *   availability helper (earliest-expiry human player), not an automatic
 *   trigger. Loan offers (TForm59 via 0063ff1c, recall 0064ff24 via
 *   TForm13_CancelarEmprstimo1Click 00641340, TForm14) are separate and never
 *   returned here.
 *
 * Shell insertion points (cyberfoot-web/native-port/game-shell.mjs):
 * - humanNext() at line 296 (`async function humanNext(){...}`): after
 *   computing competition/date and before `return presentScreen(clubHubView..
 *   at line 306, call `pendingAuctionOffer(save,runtime)`. When non-null,
 *   seed `runtime.auctionPlayer`/`runtime.auctionBasePrice` from the
 *   descriptor, then `await openAuction()` (line 427
 *   `async function openAuction(){...}`, public at `window.gameShell.
 *   openAuction` line 496) instead of the hub, then `consumeAuctionOffer(
 *   save,runtime)`. When null, keep the existing hub path. This replaces the
 *   dev-only `dev-auction` click at line 463.
 * - showHub() at line 270 (`function showHub(){...}`) and
 *   finishContinuation() at line 383 (`async function finishContinuation(){...
 *   showHub();}`): before `void renderer.show(frame)`, call
 *   `pendingContractOffer(save,runtime)` to preselect the renewal candidate.
 *   Pass `descriptor.player` into `openContract()` (line 442
 *   `async function openContract(){...}`, public at line 496) instead of the
 *   current arbitrary `rows[0].playerId` at lines 444-445; keep Form25
 *   accept/refuse wiring at lines 451-452. This replaces the dev-only
 *   `dev-contract` click at line 464. Do not auto-open Form24 modally without
 *   user action: the original is manual, so use the descriptor for selection
 *   and optional badging.
 * - The Form87 `bt_irprojogoClick` continuation at line 345 (which runs
 *   `continueResultsCareer` at line 360 and `finishContinuation` at line 362)
 *   must set `runtime.humanParticipation` via the existing
 *   `selectHumanParticipation` effect before the humanNext check above;
 *   otherwise pendingAuctionOffer deterministically returns null.
 *
 * Uncertainties:
 * - Original humanNext adds a 2/3 Random(3) gate (DAT_0066b2e0>=1) before the
 *   auction; this module omits the draw for determinism and returns the
 *   deterministic first eligible lot. A faithful shell would draw
 *   rng.below(3) after the gates and only honour the descriptor on >=1.
 * - Original base price is playerValue+Random(1000); here base is exactly
 *   originalPlayerValue (or runtime.auctionBasePrice when preset). Eligibility
 *   is checked against that base, so a lot affordable here is affordable in
 *   the original up to +999, but a marginal lot could differ.
 * - No automatic Form24 trigger was found; pendingContractOffer does not
 *   claim one. It returns the earliest-expiry human player whenever the club
 *   hub (non-7..9 competition) is active.
 */
import {record} from './save-format.mjs';
import {hasUnderLimitHumanClub} from './results-routing.mjs';
import {originalSeniorSquadLimit} from './player-move.mjs';
import {originalPlayerValue} from './player-value.mjs';

const careerView = (save) => new DataView(save.career.buffer, save.career.byteOffset, save.career.byteLength);
const rowView = (bytes) => new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);

function clubRow(save, id) {
  try {
    return rowView(record(save, 'clubs', id));
  } catch {
    return null;
  }
}

function playerRow(save, id) {
  try {
    return rowView(record(save, 'players', id));
  } catch {
    return null;
  }
}

/** Pure 005a3ac8 bidder scan without UI/resolve side effects. */
function auctionBidderExists(save, playerId, basePrice) {
  const career = careerView(save);
  const clubs = save.sections.find((s) => s.name === 'clubs');
  const players = save.sections.find((s) => s.name === 'players');
  if (!clubs || !players) return null;
  const prow = playerRow(save, playerId);
  if (!prow) return null;
  const playerClub = prow.getInt32(0x20, true);
  const base = BigInt(basePrice | 0) * 10000n;
  const count = career.getInt32(0x13c, true);
  for (let i = 0; i < count; i++) {
    const id = career.getInt32(0x140 + i * 4, true);
    if (id < 0 || id >= clubs.count) continue;
    const row = clubRow(save, id);
    if (!row) continue;
    if (base <= row.getBigInt64(0x48, true) && row.getInt32(0x64, true) < originalSeniorSquadLimit && playerClub !== id) {
      return {club: id, index: i + 1};
    }
  }
  return null;
}

/** Deterministic first-eligible lot mirroring the 005a3014 sequential scan
 * plus its avail>15 fallback, then the first available player in id order.
 * Random league/role draws from the original are replaced by ordered scans. */
function deterministicAuctionLot(save, previousClub) {
  const career = careerView(save);
  const clubs = save.sections.find((s) => s.name === 'clubs');
  const players = save.sections.find((s) => s.name === 'players');
  if (!clubs || !players) return null;
  const total = (career.getInt32(0x3c, true) + career.getInt32(0x40, true)) | 0;
  const previous = Number.isInteger(previousClub) ? previousClub : -1;
  const sequential = [];
  for (let id = 0; id < total && id < clubs.count; id++) {
    const row = clubRow(save, id);
    if (!row) continue;
    if (row.getUint8(0x39) === 0 && row.getInt32(0x64, true) > originalSeniorSquadLimit - 5 && row.getInt32(0xa0, true) > 11 && id !== previous) {
      sequential.push(id);
    }
  }
  const fallback = [];
  if (sequential.length === 0) {
    for (let id = 0; id < total && id < clubs.count; id++) {
      const row = clubRow(save, id);
      if (!row) continue;
      if (row.getUint8(0x39) === 0 && row.getInt32(0xa0, true) > 15 && id !== previous) {
        fallback.push(id);
        if (fallback.length >= 8) break;
      }
    }
  }
  const sellers = sequential.length > 0 ? sequential : fallback;
  for (const seller of sellers) {
    for (let pid = 0; pid < players.count; pid++) {
      const prow = playerRow(save, pid);
      if (!prow) continue;
      if (prow.getInt32(0x20, true) === seller && prow.getUint8(0x7d) !== 0) {
        let basePrice;
        try {
          basePrice = originalPlayerValue(save, pid) | 0;
        } catch {
          continue;
        }
        if (auctionBidderExists(save, pid, basePrice)) {
          return {player: pid, basePrice};
        }
      }
    }
  }
  return null;
}

/** 005f99c4 auction branch + 005a3ac8 eligibility, pure and deterministic.
 * Returns null unless the original would show TForm23 with a biddable lot;
 * immediate-resolve and no-lot cases also return null (shell keeps the hub). */
export function pendingAuctionOffer(save, runtime) {
  const state = runtime ?? {};
  if (!save || !save.career || !Array.isArray(save.sections)) return null;
  let career;
  try {
    career = careerView(save);
  } catch {
    return null;
  }
  let day;
  try {
    day = career.getInt32(0x16c, true);
  } catch {
    return null;
  }
  if (state.auctionOfferDay === day) return null;
  let competition;
  try {
    competition = career.getInt32(0x88, true);
  } catch {
    return null;
  }
  if (competition !== 1) return null;
  if (!state.humanParticipation) return null;
  try {
    if (!hasUnderLimitHumanClub(save)) return null;
  } catch {
    return null;
  }
  const presetPlayer = state.auctionPlayer ?? -1;
  if (Number.isInteger(presetPlayer) && presetPlayer >= 0) {
    let basePrice = state.auctionBasePrice;
    if (!Number.isInteger(basePrice)) {
      try {
        basePrice = originalPlayerValue(save, presetPlayer) | 0;
      } catch {
        return null;
      }
    }
    if (auctionBidderExists(save, presetPlayer, basePrice)) {
      return {player: presetPlayer, basePrice: basePrice | 0};
    }
    return null;
  }
  return deterministicAuctionLot(save, state.auctionPreviousClub ?? -1);
}

/** Hub availability for manual Form24 renewal (0063f294 via 0063f28c/0063f87c).
 * No automatic Form24 trigger was found; this picks the earliest-expiry human
 * player whenever the club hub is active (competition outside 7..9). */
export function pendingContractOffer(save, runtime) {
  void runtime;
  if (!save || !save.career || !Array.isArray(save.sections)) return null;
  let career;
  try {
    career = careerView(save);
  } catch {
    return null;
  }
  let competition;
  try {
    competition = career.getInt32(0x88, true);
  } catch {
    return null;
  }
  if (competition >= 7 && competition <= 9) return null;
  let human;
  try {
    human = career.getInt32(8, true);
  } catch {
    return null;
  }
  const players = save.sections.find((s) => s.name === 'players');
  if (!players) return null;
  let best = -1;
  let bestEnd = Infinity;
  for (let id = 0; id < players.count; id++) {
    const prow = playerRow(save, id);
    if (!prow) continue;
    if (prow.getInt32(0x20, true) !== human) continue;
    const end = prow.getFloat64(0x70, true);
    if (!Number.isFinite(end)) continue;
    if (end < bestEnd || (end === bestEnd && (best < 0 || id < best))) {
      best = id;
      bestEnd = end;
    }
  }
  if (best < 0) return null;
  const prow = playerRow(save, best);
  if (!prow) return null;
  let offer;
  try {
    offer = Number(prow.getBigInt64(0x38, true) / 10000n);
  } catch {
    return null;
  }
  if (!Number.isFinite(offer)) return null;
  return {player: best, offer: offer | 0};
}

/** Mark the auction offer consumed for the current career day.
 * Mirrors the DAT_0066b2e0=0 reset at the top of 005f99c4; the day guard is a
 * shell-level one-shot so the hub does not reopen Form23 repeatedly. */
export function consumeAuctionOffer(save, runtime) {
  const state = runtime ?? {};
  if (!state || typeof state !== 'object') throw Error('Original runtime state required.');
  let day = null;
  try {
    day = save && save.career ? careerView(save).getInt32(0x16c, true) : null;
  } catch {
    day = null;
  }
  if (!Number.isInteger(day)) throw Error('Original career day required.');
  state.auctionOfferDay = day;
  state.auctionGate = 0;
  return state;
}
