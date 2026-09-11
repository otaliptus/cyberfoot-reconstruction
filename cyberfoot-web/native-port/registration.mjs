/** Form42 registration over the real save (new file; read-only shell otherwise).
 *
 * Shell insertion points in game-shell.mjs (do not edit here):
 * - showStaticMenuWindow(form) at line 162 (`function showStaticMenuWindow(form){...}`)
 *   currently stubbed as `showStaticMenuWindow('Form42')`.
 * - `renderer.register('Form1.Shape4MouseDown',()=>showStaticMenuWindow('Form42'))` at line 257.
 * - Escape handling lists 'Form42' at line 633.
 * Intended wiring: replace the Shape4 stub with
 * `mountRegistration(renderer.frameHost, {save, language})` or
 * `manager.open(registrationView({language}))`, and route
 * `Form42.XiButton2Click` (validate) / `Form42.Image1Click` (open site)
 * through `validateRegistrationKey` + `applyRegistration`.
 *
 * Original addresses ported:
 * - 00651f8c FUN_00651f8c: registered gate `*(int*)0x66b1c0 > 499`.
 *   Ported exactly as `isRegistered(flag)`.
 * - 005b83e8 TForm42_XiButton2Click: click counter at DAT_006d2b04, calls
 *   FUN_005b6ad0 while `< 0x14`. Ported as attempt counting in the session.
 * - 005b6ad0 FUN_005b6ad0 (Form42 key validation, 1234-line handler):
 *   Edit offsets confirm the fields: form-fields.json gives
 *   Edit2 (code) at 800 (0x320) and Edit1 (name) at 804 (0x324); the handler
 *   reads param+800 (code) and param+0x324 (name). Length gates require both
 *   strings longer than 4 chars; code must parse as integer >= 1000
 *   (branches at 0x5b6c99/0x5b820d). Name/code hash loops skip 0x20 (space)
 *   and 0x41 ('A') / 0x61 ('a') and accumulate flat and position-weighted
 *   64-bit sums; several alternative expected-code branches are compared with
 *   StrToInt(code). One fully recoverable branch (lines 1166-1176) requires
 *   `code == nameLength * 0x408 (1032)`; ported exactly as
 *   `form42LengthBranch`. A second startup-registry branch at 0064aa20
 *   (lines 178-198) requires `code == ((b1+b2+5)*weighted*7 + 0x2a705) + 0x4b`
 *   with weighted sum skipping ' '/'A'; ported as `startupWeightedBranch`.
 *   Remaining multi-stage constants depend on runtime string tables at
 *   DAT_005b8360 etc. and are documented as uncertain (see REPORT notes).
 * - 0064aa20 FUN_0064aa20 (startup registry validation): rejects empty
 *   name/code (unregistered `random(100)`), rejects literal "Crackx"/"CrackX",
 *   requires a space inside names longer than 6 chars. Ported as
 *   `CRACK_NAMES` + `hasSpaceGate`.
 * - 005b66d0 TForm42_FormCreate: language ids 0x2ff-0x30d drive the labels;
 *   mapped here to language.json 4/5/6/768-780 (see registrationView).
 * - forms.json TForm42 control tree: Panel1 > Bevel1, Label8 'Nome:',
 *   Label9 'Código:', Edit1 (name), Edit2 (code), xibutton2 (validate),
 *   Image1 (site link), label1 '<B><SHAD>Registro do Cyberfoot 2015</SHAD></B>'.
 *
 * Save persistence: the original flag lives at global 0x66b1c0 (not in the
 * save). This port mirrors it into the career block at REGISTRATION_FLAG_OFFSET
 * (0x740, Int32LE) so the real save carries the state through readSave/writeSave
 * without colliding with verified career fields (0x700-0x738 hold referee ids;
 * 0x75c/0x75d are season flags; 0x739-0x75b are zero in the template).
 * Success stores 500 + (hash % 500) mirroring `random(500)+500` at
 * 005b6ad0:1123 and 0064aa20:198; failure stores hash % 100 mirroring
 * `random(100)` at 0064aa20:202/215.
 */

