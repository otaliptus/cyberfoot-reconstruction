/** TForm3-style club editor over the real save (new file; shell stays read-only).
 *
 * Shell insertion points in game-shell.mjs (do not edit here):
 * - clubEditorFrame(progress,total) at line 214 and showClubEditor() at line
 *   223 with `stopClubEditor()` at line 234. The current Form2 loader only
 *   paints progress (`barra` Position/Max) and returns to the menu.
 * - `renderer.register('Form1.Shape3MouseDown',()=>showClubEditor())` at line
 *   256. Intended wiring: after the Form2 progress completes, open
 *   `clubEditorView({save, clubId, language})` (Form3) instead of showMenu(),
 *   and route Grid1/gridtimes edits through `renameClub`, `renameStadium`,
 *   `editPlayerName`, `editPlayerAttribute`, and `editClubLevel` below.
 * - Escape handling already lists Form3-adjacent windows at line 633.
 *
 * Original addresses ported:
 * - 0056e41c TForm2_carregatimes: outer .b15 layout 4 + 200 + 4 + 0x708 bytes.
 *   Save equivalents here are save-schema.mjs recordSize 304 (players,
 *   source 0x66b5b8) and 760 (clubs, source 0x66af70); player fields
 *   0x18 age / 0x20 club / 0x24 role / 0x28 skill and club short name 0,25
 *   match career-state.mjs live views and are reused without reinterpretation.
 * - 00569930 TForm3_timesalvar: club nivel byte at .b15 +3 capped at 0x19 (25),
 *   overflow resets to 0x0c (12); roster validation over the first 0x19 (25)
 *   slots. Ported as CLUB_LEVEL_MIN/MAX + DEFAULT_LEVEL.
 * - TForm4 (club dialog, forms.json): Edit1/2 MaxLength 25 (short/full names),
 *   Edit4 MaxLength 30 (stadium), Edit6 MaxLength 6 (stadium capacity),
 *   ComboBox1 0-25 (nivel). TForm4_BitBtn1Click at 005610f4 validates stadium
 *   capacity 1000 < value < 120000 before writing .b15 +0xc4. Ported as
 *   CLUB_NAME_CAPACITY, STADIUM_NAME_EDITOR_MAX, STADIUM_CAPACITY_MIN/MAX.
 * - TForm5/TForm6 (player dialogs, forms.json): Edit1 MaxLength 30 (name),
 *   TrackBar1 Min 16 Max 42 (age), CheckBox1 'Estrela' (star flag at save
 *   player 0x15 per player-awards.mjs), comboboxes for position/side/country.
 *   Ported as PLAYER_NAME_SAVE_CAPACITY (20, tighter than the 30-char dialog
 *   because save players store shortString 0,20), PLAYER_AGE_MIN/MAX, and
 *   role 0-4 from career-state/lineup-roster.
 * - Save player star flag 0x15 and name 0,20, club stadium 0x1d0,35, and club
 *   strength 0x98 (editor nivel mirror) are the only bytes this editor writes;
 *   every other byte stays intact through readSave/writeSave.
 */
import { record, shortString } from './save-format.mjs';

export const CLUB_RECORD_SIZE = 760;
export const PLAYER_RECORD_SIZE = 304;
export const CLUB_NAME_CAPACITY = 25;
export const CLUB_FULL_NAME_OFFSET = 0x1a;
export const CLUB_FULL_NAME_CAPACITY = 30;
export const STADIUM_NAME_OFFSET = 0x1d0;
export const STADIUM_NAME_SAVE_CAPACITY = 35;
export const STADIUM_NAME_EDITOR_MAX = 30;
export const CLUB_LEVEL_MIN = 0;
export const CLUB_LEVEL_MAX = 25;
export const CLUB_LEVEL_DEFAULT = 12;
export const CLUB_LEVEL_OFFSET = 0x98;
export const STADIUM_CAPACITY_MIN = 1001;
export const STADIUM_CAPACITY_MAX = 119999;
export const STADIUM_CAPACITY_OFFSET = 0xc4;
export const PLAYER_NAME_SAVE_CAPACITY = 20;
export const PLAYER_NAME_EDITOR_MAX = 30;
export const PLAYER_AGE_MIN = 16;
export const PLAYER_AGE_MAX = 42;
export const PLAYER_AGE_OFFSET = 0x18;
export const PLAYER_CLUB_OFFSET = 0x20;
export const PLAYER_ROLE_OFFSET = 0x24;
export const PLAYER_ROLE_MIN = 0;
export const PLAYER_ROLE_MAX = 4;
export const PLAYER_SKILL_OFFSET = 0x28;
export const PLAYER_SKILL_MIN = 0;
export const PLAYER_SKILL_MAX = 100;
export const PLAYER_STAR_OFFSET = 0x15;

