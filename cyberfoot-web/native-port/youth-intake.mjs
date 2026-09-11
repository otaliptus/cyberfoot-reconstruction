/** Native JavaScript reconstruction. Addresses refer to cf2015.exe.
 * Whole 00652be0 youth intake per club, plus the 005dfe10 season loop wrapper.
 *
 * Player record layout from decompile (recordSize 304 = 0x130):
 *  0x20 club id (int, must equal target for collection)
 *  0x24 role 0..4 (int)
 *  0x15 star flag (byte, must be 0 for candidates)
 *  0x50 loan/field flag (int, must be 0)
 *  0x100 youth level (int, <2 collected, set to 1 on promotion)
 *  0x28 skill (int, caps 40/45 for level promotion)
 *  0x40/0x44 wage pair copied to 0x48/0x4c on intake
 *  0x7d selected flag (byte, set to 1)
 *
 * Club record layout from decompile (recordSize 760 = 0x2f8):
 *  0x39 human flag (byte, intake only when 0)
 *  0x68/0x6c/0x70/0x74/0x78 role counts (int, deficits >2/>3/>3/>5/>3)
 *
 * RNG order from original (verified via Unicorn hook):
 *  shuffle: Length draws of below(High) with High = count-1
 *   (for count 8, bound 7 observed; for count 1, bound 0)
 *  then for roles 1..4 with a found candidate, one below(100) each
 *   (GK role 0 has no draw). Thresholds 30/30/40/30 with skill caps
 *   40/40/45/40 at 00652be0 lines 99-104/127-132/155-160/184-189.
 */
const PLAYER_SIZE = 304;
const CLUB_SIZE = 760;
function views(save) {
  const players = save.sections.find((s) => s.name === "players");
  const clubs = save.sections.find((s) => s.name === "clubs");
  if (!players || !clubs) throw Error("Original players/clubs sections required.");
  return {
    players,
    clubs,
    p: new DataView(players.data.buffer, players.data.byteOffset, players.data.byteLength),
    c: new DataView(clubs.data.buffer, clubs.data.byteOffset, clubs.data.byteLength),
  };
}
/** Whole 00652be0 for a single club. */
export function applyYouthIntakeForClub(save, clubId, rng) {
  if (typeof rng?.below !== "function") throw Error("Original random generator required.");
  const { players, clubs, p, c } = views(save);
  if (!Number.isInteger(clubId) || clubId < 0 || clubId >= clubs.count) return;
  if (c.getUint8(clubId * CLUB_SIZE + 0x39) !== 0) return;
  const list = [];
  for (let id = 0; id < players.count; id++) {
    if (p.getInt32(id * PLAYER_SIZE + 0x20, true) === clubId && p.getInt32(id * PLAYER_SIZE + 0x100, true) < 2) {
      list.push(id);
    }
  }
  if (list.length === 0) return;
  const high = list.length - 1;
  for (let i = 0; i < list.length; i++) {
    const j = rng.below(high);
    const tmp = list[i];
    list[i] = list[j];
    list[j] = tmp;
  }
  const findCandidate = (role) => {
    for (const id of list) {
      if (p.getInt32(id * PLAYER_SIZE + 0x24, true) !== role) continue;
      if (p.getUint8(id * PLAYER_SIZE + 0x15) !== 0) continue;
      if (p.getInt32(id * PLAYER_SIZE + 0x50, true) !== 0) continue;
      return id;
    }
    return -1;
  };
  const promote = (id) => {
    p.setUint8(id * PLAYER_SIZE + 0x7d, 1);
    p.setInt32(id * PLAYER_SIZE + 0x48, p.getInt32(id * PLAYER_SIZE + 0x40, true), true);
    p.setInt32(id * PLAYER_SIZE + 0x4c, p.getInt32(id * PLAYER_SIZE + 0x44, true), true);
  };
  if (c.getInt32(clubId * CLUB_SIZE + 0x68, true) > 2) {
    const id = findCandidate(0);
    if (id >= 0) promote(id);
  }
  const roles = [
    { role: 1, count: 0x6c, need: 3, gate: 0x1e, cap: 0x28 },
    { role: 2, count: 0x70, need: 3, gate: 0x1e, cap: 0x28 },
    { role: 3, count: 0x74, need: 5, gate: 0x28, cap: 0x2d },
    { role: 4, count: 0x78, need: 3, gate: 0x1e, cap: 0x28 },
  ];
  for (const spec of roles) {
    if (c.getInt32(clubId * CLUB_SIZE + spec.count, true) <= spec.need) continue;
    const id = findCandidate(spec.role);
    if (id < 0) continue;
    promote(id);
    const draw = rng.below(100);
    if (draw > spec.gate && p.getInt32(id * PLAYER_SIZE + 0x28, true) < spec.cap) {
      p.setInt32(id * PLAYER_SIZE + 0x100, 1, true);
    }
  }
}
/** 005dfe10 season wrapper: intake for every career club. Accepts an explicit
 * clubId for single-club parity runs; otherwise loops career 0x3c+0x40. */
export function applyYouthIntake(save, rng, clubId) {
  if (clubId !== undefined) {
    applyYouthIntakeForClub(save, clubId, rng);
    return;
  }
  if (!save?.career) throw Error("Original career save required.");
  const career = new DataView(save.career.buffer, save.career.byteOffset, save.career.byteLength);
  const total = (career.getInt32(0x3c, true) + career.getInt32(0x40, true)) | 0;
  for (let id = 0; id < total; id++) applyYouthIntakeForClub(save, id, rng);
}
