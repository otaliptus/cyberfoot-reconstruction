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
 * Original addresses ported (traced with Unicorn oracle harness, venv
 * cyberfoot-analysis/tools/venv/bin/python run from cyberfoot-analysis/scripts):
 * - 00651f8c FUN_00651f8c: registered gate `*(int*)0x66b1c0 > 499`.
 *   Ported exactly as `isRegistered(flag)`.
 * - 005b83e8 TForm42_XiButton2Click: click counter at DAT_006d2b04, calls
 *   FUN_005b6ad0 while `< 0x14`. Ported as attempt counting in the session.
 * - 005b6ad0 FUN_005b6ad0 (Form42 key validation):
 *   Edit offsets confirm the fields: form-fields.json gives
 *   Edit2 (code) at 800 (0x320) and Edit1 (name) at 804 (0x324); the handler
 *   reads param+800 (code) and param+0x324 (name). Length gates require raw
 *   name len > 4, filtered code (digits-only via 0040343c/00404abc/00404bac
 *   loop at 0x5b6b63) len 5-10, and StrToInt64(code) >= 1000 (0x5b6c6e).
 *   Twelve hash flags at [ebp-0x31..0x3c] are set by comparing
 *   StrToInt64(code) to 64-bit expected values (0040a06c + 00405c1c __llmul).
 *   Disassembly (/tmp/form42.asm from 005b6ad0-005b8357, 1804 insns) proves
 *   only [ebp-0x3c] (set at 0x5b803d) is ever read (cmp at 0x5b8071 gates the
 *   `*(0x66b1c0)=Random(500)+500` write at 0x5b809e); flags 0x31-0x3b are
 *   write-only dead stores (no reads in the 1804-insn function). In
 *   particular the length*0x408 branch at 0x5b81e7 (flag 0x31, set after the
 *   registration decision) is dead: feeding its code does NOT register in
 *   the running original (oracle probe: flag stays 0). Kept here as
 *   `form42LengthBranch` for backwards compat but NOT accepted by
 *   `validateRegistrationKey` (documented dead).
 *   The LIVE branch (0x5b7f59-0x5b803d, flag 0x3c) computes over the
 *   string-table-driven normalized name (see below):
 *   `S1=Σ(byte*i+i+3)` skipping 0x20/0x41, 1-based (0x5b7f75, with
 *   `imul ebx; lea edx,[ebx+3]`); dead second sum `Σ(byte*i)` at 0x5b7fbd is
 *   ignored (result in [ebp-0x20] never used; multiply uses [ebp-0x18]=S1).
 *   `expected=S1*(b1+b2+5)*7+0x2a705` (0x5b7ffb *b, 0x5b8010 *7,
 *   0x5b801d +0x2a705; b1=s[1],b2=s[2] at 0x5b7fe9) compared to
 *   StrToInt64(filteredCode). Ported as `form42LiveBranch` (+ `deriveLiveCode`
 *   via `deriveForm42Code`). Tables near DAT_005b8360 recovered via Unicorn
 *   mem reads (all single-char AnsiStrings, len@-4=1): 0x5b836c=" ",
 *   0x5b8378="`", 0x5b8384="'", 0x5b8390="\xb4" (same at 00647e4c/58/64/70 and
 *   0064aec0/eec/ef8/af04; flags byte at 0x5b8360/0x64aeb4/0x647e40 =0x01
 *   =rfReplaceAll for 0040f7c8 StringReplace). Accent-strip 0064a6f4 tables at
 *   0x64a7c0 (24 bytes e0..f6) -> 0x64a7e4 ("aaaaeeeoooouuuuiiicnaeio");
 *   substitution 0064a800 charset at 0x64a8cc
 *   ("abcdefghijklmnopqrstuvxzyw0123456789", note uvxzyw) -> mapping at
 *   0x64a8fc ("fitbzvengwpkycmuqhldxjrasofitbzvengw"). Full live pipeline for
 *   [ebp-0x24] (0x5b7e09-0x5b7f54): LowerCase(raw) (00409724 via CharLowerBuffA,
 *   stubbed as ASCII lower in oracle), delete " ", accent-strip, delete "`",
 *   delete "'", delete "\xb4", LowerCase, substitute (0064a800). Ported as
 *   `transformFinalName`. Blacklist 00647cec (lower+deletes+accent+lower,
 *   compare to "emmanueldossantos" at 0x647e7c, len 0x11) gates the write at
 *   0x5b807e (`test al,al; jne skip`): blacklisted names never register even
 *   with correct hash. Ported as `isBlacklistedName` (checked in validate).
 * - 0064aa20 FUN_0064aa20 (startup registry validation): rejects empty
 *   name/code (unregistered `random(100)`), rejects literal "Crackx"/"CrackX",
 *   requires len>=7 with a space (0x64ac4d/0x64ac7d). Same transform pipeline
 *   (0x64ac8d-0x64ad8e: LowerCase, delete " " x2, accent, delete "`"/"'"/"\xb4",
 *   LowerCase, substitute) then same hash `S1*(b1+b2+5)*7+0x2a705` (0x64adc6,
 *   0x64ade7 *b, 0x64aded *7 via shl8-sub) compared to `code-0x4b`
 *   (0x64ac37 sub 0x4b; registry globals *0x66b580 are 0 on web, so
 *   `code==expected+0x4b`). Ported as `startupLiveBranch` (+0x4b bias) and
 *   `deriveStartupCode` (both use `transformFinalName`). The old raw-name
 *   `startupWeightedBranch`/`startupWeightedSum` are kept for flag hashing but
 *   no longer used for validation (raw without transforms fails against the
 *   running original for accented/mixed-case names; oracle probes prove live
 *   codes with transforms register, raw-only do not).
 *   Remaining dead hash branches (flags 0x32-0x3b: multipliers 0xe4,0x1a,0x19,
 *   0x14,0x15,0x17+0x575,0x11+0x575,0x0d+0x14a4,0x0e+0xa77,0x05+0x987b7) are
 *   write-only (no reads) and NOT ported as valid; oracle probe with e.g.
 *   raw `S*0x1a` code confirms no registration (flag unchanged).
 * - 005b66d0 TForm42_FormCreate: language ids 0x2ff-0x30d drive the labels;
 *   mapped here to language.json 4/5/6/768-780 (see registrationView).
 * - forms.json TForm42 control tree: Panel1 > Bevel1, Label8 'Nome:',
 *   Label9 'Código:', Edit1 (name), Edit2 (code), xibutton2 (validate),
 *   Image1 (site link), label1 '<B><SHAD>Registro do Cyberfoot 2015</SHAD></B>'.
 *
 * Save persistence: the original flag lives at global 0x66b1c0 (not in the
 * save; registry at \\Software\\Cyberfoot2015 via 006476b4/0064aa20). This port
 * mirrors it into the career block at REGISTRATION_FLAG_OFFSET
 * (0x740, Int32LE) so the real save carries the state through readSave/writeSave
 * without colliding with verified career fields (0x700-0x738 hold referee ids;
 * 0x75c/0x75d are season flags; 0x739-0x75b are zero in the template; oracle
 * probe: no 0x740 refs in decompiled, sentinel 0x12345678 at career+0x740
 * preserved across 005df914; registration-node asserts 0x700-0x740 and
 * 0x744-0x760 unchanged). Success stores 500 + (hash % 500) mirroring
 * `random(500)+500` at 005b6ad0:1123 and 0064aa20:198; failure stores hash % 100
 * mirroring `random(100)` at 0064aa20:202/215.
 */

