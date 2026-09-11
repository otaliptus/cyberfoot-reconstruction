"""Whole 00652be0 youth intake per club; allocation adapters only.

Original per-club youth promotion (00652be0):
 - skips human clubs (club+0x39 != 0)
 - collects players with club==param and youthLevel+0x100 < 2
 - Fisher-Yates shuffle with Random(High) draws (High = count-1)
 - for each role deficit (GK>2, DEF>3, MID>3, ATT>5, ST>3 at
   club+0x68/0x6c/0x70/0x74/0x78) promotes the first shuffled
   candidate with role match, star+0x15 == 0 and field+0x50 == 0:
   sets selected+0x7d = 1, copies wage 0x40->0x48,
   and for roles 1..4 draws Random(100) to maybe set level+0x100 = 1
   (thresholds 30/30/40/30 with skill caps 40/40/45/40).

Record sizes from decompile: players 0x130=304, clubs 0x2f8=760.
Delphi dynamic-array SetLength (004060a8) / Finalize (004061c8) are
allocation adapters (bump allocator); no UI callees in this routine.
FS exception frames need the zero page mapped (like other oracles).
"""
import gzip
from native_oracle import *
u.mem_map(0, 0x1000)
u.mem_map(0x1300000, 0x40000)
u.mem_map(0x1400000, 0x40000)
C = 0x1300100
P = 0x1310000
slotC = read32(0x66af70)
slotP = read32(0x66b5b8)
u.mem_write(slotC, p32(C))
u.mem_write(slotP, p32(P))
bump = [0x1400000]


def dyn_setlen(uc, address, size, data):
    import struct
    sp = uc.reg_read(UC_X86_REG_ESP)
    dest = uc.reg_read(UC_X86_REG_EAX)
    n = read32(sp + 4)
    old_ptr = 0
    old_len = 0
    old_data = b""
    try:
        old_ptr = read32(dest)
    except Exception:
        old_ptr = 0
    if old_ptr != 0:
        try:
            old_len = read32(old_ptr - 4)
            if 0 < n < 64 and 0 < old_len < 64:
                old_data = bytes(uc.mem_read(old_ptr, min(old_len, n) * 4))
        except Exception:
            old_data = b""
    new_base = bump[0] + 4
    bump[0] += ((n * 4 + 8 + 0xFFF) & ~0xFFF)
    uc.mem_write(new_base - 4, struct.pack("<I", n))
    if old_data:
        uc.mem_write(new_base, old_data)
    if n * 4 > len(old_data):
        uc.mem_write(new_base + len(old_data), bytes(n * 4 - len(old_data)))
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


u.hook_add(UC_HOOK_CODE, dyn_setlen, begin=0x4060A8, end=0x4060A8)
u.hook_add(UC_HOOK_CODE, dyn_final, begin=0x4061C8, end=0x4061C8)
r = random.Random(0x652BE0)
cases = []
for i in range(250):
    clubCount = r.randrange(1, 7)
    clubId = r.randrange(clubCount)
    playerCount = r.randrange(0, 13)
    clubs = bytearray(r.randbytes(clubCount * 760))
    players = bytearray(r.randbytes(playerCount * 304)) if playerCount else bytearray()
    for cid in range(clubCount):
        # human edge: mostly AI (0), sometimes human (1)
        clubs[cid * 760 + 0x39] = 1 if (i % 11 == 0 and cid == clubId) else r.choice([0, 0, 0, 1])
        # intake-cap edges: thresholds 2/3/3/5/3 at 0x68..0x78
        for off, thr in [(0x68, 2), (0x6C, 3), (0x70, 3), (0x74, 5), (0x78, 3)]:
            if r.random() < 0.45:
                struct.pack_into("<i", clubs, cid * 760 + off, r.choice([thr - 1, thr, thr + 1, thr + 2]))
            else:
                struct.pack_into("<i", clubs, cid * 760 + off, r.randrange(0, 9))
    for j in range(playerCount):
        # bias club to target for collection edges
        if r.random() < 0.6:
            struct.pack_into("<i", players, j * 304 + 0x20, clubId)
        else:
            struct.pack_into("<i", players, j * 304 + 0x20, r.choice([-1, clubId, r.randrange(clubCount)]))
        struct.pack_into("<i", players, j * 304 + 0x24, r.randrange(5))
        players[j * 304 + 0x15] = r.choice([0, 0, 0, 1])
        struct.pack_into("<i", players, j * 304 + 0x50, r.choice([0, 0, 1, 2]))
        # youth-level edges: <2 collected, 2 skipped
        struct.pack_into("<i", players, j * 304 + 0x100, r.choice([0, 0, 1, 1, 2]))
        # skill cap edges: 39/40 and 44/45
        struct.pack_into("<i", players, j * 304 + 0x28, r.choice([10, 39, 40, 41, 44, 45, 46, 60]))
        # wage pair 0x40/0x44 copied to 0x48/0x4c on intake
        struct.pack_into("<q", players, j * 304 + 0x40, r.randrange(0, 200000))
        struct.pack_into("<q", players, j * 304 + 0x48, 0)
        players[j * 304 + 0x7D] = 0
    u.mem_write(slotC, p32(C))
    u.mem_write(slotP, p32(P))
    u.mem_write(C, bytes(clubs) if clubs else b"")
    u.mem_write(C - 4, p32(clubCount))
    if playerCount:
        u.mem_write(P, bytes(players))
    u.mem_write(P - 4, p32(playerCount))
    bump[0] = 0x1400000
    seed = r.getrandbits(32)
    run(0x652BE0, [clubId], seed, instruction_limit=500000)
    expected_players = bytes(u.mem_read(P, playerCount * 304)).hex() if playerCount else ""
    cases.append({
        "clubs": bytes(clubs).hex(),
        "players": bytes(players).hex() if playerCount else "",
        "clubId": clubId,
        "seed": seed,
        "expected": {"players": expected_players, "seed": read32(SEED)},
    })
with gzip.open(R.parent / "cyberfoot-web/native-port/tests/youth-intake-vectors.json.gz", "wt") as f:
    json.dump(cases, f, separators=(",", ":"))
print(f"{len(cases)} whole original youth intake (00652be0) comparisons generated (allocation adapters only).")
