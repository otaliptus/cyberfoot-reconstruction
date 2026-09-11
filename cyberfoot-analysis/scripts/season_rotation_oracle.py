"""Whole 005deccc promotion/relegation rotation, per-league.

Isolation: DynArraySetLength 004060a8 emulated for temp array at 0x6d3478
(12-byte records, length prefix at base-4, bump allocator; len 0 -> nil) plus
save-section resizes via destinations map (counts at base-4, fixed scratch
bases); Delphi string adapters 00404f30/00409c4/0040db0/004048d4 fixed
scratch plus FS zero page at 0, x87/Random native (SEED at 0x662008), STOP
return. Manager children 00649824/00649138 and sort/comparator 004bcdb0/
005d93c8 run as original instructions; no UI callees observed (no form or
dialog calls in 005deccc range). EAX param_1 is dead (stored but never read);
vectors use form null mapped to FORM in parity, EDX leagueIndex is live.
Managers forced non-human (0x31==0) so departure/appointment stay in the
allocation+RNG path without player/participation/dialog side effects.
"""
import gzip
import struct
from native_oracle import u, run, read32, p32, R
import random
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EDX, UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP

u.mem_map(0, 0x1000)
u.mem_map(0x1400000, 0x40000)
u.mem_map(0x1500000, 0x100000)
u.mem_map(0x1600000, 0x20000)
B420 = 0x1431000
u.mem_write(0x66b420, p32(B420))
career_ptr = read32(0x66ac78)

specs = [('players', 0x66b5b8, 304), ('clubs', 0x66af70, 760), ('records_0066b718', 0x66b718, 128),
         ('records_0066afec', 0x66afec, 56), ('records_0066b608', 0x66b608, 16),
         ('records_0066ae98', 0x66ae98, 1384), ('records_0066aca0', 0x66aca0, 660),
         ('records_0066b2b8', 0x66b2b8, 12), ('records_0066b0d4', 0x66b0d4, 24),
         ('records_0066b770', 0x66b770, 48)]
areas = {}
destinations = {}
direct = {0x66b608, 0x66ae98}
for i, (n, g, s) in enumerate(specs):
    base = 0x1500100 + i * 0x10000
    areas[n] = (base, s, g)
    if g in direct:
        u.mem_write(g, p32(base))
    else:
        destinations[read32(g)] = (base, s)
        u.mem_write(read32(g), p32(base))

bump = [0x1601000]


def dyn_hook(uc, address, size, data):
    dest = uc.reg_read(UC_X86_REG_EAX)
    sp = uc.reg_read(UC_X86_REG_ESP)
    length = read32(sp + 4)
    if dest == 0x6d3478:
        old_base = read32(dest)
        old_len = read32(old_base - 4) if old_base else 0
        if length == 0:
            uc.mem_write(dest, p32(0))
        else:
            base = bump[0]
            uc.mem_write(base - 4, p32(length))
            preserved = bytes(uc.mem_read(old_base, min(old_len, length) * 12)) if old_base else b''
            uc.mem_write(base, preserved + bytes(length * 12 - len(preserved)))
            uc.mem_write(dest, p32(base))
            bump[0] = base + length * 12 + 16
        uc.reg_write(UC_X86_REG_ESP, sp + 4)
        uc.reg_write(UC_X86_REG_EIP, read32(sp))
        return
    if dest in destinations:
        base, size = destinations[dest]
        old = read32(base - 4)
        if length > old:
            uc.mem_write(base + old * size, bytes((length - old) * size))
        uc.mem_write(base - 4, p32(length))
        uc.mem_write(dest, p32(base))
        uc.reg_write(UC_X86_REG_ESP, sp + 4)
        uc.reg_write(UC_X86_REG_EIP, read32(sp))
        return
    raise AssertionError(f'unexpected DynArray dest {hex(dest)} len {length}')


u.hook_add(UC_HOOK_CODE, dyn_hook, begin=0x4060a8, end=0x4060a8)


