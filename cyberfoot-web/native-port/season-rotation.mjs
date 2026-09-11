import { record } from './save-format.mjs';
import { originalCandidateSort } from './ai-selection.mjs';
import { removeManager, appointManager } from './manager-employment.mjs';
const view = (b) => new DataView(b.buffer, b.byteOffset, b.byteLength);
const section = (save, name) => save.sections.find((s) => s.name === name);
const FORM = 0x1417000;
const mapForm = (v) => (v === null || v === undefined ? FORM : v);
/** Whole FUN_005deccc promotion/relegation rotation, per league.
 * EAX form pointer is dead in the original (stored but never read); it is
 * accepted and ignored. EDX leagueIndex selects the league record (660
 * bytes, stride 0x294). Clubs are 760 bytes (stride 0x2f8 via 0x5f*8),
 * managers 128 bytes, ledgers 56 bytes, b608 16 bytes x5, b420 4 ints.
 * Candidate bytes use club+0x98 low byte and Random(100); sort uses the
 * original 004bcdb0 unstable order via originalCandidateSort with the
 * 005d93c8 comparator (points byte then rand byte, unsigned ascending);
 * shuffle swaps DAT_006d348c entries only when both sides are strictly >0,
 * so club 0 never moves. Manager departure/appointment reuse the verified
 * removeManager/appointManager (non-human path, RNG for appointment cash);
 * b2b8 growth, ledger+0x20 clears and cash randomisation come from those
 * helpers. Returns promoted globals for parity. */
