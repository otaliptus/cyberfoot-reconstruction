"""Whole player-aging season step: age increment + retirement gating
(005dfe10 lines 236-384) with per-player retirement 00647f98, followed by
youth promotion 005df914 with refill 0064e750.

Decompile sources (cyberfoot-analysis/decompiled):
 - 005dfe10_FUN_005dfe10.c lines 236-384
 - 00647f98_FUN_00647f98.c
 - 005df914_FUN_005df914.c
 - 0064e824_FUN_0064e824.c, 0064e750_FUN_0064e750.c, 00647c48_FUN_00647c48.c

Record sizes: players 0x130=304, clubs 0x2f8=760, managers 0x80=128.
Adapters (deviations documented in native-port/player-aging.mjs):
 zero page for FS, SetLength/Finalize bump allocator, Delphi string
 helpers stubbed (names left as copied/zero), name generation 0064dfd4
 stubbed with zero RNG draws (JS skips names entirely), zero calendar
 (contract dates are offset*7 from zero).
"""
import gzip
from native_oracle import *
u.mem_map(0, 0x1000)
u.mem_map(0x1300000, 0x60000)
u.mem_map(0x1400000, 0x60000)
C = 0x1300100
P = 0x1310000
MGR = 0x1330000
slotC = read32(0x66af70)
slotP = read32(0x66b5b8)
slotM = read32(0x66b718)
career = read32(0x66ac78)
u.mem_write(slotC, p32(C))
u.mem_write(slotP, p32(P))
u.mem_write(slotM, p32(MGR))
bump = [0x1400000]


def dyn_setlen(uc, address, size, data):
    import struct
    sp = uc.reg_read(UC_X86_REG_ESP)
    dest = uc.reg_read(UC_X86_REG_EAX)
    n = read32(sp + 4)
    old_ptr = 0
    old_len = 0
    old_bytes = b""
    try:
        old_ptr = read32(dest)
    except Exception:
        old_ptr = 0
    if old_ptr != 0:
        try:
            old_len = read32(old_ptr - 4)
            if 0 < n < 200 and 0 < old_len < 200:
                old_bytes = bytes(uc.mem_read(old_ptr, min(old_len, n) * 0x200))
        except Exception:
            old_bytes = b""
    new_base = bump[0] + 4
    bump[0] += ((n * 0x200 + 8 + 0xFFF) & ~0xFFF)
    uc.mem_write(new_base - 4, struct.pack("<I", n))
    if old_bytes:
        uc.mem_write(new_base, old_bytes)
    # Zero-fill the new tail (cf. youth-intake oracle dyn_setlen lines
    # 57-58). Without this, SetLength-grown tails keep prior-case bytes
    # from bump reuse (cross-case staleness).
    total = n * 0x200
    if total > len(old_bytes):
        uc.mem_write(new_base + len(old_bytes), bytes(total - len(old_bytes)))
    uc.mem_write(dest, struct.pack("<I", new_base))
    uc.reg_write(UC_X86_REG_ESP, sp + 4)
    uc.reg_write(UC_X86_REG_EIP, read32(sp))


def dyn_final(uc, address, size, data):
    sp = uc.reg_read(UC_X86_REG_ESP)
    dest = uc.reg_read(UC_X86_REG_EAX)
    try:
        uc.mem_write(dest, p32(0))
    except Exception:
        pass
    uc.reg_write(UC_X86_REG_ESP, sp + 4)
    uc.reg_write(UC_X86_REG_EIP, read32(sp))


def stub_str(uc, address, size, data):
    sp = uc.reg_read(UC_X86_REG_ESP)
    uc.reg_write(UC_X86_REG_ESP, sp + 4)
    uc.reg_write(UC_X86_REG_EIP, read32(sp))


def stub_nodraw(uc, address, size, data):
    # 0064dfd4 name generation: skip entirely (no RNG draws for names in
    # vectors; JS matches by skipping names). 3 register args, ret only.
    sp = uc.reg_read(UC_X86_REG_ESP)
    uc.reg_write(UC_X86_REG_ESP, sp + 4)
    uc.reg_write(UC_X86_REG_EIP, read32(sp))


u.hook_add(UC_HOOK_CODE, dyn_setlen, begin=0x4060A8, end=0x4060A8)
u.hook_add(UC_HOOK_CODE, dyn_final, begin=0x4061C8, end=0x4061C8)
for _a in [0x404B48, 0x4049C4, 0x4048D4, 0x404D94, 0x40496C, 0x4030E0,
           0x404BAC, 0x404C64, 0x4048F8, 0x404B80, 0x40595C, 0x404F30, 0x404DB0]:
    u.hook_add(UC_HOOK_CODE, stub_str, begin=_a, end=_a)
u.hook_add(UC_HOOK_CODE, stub_nodraw, begin=0x64DFD4, end=0x64DFD4)

LCG = 0x08088405