const viewOf = (bytes) => new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
const cp1252 = typeof TextDecoder === 'undefined' ? null : new TextDecoder('windows-1252');
const CP1252_EXTRAS = new Map([
  [0x20ac, 0x80], [0x201a, 0x82], [0x0192, 0x83], [0x201e, 0x84], [0x2026, 0x85],
  [0x2020, 0x86], [0x2021, 0x87], [0x02c6, 0x88], [0x2030, 0x89], [0x0160, 0x8a],
  [0x2039, 0x8b], [0x0152, 0x8c], [0x017d, 0x8e], [0x2018, 0x91], [0x2019, 0x92],
  [0x201c, 0x93], [0x201d, 0x94], [0x2022, 0x95], [0x2013, 0x96], [0x2014, 0x97],
  [0x02dc, 0x98], [0x2122, 0x99], [0x0161, 0x9a], [0x203a, 0x9b], [0x0153, 0x9c],
  [0x017e, 0x9e], [0x0178, 0x9f],
]);

function assertClub(save, clubId) {
  const clubs = save.sections.find((section) => section.name === 'clubs');
  if (!clubs) throw new Error('Save has no original club section.');
  if (!Number.isInteger(clubId) || clubId < 0 || clubId >= clubs.count) {
    throw new RangeError(`Invalid club record ${String(clubId)}.`);
  }
  if (clubs.recordSize !== CLUB_RECORD_SIZE) throw new Error('Unexpected original club record size.');
}

function assertPlayer(save, playerId) {
  const players = save.sections.find((section) => section.name === 'players');
  if (!players) throw new Error('Save has no original player section.');
  if (!Number.isInteger(playerId) || playerId < 0 || playerId >= players.count) {
    throw new RangeError(`Invalid player record ${String(playerId)}.`);
  }
  if (players.recordSize !== PLAYER_RECORD_SIZE) throw new Error('Unexpected original player record size.');
}

function writeShortString(bytes, offset, capacity, value) {
  const text = String(value ?? '');
  if (!text) throw new Error('A non-empty name is required.');
  if (text.length > capacity) throw new RangeError(`Short string exceeds ${capacity} characters.`);
  const mapped = new Uint8Array(text.length);
  for (let i = 0; i < text.length; i += 1) {
    const code = text.charCodeAt(i);
    const byte = code < 0x100 ? code : CP1252_EXTRAS.get(code);
    if (byte === undefined) throw new Error(`Unsupported short-string character ${JSON.stringify(text[i])}.`);
    mapped[i] = byte;
  }
  bytes[offset] = mapped.length;
  bytes.set(mapped, offset + 1);
  bytes.fill(0, offset + 1 + mapped.length, offset + 1 + capacity);
}

function decodeShort(bytes, offset, capacity) {
  if (cp1252) return shortString(bytes, offset, capacity);
  const length = bytes[offset];
  return String.fromCharCode(...bytes.subarray(offset + 1, offset + 1 + length));
}

function clubPlayers(save, clubId) {
  const players = save.sections.find((section) => section.name === 'players');
  const out = [];
  for (let id = 0; id < players.count; id += 1) {
    const bytes = record(save, 'players', id);
    if (viewOf(bytes).getInt32(PLAYER_CLUB_OFFSET, true) === clubId) out.push(id);
  }
  return out;
}

/** Rename a club short name (save 0,25; editor bound 25). Mutates save. */
export function renameClub(save, clubId, name) {
  assertClub(save, clubId);
  const bytes = record(save, 'clubs', clubId);
  const previous = decodeShort(bytes, 0, CLUB_NAME_CAPACITY);
  writeShortString(bytes, 0, CLUB_NAME_CAPACITY, String(name ?? '').trim());
  return { clubId, previous, name: decodeShort(bytes, 0, CLUB_NAME_CAPACITY) };
}

/** Rename a stadium (save 0x1d0,35; editor bound 30). Mutates save. */
export function renameStadium(save, clubId, name) {
  assertClub(save, clubId);
  const clean = String(name ?? '').trim();
  if (!clean) throw new Error('A stadium name is required.');
  if (clean.length > STADIUM_NAME_EDITOR_MAX) {
    throw new RangeError(`Stadium names are limited to ${STADIUM_NAME_EDITOR_MAX} characters by TForm4 Edit4.`);
  }
  const bytes = record(save, 'clubs', clubId);
  const previous = decodeShort(bytes, STADIUM_NAME_OFFSET, STADIUM_NAME_SAVE_CAPACITY);
  writeShortString(bytes, STADIUM_NAME_OFFSET, STADIUM_NAME_SAVE_CAPACITY, clean);
  return { clubId, previous, name: decodeShort(bytes, STADIUM_NAME_OFFSET, STADIUM_NAME_SAVE_CAPACITY) };
}