export function applySeasonRotation(save, leagueIndex = 0, { rng, form = null } = {}) {
  if (!save?.career || !save?.sections) throw Error('Original career save required.');
  if (typeof rng?.below !== 'function') throw Error('Original random generator required.');
  mapForm(form);
  const career = view(save.career);
  const leagueSec = section(save, 'records_0066aca0');
  const clubSec = section(save, 'clubs');
  if (!leagueSec || !clubSec) throw Error('Original league/club sections required.');
  if (!Number.isInteger(leagueIndex) || leagueIndex < 0 || leagueIndex >= leagueSec.count) throw RangeError('Invalid league index.');
  const leagueBase = leagueIndex * 660;
  const leagueView = view(leagueSec.data);
  const leagueAt = (offset) => leagueView.getInt32(leagueBase + offset, true);
  const setLeague = (offset, value) => leagueView.setInt32(leagueBase + offset, value, true);
  const clubView = (id) => view(record(save, 'clubs', id));
  const total = (career.getInt32(0x3c, true) + career.getInt32(0x40, true)) | 0;
  // Candidate collection.
  const candidates = [];
  if (total > 0) {
    const country = leagueAt(0x140);
    for (let i = 0; i < total; i++) {
      const club = clubView(i);
      if (club.getInt32(0x7c, true) === 0 && club.getInt32(0x3c, true) === country) {
        candidates.push({ points: club.getUint8(0x98), club: i, rand: rng.below(100) });
      }
    }
  }
  // Original unstable sort (points, then rand, descending unsigned: larger first).
  originalCandidateSort(candidates, (a, b) => (a.points !== b.points ? Math.sign(b.points - a.points) : Math.sign(b.rand - a.rand)));
  const take = Math.min(candidates.length, 10);
  const d348c = Array.from({ length: 10 }, () => -1);
  for (let i = 0; i < take; i++) d348c[i] = candidates[i].club;
  // Shuffle: 10 draws of Random(10)+1, swap only when both sides >0.
  for (let iter = 0; iter < 10; iter++) {
    const r = rng.below(10) + 1;
    const a = d348c[r - 1];
    const b = d348c[iter];
    if (a > 0 && b > 0) {
      d348c[r - 1] = b;
      d348c[iter] = a;
    }
  }
  const d3480 = d348c[0];
  const d3484 = d348c[1];
  // Promoted performance reset (unconditional in the original; vectors keep >=2 candidates).
  for (const id of [d3480, d3484]) {
    const club = clubView(id);
    club.setInt32(0x50, 100, true);
    club.setInt32(0x54, 100, true);
  }
  const mode = career.getInt32(0x168, true);
  const divs = leagueAt(0x144);
  const leagueDiv = (div, offset) => leagueBase + div * 80 + offset;
  const leagueGet = (div, offset) => leagueView.getInt32(leagueDiv(div, offset), true);
  if (mode === 2 && divs > 0) {
    for (let div = 1; div <= divs; div++) {
      if (div === 1) {
        for (let pos = 1; pos < 0x11; pos++) setLeague(div * 80 - 0x54 + pos * 4, leagueGet(div, 0xfc + pos * 4));
      } else {
        for (let pos = 1; pos < 5; pos++) setLeague(div * 80 - 0x54 + pos * 4, leagueGet(div, 0xec + pos * 4));
        for (let pos = 5; pos < 0x11; pos++) setLeague(div * 80 - 0x54 + pos * 4, leagueGet(div, 0xfc + pos * 4));
      }
      if (div < divs) {
        for (let pos = 0x11; pos < 0x15; pos++) setLeague(div * 80 - 0x54 + pos * 4, leagueGet(div, 0x10c + pos * 4));
      } else {
        setLeague(div * 80 - 0x10, leagueGet(div, 0x140));
        setLeague(div * 80 - 0xc, leagueGet(div, 0x144));
        setLeague(div * 80 - 8, d3480);
        clubView(leagueGet(div, 0x148)).setInt32(0x7c, 0, true);
        setLeague(div * 80 - 4, d3484);
        clubView(leagueGet(div, 0x14c)).setInt32(0x7c, 0, true);
      }
    }
  }
  if (mode === 4) {
    // Ghidra 005deccc lines 143-232, transliterated with the same div*80 bases.
    setLeague(0x20, leagueAt(0x1a0));
    setLeague(0x24, leagueAt(0x1a4));
    for (let pos = 1; pos < 9; pos++) setLeague(-4 + pos * 4, leagueAt(0x14c + pos * 4));
    setLeague(0x50, leagueAt(0x170));
    setLeague(0x54, leagueAt(0x174));
    for (let pos = 3; pos < 9; pos++) setLeague(0x4c + pos * 4, leagueAt(0x19c + pos * 4));
    if (leagueAt(0x144) < 3) {
      setLeague(0x70, d3480);
      setLeague(0x74, d3484);
      clubView(leagueAt(0x1c0)).setInt32(0x7c, 0, true);
      clubView(leagueAt(0x1c4)).setInt32(0x7c, 0, true);
    } else {
      setLeague(0x70, leagueAt(0x1f0));
      setLeague(0x74, leagueAt(0x1f4));
      setLeague(0xa0, leagueAt(0x1c0));
      setLeague(0xa4, leagueAt(0x1c4));
      for (let pos = 3; pos < 9; pos++) setLeague(0x9c + pos * 4, leagueAt(0x1ec + pos * 4));
      if (leagueAt(0x144) < 4) {
        if (d3480 > -1) {
          setLeague(0xc0, d3480);
          clubView(leagueAt(0x210)).setInt32(0x7c, 0, true);
        }
        if (d3484 > -1) {
          setLeague(0xc4, d3484);
          clubView(leagueAt(0x214)).setInt32(0x7c, 0, true);
        }
      } else {
        setLeague(0xc0, leagueAt(0x240));
        setLeague(0xc4, leagueAt(0x244));
      }
    }
    if (leagueAt(0x144) > 3) {
      setLeague(0xf0, leagueAt(0x210));
      setLeague(0xf4, leagueAt(0x214));
      for (let pos = 3; pos < 9; pos++) setLeague(0xec + pos * 4, leagueAt(0x23c + pos * 4));
      if (d3480 > -1) {
        setLeague(0x110, d3480);
        clubView(leagueAt(0x260)).setInt32(0x7c, 0, true);
      }
      if (d3484 > -1) {
        setLeague(0x114, d3484);
        clubView(leagueAt(0x264)).setInt32(0x7c, 0, true);
      }
    }
  }
  if (mode === 2 && divs > 0) {
    for (let div = 1; div <= divs; div++) {
      for (let pos = 1; pos < 0x15; pos++) {
        const id = leagueGet(div, -0x54 + pos * 4);
        clubView(id).setInt32(0x7c, div, true);
        setLeague(div * 80 + 0xfc + pos * 4, id);
      }
    }
  }
  if (mode === 4 && divs > 0) {
    for (let div = 1; div <= divs; div++) {
      for (let pos = 1; pos < 0xb; pos++) {
        const id = leagueGet(div, -0x54 + pos * 4);
        clubView(id).setInt32(0x7c, div, true);
        setLeague(div * 80 + 0xfc + pos * 4, id);
      }
    }
  }
  career.setInt32(0x4c, 1, true);
  career.setInt32(0x50, 1, true);
  const b608Sec = section(save, 'records_0066b608');
  const b608 = b608Sec ? view(b608Sec.data) : null;
  const copyHistory = (id) => {
    if (!b608) return;
    const division = clubView(id).getInt32(0x7c, true);
    for (let k = 1; k < 5; k++) clubView(id).setInt32(0x1f0 + k * 4, b608.getInt32(division * 16 + (k - 1) * 4, true), true);
  };
  copyHistory(d3480);
  copyHistory(d3484);
  // Relegated buffer at 0066b420 (unsaved global, returned for parity).
  const b420 = [-1, -1, -1, -1];
  if (leagueAt(0x140) === 0x1d && career.getUint8(0x75c) !== 0) {
    for (let k = 1; k < 5; k++) b420[k - 1] = leagueAt(0xfc + k * 4);
    for (let pos = 1; pos < 0x15; pos++) {
      const id = leagueAt(0xec + pos * 4);
      clubView(id).setInt32(0x7c, 0, true);
      setLeague(0xec + pos * 4, -1);
    }
    setLeague(0x144, 3);
  }
  const assign = (promoted) => {
    if (clubView(promoted).getInt32(0x44, true) !== -1) return;
    for (let donor = 0; donor < total; donor++) {
      const dc = clubView(donor);
      if (dc.getInt32(0x7c, true) !== 0) continue;
      if (dc.getUint8(0x39) !== 0) continue;
      const managerId = dc.getInt32(0x44, true);
      if (managerId <= 0) continue;
      const dm = view(record(save, 'records_0066b718', managerId));
      if (dm.getUint8(0) === 0) continue;
      removeManager(save, donor, managerId, { rng, date: 0 });
      appointManager(save, promoted, managerId, { rng, date: 0 });
      break;
    }
  };
  assign(d3480);
  assign(d3484);
  // Stale manager-link cleanup (original Length loop over managers).
  const manSec = section(save, 'records_0066b718');
  if (manSec) {
    for (let mid = 0; mid < manSec.count; mid++) {
      const m = view(record(save, 'records_0066b718', mid));
      const clubId = m.getInt32(0x1c, true);
      if (clubId < 0) continue;
      if (m.getUint8(0) === 0) continue;
      if (m.getUint8(0x31) !== 0) continue;
      if (clubView(clubId).getInt32(0x44, true) === mid) continue;
      m.setUint8(0x40, 0);
      m.setInt32(0x1c, -1, true);
    }
  }
  return { first: d3480, second: d3484, shuffled: [...d348c], buffer: [...b420] };
}
