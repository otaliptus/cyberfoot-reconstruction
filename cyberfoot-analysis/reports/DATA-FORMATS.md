# Cyberfoot 2015: recovered data formats

These layouts were inferred from the supplied files and checked against every file of each decoded type. Numeric meanings remain hypotheses unless explicitly stated. All offsets are zero-based file offsets. Integers are little-endian.

## Club files: teams/*.b15

All 402 files are exactly 2,008 bytes. Decompiled loading and writing confirm the outer layout: 4-byte prefix + 200-byte club record + 4-byte prefix + 1,800-byte roster record. The decoder consumes the following layout:

| Offset | Size | Interpretation |
|---|---:|---|
| 0 | 4 | Header integer; meaning not yet established |
| 4 | 4 | Four header bytes; country/league metadata suspected |
| 8 | 26 | Club short name: one-byte length, up to 25 characters |
| 34 | 26 | Full club name: same storage |
| 60 | 31 | Stadium: one-byte length, up to 30 characters |
| 91 | 26 | First asset identifier |
| 117 | 26 | Second asset identifier |
| 143 | 31 | Manager: one-byte length, up to 30 characters |
| 174 | 30 | Remaining club fields, currently retained as raw bytes |
| 204 | 4 | Roster prefix; the writer emits integer 1 |
| 208 | 1,440 | 40 player names, each occupying 36 bytes: length + up to 35 characters |
| 1,648 | 360 | Nine consecutive 40-byte regions, exported as candidate per-slot attributes |

Text decodes as Windows-1252. **Honor the length byte**: unused bytes can contain remnants of old names. Reading until a zero byte incorrectly appends stale text. For example, São Paulo's manager string is Muricy Ramalho despite extra old bytes after its declared length.

The nine trailing regions are a structural partition, not yet a proven schema. In the São Paulo sample, region 1 resembles country codes, region 2 ages, region 3 position codes, regions 5–6 skill codes; other regions include flags or reserved bytes. The final region may contain mixed fields rather than a uniform per-player attribute. Do not implement an editor from these guesses yet.

The export keeps all 40 slots, including placeholders. 16,080 slots does not mean 16,080 active players.

## Name pool: confign1.nam

A 32-bit count (37,216), then exactly that many 21-byte records. Each record is a one-byte length followed by up to 20 Windows-1252 bytes. Total size is exactly `4 + 37216 * 21 = 781540` bytes. The file appears to supply generated names; its gameplay use still needs call-site confirmation.

## Language files: languages/*.cft

A 32-bit entry count, then for every entry:

1. A 32-bit metadata value, retained without assigning meaning.
2. A 32-bit UTF-16 code-unit count.
3. That many UTF-16LE code units.

All 18 files parsed to their exact end with no trailing bytes. Sixteen files have 1,100 entries; `971.cft` and `a0.cft` have 1,000. Language labels and decoded entries are in `decoded-data/`. Multiple files identify themselves as English, so 18 files does not imply 18 distinct languages.

## Other files

- 69 national-team `.s11` files, each exactly 1,752 bytes. The loader confirms a four-byte prefix plus a 1,748-byte record. Internal fields are not fully decoded in this pass.
- `cyberfoot.ini`: readable options, including language, sound, animation speed, saving preferences and colors.
- `sav/info.txt`: empty. No saved career was supplied, so no sample-based save-format validation is possible.
- Seven WAV sounds and club/national-team imagery.

## Reproduction

Run `tools/venv/bin/python scripts/decode_data.py` from the `cyberfoot-analysis` folder. It validates all club sizes and short-string bounds, checks the name-pool size, and validates exact consumption of every language file. It only reads the original payload and writes JSON exports.
