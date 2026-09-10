# Cyberfoot 2015 — original game in the browser

Runs the user-supplied, unmodified 32-bit `cf2015.exe` through the official Boxedwine 26R1 single-threaded WebAssembly emulator. This is not a game remake. Original registration restrictions remain intact.

## Runtime

- Boxedwine 26R1.0 SingleThreaded JS/WASM from its official GitHub release.
- Wine 11 minimal filesystem from that release, split into seventeen chunks below the hosting asset limit.
- Matching Windows image-codec and font libraries from the official full Wine 11 filesystem in `graphics.zip`.
- The game files are packed into a ZIP delivered in three `cyberfoot.part*` files; distributor installer, URL shortcut, and installer plugins are excluded.
- Game SHA-256: `bb5132cfcf9c7f17733c6d8c73ff0cebb5b4b19e34dff34c614919beedc308d0`.

The supplied archive and extracted game previously passed ClamAV 1.5.4 scanning with signatures built 9 September 2026. That does not guarantee safety. The browser emulator has no host-directory mount.

## Operation

`npm install`, `npm run dev`, `npm run build`. The site uses the generated Sites/Vinext project architecture. Browser runtime files are served from `public/emulator/`. Hosting identity is stored in `.openai/hosting.json`.

Save a career with the original game's Save command (F2 from the club screen). The browser filesystem uses IndexedDB. Back up and restore controls handle the game's changed files; clearing browser storage deletes local careers. Audio is disabled for compatibility. Desktop keyboard and mouse are recommended.

## Known limitations

First load downloads roughly 63 MB and startup may take a minute, depending on hardware. The emulator is slower than a native installation. The game is an unregistered original copy, so only the original allowed clubs and competitions are available. This wrapper does not unlock or modify registration.

See `public/emulator/NOTICE.txt` for runtime credits, license and corresponding-source links. See `progress.md` for validation history.
