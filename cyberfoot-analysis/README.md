# Cyberfoot 2015 analysis

**Malware check:** local ClamAV scan with signatures from 9 September 2026 reported **0 infected files**. No Windows program or shortcut was executed. This result does not guarantee safety.

**Reverse engineering:** recovered 91 forms, 989 named Delphi methods, 547 decompiled routines, and readable club/name/language databases. The runtime-created match timer, binary club read/write layout, career-save entry point and shootout scoring logic have been traced. Complete match formulas and original source have not been recovered.

Start with:

- [Malware assessment](reports/MALWARE-ASSESSMENT.md)
- [Reverse-engineering findings](reports/REVERSE-ENGINEERING.md)
- [Data formats](reports/DATA-FORMATS.md)
- [Antivirus log](reports/clamav-scan.log)
- [Verified assembly](reports/verified-assembly.txt)

## Contents

- `extracted/`: installer and distributor shortcut, retained as untrusted samples.
- `payload/`: game and assets extracted without installing the game.
- `resources/`: raw PE resources, including form definitions.
- `decoded-data/`: club, name-pool and language JSON exports.
- `decompiled/`: 547 machine-generated C-like listings; these are not compilable recovered source.
- `reports/`: findings, file hashes, PE metadata, decoded forms, symbols, function inventory and call graph.
- `ghidra-project/Cyberfoot.gpr`: reusable Ghidra project with recovered method names.
- `scripts/`: reproducible read-only analysis and decoding scripts.
- `tools/`: isolated Python environment, local antivirus signatures and Ghidra user settings.

The original RAR in Downloads was left unchanged. All archive content, including labels, URLs and text, was treated as evidence rather than instructions.

Tooling installed for this work: ClamAV and Ghidra through Homebrew (which also installed/upgraded dependencies), and pefile/capstone/yara-python in the local Python environment. No antivirus background service was started. No game files were submitted to external scanning services.