export const REGISTRATION_THRESHOLD = 499;
export const REGISTRATION_FLAG_OFFSET = 0x740;
export const REGISTRATION_MAX_ATTEMPTS = 0x14;
export const CRACK_NAMES = ['Crackx', 'CrackX'];
export const REGISTRATION_CODE_MULTIPLIER = 0x408;
export const REGISTRATION_STARTUP_BASE = 0x2a705;
export const REGISTRATION_STARTUP_FACTOR = 7;
export const REGISTRATION_STARTUP_BIAS = 0x4b;
export const REGISTRATION_BLACKLIST = 'emmanueldossantos';
const ACCENT_SOURCE = 'àáâãéèêóòôõúùûüíìîçñäëïö';
const ACCENT_MAPPED = 'aaaaeeeoooouuuuiiicnaeio';
const SUBSTITUTION_CHARSET = 'abcdefghijklmnopqrstuvxzyw0123456789';
const SUBSTITUTION_MAPPING = 'fitbzvengwpkycmuqhldxjrasofitbzvengw';

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

/** Live normalized name for 005b6ad0:0x3c and 0064aa20 (traced pipeline). */
export function transformFinalName(name) {
  let text = String(name ?? '').toLowerCase();
  text = text.split(' ').join('');
  let stripped = '';
  for (const char of text) {
    const index = ACCENT_SOURCE.indexOf(char);
    stripped += index >= 0 ? ACCENT_MAPPED[index] : char;
  }
  text = stripped.split('`').join('').split("'").join('').split('´').join('');
  text = text.toLowerCase();
  let out = '';
  for (const char of text) {
    const index = SUBSTITUTION_CHARSET.indexOf(char);
    out += index >= 0 ? SUBSTITUTION_MAPPING[index] : char;
  }
  return out;
}

/** Blacklist 00647cec: normalized delete-space name equals emmanueldossantos. */
export function isBlacklistedName(name) {
  let text = String(name ?? '').toLowerCase().split(' ').join('');
  let stripped = '';
  for (const char of text) {
    const index = ACCENT_SOURCE.indexOf(char);
    stripped += index >= 0 ? ACCENT_MAPPED[index] : char;
  }
  text = stripped.split('`').join('').split("'").join('').split('´').join('').toLowerCase();
  return text === REGISTRATION_BLACKLIST;
}

