# Cyberfoot 2015 reconstruction

Private work snapshot: malware assessment, reverse engineering, a previously published browser emulator, and an **unfinished native JavaScript rebuild**.

Read the [work report](docs/WORK-REPORT.md) for completed work, verification scope and remaining requirements. The native version is not a complete released game. Full-functionality unlocking has not been implemented.

## Contents

- `cyberfoot-web/native-port/`: native modules, recovered UI, development pages and tests.
- `cyberfoot-web/`: earlier emulator application and runtime assets.
- `cyberfoot-analysis/`: scripts, reports, pseudocode, resources/data, extracted game and Ghidra project.
- `docs/`: current report, selected screenshots, regression logs and file inventory.

## Native tests

Node.js 22 or newer; no npm installation needed for the shared native suite:

```sh
cd cyberfoot-web
node native-port/tests/run-all.mjs
```

## Native previews

From the repository root:

```sh
python3 -m http.server 8766 --directory cyberfoot-web/native-port
```

Open `http://localhost:8766/manager-career-preview.html?manualClock=1` for manager offers and nested standings, or `http://localhost:8766/lineup-window-preview.html?manualClock=1&resultsIntegration=1` for the development lineup/match/results flow. These are development screens, not a full career launcher.

Browser test scripts may reference the original workspace's Playwright installation and need path configuration on another computer. Original-code comparison scripts require a separately installed Python environment with pefile, capstone and Unicorn; other analysis scripts may need additional tools. Existing vectors allow running the Node suite without executing the Windows binary.

## Earlier emulator application

From `cyberfoot-web`, run `npm ci` and `npm run dev`. Hosting identity was omitted from this independent repository: pushing it does not deploy or change the old site. Runtime attribution is in `cyberfoot-web/public/emulator/NOTICE.txt`.

Original material and third-party components retain their rights; no blanket open-source license is asserted. See the report for sample handling and scan limitations.
