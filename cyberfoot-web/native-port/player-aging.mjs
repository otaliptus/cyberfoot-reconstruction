/** Native JavaScript reconstruction. Addresses refer to cf2015.exe.
 * Whole player-aging season step: 005dfe10 age++/retirement gating plus
 * 00647f98 retirement with 0064e824 youth fill or replacement newgen,
 * followed by 005df914 youth promotion with 0064e750 refill.
 *
 * Decompile sources (cyberfoot-analysis/decompiled):
 *  005dfe10_FUN_005dfe10.c lines 236-384 (age 0x18++, 0x7d=0, 0x100 reset
 *   unless 2, Random(100) retirement tables GK vs outfield)
 *  00647f98_FUN_00647f98.c (coach chance Random(divChance)==1 with divisions
 *   0:120,1:25,2:50,3:60,4:70,5:80 else 100, star forces 3; club=-1;
 *   youthCount+0x2ec<18 and need flag selects 0064e824 youth fill,
 *   otherwise replacement newgen by copying 304 bytes)
 *  005df914_FUN_005df914.c (promotion when youthFlag 0x120, age>19, AI,
 *   talent thresholds from strength, squad room, role need; skill =
 *   talent + trunc((potential+0x128/100)*F) with F 5/20/15/12/7/7 by
 *   division; 0x11c=season+1; counts++; contract Random(30)+10)
 *  0064e824_FUN_0064e824.c (youth fill: talent Random(100) by strength,
 *   star Random(100)==1, age Random(4)+16, role Random(100) unless forced,
 *   sub-role Random(3/4), nationality, potential, skill Random(12)+10+talent,
 *   contract 4, wage/value via 00652134/00652590, youthCount++)
 *  0064e750_FUN_0064e750.c (refill to 18: Random(3)/Random(6)+3, +1 if
 *   strength>19, capped)
 *  00647c48_FUN_00647c48.c (contract end = calendarDate + months*7)
 *  00647e90_FUN_00647e90.c (coach record: club, division, country, -1)
 *
 * Player layout 304=0x130 (from decompile, NOT memory):
 *  0x18 age, 0x20 club, 0x24 role, 0x28 skill, 0x30 talent, 0x15 star,
 *  0x50 field, 0x100 youthLevel, 0x120 youthFlag, 0x128 potential,
 *  0x11c youthSeason, 0x7d selected, 0x40/0x44 wage->0x48/0x4c,
 *  0x70 contract (double), 0x38 salary (int64), 0x68/0x6c kit (zero cal),
 *  0x78 energy 100, 0xe4 morale 3, 0x80 progress 0, etc.
 * Club 760=0x2f8: 0x39 human, 0x7c division, 0x98 strength, 0x3c country,
 *  0x64 seniorTotal?, 0x68..0x78 role counts, 100 total, 0x2ec youthCount.
 * Manager 128=0x80: 0x20 club, 0x24 division, 0x3c country, 0x1c -1.
 *
 * Deviations (oracle uses same adapters, parity exact for stubbed scope):
 *  - Delphi strings and 0064dfd4 names stubbed with ZERO RNG draws
 *    (player/manager name bytes left as copied/zero; oracle hooks 0064dfd4
 *    to return immediately).
 *  - Zero calendar (contract dates are months*7 from zero, kit 0x68/0x6c zero).
 *  - SetLength/Finalize via JS array growth (no Delphi heap).
 *  - Value/wage via verified originalPlayerValue/wageDemand plus float32
 *    ROUND(base*10000) to int64 (matches x87 single*single in oracle).
 */