export const REGISTRATION_THRESHOLD = 499;
export const REGISTRATION_FLAG_OFFSET = 0x740;
export const REGISTRATION_MAX_ATTEMPTS = 0x14;
export const CRACK_NAMES = ['Crackx', 'CrackX'];
export const REGISTRATION_CODE_MULTIPLIER = 0x408;
export const REGISTRATION_STARTUP_BASE = 0x2a705;
export const REGISTRATION_STARTUP_FACTOR = 7;
export const REGISTRATION_STARTUP_BIAS = 0x4b;

const viewOf = (bytes) => new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);

function textOf(language, id, fallback = '') {
  const entry = language?.[id];
  if (entry && typeof entry.text === 'string' && entry.text) return entry.text;
  return fallback;
}

function trimmed(value) {
  return String(value ?? '').trim();
}

function byteOf(char) {
  return String(char).charCodeAt(0) & 0xff;
}

/** Exact gate at 00651f8c: registered iff flag > 499. */
export function isRegistered(flag) {
  return Number(flag) > REGISTRATION_THRESHOLD;
}

export function readRegistrationFlag(save) {
  const career = viewOf(save.career);
  return career.getInt32(REGISTRATION_FLAG_OFFSET, true);
}

export function readRegistration(save) {
  const flag = readRegistrationFlag(save);
  return { flag, registered: isRegistered(flag) };
}

/** 0064aa20:178-189 weighted loop skipping 0x20/'A'. 1-based positions. */
export function startupWeightedSum(name) {
  const text = String(name ?? '');
  let low = 0;
  let high = 0;
  for (let index = 1; index <= text.length; index += 1) {
    const code = byteOf(text[index - 1]);
    if (code === 0x20 || code === 0x41) continue;
    const term = code * index + index + 3;
    const next = low + term;
    high += next < low ? 1 : 0;
    high += Math.floor(term / 0x100000000);
    low = next >>> 0;
  }
  return { low: low >>> 0, high: high >>> 0, combined: high * 0x100000000 + (low >>> 0) };
}

/** 005b6ad0 flat loop shape skipping 0x20/0x41/0x61 (used for attempt hash). */
export function flatNameSum(name) {
  const text = String(name ?? '');
  let sum = 0;
  for (const char of text) {
    const code = byteOf(char);
    if (code === 0x20 || code === 0x41 || code === 0x61) continue;
    sum = (sum + code) >>> 0;
  }
  return sum >>> 0;
}

/** 005b6ad0:1166-1176 recoverable branch: code == len(name) * 1032. */
export function form42LengthBranch(name, codeText) {
  const parsed = parseCode(codeText);
  if (parsed === null) return false;
  return parsed === trimmed(name).length * REGISTRATION_CODE_MULTIPLIER;
}

/** 0064aa20:190-198 startup branch: code == ((b1+b2+5)*w*7 + 0x2a705) + 0x4b. */
export function startupWeightedBranch(name, codeText) {
  const clean = trimmed(name);
  const parsed = parseCode(codeText);
  if (parsed === null || clean.length < 3) return false;
  if (!clean.includes(' ') || clean.length <= 6) return false;
  const { combined } = startupWeightedSum(clean);
  const b1 = byteOf(clean[1]);
  const b2 = byteOf(clean[2]);
  const expected = (b1 + b2 + 5) * combined * REGISTRATION_STARTUP_FACTOR
    + REGISTRATION_STARTUP_BASE + REGISTRATION_STARTUP_BIAS;
  return parsed === expected;
}

export function parseCode(value) {
  const clean = trimmed(value);
  if (!/^[0-9]+$/.test(clean)) return null;
  const parsed = Number(clean);
  if (!Number.isSafeInteger(parsed)) return null;
  return parsed;
}

