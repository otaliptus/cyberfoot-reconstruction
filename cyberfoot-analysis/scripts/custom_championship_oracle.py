"""Custom-championship whole-chain vectors: 0062c884 + 00631634 + 00631974.

Layout assumptions (synthetic fixture mimicking original memory):
- Team table at 0066b164: DynArray of 200-byte rows. Row layout used here:
  byte0 country (compared to selected ids, marked to 0xca=202 on match),
  byte1 must be !=0 for copy eligibility, byte2 must be 0x0f, byte3 sort key
  (copied to temp+1 and to club+0x98), bytes +4 short string (len byte + data,
  max 0x19=25, must have len!=0), bytes +0x71 short string (max 0x19, copied to
  temp+0x58 and to club+0x1a with max 0x1e=30), byte 0xb0 copied to club+0x40,
  dword 0xbc copied to club+0x2f0. All other row bytes zeroed in vectors.
  This matches disassembly of 00631634 (offsets -0x74/-0x25/-0x72/-0x73/
  -0x58/-0x1c/-0x24/-0x23/-0x20 for temp 0x74 rows, and 0x5f*8 stride with
  -0x260/-0x2b8/-0x2bc/-0x2f8/-0x2de/-8 for 760-byte club records).
- Career at 0066ac78: 1888 bytes (save career layout). 0062c884 writes:
  bytes 0x170/0x171/0x172/0x17f/0x180/0x181=0, byte 0x10e=ckcopaper (playCup),
  short string at 0x11c="Copa Internacional" (0x12 len, 19 bytes from 0x62cb48),
  int32 0x168=4 (formulaper 0) or 2 (else), int32 0xc4=0xca. 00631634 epilogue
  does int32 0x3c+=copiedCount. All other career bytes preserved.
- League array at 0066aca0: DynArray of 660-byte (0x294) records (save
  records_0066aca0 layout). 0062c884 does SetLength(1) then int32 0x140=0xca,
  byte 0x14c=1. 00631974 sets int32 0x144=divCount and fills two pairing tables:
  off1=d*0x50-0x54+p*4, off2=d*0x50+0xfc+p*4 for div d=1..divCount (1-indexed),
  pos p=1..perDiv, values are temp+0x54 club indices (DAT_006d4bac-1 order),
  and sets club+0x7c=div. perDiv=20 when mode==2 else 10. divCount thresholds:
  mode==2: >=0x52(82)->4, >=0x3e(62)->3, >=0x2a(42)->2 else 1; else:
  >=0x2a(42)->4, >=0x20(32)->3 else 2. Minimum safe total is 20 slots
  (2x10 or 1x20); vectors use K>=20 to avoid original OOB reads when
  K<divCount*perDiv.
- Temp rows at 006d4ba4: DynArray of 0x74-byte rows. 00631634 builds one per
  copied team (byte0 marker, byte1=team byte3, 0x51=Random(0x32) placeholder,
  0x54=clubIndex). 00631974 overwrites byte 0x51 with Random(0x32) in copy
  order, sorts via 004bcdb0 with comparator at 00631934 (byte1 descending,
  byte0x51 ascending: cmp(EAX,EDX) returns sign(EDX.b1-EAX.b1) then
  sign(EAX.r-EDX.r)), fills league, frees array (SetLength 0).
- Clubs at 0066af70: DynArray of 760-byte records (save clubs layout).
  00631634 grows by copiedCount (zero-filled) and sets +0 (name 0x19),
  +0x1a (second name 0x1e), +0x3c=0xca, +0x40=team 0xb0, +0x98=team byte3,
  +0x2f0=team 0xbc. 00631974 sets +0x7c=division for placed clubs.
- String tables: 0066ac40 DynArray of pointer (4 bytes) to Delphi strings;
  vectors set all entries null so 00404b80/00404928 take null paths (write 0).
  0066b4e0 DynArray of pointer grown alongside clubs (contents ignored for
  save port, no save equivalent). Career/league/club sections map to
  save-format.mjs layouts (career 1888, clubs 760, records_0066aca0 660).
- 0062c884 UI (grid col1 select flag via 00405378, col4 country via
  00404b6c/00409ff8, ckcopaper 0062ca13, formulaper 0062ca47, tail form opens
  00487474/00483d6c/00483bc4) is VCL-bound and stubbed: vectors treat selected
  country ids, playCup, formatIndex as inputs and emulate marking+career+
  league-append in Python exactly per disassembly (loops at 0062c980/0062c9b8
  and writes at 0062c9c0-0062cab2). Whole-routine original execution covers
  00631634(0,0xca)->00631974 via Unicorn; marking stage is Python-mirrored
  and documented as such (never faked: expected finals are Unicorn-observed).
- RNG: 004032c8 Borland LCG (state*0x08088405+1, (bound*state)>>32), same as
  native-port OriginalRandom.below. 00631634 draws one Random(0x32) per copied
  team for temp+0x51 placeholder, 00631974 draws one Random(0x32) per team for
  final sort key (copy order). Total 2*K draws from seed; seedAfter observed.
- League index param is 0 (single custom league), marker param 0xca.
- saveClubsBefore (760*K) is constructed for native-port parity: zero-filled
  records with same names/0x40/0x98/0x2f0 as expected new clubs, but country=
  originalCountry and division=0, so applyCustomChampionship (reuse model:
  set country 0xca + division, fill league, no club append) can be checked
  for league/country/division/RNG parity. Career 0x3c increment is original-
  only (new clubs additional); save port preserves total (reuse) and parity
  test ignores 0x3c/0x40 totals (documented deviation).

Conventions copied from season_rotation_oracle.py: venv tools/venv/bin/python,
run from cyberfoot-analysis/scripts, maps for 0/0x1400000/0x1500000/0x1600000,
DynArraySetLength hook via destinations, Delphi string adapters at
00404f30/00409c4/0040db0/004048d4 with fixed scratch + FS zero page, SEED at
0x662008, STOP return.
"""
import gzip
import json
import random
import struct
from pathlib import Path
from native_oracle import u, run, read32, p32, R
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EDX, UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP

