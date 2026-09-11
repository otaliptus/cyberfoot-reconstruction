"""Whole 005deb00 season prize/sponsor money; no UI callees, no RNG.

Original reads career+0x3c/+0x40 club count, each club+0x39 newcomer flag,
+0x7c rank index into static prize table at *0x66ae20 (6 ints), +0x48 int64
cash, sponsor flags +0x217/+0x218/+0x214 adding *0x66b2d4 (3 ints), ledger
+0x2c at *0x66afec (56-byte records). Multiplier float at 0x5decc8 (10000.0).
x87 FILD/FMUL/FISTP retained via original instructions; STOP return only.
"""
import gzip
import struct
from pathlib import Path
from native_oracle import u, run, read32, p32, R
import random

u.mem_map(0, 0x1000)
u.mem_map(0x1400000, 0x20000)
C = 0x1401000
L = 0x1409000
u.mem_write(read32(0x66af70), p32(C))
u.mem_write(read32(0x66afec), p32(L))
career_ptr = read32(0x66ac78)

# Static original tables (verified in image; kept fixed for vectors).
prize_ptr = read32(0x66ae20)
prize_table = list(struct.unpack('<6i', u.mem_read(prize_ptr, 24)))
sponsor_ptr = read32(0x66b2d4)
sponsor_table = list(struct.unpack('<3i', u.mem_read(sponsor_ptr, 12)))
print('prize table', prize_table, 'sponsor', sponsor_table)

# Real-save-derived base: original-career.s15 clubs/ledgers/career.
save_path = R.parent / 'cyberfoot-web/native-port/tests/original-career.s15'
raw = save_path.read_bytes()
off = 4
real_career = raw[off:off + 1888]
off += 1888
import json as _json
schema = _json.loads((R.parent / 'cyberfoot-web/native-port/save-schema.mjs').read_text().split('=', 1)[1].rstrip().rstrip(';'))
real_sections = {}
for spec in schema:
    marker = struct.unpack('<i', raw[off:off + 4])[0]
    off += 4
    count = spec.get('fixedCount', marker)
    size = spec['recordSize']
    real_sections[spec['name']] = (count, size, raw[off:off + count * size])
    off += count * size
real_clubs_n, _, real_clubs = real_sections['clubs']
_, _, real_ledgers = real_sections['records_0066afec']
print('real clubs', real_clubs_n)

r = random.Random(0x5deb00)
cases = []
N = 250
for i in range(N):
    if i < 60:
        # Real-save-derived: sample real clubs/ledgers, keep real cash/rank/flags.
        club_count = r.choice([1, 2, 3, 5, 8, 12, 20])
        idxs = r.sample(range(real_clubs_n), club_count)
        clubs = bytearray(club_count * 760)
        ledgers = bytearray(club_count * 56)
        for j, idx in enumerate(idxs):
            clubs[j * 760:(j + 1) * 760] = real_clubs[idx * 760:(idx + 1) * 760]
            ledgers[j * 56:(j + 1) * 56] = real_ledgers[idx * 56:(idx + 1) * 56]
        # Keep real bytes verbatim (counts drive the loop).
        car = bytearray(real_career)
        struct.pack_into('<i', car, 0x3c, club_count)
        struct.pack_into('<i', car, 0x40, 0)
    else:
        # Synthetic edge cases: counts, extreme cash, boundary ranks, flag combos.
        if i % 25 == 0:
            club_count = r.choice([0, 1])
        elif i % 7 == 0:
            club_count = 0
        else:
            club_count = r.choice([1, 2, 3, 4, 6, 10])
        car = bytearray(1888)
        # Split total across 0x3c/0x40 to cover the original addition.
        a = r.randint(0, club_count)
        struct.pack_into('<i', car, 0x3c, a)
        struct.pack_into('<i', car, 0x40, club_count - a)
        # Occasional negative total (original skips via signed jl).
        if i % 37 == 0:
            struct.pack_into('<i', car, 0x3c, -r.randint(0, 3))
            struct.pack_into('<i', car, 0x40, 0)
            club_count = 0
        clubs = bytearray(club_count * 760)
        ledgers = bytearray(club_count * 56)
        for j in range(club_count):
            b = bytearray(760)
            # Newcomer flag: 0 triggers prize+12M path (rank must stay 0..5).
            is_new = r.choice([0, 0, 1])
            b[0x39] = 0 if is_new == 0 else r.choice([1, 2, 255])
            if b[0x39] == 0:
                rank = r.choice([0, 1, 2, 3, 4, 5, 0, 1, 5])
            else:
                rank = r.choice([-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 2147483647, -2147483648])
            struct.pack_into('<i', b, 0x7c, rank)
            cash_choices = [0, 1, -1, 12345678, 99999999, 2**63 - 1, -2**63, 2**63 - 2,
                            r.randint(-10**13, 10**13), r.randint(-2147483648, 2147483647)]
            struct.pack_into('<q', b, 0x48, r.choice(cash_choices))
            # Sponsor flags: cover all/none/single combos.
            mode = r.choice(['none', 'all', 'single', 'random'])
            if mode == 'all':
                b[0x217] = 1
                b[0x218] = 1
                b[0x214] = 1
            elif mode == 'single':
                for k in r.sample([0x217, 0x218, 0x214], 1):
                    b[k] = 1
            elif mode == 'random':
                b[0x217] = r.randrange(2)
                b[0x218] = r.randrange(2)
                b[0x214] = r.randrange(2)
            clubs[j * 760:(j + 1) * 760] = b
            for k in range(0, 56, 4):
                struct.pack_into('<i', ledgers, j * 56 + k, r.choice([0, 1, -1, r.randint(-2**31, 2**31 - 1)]))
    u.mem_write(career_ptr, bytes(car))
    u.mem_write(C, bytes(clubs) if clubs else b'')
    u.mem_write(L, bytes(ledgers) if ledgers else b'')
    run(0x5deb00, [], 1, instruction_limit=200000)
    out_clubs = bytes(u.mem_read(C, len(clubs))) if clubs else b''
    out_ledgers = bytes(u.mem_read(L, len(ledgers))) if ledgers else b''
    cases.append({
        'career': bytes(car).hex(),
        'clubs': bytes(clubs).hex(),
        'ledgers': bytes(ledgers).hex(),
        'expected': {'clubs': out_clubs.hex(), 'ledgers': out_ledgers.hex()},
    })

with gzip.open(R.parent / 'cyberfoot-web/native-port/tests/season-prize-vectors.json.gz', 'wt') as f:
    import json
    json.dump(cases, f, separators=(',', ':'))
print(f'{len(cases)} whole original season prize/sponsor comparisons generated (no stubs).')
