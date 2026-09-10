'use client';
import { useEffect, useRef, useState } from 'react';
import Link from 'next/link';
import { Button } from '@/components/ui/button';
import {
  Play,
  Maximize,
  Download,
  Upload,
  Monitor,
  ArrowUpRight,
} from 'lucide-react';

type GameTool = {
  name: string;
  title: string;
  description: string;
  inputSchema: object;
  execute: (input: unknown) => Promise<{ session: string }>;
};
type GameDocument = Document & {
  modelContext?: {
    registerTool: (
      tool: GameTool,
      options: { signal: AbortSignal },
    ) => void | Promise<void>;
  };
};
type GameWindow = Window & { render_game_to_text?: () => string };
export default function Home() {
  const [started, setStarted] = useState(false);
  const [status, setStatus] = useState('Ready to play');
  const [failed, setFailed] = useState(false);
  const frame = useRef<HTMLIFrameElement>(null);
  const stage = useRef<HTMLDivElement>(null);
  useEffect(() => {
    const onMessage = (e: MessageEvent) => {
      if (
        e.origin !== location.origin ||
        e.source !== frame.current?.contentWindow
      )
        return;
      if (e.data?.type === 'cyberfoot-status') setStatus(e.data.text);
      if (e.data?.type === 'cyberfoot-error') {
        setFailed(true);
        setStatus(e.data.text);
      }
    };
    window.addEventListener('message', onMessage);
    return () => window.removeEventListener('message', onMessage);
  }, []);
  const launch = () => {
    setStarted(true);
    setFailed(false);
    setStatus('Starting the original game…');
  };
  useEffect(() => {
    const context = (document as GameDocument).modelContext;
    if (!context?.registerTool) return;
    const lifecycle = new AbortController();
    try {
      Promise.resolve(
        context.registerTool(
          {
            name: 'start_cyberfoot',
            title: 'Start Cyberfoot 2015',
            description:
              'Open the original game emulator. This starts a game session; it does not create a career.',
            inputSchema: {
              type: 'object',
              properties: {},
              additionalProperties: false,
            },
            execute: async (input: unknown) => {
              if (
                !input ||
                typeof input !== 'object' ||
                Object.keys(input).length
              )
                throw Error('Expected an empty object.');
              setStarted(true);
              setFailed(false);
              setStatus('Starting the original game…');
              await new Promise((resolve) =>
                requestAnimationFrame(() => requestAnimationFrame(resolve)),
              );
              return { session: 'starting' };
            },
          },
          { signal: lifecycle.signal },
        ),
      ).catch(() => {});
    } catch {}
    return () => lifecycle.abort();
  }, []);
  const full = () => {
    if (document.fullscreenElement)
      void document
        .exitFullscreen()
        .catch(() => setStatus('Fullscreen is unavailable in this browser.'));
    else
      void stage.current
        ?.requestFullscreen()
        .catch(() => setStatus('Fullscreen is unavailable in this browser.'));
  };
  useEffect(() => {
    const w = window as GameWindow;
    w.render_game_to_text = () =>
      JSON.stringify({
        mode: started ? 'original-emulator' : 'ready',
        status,
        failed,
      });
    const key = (e: KeyboardEvent) => {
      if (e.key === 'f' && !started) full();
    };
    window.addEventListener('keydown', key);
    return () => window.removeEventListener('keydown', key);
  }, [started, status, failed]);
  const command = (action: string) =>
    frame.current?.contentWindow?.postMessage(
      { type: 'cyberfoot-command', action },
      location.origin,
    );
  return (
    <main className="shell">
      <header className="masthead">
        <Link href="/" className="wordmark">
          CYBERFOOT<span>2015</span>
        </Link>
        <span className="edition">ORIGINAL WINDOWS EDITION</span>
        <span className="online">
          <i /> IN YOUR BROWSER
        </span>
      </header>
      <section className="game-section" aria-label="Cyberfoot 2015 game">
        <div className="game-toolbar">
          <div className="status">
            <span className={started && !failed ? 'dot active' : 'dot'} />
            <output>{status}</output>
          </div>
          <div className="controls">
            <Button
              variant="ghost"
              disabled={!started}
              onClick={() => command('export')}
              title="Download a backup of your saved careers"
            >
              <Download /> <span>Back up saves</span>
            </Button>
            <Button
              variant="ghost"
              disabled={!started}
              onClick={() => command('import')}
              title="Restore a downloaded save backup"
            >
              <Upload />
              <span>Restore</span>
            </Button>
            <Button variant="outline" onClick={full}>
              <Maximize />
              <span>Fullscreen</span>
            </Button>
          </div>
        </div>
        <div className="stage" ref={stage}>
          {!started ? (
            <div className="launch">
              <div className="season">SEASON / 2015</div>
              <h1>
                Back in the
                <br />
                <em>manager’s seat.</em>
              </h1>
              <p>
                The original clubs. The original match engine.
                <br />
                Cyberfoot 2015, running right here.
              </p>
              <Button
                id="start-btn"
                size="lg"
                className="play-button"
                onClick={launch}
              >
                <Play fill="currentColor" /> Play Cyberfoot <ArrowUpRight />
              </Button>
              <div className="launch-note">
                <Monitor size={16} /> Best with a keyboard and mouse · First
                launch downloads about 63 MB
              </div>
              <div className="year" aria-hidden="true">
                15
              </div>
            </div>
          ) : (
            <iframe
              ref={frame}
              title="Original Cyberfoot 2015"
              src="/emulator/game.html?app=cyberfoot&overlay=graphics&p=cf2015.exe&resolution=1024x768&sound=false&storage=indexeddb"
              allow="autoplay; fullscreen"
              sandbox="allow-scripts allow-same-origin allow-downloads allow-pointer-lock"
            />
          )}
        </div>
        {failed && (
          <div className="error">
            {status}
            <Button
              onClick={() => {
                setStarted(false);
                setFailed(false);
                setStatus('Ready to play');
              }}
            >
              Return to launch screen
            </Button>
          </div>
        )}
        <footer className="game-footer">
          <p>
            Use the game’s <strong>Save</strong> command before closing. Saves
            stay in this browser; download a backup to keep them.
          </p>
          <span>CF / 2015</span>
        </footer>
      </section>
      <details className="about">
        <summary>About this edition & controls</summary>
        <p>
          This is the original, unmodified game executable running through{' '}
          <a
            href="https://github.com/danoon2/Boxedwine/releases/tag/26R1.0"
            target="_blank"
            rel="noreferrer"
          >
            Boxedwine 26R1
          </a>{' '}
          and Wine. Original gameplay and registration restrictions remain in
          place. No remake or replacement match engine.
        </p>
        <p>
          Click inside the game to use the mouse and keyboard. Use the toolbar
          for fullscreen. Audio is disabled for compatibility. A desktop browser
          is recommended. Startup can take about a minute. Clearing site data
          also clears your saves.
        </p>
        <p>
          Boxedwine is GPL-2.0-or-later; Wine is LGPL-2.1-or-later.{' '}
          <Link href="/emulator/NOTICE.txt">
            Credits and source information
          </Link>
          .
        </p>
      </details>
    </main>
  );
}