# --- Unicorn memory setup (copied conventions) ---
u.mem_map(0, 0x1000)
u.mem_map(0x1400000, 0x40000)
u.mem_map(0x1500000, 0x100000)
u.mem_map(0x1600000, 0x20000)

TEAM_SIZE = 200
CLUB_SIZE = 760
LEAGUE_SIZE = 660
TEMP_SIZE = 0x74
MAX_TEAMS = 110

TEAM_BASE = 0x1500100
CLUB_BASE = 0x1520100
LEAGUE_BASE = 0x1540100
B4E0_BASE = 0x1550100
AC40_BASE = 0x1560100
TEMP_BASE = 0x1570100

dest_team = read32(0x66b164)
dest_clubs = read32(0x66af70)
dest_leagues = read32(0x66aca0)
dest_b4e0 = read32(0x66b4e0)
dest_ac40 = read32(0x66ac40)
dest_temp = 0x6d4ba4
career_ptr = read32(0x66ac78)

areas = {
    dest_team: (TEAM_BASE, TEAM_SIZE),
    dest_clubs: (CLUB_BASE, CLUB_SIZE),
    dest_leagues: (LEAGUE_BASE, LEAGUE_SIZE),
    dest_b4e0: (B4E0_BASE, 4),
    dest_ac40: (AC40_BASE, 4),
    dest_temp: (TEMP_BASE, TEMP_SIZE),
}


def dyn_hook(uc, address, size, data):
    dest = uc.reg_read(UC_X86_REG_EAX)
    sp = uc.reg_read(UC_X86_REG_ESP)
    length = struct.unpack('<I', bytes(uc.mem_read(sp + 4, 4)))[0]
    if dest in areas:
        base, rec = areas[dest]
        try:
            old = struct.unpack('<I', bytes(uc.mem_read(base - 4, 4)))[0]
        except Exception:
            old = 0
        if length > old:
            uc.mem_write(base + old * rec, bytes((length - old) * rec))
        uc.mem_write(base - 4, p32(length))
        uc.mem_write(dest, p32(base))
        uc.reg_write(UC_X86_REG_ESP, sp + 4)
        uc.reg_write(UC_X86_REG_EIP, struct.unpack('<I', bytes(uc.mem_read(sp, 4)))[0])
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
    uc.reg_write(UC_X86_REG_EIP, struct.unpack('<I', bytes(uc.mem_read(sp, 4)))[0])


for a in [0x404f30, 0x4049c4, 0x404db0, 0x4048d4]:
    u.hook_add(UC_HOOK_CODE, scratch, begin=a, end=a)

COPA = bytes(u.mem_read(0x62cb48, 19))
assert COPA[0] == 0x12 and COPA[1:19] == b'Copa Internacional', COPA.hex()


def set_dyn(dest, count, buf):
    base, rec = areas[dest]
    u.mem_write(base - 4, p32(count))
    if len(buf):
        u.mem_write(base, bytes(buf))
    u.mem_write(dest, p32(base))


def get_dyn(dest, count):
    base, rec = areas[dest]
    return bytes(u.mem_read(base, count * rec))


LETTERS = b'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'


def short_bytes(rng, maxlen):
    ln = rng.randint(1, maxlen)
    data = bytes(rng.choice(LETTERS) for _ in range(ln))
    return bytes([ln]) + data


r = random.Random(0x62C884)
cases = []

