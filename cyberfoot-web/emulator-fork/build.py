"""Fetch pinned sources and build the local Boxedwine fork (no deployment)."""
from pathlib import Path
import os
import subprocess

ROOT = Path(__file__).resolve().parents[2]
WORK = ROOT/'output/emulator-fork'
SOURCE = WORK/'Boxedwine'
SDK = WORK/'emsdk'
UPSTREAM = 'd7d5a1421bd781a81cbdf8f222cced11a7ebd76e'
SDK_COMMIT = 'c0bb220cb6e6f4e0fabb6f6db9efd53390ef5e56'

def run(args, **kwargs):
    return subprocess.run(args, check=True, **kwargs)

def checkout(url, tag, path, commit):
    if not path.exists():
        run(['git', 'clone', '--depth', '1', '--branch', tag, url, str(path)])
    actual = subprocess.check_output(['git', '-C', str(path), 'rev-parse', 'HEAD'], text=True).strip()
    if actual != commit:
        raise RuntimeError(f'Unexpected checkout in {path}: {actual}')

WORK.mkdir(parents=True, exist_ok=True)
checkout('https://github.com/danoon2/Boxedwine.git', '26R1.0', SOURCE, UPSTREAM)
checkout('https://github.com/emscripten-core/emsdk.git', '4.0.23', SDK, SDK_COMMIT)
patch = Path(__file__).with_name('runtime.patch')
check = subprocess.run(['git', 'apply', '--reverse', '--check', str(patch)], cwd=SOURCE, capture_output=True)
if check.returncode:
    run(['git', 'apply', '--check', str(patch)], cwd=SOURCE)
    run(['git', 'apply', str(patch)], cwd=SOURCE)
run([str(SDK/'emsdk'), 'install', '4.0.23'])
run([str(SDK/'emsdk'), 'activate', '4.0.23'])
jobs = str(min(6, os.cpu_count() or 2))
# Shell program is fixed; filesystem paths are positional arguments, not code.
# A separate build directory prevents reuse of pre-LTO object files: make does
# not otherwise notice compiler-flag changes. Every translation unit uses LTO.
run(['bash', '-c', 'source "$1/emsdk_env.sh" && make -C "$2/project/emscripten" -j "$3" BUILD_DIR=Build/AudioMain EXTRA_CPP_FLAGS="-DBOXEDWINE_MULTI_THREADED -pthread -flto" EXTRA_LD_FLAGS="-pthread -sPTHREAD_POOL_SIZE=12 -O3 -flto" SHELL_FILE=shell.html', 'build', str(SDK), str(SOURCE), jobs])
