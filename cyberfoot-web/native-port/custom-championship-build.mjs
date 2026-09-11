/** Custom-championship build chain: 0062c884 + 00631634 + 00631974.
 *
 * Shell integration:
 * - Form39.bt1Click builds a fresh template career and opens the original
 *   Form11 team selector. Form11.button1Click applies the same build to the
 *   confirmed manager/club save and enters the career. The custom calendar
 *   adapter remains a separate pending step; the native shell never opens a
 *   synthetic Form36 preview for this path.
 *
 * Original addresses ported:
 * - 0062c884 TForm39_bt1Click: marks team-table byte0=0xca, zeroes career
 *   0x170/0x171/0x172/0x17f/0x180/0x181, sets 0x10e from ckcopaper, name
 *   "Copa Internacional" at 0x11c (19 bytes from 0x62cb48), 0x168=4|2 from
 *   formulaper, 0xc4=0xca, league SetLength(1) with 0x140=0xca/0x14c=1, calls
 *   00631634(0,0xca). Ported as career writes + league append below.
 * - 00631634 fixture copy: copies marked teams (byte0==0xca, byte1!=0,
 *   byte4 len!=0, byte2==0x0f) into 0x74-byte temp rows + 760-byte club
 *   records, then calls 00631974. Save port builds temp rows from explicit
 *   clubIds (all pass; team-table filter has no save equivalent) and skips
 *   club-record growth/string tables (no save equivalents).
 * - 00631974 fixture build: Random(0x32) byte 0x51 per team, sort via 004bcdb0
 *   with comparator at 00631934 (byte1 descending, byte0x51 ascending),
 *   division thresholds differing for mode 0x168==2 (20/div, 0x52/0x3e/0x2a)
 *   vs else (10/div, 0x2a/0x20), fills league pairing slots, sets club
 *   0x7c=division, frees array. Ported exactly (2xK RNG draws to match
 *   placeholder+final, originalCandidateSort, thresholds, slot offsets
 *   d*0x50-0x54+p*4 and d*0x50+0xfc+p*4).
 *
 * Save layouts used (save-format.mjs/save-schema.mjs): career 1888 bytes,
 * clubs 760 bytes (country 0x3c, division 0x7c, strength low byte 0x98),
 * records_0066aca0 660 bytes (stride 0x294, country 0x140, divCount 0x144).
 *
 * Assumptions/deviations (provable parts ported, rest documented):
 * - Team table 0066b164 (200 bytes) has no save equivalent; clubIds input
 *   replaces grid-col4 selection + marking. Marking loop itself is trivial
 *   (byte0==country -> 0xca) and covered by oracle vectors' teamTableMarked.
 * - Copy filter (byte1/byte4/byte2) is team-table-specific; save port treats
 *   all clubIds as eligible (vectors' saveClubsBefore are pre-filtered).
 * - Temp byte1 sort key maps to club+0x98 low byte (team byte3 -> club 0x98
 *   per 00631634); vectors construct save clubs with matching strengths.
 * - Club-record growth (0066af70/0066b4e0) and string table 0066ac40 have no
 *   save equivalents and are skipped; port reuses existing club records,
 *   setting 0x3c=0xca for all selected (mirrors copy's country write) and
 *   0x7c=division for placed (unplaced reset to 0). Other club bytes untouched.
 * - Career 0x3c+=K increment is kept for parity (original counts new entries
 *   as additional); on reuse-model saves total will exceed clubs count by K.
 *   Vectors share the same overcount so finals still validate.
 * - League SetLength(1) (truncate) is implemented as append to preserve
 *   template data per task; on empty leagues (parity synthetics) both give 1.
 * - Tail form opens (00487474/00483d6c/00483bc4 -> TForm11) are UI-only.
 * - K<20 would OOB-read in the original (slots> K); port requires K>=1 but
 *   vectors use K>=20 (minimum safe 20 slots) and thresholds guarantee
 *   slots<=K there; callers with K<20 get best-effort fill (missing slots
 *   left as-is) documented here.
 */
import { originalCandidateSort } from './ai-selection.mjs';

export const CUSTOM_BUILD_CLUB_LIMIT = 1000;
const COPA_NAME = 'Copa Internacional';
const MARKER = 0xca;

function viewOf(bytes) {
  return new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
}

function formatMode(formatId) {
  if (formatId === '4x10') return { mode: 4, perDiv: 10 };
  if (formatId === '2x20') return { mode: 2, perDiv: 20 };
  throw new RangeError(`Unknown championship format ${String(formatId)}.`);
}

function divCountFor(mode, total) {
  if (mode === 2) {
    if (total >= 0x52) return 4;
    if (total >= 0x3e) return 3;
    if (total >= 0x2a) return 2;
    return 1;
  }
  if (total >= 0x2a) return 4;
  if (total >= 0x20) return 3;
  return 2;
}