/** Edit club nivel/strength (TForm4 ComboBox1 0-25; overflow defaults to 12). */
export function editClubLevel(save, clubId, level) {
  assertClub(save, clubId);
  if (!Number.isInteger(level) || level < CLUB_LEVEL_MIN || level > CLUB_LEVEL_MAX) {
    throw new RangeError(`Club level ${String(level)} is outside TForm3/TForm4 bounds ${CLUB_LEVEL_MIN}..${CLUB_LEVEL_MAX}.`);
  }
  const bytes = record(save, 'clubs', clubId);
  const previous = viewOf(bytes).getInt32(CLUB_LEVEL_OFFSET, true);
  viewOf(bytes).setInt32(CLUB_LEVEL_OFFSET, level, true);
  return { clubId, previous, level };
}

/** Rename a player (save 0,20; dialog allows 30). Mutates save. */
export function editPlayerName(save, playerId, name) {
  assertPlayer(save, playerId);
  const clean = String(name ?? '').trim();
  if (!clean) throw new Error('A player name is required.');
  if (clean.length > PLAYER_NAME_EDITOR_MAX) {
    throw new RangeError(`Player names are limited to ${PLAYER_NAME_EDITOR_MAX} characters by TForm5/6 Edit1.`);
  }
  if (clean.length > PLAYER_NAME_SAVE_CAPACITY) {
    throw new RangeError(`Player names are limited to ${PLAYER_NAME_SAVE_CAPACITY} characters in the save.`);
  }
  const bytes = record(save, 'players', playerId);
  const previous = decodeShort(bytes, 0, PLAYER_NAME_SAVE_CAPACITY);
  writeShortString(bytes, 0, PLAYER_NAME_SAVE_CAPACITY, clean);
  return { playerId, previous, name: decodeShort(bytes, 0, PLAYER_NAME_SAVE_CAPACITY) };
}

/** Edit player age/role/skill/star within original editor bounds. Mutates save. */
export function editPlayerAttribute(save, playerId, { age, role, skill, star } = {}) {
  assertPlayer(save, playerId);
  const bytes = record(save, 'players', playerId);
  const view = viewOf(bytes);
  const previous = {
    age: view.getInt32(PLAYER_AGE_OFFSET, true),
    role: view.getInt32(PLAYER_ROLE_OFFSET, true),
    skill: view.getInt32(PLAYER_SKILL_OFFSET, true),
    star: view.getUint8(PLAYER_STAR_OFFSET) !== 0,
  };
  if (age !== undefined) {
    if (!Number.isInteger(age) || age < PLAYER_AGE_MIN || age > PLAYER_AGE_MAX) {
      throw new RangeError(`Player age ${String(age)} is outside TForm5/6 TrackBar bounds ${PLAYER_AGE_MIN}..${PLAYER_AGE_MAX}.`);
    }
    view.setInt32(PLAYER_AGE_OFFSET, age, true);
  }
  if (role !== undefined) {
    if (!Number.isInteger(role) || role < PLAYER_ROLE_MIN || role > PLAYER_ROLE_MAX) {
      throw new RangeError(`Player role ${String(role)} is outside original bounds ${PLAYER_ROLE_MIN}..${PLAYER_ROLE_MAX}.`);
    }
    view.setInt32(PLAYER_ROLE_OFFSET, role, true);
  }
  if (skill !== undefined) {
    if (!Number.isInteger(skill) || skill < PLAYER_SKILL_MIN || skill > PLAYER_SKILL_MAX) {
      throw new RangeError(`Player skill ${String(skill)} is outside original bounds ${PLAYER_SKILL_MIN}..${PLAYER_SKILL_MAX}.`);
    }
    view.setInt32(PLAYER_SKILL_OFFSET, skill, true);
  }
  if (star !== undefined) view.setUint8(PLAYER_STAR_OFFSET, star ? 1 : 0);
  return {
    playerId,
    previous,
    current: {
      age: view.getInt32(PLAYER_AGE_OFFSET, true),
      role: view.getInt32(PLAYER_ROLE_OFFSET, true),
      skill: view.getInt32(PLAYER_SKILL_OFFSET, true),
      star: view.getUint8(PLAYER_STAR_OFFSET) !== 0,
    },
  };
}