def scratch(uc, address, size, data):
    a = uc.reg_read(UC_X86_REG_EAX)
    b = uc.reg_read(UC_X86_REG_EDX)
    c = uc.reg_read(UC_X86_REG_ECX)
    if address == 0x404f30:
        uc.mem_write(a, p32(0x1009000))
        uc.mem_write(0x1008ff8, p32(1) + p32(b))
    elif address == 0x4049c4:
        uc.mem_write(a, p32(0x1009000))
        uc.mem_write(0x1009000, bytes(uc.mem_read(b, c)))
    elif address == 0x404db0:
        uc.reg_write(UC_X86_REG_EAX, read32(a))
    elif address == 0x4048d4:
        uc.mem_write(a, p32(0))
    sp = uc.reg_read(UC_X86_REG_ESP)
    uc.reg_write(UC_X86_REG_ESP, sp + 4)
    uc.reg_write(UC_X86_REG_EIP, read32(sp))


for a in [0x404f30, 0x4049c4, 0x404db0, 0x4048d4]:
    u.hook_add(UC_HOOK_CODE, scratch, begin=a, end=a)

raw = (R.parent / 'cyberfoot-web/native-port/tests/original-career.s15').read_bytes()
off = 4
real_career = raw[off:off + 1888]
off += 1888
import json as _json
schema = _json.loads((R.parent / 'cyberfoot-web/native-port/save-schema.mjs').read_text().split('=', 1)[1].rstrip().rstrip(';'))
real = {}
for spec in schema:
    marker = struct.unpack('<i', raw[off:off + 4])[0]
    off += 4
    cnt = spec.get('fixedCount', marker)
    sz = spec['recordSize']
    real[spec['name']] = (cnt, raw[off:off + cnt * sz])
    off += cnt * sz
real_club_n, real_clubs = real['clubs']
_, real_leas = real['records_0066aca0']
real_man_n, real_mans = real['records_0066b718']
_, real_ledgers = real['records_0066afec']
_, real_b608 = real['records_0066b608']
print('real', real_club_n, real_man_n)