def below(seed, bound):
    seed = (seed * LCG + 1) & 0xFFFFFFFF
    return seed, (bound * seed) >> 32


def should_retire(age, role, seed):
    if role != 0:
        if age < 0x27:
            if age in (0x1F, 0x20):
                seed, v = below(seed, 100)
                return (0x62 < v, seed)
            if age in (0x21, 0x22):
                seed, v = below(seed, 100)
                return (0x55 < v, seed)
            if age == 0x23:
                seed, v = below(seed, 100)
                return (0x32 < v, seed)
            if age == 0x24:
                seed, v = below(seed, 100)
                return (0x1E < v, seed)
            if age in (0x25, 0x26):
                seed, v = below(seed, 100)
                return (0x0F < v, seed)
            return (False, seed)
        if age < 0x2D:
            if age - 0x27 < 2:
                seed, v = below(seed, 100)
                return (5 < v, seed)
            if age - 0x29 < 2:
                seed, v = below(seed, 100)
                return (3 < v, seed)
            if age - 0x2B < 2:
                seed, v = below(seed, 100)
                return (2 < v, seed)
            return (False, seed)
        if age - 0x2D < 2:
            seed, v = below(seed, 100)
            return (1 < v, seed)
        if age - 0x2F < 2:
            seed, v = below(seed, 100)
            return (1 < v, seed)
        if age - 0x31 < 0x98:
            return (True, seed)
        return (False, seed)
    if age < 0x29:
        if age - 0x1F < 2:
            seed, v = below(seed, 100)
            return (0x62 < v, seed)
        if age - 0x21 < 4:
            seed, v = below(seed, 100)
            return (0x50 < v, seed)
        if age - 0x25 < 2:
            seed, v = below(seed, 100)
            return (0x28 < v, seed)
        if age - 0x27 < 2:
            seed, v = below(seed, 100)
            return (0x1E < v, seed)
        return (False, seed)
    if age < 0x2D:
        if age - 0x29 < 2:
            seed, v = below(seed, 100)
            return (10 < v, seed)
        if age - 0x2B < 2:
            seed, v = below(seed, 100)
            return (3 < v, seed)
        return (False, seed)
    if age - 0x2D < 2:
        seed, v = below(seed, 100)
        return (1 < v, seed)
    if age - 0x2F < 2:
        seed, v = below(seed, 100)
        return (1 < v, seed)
    if age - 0x31 < 0x1C4:
        return (True, seed)
    return (False, seed)