/** TForm3 Grid1/gridtimes view model for one club and its players. */
export function clubEditorView({ save, clubId = 0, language } = {}) {
  assertClub(save, clubId);
  const clubBytes = record(save, 'clubs', clubId);
  const clubView = viewOf(clubBytes);
  const ids = clubPlayers(save, clubId);
  const players = ids.map((id) => {
    const bytes = record(save, 'players', id);
    const view = viewOf(bytes);
    return {
      id,
      name: decodeShort(bytes, 0, PLAYER_NAME_SAVE_CAPACITY),
      age: view.getInt32(PLAYER_AGE_OFFSET, true),
      role: view.getInt32(PLAYER_ROLE_OFFSET, true),
      skill: view.getInt32(PLAYER_SKILL_OFFSET, true),
      star: view.getUint8(PLAYER_STAR_OFFSET) !== 0,
    };
  });
  return {
    form: 'Form3',
    clubId,
    club: {
      id: clubId,
      name: decodeShort(clubBytes, 0, CLUB_NAME_CAPACITY),
      stadium: decodeShort(clubBytes, STADIUM_NAME_OFFSET, STADIUM_NAME_SAVE_CAPACITY),
      level: clubView.getInt32(CLUB_LEVEL_OFFSET, true),
      country: clubView.getInt32(0x3c, true),
      division: clubView.getInt32(0x7c, true),
    },
    players,
    playerCount: players.length,
    bounds: {
      clubName: CLUB_NAME_CAPACITY,
      stadiumEditor: STADIUM_NAME_EDITOR_MAX,
      stadiumSave: STADIUM_NAME_SAVE_CAPACITY,
      level: [CLUB_LEVEL_MIN, CLUB_LEVEL_MAX],
      playerNameSave: PLAYER_NAME_SAVE_CAPACITY,
      playerNameEditor: PLAYER_NAME_EDITOR_MAX,
      age: [PLAYER_AGE_MIN, PLAYER_AGE_MAX],
      role: [PLAYER_ROLE_MIN, PLAYER_ROLE_MAX],
      skill: [PLAYER_SKILL_MIN, PLAYER_SKILL_MAX],
    },
    language: language ?? null,
    controls: { grid: 'Grid1', clubGrid: 'gridtimes', searchClub: 'Edit1', searchPlayer: 'Edit2' },
  };
}

function element(document, tag, attributes = {}) {
  const node = document.createElement(tag);
  for (const [key, value] of Object.entries(attributes)) node.setAttribute(key, value);
  return node;
}

