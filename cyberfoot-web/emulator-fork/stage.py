"""Stage the tested fork and corresponding source in public assets; no deploy."""
from pathlib import Path
import hashlib
import json
import shutil
import tarfile

ROOT = Path(__file__).resolve().parents[2]
FORK = Path(__file__).parent
SOURCE = ROOT/'output/emulator-fork/Boxedwine'
BUILD = SOURCE/'project/emscripten/Build/AudioMain'
PUBLIC = ROOT/'cyberfoot-web/public/emulator'
manifest = json.loads((FORK/'build-manifest.json').read_text())

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

if sha(FORK/'runtime.patch') != manifest['patchSha256']:
    raise RuntimeError('Source patch differs from the tested build.')
for name, expected in manifest['files'].items():
    if sha(BUILD/name) != expected['sha256']:
        raise RuntimeError(f'{name} differs from the tested build.')
for name in manifest['files']:
    shutil.copyfile(BUILD/name, PUBLIC/'threaded'/name)

destination = PUBLIC/'source'
destination.mkdir(exist_ok=True)
for name in ['runtime.patch', 'build.py', 'build-manifest.json', 'README.md']:
    shutil.copyfile(FORK/name, destination/name)
shutil.copyfile(SOURCE/'license.txt', destination/'LICENSE.txt')

def source_only(info):
    if '/Build/' in info.name or info.name.endswith('/Build'):
        return None
    return info

archive = destination/'boxedwine-cyberfoot-source.tar.gz'
with tarfile.open(archive, 'w:gz') as tar:
    for name in ['source', 'include', 'platform', 'lib', 'project/emscripten', 'README.md', 'BUILD.md', 'buildFlags.txt', 'license.txt']:
        tar.add(SOURCE/name, arcname='boxedwine-cyberfoot/'+name, filter=source_only)
if archive.stat().st_size > 25*1024*1024:
    raise RuntimeError('Source archive exceeds the hosting file limit.')
(destination/'archive.json').write_text(json.dumps({'file': archive.name, 'bytes': archive.stat().st_size, 'sha256': sha(archive)}, indent=2)+'\n')
print(f'Staged tested emulator and {archive.stat().st_size:,}-byte source archive.')