/** Full Form42 validation: generic gates plus either exact branch. */
export function validateRegistrationKey({ name, code } = {}) {
  const cleanName = trimmed(name);
  const cleanCode = trimmed(code);
  if (!cleanName || !cleanCode) return { valid: false, reason: 'empty' };
  if (CRACK_NAMES.includes(cleanName)) return { valid: false, reason: 'crack' };
  if (cleanName.length <= 4 || cleanCode.length <= 4) return { valid: false, reason: 'too-short' };
  const parsed = parseCode(cleanCode);
  if (parsed === null) return { valid: false, reason: 'non-numeric' };
  if (parsed < 1000) return { valid: false, reason: 'too-small' };
  if (form42LengthBranch(cleanName, cleanCode)) return { valid: true, reason: 'form42-length', expected: String(cleanName.length * REGISTRATION_CODE_MULTIPLIER) };
  if (startupWeightedBranch(cleanName, cleanCode)) return { valid: true, reason: 'startup-weighted' };
  return { valid: false, reason: 'mismatch' };
}

/** Deterministic Form42 code for a name (exact 005b6ad0 length branch). */
export function deriveForm42Code(name) {
  const clean = trimmed(name);
  if (!clean) throw new Error('A registration name is required.');
  return String(clean.length * REGISTRATION_CODE_MULTIPLIER);
}

/** Deterministic startup-registry code for a name (exact 0064aa20 branch). */
export function deriveStartupCode(name) {
  const clean = trimmed(name);
  if (clean.length < 3 || !clean.includes(' ') || clean.length <= 6) {
    throw new Error('Startup codes require a spaced name longer than 6 characters.');
  }
  const { combined } = startupWeightedSum(clean);
  const expected = (byteOf(clean[1]) + byteOf(clean[2]) + 5) * combined * REGISTRATION_STARTUP_FACTOR
    + REGISTRATION_STARTUP_BASE + REGISTRATION_STARTUP_BIAS;
  return String(expected);
}

function successFlag(name, code) {
  const hash = (flatNameSum(`${name}:${code}`) + startupWeightedSum(name).combined) >>> 0;
  return 500 + (hash % 500);
}

function failureFlag(name, code) {
  const hash = (flatNameSum(`${name}:${code}`) + 17) >>> 0;
  return hash % 100;
}

/** Validate and mirror the 0066b1c0 flag into career+0x740. Mutates save. */
export function applyRegistration(save, { name, code } = {}) {
  if (!save?.career) throw new Error('A real save is required.');
  const result = validateRegistrationKey({ name, code });
  const career = viewOf(save.career);
  const flag = result.valid
    ? successFlag(trimmed(name), trimmed(code))
    : failureFlag(trimmed(name), trimmed(code));
  career.setInt32(REGISTRATION_FLAG_OFFSET, flag, true);
  return { ...result, flag, registered: isRegistered(flag) };
}

/** Clear the mirrored flag (unregistered). Mutates save. */
export function clearRegistration(save) {
  if (!save?.career) throw new Error('A real save is required.');
  viewOf(save.career).setInt32(REGISTRATION_FLAG_OFFSET, 0, true);
  return { flag: 0, registered: false };
}

/** Form42 view model from forms.json captions + language.json 4-6/768-780. */
export function registrationView({ language, name = '', code = '', status = '', attempts = 0 } = {}) {
  const benefits = [769, 770, 771, 772, 773, 774].map((id) => textOf(language, id, ''));
  return {
    form: 'Form42',
    title: 'Registro do Cyberfoot 2015',
    registerLabel: textOf(language, 4, 'Register Game'),
    unregisteredLabel: textOf(language, 5, 'Unregistered Version'),
    registeredLabel: textOf(language, 6, 'Registered Version'),
    benefitsTitle: textOf(language, 768, ''),
    siteHint: textOf(language, 775, ''),
    priceHint: textOf(language, 776, ''),
    codeHint: textOf(language, 777, ''),
    nameLabel: textOf(language, 778, 'Nome:'),
    codeLabel: textOf(language, 779, 'Código:'),
    submitLabel: textOf(language, 780, 'Enter Code'),
    siteUrl: 'www.cyberfoot.net',
    benefits,
    name: String(name ?? ''),
    code: String(code ?? ''),
    status: String(status ?? ''),
    attempts,
    controls: { editName: 'Edit1', editCode: 'Edit2', submit: 'xibutton2', site: 'Image1' },
  };
}