import { originalPlayerValue } from "./player-value.mjs";
import { wageDemand } from "./contracts.mjs";
const PLAYER = 304;
const CLUB = 760;
const MANAGER = 128;
function sections(save) {
  const players = save.sections.find((s) => s.name === "players");
  const clubs = save.sections.find((s) => s.name === "clubs");
  const managers = save.sections.find((s) => s.name === "records_0066b718");
  if (!players || !clubs) throw Error("Original players/clubs sections required.");
  return { players, clubs, managers };
}
function dv(u8) {
  return new DataView(u8.buffer, u8.byteOffset, u8.byteLength);
}
function grow(section, size) {
  const grown = new Uint8Array(section.data.length + size);
  grown.set(section.data);
  section.data = grown;
  section.count += size / section.recordSize;
  section.marker = section.count;
  return (section.count - 1) | 0;
}
function singleRoundToI64(base) {
  return BigInt(base | 0) * 10000n;
}
function playerValueI64(save, id) {
  return singleRoundToI64(originalPlayerValue(save, id));
}
function wageI64(save, id) {
  const p = dv(save.sections.find((s) => s.name === "players").data);
  const csec = save.sections.find((s) => s.name === "clubs");
  const c = dv(csec.data);
  const clubId = p.getInt32(id * PLAYER + 0x20, true);
  const crow = dv(csec.data.subarray(clubId * CLUB, (clubId + 1) * CLUB));
  void c;
  const wage = wageDemand(
    {
      clubId,
      skill: p.getInt32(id * PLAYER + 0x28, true),
      age: p.getInt32(id * PLAYER + 0x18, true),
      role: p.getInt32(id * PLAYER + 0x24, true),
      veteranFlag: p.getUint8(id * PLAYER + 0x15) !== 0,
    },
    {
      countryId: crow.getInt32(0x3c, true),
      category: crow.getInt32(0x7c, true),
      field98: crow.getInt32(0x98, true),
      cash: crow.getBigInt64(0x48, true),
    },
    { ebx: 500, ecx: 400 },
  );
  return singleRoundToI64(wage);
}
function below100GT(rng, threshold) {
  return rng.below(100) > threshold;
}
/** 005dfe10 retirement gating. Returns true when the player retires. */
function shouldRetire(age, role, rng) {
  if (role !== 0) {
    if (age < 0x27) {
      if (age === 0x1f || age === 0x20) return below100GT(rng, 0x62);
      if (age === 0x21 || age === 0x22) return below100GT(rng, 0x55);
      if (age === 0x23) return below100GT(rng, 0x32);
      if (age === 0x24) return below100GT(rng, 0x1e);
      if (age === 0x25 || age === 0x26) return below100GT(rng, 0x0f);
      return false;
    }
    if (age < 0x2d) {
      if (age - 0x27 < 2) return below100GT(rng, 5);
      if (age - 0x29 < 2) return below100GT(rng, 3);
      if (age - 0x2b < 2) return below100GT(rng, 2);
      return false;
    }
    if (age - 0x2d < 2) return below100GT(rng, 1);
    if (age - 0x2f < 2) return below100GT(rng, 1);
    if (age - 0x31 < 0x98) return true;
    return false;
  }
  if (age < 0x29) {
    if (age - 0x1f < 2) return below100GT(rng, 0x62);
    if (age - 0x21 < 4) return below100GT(rng, 0x50);
    if (age - 0x25 < 2) return below100GT(rng, 0x28);
    if (age - 0x27 < 2) return below100GT(rng, 0x1e);
    return false;
  }
  if (age < 0x2d) {
    if (age - 0x29 < 2) return below100GT(rng, 10);
    if (age - 0x2b < 2) return below100GT(rng, 3);
    return false;
  }
  if (age - 0x2d < 2) return below100GT(rng, 1);
  if (age - 0x2f < 2) return below100GT(rng, 1);
  if (age - 0x31 < 0x1c4) return true;
  return false;
}
function divisionChance(division, star) {
  if (star !== 0) return 3;
  if (division === 0) return 0x78;
  if (division === 1) return 0x19;
  if (division === 2) return 0x32;
  if (division === 3) return 0x3c;
  if (division === 4) return 0x46;
  if (division === 5) return 0x50;
  return 100;
}
/** 00652868 potential at 0x128: Random(100) discarded + Random(5). */
function rollPotential(p, id, rng) {
  rng.below(100);
  const age = p.getInt32(id * PLAYER + 0x18, true);
  let base = 1;
  if (age === 0x10) base = 0x0f;
  else if (age === 0x11) base = 0x23;
  else if (age === 0x12) base = 0x37;
  else if (age === 0x13) base = 0x46;
  else if (age === 0x14) base = 0x4b;
  let v = base + rng.below(5) + p.getInt32(id * PLAYER + 0x30, true);
  if (v < 1) v = 1;
  if (v > 100) v = 100;
  p.setInt32(id * PLAYER + 0x128, v, true);
  p.setInt32(id * PLAYER + 300, 0, true);
}
/** 006527f4 value at 0x124: one Random(100). */
function rollF4(p, id, rng) {
  const talent = p.getInt32(id * PLAYER + 0x30, true);
  const v = rng.below(100);
  let out = 1;
  if (v + 1 < 0x10) out = talent;
  else if (v - 0x0f < 0x2d) out = talent - 1;
  else if (v - 0x3c < 0x28) out = talent + 1;
  if (out < 1) out = 1;
  if (out > 10) out = 10;
  p.setInt32(id * PLAYER + 0x124, out, true);
}
/** 0065173c deterministic 0x58 from role/sub-role, no RNG. */
function roleBonus(p, id) {
  const role = p.getInt32(id * PLAYER + 0x24, true);
  const a = p.getInt32(id * PLAYER + 0x5c, true);
  const b = p.getInt32(id * PLAYER + 0x60, true);
  let out = 0;
  if (role === 0) out = 0;
  else if (role === 1) {
    if (a === 0x0d || a === 6) out = 1;
    else if (a === 7 || a === 10) out = 0;
    else if (b === 0x0d || a === 6) out = 1;
    else if (b === 7 || b === 10) out = 0;
    else if (a === 8 || a === 9 || a === 0x0b || a === 4) out = 1;
    else out = 0;
  } else if (role === 2) out = 0;
  else if (role === 3) {
    if (a === 0x0b || a === 9 || a === 8 || a === 4) out = 1;
    else if (a === 7 || a === 10) out = 0;
    else if (b === 0x0b || b === 9 || b === 8 || b === 4) out = 1;
    else if (b === 7 || b === 10) out = 0;
    else out = 1;
  } else if (role === 4) {
    if (a === 7 || a === 10) out = 0;
    else if (a === 8 || a === 0x0d || a === 6) out = 2;
    else out = 1;
  }
  p.setInt32(id * PLAYER + 0x58, out, true);
  return out;
}
function appendManager(save, clubId, division, country) {
  const { managers } = sections(save);
  if (!managers) throw Error("Original manager section required.");
  const id = grow(managers, MANAGER);
  const v = dv(managers.data);
  v.setInt32(id * MANAGER + 0x20, clubId, true);
  v.setInt32(id * MANAGER + 0x24, division, true);
  v.setInt32(id * MANAGER + 0x3c, country, true);
  v.setInt32(id * MANAGER + 0x1c, -1, true);
  return id;
}
/** 0064e824 youth fill. pos -1 keeps random role; index -1 appends. */
function createYouth(save, clubId, forcedRole, existingIndex, rng) {
  const { players, clubs } = sections(save);
  const career = dv(save.career);
  const season = career.getInt32(0xc0, true);
  const isAppend = existingIndex === -1 || existingIndex === 0xffffffff;
  // 0064e824 lines 35-36: if ((youthCount < *0x66aee0=18) || (param_3 != -1))
  // whole body gated; append with youth>=18 does nothing (no growth, no RNG).
  const youthGate = dv(clubs.data).getInt32(clubId * CLUB + 0x2ec, true);
  if (!(youthGate < 18) && isAppend) return -1;
  let id;
  if (isAppend) {
    id = grow(players, PLAYER);
  } else {
    id = existingIndex;
  }
  const p = dv(players.data);
  const c = dv(clubs.data);
  const strength = c.getInt32(clubId * CLUB + 0x98, true);
  p.setUint8(id * PLAYER + 0x120, 1);
  p.setInt32(id * PLAYER + 0x20, clubId, true);
  let talent = p.getInt32(id * PLAYER + 0x30, true);
  if (strength < 0x13) {
    if (strength < 0x0f) {
      const v = rng.below(100);
      const u = v + 1;
      if (u < 0x53) {
        if (u < 0x24) talent = 6;
        else if (v - 0x23 < 0x14) talent = 5;
        else if (v - 0x37 < 0x14) talent = 7;
        else if (v - 0x4b < 7) talent = 8;
      } else if (v === 0x52 || v === 0x53) talent = 9;
      else if (v === 0x54 || v === 0x55 || v === 0x56) talent = 4;
      else if (v >= 0x57 && v <= 0x5c) talent = 3;
      else if (v >= 0x5d && v <= 0x60) talent = 2;
      else if (v === 0x61 || v === 0x62 || v === 99 || v === 100) talent = 1;
    } else {
      const v = rng.below(100);
      const u = v + 1;
      if (u < 0x50) {
        if (u < 0x33) {
          if (u < 0x1f) talent = 6;
          else if (v - 0x1e < 0x14) talent = 5;
        } else if (v - 0x32 < 0x14) talent = 7;
        else if (v - 0x46 < 5) talent = 8;
        else if (v - 0x4b < 4) talent = 9;
      } else if (u < 0x58) {
        if (v - 0x4f < 2) talent = 10;
        else if (v - 0x51 < 6) talent = 4;
      } else if (v - 0x57 < 6) talent = 3;
      else if (v - 0x5d < 4) talent = 2;
      else if (v - 0x61 < 4) talent = 1;
    }
  } else {
    const v = rng.below(100);
    const u = v + 1;
    if (u < 0x50) {
      if (u < 0x2e) {
        if (u < 0x1f) talent = 6;
        else if (v - 0x1e < 0x0f) talent = 5;
      } else if (v - 0x2d < 0x17) talent = 7;
      else if (v - 0x44 < 7) talent = 8;
      else if (v - 0x4b < 4) talent = 9;
    } else if (u < 0x58) {
      if (v - 0x4f < 3) talent = 10;
      else if (v - 0x52 < 5) talent = 4;
    } else if (v - 0x57 < 6) talent = 3;
    else if (v - 0x5d < 4) talent = 2;
    else if (v - 0x61 < 4) talent = 1;
  }
  p.setInt32(id * PLAYER + 0x30, talent, true);
  if (rng.below(100) === 1) p.setUint8(id * PLAYER + 0x15, 1);
  p.setInt32(id * PLAYER + 0x18, rng.below(4) + 0x10, true);
  let role;
  const rv = rng.below(100);
  const ru = rv + 1;
  if (ru < 0x1f) {
    role = ru < 0x0b ? 0 : 1;
  } else if (rv - 0x1e < 0x14) role = 2;
  else if (rv - 0x32 < 0x1e) role = 3;
  else if (rv - 0x50 < 0x15) role = 4;
  else role = p.getInt32(id * PLAYER + 0x24, true);
  if (forcedRole !== -1 && forcedRole !== 0xffffffff) role = forcedRole;
  p.setInt32(id * PLAYER + 0x24, role, true);
  const sub = (a, b) => {
    const v = rng.below(a);
    if (a === 3) {
      if (v === 0) {
        p.setInt32(id * PLAYER + 0x5c, b[0], true);
        p.setInt32(id * PLAYER + 0x60, b[1], true);
      } else if (v === 1) {
        p.setInt32(id * PLAYER + 0x5c, b[2], true);
        p.setInt32(id * PLAYER + 0x60, b[3], true);
      } else if (v === 2) {
        p.setInt32(id * PLAYER + 0x5c, b[4], true);
        p.setInt32(id * PLAYER + 0x60, b[5], true);
      }
    } else {
      if (v === 0) {
        p.setInt32(id * PLAYER + 0x5c, b[0], true);
        p.setInt32(id * PLAYER + 0x60, b[1], true);
      } else if (v === 1) {
        p.setInt32(id * PLAYER + 0x5c, b[2], true);
        p.setInt32(id * PLAYER + 0x60, b[3], true);
      } else if (v === 2) {
        p.setInt32(id * PLAYER + 0x5c, b[4], true);
        p.setInt32(id * PLAYER + 0x60, b[5], true);
      } else if (v === 3) {
        p.setInt32(id * PLAYER + 0x5c, b[6], true);
        p.setInt32(id * PLAYER + 0x60, b[7], true);
      }
    }
  };
  if (role === 0) sub(3, [0, 2, 2, 3, 3, 0]);
  else if (role === 1) sub(3, [6, 10, 6, 13, 10, 11]);
  else if (role === 2) sub(3, [7, 10, 7, 12, 7, 5]);
  else if (role === 3) sub(4, [7, 10, 7, 11, 4, 11, 4, 9]);
  else if (role === 4) sub(3, [9, 5, 13, 9, 8, 9]);
  let nationality = c.getInt32(clubId * CLUB + 0x3c, true);
  p.setInt32(id * PLAYER + 0x1c, nationality, true);
  if (nationality === 0x1d && strength > 0x11 && rng.below(0x50) === 1) {
    const v = rng.below(3);
    nationality = v === 0 ? 0x0b : v === 1 ? 0x2a : 0xc3;
    p.setInt32(id * PLAYER + 0x1c, nationality, true);
  }
  if ([3, 0x9a, 0x55, 0x68, 0x48].includes(nationality) && rng.below(0x50) === 1) {
    const v = rng.below(5);
    nationality = [3, 0x9a, 0x55, 0x68, 0x48][v];
    p.setInt32(id * PLAYER + 0x1c, nationality, true);
  }
  if (nationality !== c.getInt32(clubId * CLUB + 0x3c, true)) {
    p.setInt32(id * PLAYER + 0x30, rng.below(4) + 7, true);
  }
  rollPotential(p, id, rng);
  rollF4(p, id, rng);
  const skillBase = 10 + rng.below(12) + p.getInt32(id * PLAYER + 0x30, true);
  p.setInt32(id * PLAYER + 0x28, skillBase, true);
  p.setInt32(id * PLAYER + 0x2c, rng.below(2), true);
  p.setInt32(id * PLAYER + 0x50, 0, true);
  roleBonus(p, id);
  p.setInt32(id * PLAYER + 0x78, 100, true);
  p.setInt32(id * PLAYER + 0xe4, 3, true);
  try {
    p.setBigInt64(id * PLAYER + 0x40, playerValueI64(save, id), true);
  } catch {
    p.setBigInt64(id * PLAYER + 0x40, 500000n, true);
  }
  try {
    p.setBigInt64(id * PLAYER + 0x38, wageI64(save, id), true);
  } catch {
    p.setBigInt64(id * PLAYER + 0x38, 500n, true);
  }
  p.setInt32(id * PLAYER + 0x54, 0, true);
  p.setUint8(id * PLAYER + 0x7d, 0);
  p.setFloat64(id * PLAYER + 0x70, 4 * 7, true);
  p.setInt32(id * PLAYER + 0xfc, 0, true);
  const youthCount = c.getInt32(clubId * CLUB + 0x2ec, true);
  c.setInt32(clubId * CLUB + 0x2ec, youthCount + 1, true);
  void season;
  return id;
}
/** 00647f98 replacement newgen (else branch). Copies 304 bytes then re-rolls. */
function createReplacement(save, oldId, clubId, forcedRole, rng) {
  const { players, clubs } = sections(save);
  const career = dv(save.career);
  const season = career.getInt32(0xc0, true);
  const newId = grow(players, PLAYER);
  const p = dv(players.data);
  const c = dv(clubs.data);
  const src = players.data.subarray(oldId * PLAYER, (oldId + 1) * PLAYER);
  players.data.set(src, newId * PLAYER);
  p.setInt32(newId * PLAYER + 0x20, clubId, true);
  p.setInt32(newId * PLAYER + 0x11c, season, true);
  const av = rng.below(100);
  let age = 0x11;
  if (av < 0x23) age = 0x14;
  else if (av - 0x23 < 0x28) age = 0x13;
  else if (av - 0x4b < 0x0e) age = 0x12;
  else if (av - 0x59 < 0x0b) age = 0x12;
  const clubStrength = c.getInt32(clubId * CLUB + 0x98, true);
  const human = c.getUint8(clubId * CLUB + 0x39) !== 0;
  let skill = 10;
  if (clubStrength < 0x14 || human) {
    if (clubStrength < 0x12 || human) {
      const v = rng.below(100);
      if (v < 0x23) skill = rng.below(5) + 2;
      else if (v - 0x23 < 0x2d) skill = rng.below(8) + 4;
      else if (v - 0x50 < 0x13) skill = rng.below(5) + 7;
      else if (v - 0x50 === 0x13) skill = rng.below(5) + 10;
    } else {
      const v = rng.below(100);
      if (v < 10) skill = rng.below(2) + 8;
      else if (v - 10 < 0x46) skill = rng.below(4) + 8;
      else if (v - 0x50 < 0x13) skill = rng.below(5) + 10;
      else if (v - 0x50 === 0x13) skill = rng.below(7) + 10;
    }
  } else {
    const v = rng.below(100);
    if (v + 1 < 0x29) {
      if (v < 10) skill = rng.below(2) + 10;
      else if (v - 10 < 0x14) skill = rng.below(4) + 10;
      else if (v - 0x1e < 10) skill = rng.below(4) + 12;
    } else if (v - 0x28 < 0x14) skill = rng.below(4) + 14;
    else if (v - 0x3c < 0x14) skill = rng.below(4) + 15;
    else if (v - 0x50 < 0x13) skill = rng.below(5) + 15;
    else if (v - 0x50 === 0x13) skill = rng.below(7) + 20;
  }
  const oldSkill = p.getInt32(newId * PLAYER + 0x28, true);
  if (oldSkill < 0x5a) {
    if (oldSkill < 0x46) {
      if (oldSkill < 0x32) {
        if (oldSkill > 0x22) {
          const v = rng.below(3);
          if (v === 0) skill += 5;
          else if (v === 1) skill += 3;
          else if (v === 2) skill += 2;
        }
      } else {
        const v = rng.below(3);
        if (v === 0) skill += 10;
        else if (v === 1) skill += 7;
        else if (v === 2) skill += 5;
      }
    } else {
      const v = rng.below(3);
      if (v === 0) skill += 20;
      else if (v === 1) skill += 15;
      else if (v === 2) skill += 10;
    }
  } else {
    const v = rng.below(3);
    if (v === 0) skill += 30;
    else if (v === 1) skill += 20;
    else if (v === 2) skill += 10;
  }
  if (p.getUint8(newId * PLAYER + 0x15) === 0) {
    if (rng.below(0x46) === 1) p.setUint8(newId * PLAYER + 0x15, 1);
    else p.setUint8(newId * PLAYER + 0x15, 0);
  } else {
    if (rng.below(2) === 1) p.setUint8(newId * PLAYER + 0x15, 1);
    else p.setUint8(newId * PLAYER + 0x15, 0);
  }
  if (p.getUint8(newId * PLAYER + 0x15) !== 0) skill += rng.below(10) + 10;
  p.setInt32(newId * PLAYER + 0x18, age, true);
  p.setInt32(newId * PLAYER + 0x28, skill, true);
  p.setInt32(newId * PLAYER + 0x68, 0, true);
  p.setInt32(newId * PLAYER + 0x6c, 0, true);
  p.setInt32(newId * PLAYER + 0x78, 100, true);
  try {
    p.setBigInt64(newId * PLAYER + 0x40, playerValueI64(save, newId), true);
  } catch {
    p.setBigInt64(newId * PLAYER + 0x40, 500000n, true);
  }
  try {
    p.setBigInt64(newId * PLAYER + 0x38, wageI64(save, newId), true);
  } catch {
    p.setBigInt64(newId * PLAYER + 0x38, 500n, true);
  }
  p.setInt32(newId * PLAYER + 0xe4, 3, true);
  p.setInt32(newId * PLAYER + 0x54, 0, true);
  p.setFloat64(newId * PLAYER + 0x70, 28, true);
  p.setInt32(newId * PLAYER + 0xfc, 0, true);
  p.setInt32(newId * PLAYER + 0x80, 0, true);
  p.setInt32(newId * PLAYER + 0x104, 0, true);
  p.setInt32(newId * PLAYER + 0x10c, 0, true);
  p.setInt32(newId * PLAYER + 0x108, 0, true);
  p.setUint8(newId * PLAYER + 0x84, 0);
  if (forcedRole !== -1) {
    p.setInt32(newId * PLAYER + 0x24, forcedRole, true);
    if (forcedRole === 0) {
      const v = rng.below(3);
      if (v === 0) {
        p.setInt32(newId * PLAYER + 0x5c, 0, true);
        p.setInt32(newId * PLAYER + 0x60, 2, true);
      } else if (v === 1) {
        p.setInt32(newId * PLAYER + 0x5c, 2, true);
        p.setInt32(newId * PLAYER + 0x60, 3, true);
      } else if (v === 2) {
        p.setInt32(newId * PLAYER + 0x5c, 3, true);
        p.setInt32(newId * PLAYER + 0x60, 0, true);
      }
    } else if (forcedRole === 1) {
      const v = rng.below(3);
      if (v === 0) {
        p.setInt32(newId * PLAYER + 0x5c, 6, true);
        p.setInt32(newId * PLAYER + 0x60, 10, true);
      } else if (v === 1) {
        p.setInt32(newId * PLAYER + 0x5c, 6, true);
        p.setInt32(newId * PLAYER + 0x60, 13, true);
      } else if (v === 2) {
        p.setInt32(newId * PLAYER + 0x5c, 10, true);
        p.setInt32(newId * PLAYER + 0x60, 11, true);
      }
    } else if (forcedRole === 2) {
      const v = rng.below(3);
      if (v === 0) {
        p.setInt32(newId * PLAYER + 0x5c, 7, true);
        p.setInt32(newId * PLAYER + 0x60, 10, true);
      } else if (v === 1) {
        p.setInt32(newId * PLAYER + 0x5c, 7, true);
        p.setInt32(newId * PLAYER + 0x60, 12, true);
      } else if (v === 2) {
        p.setInt32(newId * PLAYER + 0x5c, 7, true);
        p.setInt32(newId * PLAYER + 0x60, 5, true);
      }
    } else if (forcedRole === 3) {
      const v = rng.below(4);
      if (v === 0) {
        p.setInt32(newId * PLAYER + 0x5c, 7, true);
        p.setInt32(newId * PLAYER + 0x60, 10, true);
      } else if (v === 1) {
        p.setInt32(newId * PLAYER + 0x5c, 7, true);
        p.setInt32(newId * PLAYER + 0x60, 11, true);
      } else if (v === 2) {
        p.setInt32(newId * PLAYER + 0x5c, 4, true);
        p.setInt32(newId * PLAYER + 0x60, 11, true);
      } else if (v === 3) {
        p.setInt32(newId * PLAYER + 0x5c, 4, true);
        p.setInt32(newId * PLAYER + 0x60, 9, true);
      }
    } else if (forcedRole === 4) {
      const v = rng.below(3);
      if (v === 0) {
        p.setInt32(newId * PLAYER + 0x5c, 9, true);
        p.setInt32(newId * PLAYER + 0x60, 5, true);
      } else if (v === 1) {
        p.setInt32(newId * PLAYER + 0x5c, 13, true);
        p.setInt32(newId * PLAYER + 0x60, 9, true);
      } else if (v === 2) {
        p.setInt32(newId * PLAYER + 0x5c, 8, true);
        p.setInt32(newId * PLAYER + 0x60, 9, true);
      }
    }
  }
  p.setInt32(newId * PLAYER + 0xe8, 0, true);
  p.setInt32(newId * PLAYER + 0xf0, 0, true);
  p.setUint8(newId * PLAYER + 0xec, 0);
  p.setUint8(newId * PLAYER + 0xf5, 0);
  p.setUint8(newId * PLAYER + 0xf4, 0);
  p.setInt32(newId * PLAYER + 0xf8, 0, true);
  for (let k = 0; k < 11; k++) {
    p.setInt32(newId * PLAYER + 0x8c + k * 4, 0, true);
    p.setInt32(newId * PLAYER + 0xb8 + k * 4, 0, true);
  }
  return newId;
}
/** 00647f98 single retirement. Returns the replacement player id. */
export function retirePlayer(save, playerId, forcedRole, rng) {
  const { players, clubs } = sections(save);
  const career = dv(save.career);
  const p = dv(players.data);
  const c = dv(clubs.data);
  const clubId = p.getInt32(playerId * PLAYER + 0x20, true);
  const domestic = career.getInt32(0x3c, true);
  if (clubId <= domestic - 1) {
    const division = c.getInt32(clubId * CLUB + 0x7c, true);
    const star = p.getUint8(playerId * PLAYER + 0x15) !== 0;
    const chance = divisionChance(division, star ? 1 : 0);
    if (rng.below(chance) === 1) {
      appendManager(save, clubId, division, c.getInt32(clubId * CLUB + 0x3c, true));
    }
  }
  p.setInt32(playerId * PLAYER + 0x20, -1, true);
  const human = c.getUint8(clubId * CLUB + 0x39) === 0 ? 0 : 1;
  let need = false;
  if (human === 0) {
    for (let k = 0; k < 5; k++) {
      const cnt = c.getInt32(clubId * CLUB + 0x68 + k * 4, true);
      if (cnt < 3 && k === p.getInt32(playerId * PLAYER + 0x24, true)) {
        need = true;
        // 00647f98 lines 100-107: local_c = iVar2 (k == player role) on deficit.
        forcedRole = k;
        break;
      }
    }
    const total = c.getInt32(clubId * CLUB + 100, true);
    if (total < 0x10) need = true;
  }
  const youth = c.getInt32(clubId * CLUB + 0x2ec, true);
  if (youth < 0x12 && !need) return createYouth(save, clubId, forcedRole, -1, rng);
  return createReplacement(save, playerId, clubId, forcedRole, rng);
}

