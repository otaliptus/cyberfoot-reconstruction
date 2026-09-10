# Playable original Cyberfoot 2015

Published privately: https://cyberfoot-2015-original.otaliptus.chatgpt.site

Deployment succeeded on 9 September 2026. Version 1 uses source commit 63a5d0025c608f7d9c4d61a00540e629a04933ac. The prepared local bundle could not be uploaded through the file service, so Sites built the exact uploaded source remotely and confirmed successful publication.

The original unmodified game runs in Boxedwine 26R1 SingleThreaded with Wine 11 and matching compatibility libraries. Its registration restrictions are preserved. Audio is disabled. Saves live in the browser with explicit backup and restore controls.

Verified locally: original menu, career creation, lineup, a complete cup match including halftime and results, F2 save, backup download, import into a fresh browser context, browser reload, and reopening the same post-match career. The production launcher and final chunked runtime both opened the original menu. All 1,698 packaged game files matched the extracted payload. Reassembling the shipped chunks reproduces the original game ZIP and official Wine ZIP exactly.

The earlier malware report records zero ClamAV detections, not a safety guarantee. The decompiler export contains 8,050 routines, but is not a complete verified reconstruction of every game algorithm.