r = random.Random(0x5deccc)
cases = []
N = 250
for i in range(N):
    counts = {'players': 4, 'clubs': 6, 'records_0066b718': 6, 'records_0066afec': 6,
              'records_0066b608': 5, 'records_0066ae98': 27, 'records_0066aca0': 1,
              'records_0066b2b8': 2, 'records_0066b0d4': 2, 'records_0066b770': 2}
    if i < 60:
        club_count = r.choice([6, 8, 10, 12])
        lea_count = 1
        man_count = r.choice([6, 8, 10])
        counts.update({'clubs': club_count, 'records_0066b718': man_count,
                       'records_0066afec': club_count, 'records_0066aca0': lea_count})
        cand = [cid for cid in range(real_club_n)
                if struct.unpack('<i', real_clubs[cid * 760 + 0x7c:cid * 760 + 0x80])[0] == 0
                and struct.unpack('<i', real_clubs[cid * 760 + 0x3c:cid * 760 + 0x40])[0] == 3][:2]
        others = r.sample([c for c in range(real_club_n) if c not in cand], club_count - len(cand))
        idxs = cand + others
        r.shuffle(idxs)
        clubs = bytearray(b''.join(real_clubs[c * 760:(c + 1) * 760] for c in idxs))
        # Remap real league/manager id references into the small slice range
        # to avoid original OOB on unsampled ids (oracle maps 64k per section,
        # but the native port bounds-checks; vectors must stay in range).
        leagues = bytearray(660)
        struct.pack_into('<i', leagues, 0x140, 3)
        struct.pack_into('<i', leagues, 0x144, struct.unpack('<i', real_leas[0x144:0x148])[0])
        for w in range(165):
            off2 = w * 4
            if off2 in (0x140, 0x144):
                continue
            struct.pack_into('<i', leagues, off2, r.randrange(club_count))
        man_idxs = r.sample(range(real_man_n), man_count)
        mans = bytearray(b''.join(real_mans[m * 128:(m + 1) * 128] for m in man_idxs))
        # Force non-human managers to stay in the allocation+RNG path.
        for mid in range(man_count):
            mans[mid * 128 + 0x31] = 0
            mans[mid * 128 + 0x00] = 1
            # Remap stale club links into range (or -1).
            old = struct.unpack('<i', mans[mid * 128 + 0x1c:mid * 128 + 0x20])[0]
            if old < 0 or r.random() < 0.3:
                struct.pack_into('<i', mans, mid * 128 + 0x1c, r.choice([-1, r.randrange(club_count)]))
            else:
                struct.pack_into('<i', mans, mid * 128 + 0x1c, r.randrange(club_count))
        # Remap club manager links into range (preserve -1 half the time).
        for cid in range(club_count):
            old = struct.unpack('<i', clubs[cid * 760 + 0x44:cid * 760 + 0x48])[0]
            if old < 0 or old >= man_count:
                struct.pack_into('<i', clubs, cid * 760 + 0x44, r.choice([-1, -1, r.randrange(man_count)]))
        leds = bytearray(b''.join(real_ledgers[c * 56:(c + 1) * 56] for c in idxs))
        car = bytearray(real_career)
        struct.pack_into('<i', car, 0x3c, club_count)
        struct.pack_into('<i', car, 0x40, 0)
        b608 = bytearray(real_b608[:80])
        b2b8 = bytearray(r.randbytes(24))
        league_index = 0
    else:
        club_count = r.choice([4, 6, 8, 10, 12])
        lea_count = r.choice([1, 1, 2, 3])
        man_count = r.choice([4, 6, 8, 12])
        counts.update({'clubs': club_count, 'records_0066b718': man_count,
                       'records_0066afec': club_count, 'records_0066aca0': lea_count})
        mode = r.choice([2, 2, 4, 4, 4, 0])
        car = bytearray(1888)
        a = r.randint(0, club_count)
        struct.pack_into('<i', car, 0x3c, a)
        struct.pack_into('<i', car, 0x40, club_count - a)
        struct.pack_into('<i', car, 0x168, mode)
        struct.pack_into('<i', car, 0x4c, 0)
        struct.pack_into('<i', car, 0x50, 0)
        struct.pack_into('<i', car, 0xc0, r.choice([1, 5, 10]))
        car[0x75c] = r.choice([0, 0, 1])
        leagues = bytearray(lea_count * 660)
        for li in range(lea_count):
            base = li * 660
            country = r.choice([3, 29, 3, 29, 0, 1])
            divs = r.choice([0, 1, 2, 3, 4])
            if i % 11 == 0:
                divs = 2
            struct.pack_into('<i', leagues, base + 0x140, country)
            struct.pack_into('<i', leagues, base + 0x144, divs)
            for w in range(165):
                off2 = w * 4
                if off2 in (0x140, 0x144):
                    continue
                struct.pack_into('<i', leagues, base + off2, r.randrange(club_count))
        league_index = r.randrange(lea_count)
        target_country = struct.unpack('<i', leagues[league_index * 660 + 0x140:league_index * 660 + 0x144])[0]
        clubs = bytearray(club_count * 760)
        for cid in range(club_count):
            b = bytearray(r.randbytes(760))
            struct.pack_into('<i', b, 0x3c, target_country if r.random() < 0.5 else r.choice([0, 1, 3, 29]))
            struct.pack_into('<i', b, 0x7c, r.choice([0, 0, 1, 2, 3]))
            b[0x39] = r.choice([0, 0, 0, 1])
            struct.pack_into('<i', b, 0x98, r.choice([0, 5, 10, 20, 50, 80, 100]))
            struct.pack_into('<i', b, 0x44, r.choice([-1, -1, r.randrange(man_count)]))
            struct.pack_into('<i', b, 0x50, r.choice([0, 10, 50, 80, 100]))
            struct.pack_into('<i', b, 0x54, r.choice([0, 10, 50, 80, 100]))
            for at in (0x1f0, 0x1f4, 0x1f8, 0x1fc):
                struct.pack_into('<i', b, at, r.randint(-5, 200))
            clubs[cid * 760:(cid + 1) * 760] = b
        for cid in r.sample(range(club_count), 2):
            struct.pack_into('<i', clubs, cid * 760 + 0x3c, target_country)
            struct.pack_into('<i', clubs, cid * 760 + 0x7c, 0)
            clubs[cid * 760 + 0x39] = 0
        mans = bytearray(man_count * 128)
        for mid in range(man_count):
            b = bytearray(128)
            struct.pack_into('<i', b, 0x1c, r.choice([-1, r.randrange(club_count)]))
            b[0x00] = 1
            b[0x31] = 0
            b[0x40] = r.choice([0, 1])
            struct.pack_into('<i', b, 0x44, r.randrange(-1, 3))
            mans[mid * 128:(mid + 1) * 128] = b
        leds = bytearray(club_count * 56)
        for w in range(club_count * 14):
            struct.pack_into('<i', leds, w * 4, r.choice([0, r.randint(-2**31, 2**31 - 1)]))
        b608 = bytearray(80)
        for w in range(20):
            struct.pack_into('<i', b608, w * 4, r.randint(0, 200))
        b2b8 = bytearray(r.randbytes(24))
    for n, g, s in specs:
        if n == 'clubs':
            buf, cnt = clubs, club_count
        elif n == 'records_0066aca0':
            buf, cnt = leagues, lea_count
        elif n == 'records_0066b718':
            buf, cnt = mans, man_count
        elif n == 'records_0066afec':
            buf, cnt = leds, club_count
        elif n == 'records_0066b608':
            buf, cnt = b608, 5
        elif n == 'records_0066b2b8':
            buf, cnt = b2b8, 2
        else:
            cnt = counts[n]
            buf = bytearray(r.randbytes(cnt * s))
        base, _, _ = areas[n]
        u.mem_write(base - 4, p32(cnt))
        u.mem_write(base, bytes(buf))
        if g not in direct:
            u.mem_write(read32(g), p32(base))
        if n == 'records_0066b2b8':
            b2b8_in = bytes(buf)
    u.mem_write(career_ptr, bytes(car))
    u.mem_write(B420, struct.pack('<4i', 0x11111111, 0x22222222, 0x33333333, 0x44444444))
    u.mem_write(0x6d3480, p32(0xFFFFFFFF))
    u.mem_write(0x6d3484, p32(0xFFFFFFFF))
    for w in range(10):
        u.mem_write(0x6d348c + w * 4, p32(0xFFFFFFFF))
    bump[0] = 0x1601000
    seed = r.getrandbits(32)
    run(0x5deccc, [0, league_index], seed, instruction_limit=1000000)
    exp_b2b8_cnt = read32(areas['records_0066b2b8'][0] - 4)
    out = {
        'career': bytes(u.mem_read(career_ptr, 1888)).hex(),
        'clubs': bytes(u.mem_read(areas['clubs'][0], club_count * 760)).hex(),
        'leagues': bytes(u.mem_read(areas['records_0066aca0'][0], lea_count * 660)).hex(),
        'managers': bytes(u.mem_read(areas['records_0066b718'][0], read32(areas['records_0066b718'][0] - 4) * 128)).hex(),
        'ledgers': bytes(u.mem_read(areas['records_0066afec'][0], club_count * 56)).hex(),
        'b608': bytes(u.mem_read(areas['records_0066b608'][0], 80)).hex(),
        'b2b8': bytes(u.mem_read(areas['records_0066b2b8'][0], exp_b2b8_cnt * 12)).hex(),
        'b420': bytes(u.mem_read(B420, 16)).hex(),
        'd3480': struct.unpack('<i', u.mem_read(0x6d3480, 4))[0],
        'd3484': struct.unpack('<i', u.mem_read(0x6d3484, 4))[0],
        'd348c': list(struct.unpack('<10i', u.mem_read(0x6d348c, 40))),
        'seed': read32(0x662008),
    }
    cases.append({
        'career': bytes(car).hex(),
        'clubs': bytes(clubs).hex(),
        'leagues': bytes(leagues).hex(),
        'managers': bytes(mans).hex(),
        'ledgers': bytes(leds).hex(),
        'b608': bytes(b608).hex(),
        'b2b8': bytes(b2b8_in).hex(),
        'leagueIndex': league_index,
        'form': None,
        'seed': seed,
        'expected': out,
    })

with gzip.open(R.parent / 'cyberfoot-web/native-port/tests/season-rotation-vectors.json.gz', 'wt') as f:
    import json
    json.dump(cases, f, separators=(',', ':'))
print(f'{len(cases)} whole original season rotation comparisons generated (DynArray+string adapters).')
