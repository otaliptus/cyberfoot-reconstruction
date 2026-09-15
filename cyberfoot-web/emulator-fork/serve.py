"""Local isolated server: use the fork binaries with the existing game packages."""
from http.server import ThreadingHTTPServer, SimpleHTTPRequestHandler
from pathlib import Path
import argparse

ROOT = Path(__file__).resolve().parents[2]
parser = argparse.ArgumentParser()
parser.add_argument('--port', type=int, default=8778)
parser.add_argument('--build', type=Path, default=ROOT/'output/emulator-fork/Boxedwine/project/emscripten/Build/DirectCpu')
args = parser.parse_args()
PUBLIC = ROOT/'cyberfoot-web/public'

class Handler(SimpleHTTPRequestHandler):
    def __init__(self, *a, **kw):
        super().__init__(*a, directory=str(PUBLIC), **kw)

    def do_GET(self):
        path = self.path.split('?', 1)[0]
        if path in ('/emulator/threaded/boxedwine.js', '/emulator/threaded/boxedwine.wasm'):
            file = args.build/Path(path).name
            self.send_bytes(file.read_bytes(), 'application/wasm' if file.suffix == '.wasm' else 'text/javascript')
        else:
            super().do_GET()

    def send_bytes(self, body, content_type):
        self.send_response(200)
        self.send_header('Content-Type', content_type)
        self.send_header('Content-Length', str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def end_headers(self):
        self.send_header('Cross-Origin-Opener-Policy', 'same-origin')
        self.send_header('Cross-Origin-Embedder-Policy', 'require-corp')
        self.send_header('Cache-Control', 'no-store')
        super().end_headers()

ThreadingHTTPServer(('127.0.0.1', args.port), Handler).serve_forever()