/** 00631934 comparator: byte1 descending, byte0x51 ascending. */
function tempCompare(a, b) {
  if (b.b1 !== a.b1) return Math.sign(b.b1 - a.b1);
  return Math.sign(a.r - b.r);
}

/**
 * Apply the custom-championship build chain to a real career save.
 * Mutates save in place (career + appended league + club country/division).
 */
export function applyCustomChampionship(save, { clubIds = [], formatId = '4x10', playCup = true, rng } = {}) {
  if (!save?.career || !save?.sections) throw new Error('Original career save required.');
  if (typeof rng?.below !== 'function') throw new Error('Original random generator required.');
  const { mode, perDiv } = formatMode(formatId);
  const ids = [...clubIds].filter((id) => Number.isInteger(id) && id >= 0).slice(0, CUSTOM_BUILD_CLUB_LIMIT);
  if (!ids.length) throw new Error('Select at least one club for the custom championship.');
  const clubs = save.sections.find((s) => s.name === 'clubs');
  const leagues = save.sections.find((s) => s.name === 'records_0066aca0');
  if (!clubs || !leagues) throw new Error('Save is missing clubs or league sections.');
  for (const id of ids) {
    if (id < 0 || id >= clubs.count) throw new RangeError(`Invalid club record ${id}.`);
  }
  // 0062c884 career-param writes.
  const career = viewOf(save.career);
  for (const off of [0x170, 0x171, 0x172, 0x17f, 0x180, 0x181]) career.setUint8(off, 0);
  career.setUint8(0x10e, playCup ? 1 : 0);
  save.career[0x11c] = COPA_NAME.length;
  for (let i = 0; i < COPA_NAME.length; i += 1) save.career[0x11c + 1 + i] = COPA_NAME.charCodeAt(i);
  career.setInt32(0x168, mode, true);
  career.setInt32(0xc4, MARKER, true);
  // 0062c884 league append (task requires append, not truncate).
  const oldCount = leagues.count;
  const grown = new Uint8Array((oldCount + 1) * leagues.recordSize);
  grown.set(leagues.data);
  leagues.data = grown;
  leagues.count = oldCount + 1;
  const leagueIndex = oldCount;
  const leagueBase = leagueIndex * leagues.recordSize;
  const leagueView = viewOf(leagues.data);
  leagueView.setInt32(leagueBase + 0x140, MARKER, true);
  leagues.data[leagueBase + 0x14c] = 1;
  // 00631634 temp-row build from selected clubs (b1 = club+0x98 low byte).
  const rows = ids.map((club) => ({ club, b1: clubs.data[club * clubs.recordSize + 0x98] & 0xff, r: 0 }));
  // Placeholder draws (00631634 temp+0x51, overwritten) to match 2xK RNG consumption.
  for (let i = 0; i < rows.length; i += 1) void rng.below(0x32);
  // Final draws (00631974 byte 0x51, copy order).
  for (const row of rows) row.r = rng.below(0x32);
  // 00631974 sort via 004bcdb0 emulation.
  originalCandidateSort(rows, tempCompare);
  const divCount = divCountFor(mode, rows.length);
  leagueView.setInt32(leagueBase + 0x144, divCount, true);
  // 00631634 country write for all selected; reset divisions for clean parity.
  for (const id of ids) {
    viewOf(clubs.data.subarray(id * clubs.recordSize, (id + 1) * clubs.recordSize)).setInt32(0x3c, MARKER, true);
    viewOf(clubs.data.subarray(id * clubs.recordSize, (id + 1) * clubs.recordSize)).setInt32(0x7c, 0, true);
  }
  // 00631974 pairing fill + club division.
  let at = 0;
  for (let div = 1; div <= divCount; div += 1) {
    for (let pos = 1; pos <= perDiv; pos += 1) {
      if (at >= rows.length) break;
      const clubId = rows[at].club;
      const off1 = leagueBase + div * 0x50 - 0x54 + pos * 4;
      const off2 = leagueBase + div * 0x50 + 0xfc + pos * 4;
      leagueView.setInt32(off1, clubId, true);
      leagueView.setInt32(off2, clubId, true);
      viewOf(clubs.data.subarray(clubId * clubs.recordSize, (clubId + 1) * clubs.recordSize)).setInt32(0x7c, div, true);
      at += 1;
    }
  }
  // 00631634 epilogue: career 0x3c += copied.
  career.setInt32(0x3c, career.getInt32(0x3c, true) + rows.length, true);
  return { leagueIndex, divCount, perDiv, totalClubs: rows.length, slots: rows.slice(0, divCount * perDiv).map((row) => row.club) };
}