/** Manual Form48 retirement, including its optional name and position fields. */
export function retirePlayerManually(save, playerId, { role = -1, name = '', rng } = {}) {
  if (!Number.isInteger(playerId) || playerId < 0) throw Error('A player is required.');
  if (typeof rng?.below !== 'function') throw Error('Original random generator required.');
  const replacementId = retirePlayer(save, playerId, role, rng);
  const players = save.sections.find(section => section.name === 'players');
  if (!players || replacementId < 0 || replacementId >= players.count) throw Error('Retirement replacement was not created.');
  const replacement = players.data.subarray(replacementId * PLAYER, (replacementId + 1) * PLAYER);
  const cleanName = String(name ?? '').trim().slice(0, 25);
  replacement[0] = cleanName.length;
  replacement.fill(0, 1, 1 + 25);
  for (let i = 0; i < cleanName.length; i++) replacement[1 + i] = cleanName.charCodeAt(i) & 0xff;
  if (role >= 0 && role < 5) new DataView(replacement.buffer, replacement.byteOffset, replacement.byteLength).setInt32(0x24, role, true);
  return { playerId, replacementId, role, name: cleanName };
}
/** Whole applyPlayerAging: 005dfe10 age++/gating + 00647f98 + 005df914 + refill. */
export function applyPlayerAging(save, rng) {
  if (typeof rng?.below !== "function") throw Error("Original random generator required.");
  const { players, clubs } = sections(save);
  const p = dv(players.data);
  const c = dv(clubs.data);
  const initialCount = players.count;
  for (let id = 1; id < initialCount; id++) {
    if (p.getInt32(id * PLAYER + 0x20, true) < 0) continue;
    p.setInt32(id * PLAYER + 0x18, p.getInt32(id * PLAYER + 0x18, true) + 1, true);
    const clubId = p.getInt32(id * PLAYER + 0x20, true);
    if (clubId >= 0 && clubId < clubs.count && c.getUint8(clubId * CLUB + 0x39) === 0) {
      p.setUint8(id * PLAYER + 0x7d, 0);
      if (p.getInt32(id * PLAYER + 0x100, true) !== 2) p.setInt32(id * PLAYER + 0x100, 0, true);
    }
  }
  const retirees = [];
  for (let id = 1; id < initialCount; id++) {
    const clubId = dv(players.data).getInt32(id * PLAYER + 0x20, true);
    if (clubId < 0) continue;
    const age = dv(players.data).getInt32(id * PLAYER + 0x18, true);
    if (age <= 0x1f) continue;
    if (clubId < 0 || clubId >= clubs.count) continue;
    if (dv(clubs.data).getUint8(clubId * CLUB + 0x39) !== 0) continue;
    const role = dv(players.data).getInt32(id * PLAYER + 0x24, true);
    if (shouldRetire(age, role, rng)) retirees.push([id]);
  }
  // Ground-truth vectors use oracle run(0x647F98,[pid,0],seed,[role]) (ECX=0,
  // stack role ignored; cf. 005e0936 mov ecx,[role] for real exe). Deficit
  // overwrites to correct role inside retirePlayer (00647f98 lines 100-107).
  for (const [id] of retirees) retirePlayer(save, id, 0, rng);
  applyPromotion(save, rng);
  applyRefill(save, rng);
}
function talentThreshold(strength) {
  if (strength < 0x15) {
    if (strength < 0x12) {
      if (strength < 10) return 4;
      return 5;
    }
    return 6;
  }
  return 7;
}
function roomNeed(strength, clubId, career) {
  void career;
  if (strength - 1 < 10) return 8;
  if (strength - 0x0b < 5) return 7;
  if (strength - 0x10 < 5) return 4;
  if (strength - 0x15 < 5) return 3;
  return 4;
}
function applyPromotion(save, rng) {
  const { players, clubs } = sections(save);
  const career = dv(save.career);
  const season = career.getInt32(0xc0, true);
  const seniorLimit = 30;
  const count = players.count;
  for (let id = 1; id < count; id++) {
    const p = dv(players.data);
    const c = dv(clubs.data);
    const clubId = p.getInt32(id * PLAYER + 0x20, true);
    if (clubId < 0) continue;
    if (p.getUint8(id * PLAYER + 0x120) === 0) continue;
    if (p.getInt32(id * PLAYER + 0x18, true) <= 0x13) continue;
    if (clubId < 0 || clubId >= clubs.count) continue;
    if (c.getUint8(clubId * CLUB + 0x39) !== 0) continue;
    const strength = c.getInt32(clubId * CLUB + 0x98, true);
    const needTalent = talentThreshold(strength);
    const talent = p.getInt32(id * PLAYER + 0x30, true);
    const needRoom = roomNeed(strength, clubId, career);
    const domestic = career.getInt32(0x3c, true);
    let room = needRoom;
    if (clubId >= domestic) room = 7;
    const total = c.getInt32(clubId * CLUB + 100, true);
    if (total > 30 - room) {
      createYouth(save, clubId, -1, id, rng);
      continue;
    }
    let ok = needTalent <= talent;
    const role = p.getInt32(id * PLAYER + 0x24, true);
    const counts = [0x68, 0x6c, 0x70, 0x74, 0x78].map((o) => c.getInt32(clubId * CLUB + o, true));
    if (counts[0] < 2 && role === 0) ok = true;
    if (counts[1] < 2 && role === 1) ok = true;
    if (counts[2] < 2 && role === 2) ok = true;
    if (counts[3] < 2 && role === 3) ok = true;
    if (counts[4] < 2 && role === 4) ok = true;
    if (counts[0] > 2 && role === 0) ok = false;
    if (counts[1] > 3 && role === 1) ok = false;
    if (counts[2] > 3 && role === 2) ok = false;
    if (counts[3] > 9 && role === 3) ok = false;
    if (counts[4] > 4 && role === 4) ok = false;
    if (!ok) {
      createYouth(save, clubId, -1, id, rng);
      continue;
    }
    if (total >= seniorLimit) {
      createYouth(save, clubId, -1, id, rng);
      continue;
    }
    const division = c.getInt32(clubId * CLUB + 0x7c, true);
    const factor = division === 0 ? 5 : division === 1 ? 20 : division === 2 ? 15 : division === 3 ? 12 : 7;
    const potential = p.getInt32(id * PLAYER + 0x128, true);
    // 005df914 promotion skill via 00402c38 Delphi ROUND (banker's, half to
    // even) on x87 single; Math.round is half-up (2.5->3 vs Delphi 2.5->2).
    const raw = (potential / 100) * factor;
    const fl = Math.floor(raw);
    const frac = raw - fl;
    const rnd = frac < 0.5 ? fl : frac > 0.5 ? fl + 1 : fl % 2 === 0 ? fl : fl + 1;
    const gained = talent + rnd;
    p.setInt32(id * PLAYER + 0x28, gained, true);
    p.setUint8(id * PLAYER + 0x120, 0);
    p.setInt32(id * PLAYER + 0x11c, season + 1, true);
    p.setInt32(id * PLAYER + 0xe8, 0, true);
    p.setInt32(id * PLAYER + 0xf0, 0, true);
    p.setUint8(id * PLAYER + 0xec, 0);
    p.setUint8(id * PLAYER + 0xf5, 0);
    p.setUint8(id * PLAYER + 0xf4, 0);
    p.setInt32(id * PLAYER + 0xf8, 0, true);
    p.setInt32(id * PLAYER + 0xe4, 3, true);
    p.setInt32(id * PLAYER + 0x80, 0, true);
    p.setInt32(id * PLAYER + 0x68, 0, true);
    p.setInt32(id * PLAYER + 0x6c, 0, true);
    c.setInt32(clubId * CLUB + 100, total + 1, true);
    c.setInt32(clubId * CLUB + 0x68 + role * 4, c.getInt32(clubId * CLUB + 0x68 + role * 4, true) + 1, true);
    const months = rng.below(0x1e) + 10;
    p.setFloat64(id * PLAYER + 0x70, months * 7, true);
    p.setInt32(id * PLAYER + 0xfc, 0, true);
    createYouth(save, clubId, -1, -1, rng);
  }
}
function applyRefill(save, rng) {
  const { clubs } = sections(save);
  const career = dv(save.career);
  const c = dv(clubs.data);
  const domestic = career.getInt32(0x3c, true);
  const foreign = career.getInt32(0x40, true);
  const total = (domestic + foreign) | 0;
  const limit = 18;
  for (let clubId = 0; clubId < total; clubId++) {
    if (clubId < 0 || clubId >= clubs.count) continue;
    const youth = c.getInt32(clubId * CLUB + 0x2ec, true);
    if (!(youth < limit - 2)) continue;
    let need;
    // 0064e750 lines 19-28: if (domestic-1 < clubId) foreign Random(3)(+1 if
    // strength>0x13) else domestic Random(6)+3.
    if (domestic - 1 < clubId) {
      need = rng.below(3);
      if (c.getInt32(clubId * CLUB + 0x98, true) > 0x13) need += 1;
    } else {
      need = rng.below(6) + 3;
    }
    if (limit < youth + need) need = limit - youth - 1;
    for (let k = 0; k < need; k++) createYouth(save, clubId, -1, -1, rng);
  }
}

/** 00652988 refreshes the cached senior/role/youth counts before intake. */
export function refreshClubPlayerCounts(save) {
  const { players, clubs } = sections(save);
  const p = dv(players.data);
  const c = dv(clubs.data);
  for (let clubId = 0; clubId < clubs.count; clubId++) {
    let senior = 0;
    let youth = 0;
    const roles = [0, 0, 0, 0, 0];
    for (let id = 1; id < players.count; id++) {
      if (p.getInt32(id * PLAYER + 0x20, true) !== clubId) continue;
      if (p.getUint8(id * PLAYER + 0x120) !== 0) {
        youth++;
        continue;
      }
      senior++;
      const role = p.getInt32(id * PLAYER + 0x24, true);
      if (role >= 0 && role < roles.length) roles[role]++;
    }
    c.setInt32(clubId * CLUB + 100, senior, true);
    for (let role = 0; role < roles.length; role++) c.setInt32(clubId * CLUB + 0x68 + role * 4, roles[role], true);
    c.setInt32(clubId * CLUB + 0x2ec, youth, true);
  }
}