r = random.Random(0x647F98)
cases = []
for i in range(220):
    clubCount = r.randrange(2, 5)
    playerCount = r.randrange(4, 10)
    clubs = bytearray(r.randbytes(clubCount * 760))
    players = bytearray(r.randbytes(playerCount * 304))
    for cid in range(clubCount):
        clubs[cid * 760 + 0x39] = r.choice([0, 0, 0, 1])
        struct.pack_into("<i", clubs, cid * 760 + 0x7C, r.choice([0, 1, 2, 3, 4, 5]))
        struct.pack_into("<i", clubs, cid * 760 + 0x98, r.choice([10, 14, 17, 18, 19, 20, 21, 22]))
        struct.pack_into("<i", clubs, cid * 760 + 0x3C, r.choice([1, 29]))
        for off in [0x68, 0x6C, 0x70, 0x74, 0x78]:
            struct.pack_into("<i", clubs, cid * 760 + off, r.randrange(0, 8))
        struct.pack_into("<i", clubs, cid * 760 + 100, r.choice([5, 10, 16, 20]))
        struct.pack_into("<i", clubs, cid * 760 + 0x2EC, r.choice([15, 16, 17, 18, 20]))
        struct.pack_into("<q", clubs, cid * 760 + 0x48, r.randrange(0, 500000000000))
    for j in range(playerCount):
        if j == 0:
            struct.pack_into("<i", players, j * 304 + 0x20, -1)
        else:
            struct.pack_into("<i", players, j * 304 + 0x20, r.choice([-1, r.randrange(clubCount)]))
        struct.pack_into("<i", players, j * 304 + 0x24, r.randrange(5))
        struct.pack_into("<i", players, j * 304 + 0x18, r.choice(
            [19, 20, 21, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, r.randrange(16, 55)]))
        struct.pack_into("<i", players, j * 304 + 0x28, r.choice([10, 25, 30, 40, 50, 70, 90]))
        struct.pack_into("<i", players, j * 304 + 0x30, r.randrange(0, 11))
        players[j * 304 + 0x15] = r.randrange(2)
        struct.pack_into("<i", players, j * 304 + 0x50, r.choice([0, 0, 1]))
        players[j * 304 + 0x7D] = 0
        struct.pack_into("<i", players, j * 304 + 0x100, r.choice([0, 0, 1, 2]))
        players[j * 304 + 0x120] = r.choice([0, 0, 1])
        struct.pack_into("<i", players, j * 304 + 0x128, r.choice([0, 1, 49, 50, 79, 80, 99, 100]))
        struct.pack_into("<i", players, j * 304 + 0x11C, r.choice([0, 1, 2]))
        struct.pack_into("<i", players, j * 304 + 0xE4, r.randrange(0, 4))
        struct.pack_into("<f", players, j * 304 + 0x80, 0.0)
        struct.pack_into("<q", players, j * 304 + 0x40, r.randrange(0, 100000) * 10000)
        struct.pack_into("<q", players, j * 304 + 0x38, r.randrange(0, 100000) * 10000)
    car = bytearray(1888)
    struct.pack_into("<i", car, 0x3C, clubCount)
    struct.pack_into("<i", car, 0x40, 0)
    struct.pack_into("<i", car, 0xC0, 2)
    struct.pack_into("<i", car, 0x16C, 1)
    struct.pack_into("<i", car, 0x88, 1)
    u.mem_write(slotC, p32(C))
    u.mem_write(slotP, p32(P))
    u.mem_write(slotM, p32(MGR))
    # Zero scratch + snapshot (bump) regions per case so over-reads beyond
    # the fresh C/P writes and SetLength-grown tails start from zeros
    # instead of prior-case bytes (cross-case staleness).
    u.mem_write(0x1300000, b"\x00" * 0x60000)
    u.mem_write(C, bytes(clubs))
    u.mem_write(C - 4, p32(clubCount))
    u.mem_write(P, bytes(players))
    u.mem_write(P - 4, p32(playerCount))
    u.mem_write(MGR - 4, p32(0))
    u.mem_write(career, bytes(car))
    bump[0] = 0x1400000
    # Zero the snapshot (bump) region per case so SetLength-grown tails
    # start from zeros instead of prior-case bytes (cross-case staleness).
    u.mem_write(0x1400000, b"\x00" * 0x60000)
    initial_seed = r.getrandbits(32)
    seed = initial_seed
    orig_count = playerCount
    mem_players = bytearray(players)
    mem_clubs = bytearray(clubs)
    for pid in range(1, orig_count):
        club = struct.unpack_from("<i", mem_players, pid * 304 + 0x20)[0]
        if club < 0:
            continue
        age = struct.unpack_from("<i", mem_players, pid * 304 + 0x18)[0] + 1
        struct.pack_into("<i", mem_players, pid * 304 + 0x18, age)
        human = mem_clubs[club * 760 + 0x39] if 0 <= club < clubCount else 1
        if human == 0:
            mem_players[pid * 304 + 0x7D] = 0
            if struct.unpack_from("<i", mem_players, pid * 304 + 0x100)[0] != 2:
                struct.pack_into("<i", mem_players, pid * 304 + 0x100, 0)
        if club < 0 or age <= 0x1F or human != 0:
            continue
        role = struct.unpack_from("<i", mem_players, pid * 304 + 0x24)[0]
        retire, seed = should_retire(age, role, seed)
        if retire:
            mem_players[pid * 304 + 0x7D] = 0xFE  # marker, replaced by Unicorn run below
    u.mem_write(P, bytes(mem_players))
    u.mem_write(C, bytes(mem_clubs))
    # collect retirees in id order (markers)
    probe = bytes(u.mem_read(P, orig_count * 304))
    retirees = []
    for pid in range(1, orig_count):
        if probe[pid * 304 + 0x7D] == 0xFE:
            role = struct.unpack_from("<i", probe, pid * 304 + 0x24)[0]
            retirees.append((pid, role))
            # clear marker back to 0 before original call (original would have 0)
            u.mem_write(P + pid * 304 + 0x7D, b"\x00")
    for pid, role in retirees:
        res = run(0x647F98, [pid, 0], seed, [role], instruction_limit=1000000)
        seed = res["seed"]
    res = run(0x5DF914, [], seed, instruction_limit=2000000)
    seed = res["seed"]
    final_p_base = read32(slotP)
    final_p_len = read32(final_p_base - 4)
    final_c_base = read32(slotC)
    final_m_base = read32(slotM)
    final_m_len = read32(final_m_base - 4)
    cases.append({
        "clubs": bytes(clubs).hex(),
        "players": bytes(players).hex(),
        "career": bytes(car).hex(),
        "initialSeed": initial_seed,
        "expected": {
            "players": bytes(u.mem_read(final_p_base, final_p_len * 304)).hex(),
            "clubs": bytes(u.mem_read(final_c_base, clubCount * 760)).hex(),
            "managers": bytes(u.mem_read(final_m_base, final_m_len * 128)).hex() if final_m_len else "",
            "playerCount": final_p_len,
            "managerCount": final_m_len,
            "seed": seed,
        },
    })
with gzip.open(R.parent / "cyberfoot-web/native-port/tests/player-aging-vectors.json.gz", "wt") as f:
    json.dump(cases, f, separators=(",", ":"))
print(f"{len(cases)} whole original player-aging (00647f98/005df914) comparisons generated (string/name stubs, allocation adapters).")