EDGE_NS = [20, 21, 31, 32, 33, 41, 42, 43, 61, 62, 63, 81, 82, 83, 84, 100]
plan = []
for n in EDGE_NS:
    for mode in (4, 2):
        for cup in (0, 1):
            plan.append((n, mode, cup, True))
# Fill to 150+ with randomized counts (still K>=20 safe).
while len(plan) < 165:
    n = r.choice([20, 22, 25, 28, 30, 35, 38, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100])
    plan.append((n, r.choice([4, 2]), r.choice([0, 1]), False))
r.shuffle(plan)
plan = plan[:165]

for ci, (n, mode, play_cup, is_edge) in enumerate(plan):
    format_index = 0 if mode == 4 else 1
    # Selected countries: small ids, never 0xca.
    sel_count = r.choice([1, 1, 2, 2, 3])
    selected = sorted(r.sample([0, 1, 2, 3, 4, 5], sel_count))
    # Team table before marking.
    team = bytearray(n * TEAM_SIZE)
    for ti in range(n):
        base = ti * TEAM_SIZE
        if is_edge:
            country = selected[0]
            fail = False
        else:
            if r.random() < 0.72:
                country = r.choice(selected)
            else:
                country = r.choice([c for c in [0, 1, 2, 3, 4, 5] if c not in selected])
            fail = r.random() < 0.12
        team[base + 0] = country & 0xFF
        if fail:
            kind = r.choice(['b1', 'b4', 'b2'])
            if kind == 'b1':
                team[base + 1] = 0
            else:
                team[base + 1] = r.randint(1, 255)
            if kind == 'b4':
                team[base + 4] = 0
            else:
                sb = short_bytes(r, 25)
                team[base + 4:base + 4 + len(sb)] = sb
            if kind == 'b2':
                team[base + 2] = r.choice([0, 1, 2, 16, 255])
            else:
                team[base + 2] = 0x0F
        else:
            team[base + 1] = r.randint(1, 255)
            team[base + 2] = 0x0F
            sb = short_bytes(r, 25)
            team[base + 4:base + 4 + len(sb)] = sb
        team[base + 3] = r.randint(0, 255)
        sb2 = short_bytes(r, 25)
        team[base + 0x71:base + 0x71 + len(sb2)] = sb2
        team[base + 0xB0] = r.randint(0, 255)
        struct.pack_into('<I', team, base + 0xBC, r.getrandbits(32))
    career_before = bytearray(r.randbytes(1888))
    # Python mirror of 0062c884 marking loop (0062c980/0062c9b8).
    marked = bytearray(team)
    for ctry in selected:
        for ti in range(n):
            if marked[ti * TEAM_SIZE + 0] == (ctry & 0xFF):
                marked[ti * TEAM_SIZE + 0] = 0xCA
    # Python mirror of 0062c884 career writes (0062c9c0-0062ca76).
    career_mark = bytearray(career_before)
    for off in (0x170, 0x171, 0x172, 0x17F, 0x180, 0x181):
        career_mark[off] = 0
    career_mark[0x10E] = 1 if play_cup else 0
    career_mark[0x11C:0x11C + 19] = COPA
    struct.pack_into('<i', career_mark, 0x168, mode)
    struct.pack_into('<i', career_mark, 0xC4, 0xCA)
    leagues_mark = bytearray(LEAGUE_SIZE)
    struct.pack_into('<i', leagues_mark, 0x140, 0xCA)
    leagues_mark[0x14C] = 1
    # Determine copy order (team order filtered by 00631634 conditions).
    copy_idx = []
    for ti in range(n):
        b = ti * TEAM_SIZE
        if marked[b + 0] == 0xCA and marked[b + 1] != 0 and marked[b + 4] != 0 and marked[b + 2] == 0x0F:
            copy_idx.append(ti)
    k = len(copy_idx)
    if k < 20:
        # Resample this case to keep K>=20 (avoid original OOB); regenerate
        # by forcing all selected (edge-style) for this slot.
        for ti in range(n):
            b = ti * TEAM_SIZE
            marked[b + 0] = 0xCA if (team[b + 0] in selected or True) else marked[b + 0]
            marked[b + 0] = 0xCA
            if marked[b + 1] == 0:
                marked[b + 1] = 1
            if marked[b + 4] == 0:
                marked[b + 4] = 1
                marked[b + 5] = 0x41
            marked[b + 2] = 0x0F
        copy_idx = list(range(n))
        # Ensure team table N>=20 already; if N<20 pad by extending? N>=20 by plan.
        k = len(copy_idx)
    assert k >= 20, (ci, n, k)
    # Setup Unicorn state from intermediate (post-0062c884, pre-00631634).
    set_dyn(dest_team, n, marked)
    set_dyn(dest_clubs, 0, b'')
    set_dyn(dest_leagues, 1, leagues_mark)
    set_dyn(dest_b4e0, 0, b'')
    set_dyn(dest_ac40, n, bytes(4 * n))
    set_dyn(dest_temp, 0, b'')
    u.mem_write(career_ptr, bytes(career_mark))
    u.mem_write(0x6D4BAC, p32(0))
    u.mem_write(0x6D4BA8, p32(0))
    seed = r.getrandbits(32)
    run(0x631634, [0, 0xCA], seed, instruction_limit=2000000)
    club_count = struct.unpack('<I', bytes(u.mem_read(CLUB_BASE - 4, 4)))[0]
    assert club_count == k, (ci, club_count, k)
    career_after = bytes(u.mem_read(career_ptr, 1888))
    leagues_after = bytes(u.mem_read(LEAGUE_BASE, LEAGUE_SIZE))
    clubs_after = bytes(u.mem_read(CLUB_BASE, k * CLUB_SIZE))
    seed_after = read32(0x662008)
    div_count = struct.unpack('<i', leagues_after[0x144:0x148])[0]
    per_div = 20 if mode == 2 else 10
    # Expected divCount per disassembly thresholds on K (temp length).
    if mode == 2:
        exp_div = 4 if k >= 0x52 else (3 if k >= 0x3E else (2 if k >= 0x2A else 1))
    else:
        exp_div = 4 if k >= 0x2A else (3 if k >= 0x20 else 2)
    assert div_count == exp_div, (ci, k, mode, div_count, exp_div)
    # League slots in fill order give sorted club indices.
    slots = []
    for d in range(1, div_count + 1):
        for p in range(1, per_div + 1):
            o1 = d * 0x50 - 0x54 + p * 4
            o2 = d * 0x50 + 0xFC + p * 4
            v1 = struct.unpack('<i', leagues_after[o1:o1 + 4])[0]
            v2 = struct.unpack('<i', leagues_after[o2:o2 + 4])[0]
            assert v1 == v2, (ci, d, p, v1, v2)
            slots.append(v1)
    # Build saveClubsBefore for native-port parity (same names/strengths,
    # original country, division 0).
    save_before = bytearray(k * CLUB_SIZE)
    for ni, ti in enumerate(copy_idx):
        tb = ti * TEAM_SIZE
        cb = ni * CLUB_SIZE
        orig_country = team[tb + 0]
        # Name at +0 (short, max 25).
        ln = marked[tb + 4]
        assert 1 <= ln <= 25, (ci, ln)
        save_before[cb + 0] = ln
        save_before[cb + 1:cb + 1 + ln] = marked[tb + 5:tb + 5 + ln]
        # Second name at +0x1a (short, max 30).
        ln2 = marked[tb + 0x71]
        assert 1 <= ln2 <= 25, (ci, ln2)
        save_before[cb + 0x1A] = ln2
        save_before[cb + 0x1B:cb + 0x1B + ln2] = marked[tb + 0x72:tb + 0x72 + ln2]
        struct.pack_into('<i', save_before, cb + 0x3C, orig_country)
        struct.pack_into('<i', save_before, cb + 0x40, marked[tb + 0xB0])
        struct.pack_into('<i', save_before, cb + 0x98, marked[tb + 3])
        struct.pack_into('<I', save_before, cb + 0x2F0, struct.unpack('<I', marked[tb + 0xBC:tb + 0xBC + 4])[0])
        struct.pack_into('<i', save_before, cb + 0x7C, 0)
    cases.append({
        'teamCount': n,
        'copied': k,
        'mode': mode,
        'perDiv': per_div,
        'divCount': div_count,
        'selectedCountries': selected,
        'playCup': play_cup,
        'formatIndex': format_index,
        'teamTableBefore': bytes(team).hex(),
        'teamTableMarked': bytes(marked).hex(),
        'careerBefore': bytes(career_before).hex(),
        'careerAfterMark': bytes(career_mark).hex(),
        'leaguesAfterMark': bytes(leagues_mark).hex(),
        'saveClubsBefore': bytes(save_before).hex(),
        'copyOrder': copy_idx,
        'seed': seed,
        'expected': {
            'career': career_after.hex(),
            'leagues': leagues_after.hex(),
            'clubs': clubs_after.hex(),
            'divCount': div_count,
            'perDiv': per_div,
            'seedAfter': seed_after,
            'slots': slots,
        },
    })

out = R.parent / 'cyberfoot-web/native-port/tests/custom-championship-vectors.json.gz'
with gzip.open(out, 'wt') as f:
    json.dump(cases, f, separators=(',', ':'))
print(f'{len(cases)} whole custom-championship chain comparisons generated (0062c884 mirror + 00631634/00631974 original).')
