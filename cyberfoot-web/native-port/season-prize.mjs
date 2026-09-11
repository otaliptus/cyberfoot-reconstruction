import { record } from './save-format.mjs';
const view = (b) => new DataView(b.buffer, b.byteOffset, b.byteLength);
/** Original prize/sponsor table at *0x66ae20 (6 ints). */
export const seasonPrizes = [500000, 3000000, 1500000, 1000000, 800000, 500000];
/** Original sponsor table at *0x66b2d4 (3 ints). */
export const sponsorPrizes = [5000000, 3000000, 1000000];
const MULT = 10000n;
const BASE = 12000000;
const MIN_I64 = -(1n << 63n);
const MAX_I64 = 1n << 63n;
const addCash = (prev, amount) => {
  const sum = prev + BigInt(amount) * MULT;
  if (sum < MIN_I64 || sum >= MAX_I64) return MIN_I64;
  return sum;
};
/** Whole FUN_005deb00 season prize/sponsor settlement.
 * Newcomer clubs (byte 0x39 == 0) overwrite cash with
 * (prize[rank] + 12000000) * 10000 then add sponsors stepwise;
 * veteran clubs (0x39 != 0) add prize only for 0 <= rank < 5, then sponsors.
 * Each cash step uses the original x87 FISTP overflow rule (out of int64
 * range snaps to 0x8000000000000000, then continues). Ledger +0x2c wraps
 * int32. Newcomer rank is assumed 0..5 (original out-of-bounds reads
 * adjacent image data; vectors avoid it). */
export function applyPrizeMoney(save) {
  if (!save?.career || !save?.sections) throw Error('Original career save required.');
  const c = view(save.career);
  const total = (c.getInt32(0x3c, true) + c.getInt32(0x40, true)) | 0;
  if (total <= 0) return { clubs: 0 };
  for (let i = 0; i < total; i++) {
    const club = view(record(save, 'clubs', i));
    const ledger = view(record(save, 'records_0066afec', i));
    const newcomer = club.getUint8(0x39) === 0;
    const rank = club.getInt32(0x7c, true);
    let cash = club.getBigInt64(0x48, true);
    const addLedger = (amount) => ledger.setInt32(0x2c, (ledger.getInt32(0x2c, true) + amount) | 0, true);
    if (newcomer) {
      const prize = seasonPrizes[rank];
      cash = BigInt(prize + BASE) * MULT;
      addLedger(prize);
    } else if (rank >= 0 && rank < 5) {
      const prize = seasonPrizes[rank];
      cash = addCash(cash, prize);
      addLedger(prize);
    }
    if (club.getUint8(0x217) !== 0) {
      cash = addCash(cash, sponsorPrizes[0]);
      addLedger(sponsorPrizes[0]);
    }
    if (club.getUint8(0x218) !== 0) {
      cash = addCash(cash, sponsorPrizes[1]);
      addLedger(sponsorPrizes[1]);
    }
    if (club.getUint8(0x214) !== 0) {
      cash = addCash(cash, sponsorPrizes[2]);
      addLedger(sponsorPrizes[2]);
    }
    club.setBigInt64(0x48, cash, true);
  }
  return { clubs: total };
}
