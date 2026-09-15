"""Restore the original game's WaveAudio driver from the matching official Wine image.

Usage: python3 cyberfoot-web/scripts/extend-emulator-audio.py /path/to/TinyCore15Wine11.0.zip
Source: https://boxedwine.org/v2/6/TinyCore15Wine11.0.zip
"""
from pathlib import Path
import argparse
import hashlib
import zipfile

parser = argparse.ArgumentParser()
parser.add_argument('source', type=Path)
args = parser.parse_args()
expected = '8cb669813037589597a2f08c30fb7b8dc965a53e1344757f69ce5cb0f1958820'
if hashlib.sha256(args.source.read_bytes()).hexdigest() != expected:
    raise RuntimeError('Unexpected Wine source archive; use the pinned official image.')
paths = [
    'home/username/.wine/drive_c/windows/system32/mciwave.dll',
    'opt/wine/lib/wine/i386-unix/mciwave.dll.so',
    'opt/wine/lib/wine/i386-windows/mciwave.dll',
]
overlay = Path(__file__).resolve().parents[1] / 'public/emulator/graphics.zip'
with zipfile.ZipFile(args.source) as source, zipfile.ZipFile(overlay, 'a') as target:
    for path in paths:
        data = source.read(path)
        if path in target.namelist():
            if target.read(path) != data:
                raise RuntimeError(f'Existing overlay entry differs: {path}')
        else:
            target.writestr(source.getinfo(path), data)
with zipfile.ZipFile(overlay) as check:
    if check.testzip() is not None:
        raise RuntimeError('Overlay integrity check failed.')
print(f'Audio overlay ready: {overlay.stat().st_size:,} bytes')