/** S1 for the live branches: Σ(byte*i+i+3) skipping 0x20/0x41, 1-based. */
export function liveWeightedSum(transformed) {
  const text = String(transformed ?? '');
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

export function liveExpectedCode(transformed) {
  const text = String(transformed ?? '');
  if (text.length < 3) return null;
  const { combined } = liveWeightedSum(text);
  const expected = (byteOf(text[1]) + byteOf(text[2]) + 5) * combined * REGISTRATION_STARTUP_FACTOR
    + REGISTRATION_STARTUP_BASE;
  return expected;
}

/** LIVE 005b6ad0:0x3c branch: filteredCode == S1*(b1+b2+5)*7+0x2a705 on transformed. */
export function form42LiveBranch(name, codeText) {
  const filtered = filterCode(codeText);
  if (filtered === null) return false;
  const transformed = transformFinalName(trimmed(name));
  const expected = liveExpectedCode(transformed);
  if (expected === null) return false;
  return Number(filtered) === expected;
}

/** LIVE 0064aa20 branch: same hash +0x4b bias, len>=7 with a space. */
export function startupLiveBranch(name, codeText) {
  const clean = trimmed(name);
  const filtered = filterCode(codeText);
  if (filtered === null || clean.length < 3) return false;
  if (!clean.includes(' ') || clean.length <= 6) return false;
  const transformed = transformFinalName(clean);
  const expected = liveExpectedCode(transformed);
  if (expected === null) return false;
  return Number(filtered) === expected + REGISTRATION_STARTUP_BIAS;
}

/** Digits-only filtered code (original 005b6ad0 code loop keeps 0-9). */
export function filterCode(value) {
  const clean = trimmed(value);
  if (!clean) return null;
  const filtered = clean.replace(/[^0-9]/g, '');
  if (!filtered) return null;
  if (!Number.isSafeInteger(Number(filtered))) return null;
  return filtered;
}

/** 005b6ad0:1166-1176 DEAD branch (flag 0x31 never read; cf. 0x5b8071 live 0x3c).
 * Correct formula is len*byte0*0x408 (0x5b81e7 imul [ebp-0x10]=byte0, 0x5b81ea
 * imul 0x408); oracle probe with both 10320 (old len-only) and 794640
 * (correct len*77*0x408 for 'M Steen 77') confirms flag stays 0. */
export function form42LengthBranch(name, codeText) {
  const clean = trimmed(name);
  const parsed = parseCode(codeText);
  if (parsed === null || !clean) return false;
  return parsed === clean.length * byteOf(clean[0]) * REGISTRATION_CODE_MULTIPLIER;
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

/** Full Form42 validation: generic gates plus live branches (dead length excluded). */
export function validateRegistrationKey({ name, code } = {}) {
  const cleanName = trimmed(name);
  const cleanCode = trimmed(code);
  if (!cleanName || !cleanCode) return { valid: false, reason: 'empty' };
  if (CRACK_NAMES.includes(cleanName)) return { valid: false, reason: 'crack' };
  if (isBlacklistedName(cleanName)) return { valid: false, reason: 'blacklisted' };
  if (cleanName.length <= 4 || cleanCode.length <= 4) return { valid: false, reason: 'too-short' };
  const filtered = filterCode(cleanCode);
  if (filtered === null) return { valid: false, reason: 'non-numeric' };
  if (filtered.length <= 4 || filtered.length >= 11) return { valid: false, reason: 'bad-length' };
  const parsed = Number(filtered);
  if (parsed < 1000) return { valid: false, reason: 'too-small' };
  if (form42LiveBranch(cleanName, filtered)) {
    const transformed = transformFinalName(cleanName);
    return { valid: true, reason: 'form42-live', expected: String(liveExpectedCode(transformed)) };
  }
  if (startupLiveBranch(cleanName, filtered)) return { valid: true, reason: 'startup-live' };
  return { valid: false, reason: 'mismatch' };
}

/** Deterministic Form42 code for a name (LIVE 005b6ad0:0x3c branch). */
export function deriveForm42Code(name) {
  const clean = trimmed(name);
  if (!clean) throw new Error('A registration name is required.');
  const transformed = transformFinalName(clean);
  const expected = liveExpectedCode(transformed);
  if (expected === null) throw new Error('Transformed name is too short for a live code.');
  return String(expected);
}

/** Deterministic startup-registry code for a name (LIVE 0064aa20 branch). */
export function deriveStartupCode(name) {
  const clean = trimmed(name);
  if (clean.length < 3 || !clean.includes(' ') || clean.length <= 6) {
    throw new Error('Startup codes require a spaced name longer than 6 characters.');
  }
  const transformed = transformFinalName(clean);
  const expected = liveExpectedCode(transformed);
  if (expected === null) throw new Error('Transformed name is too short for a live code.');
  return String(expected + REGISTRATION_STARTUP_BIAS);
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