function element(document, tag, attributes = {}) {
  const node = document.createElement(tag);
  for (const [key, value] of Object.entries(attributes)) node.setAttribute(key, value);
  return node;
}

/** DOM host for the Form42 screen. Mutates the live save flag only. */
export function mountRegistration(container, { save, language, onChange } = {}) {
  if (!container || typeof container.replaceChildren !== 'function') throw new TypeError('A container element is required.');
  if (!save?.career) throw new TypeError('A real save is required.');
  const document = container.ownerDocument ?? globalThis.document;
  if (!document) throw new TypeError('A document is required.');
  const notify = typeof onChange === 'function' ? onChange : () => {};
  let attempts = 0;
  const root = element(document, 'section', { 'data-registration': 'Form42' });
  root.style.cssText = 'font:13px/1.4 Arial,sans-serif;color:#fff;background:#33335c;border:1px solid #222;padding:12px;max-width:640px';
  const heading = element(document, 'h2');
  const stateLine = element(document, 'p', { 'data-registration-field': 'state' });
  const benefits = element(document, 'ul');
  const row = element(document, 'div');
  row.style.cssText = 'display:flex;gap:6px;flex-wrap:wrap;align-items:center;margin:8px 0';
  const nameInput = element(document, 'input', { 'data-registration-control': 'Edit1' });
  nameInput.type = 'text';
  const codeInput = element(document, 'input', { 'data-registration-control': 'Edit2' });
  codeInput.type = 'text';
  const submit = element(document, 'button', { 'data-registration-control': 'xibutton2' });
  submit.type = 'button';
  const clear = element(document, 'button', { 'data-registration-control': 'clear' });
  clear.type = 'button';
  clear.textContent = 'Clear';
  const status = element(document, 'p', { 'data-registration-field': 'status' });
  status.style.cssText = 'font-weight:bold;min-height:1em';
  row.append(nameInput, codeInput, submit, clear);
  root.append(heading, stateLine, benefits, row, status);
  container.replaceChildren(root);

  function render(message = '') {
    const view = registrationView({ language, name: nameInput.value, code: codeInput.value, status: message, attempts });
    heading.textContent = view.title;
    const current = readRegistration(save);
    stateLine.textContent = `${current.registered ? view.registeredLabel : view.unregisteredLabel} (${current.flag}) · ${view.registerLabel}`;
    benefits.replaceChildren(...view.benefits.map((item) => {
      const entry = document.createElement('li');
      entry.textContent = item;
      return entry;
    }));
    nameInput.placeholder = view.nameLabel;
    codeInput.placeholder = view.codeLabel;
    submit.textContent = view.submitLabel;
    if (message) status.textContent = message;
    return view;
  }

  submit.addEventListener('click', () => {
    attempts += 1;
    const outcome = applyRegistration(save, { name: nameInput.value, code: codeInput.value });
    const message = outcome.valid ? `${textOf(language, 6, 'Registered Version')} (${outcome.flag})` : `invalid (${outcome.reason})`;
    render(message);
    notify({ ...outcome, attempts });
  });
  clear.addEventListener('click', () => {
    const outcome = clearRegistration(save);
    render(`cleared (${outcome.flag})`);
    notify({ ...outcome, cleared: true, attempts });
  });
  render();
  return {
    element: root,
    render,
    submit: (name, code) => {
      if (name !== undefined) nameInput.value = String(name);
      if (code !== undefined) codeInput.value = String(code);
      submit.click();
      return readRegistration(save);
    },
    clear: () => {
      clear.click();
      return readRegistration(save);
    },
    view: () => registrationView({ language, name: nameInput.value, code: codeInput.value, status: status.textContent, attempts }),
    get attempts() { return attempts; },
  };
}