/** DOM host for the TForm3 editor (edits apply directly to the live save). */
export function mountClubEditor(container, { save, language, clubId = 0 } = {}) {
  if (!container || typeof container.replaceChildren !== 'function') throw new TypeError('A container element is required.');
  if (!save?.sections) throw new TypeError('A real save is required.');
  const document = container.ownerDocument ?? globalThis.document;
  if (!document) throw new TypeError('A document is required.');
  assertClub(save, clubId);
  let currentClub = clubId;
  let selectedPlayer = clubPlayers(save, currentClub)[0] ?? 0;
  const root = element(document, 'section', { 'data-club-editor': 'Form3' });
  root.style.cssText = 'font:13px/1.4 Arial,sans-serif;color:#400;background:#fff;border:1px solid #400;padding:12px;max-width:720px';
  const heading = element(document, 'h2');
  const clubRow = element(document, 'div');
  clubRow.style.cssText = 'display:flex;gap:6px;flex-wrap:wrap;align-items:center;margin:8px 0';
  const clubInput = element(document, 'input', { 'data-club-editor-control': 'clubName' });
  clubInput.maxLength = CLUB_NAME_CAPACITY;
  const stadiumInput = element(document, 'input', { 'data-club-editor-control': 'stadium' });
  stadiumInput.maxLength = STADIUM_NAME_EDITOR_MAX;
  const levelInput = element(document, 'input', { 'data-club-editor-control': 'level' });
  levelInput.type = 'number';
  levelInput.min = String(CLUB_LEVEL_MIN);
  levelInput.max = String(CLUB_LEVEL_MAX);
  const applyClub = element(document, 'button', { 'data-club-editor-control': 'applyClub' });
  applyClub.type = 'button';
  applyClub.textContent = 'Save club';
  const playerRow = element(document, 'div');
  playerRow.style.cssText = 'display:flex;gap:6px;flex-wrap:wrap;align-items:center;margin:8px 0';
  const playerSelect = element(document, 'select', { 'data-club-editor-control': 'player' });
  const nameInput = element(document, 'input', { 'data-club-editor-control': 'playerName' });
  nameInput.maxLength = PLAYER_NAME_SAVE_CAPACITY;
  const ageInput = element(document, 'input', { 'data-club-editor-control': 'age' });
  ageInput.type = 'number';
  ageInput.min = String(PLAYER_AGE_MIN);
  ageInput.max = String(PLAYER_AGE_MAX);
  const skillInput = element(document, 'input', { 'data-club-editor-control': 'skill' });
  skillInput.type = 'number';
  skillInput.min = String(PLAYER_SKILL_MIN);
  skillInput.max = String(PLAYER_SKILL_MAX);
  const applyPlayer = element(document, 'button', { 'data-club-editor-control': 'applyPlayer' });
  applyPlayer.type = 'button';
  applyPlayer.textContent = 'Save player';
  const status = element(document, 'p', { 'data-club-editor-field': 'status' });
  status.style.cssText = 'font-weight:bold;min-height:1em';
  const roster = element(document, 'pre', { 'data-club-editor-field': 'roster' });
  roster.style.cssText = 'background:#eee;color:#222;padding:8px;max-height:220px;overflow:auto;white-space:pre-wrap';
  clubRow.append(clubInput, stadiumInput, levelInput, applyClub);
  playerRow.append(playerSelect, nameInput, ageInput, skillInput, applyPlayer);
  root.append(heading, clubRow, playerRow, status, roster);
  container.replaceChildren(root);

  function render(message = '') {
    const view = clubEditorView({ save, clubId: currentClub, language });
    heading.textContent = `Editor de Equipes — ${view.club.name}`;
    if (document.activeElement !== clubInput) clubInput.value = view.club.name;
    if (document.activeElement !== stadiumInput) stadiumInput.value = view.club.stadium;
    if (document.activeElement !== levelInput) levelInput.value = String(view.club.level);
    if (!view.players.some((entry) => entry.id === selectedPlayer)) selectedPlayer = view.players[0]?.id ?? 0;
    playerSelect.replaceChildren(...view.players.map((entry) => {
      const option = document.createElement('option');
      option.value = String(entry.id);
      option.textContent = `${entry.id}: ${entry.name} (${entry.age}/${entry.skill})`;
      return option;
    }));
    playerSelect.value = String(selectedPlayer);
    const current = view.players.find((entry) => entry.id === selectedPlayer);
    if (current) {
      if (document.activeElement !== nameInput) nameInput.value = current.name;
      if (document.activeElement !== ageInput) ageInput.value = String(current.age);
      if (document.activeElement !== skillInput) skillInput.value = String(current.skill);
    }
    roster.textContent = `${view.playerCount} jogadores\n${view.players.slice(0, 12).map((entry) => `${entry.id} ${entry.name} age=${entry.age} role=${entry.role} skill=${entry.skill}${entry.star ? ' *' : ''}`).join('\n')}${view.players.length > 12 ? '\n…' : ''}`;
    if (message) status.textContent = message;
    return view;
  }

  applyClub.addEventListener('click', () => {
    try {
      renameClub(save, currentClub, clubInput.value);
      renameStadium(save, currentClub, stadiumInput.value || decodeShort(record(save, 'clubs', currentClub), STADIUM_NAME_OFFSET, STADIUM_NAME_SAVE_CAPACITY));
      editClubLevel(save, currentClub, Number(levelInput.value));
      render(`saved club ${currentClub}`);
    } catch (error) {
      render(`club error: ${error.message}`);
    }
  });
  applyPlayer.addEventListener('click', () => {
    try {
      const id = Number(playerSelect.value);
      editPlayerName(save, id, nameInput.value);
      editPlayerAttribute(save, id, { age: Number(ageInput.value), skill: Number(skillInput.value) });
      selectedPlayer = id;
      render(`saved player ${id}`);
    } catch (error) {
      render(`player error: ${error.message}`);
    }
  });
  playerSelect.addEventListener('change', () => {
    selectedPlayer = Number(playerSelect.value);
    render();
  });
  render();
  return {
    element: root,
    render,
    selectClub: (id) => {
      assertClub(save, id);
      currentClub = id;
      selectedPlayer = clubPlayers(save, id)[0] ?? 0;
      return render();
    },
    selectPlayer: (id) => {
      assertPlayer(save, id);
      selectedPlayer = id;
      return render();
    },
    view: () => clubEditorView({ save, clubId: currentClub, language }),
    get clubId() { return currentClub; },
    get playerId() { return selectedPlayer; },
  };
}
