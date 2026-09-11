/** Form39 custom championship over career clubs (new file; shell stays read-only).
 *
 * Shell insertion points in game-shell.mjs (do not edit here):
 * - gameSettingsFrame()/showGameSettings() at lines 166-200
 *   (`function gameSettingsFrame(){...}` / `function showGameSettings(){...}`).
 *   Form39 is the custom-competition sibling of Form9: insert
 *   `manager.open(championshipView(...))` next to showGameSettings, e.g. after
 *   line 200, with `Form39.bt1Click` routed to `buildCustomChampionship` and
 *   `Form39.list1CellClick` routed to `toggleChampionshipCountry`.
 * - No existing Form39 handler exists in the shell; this module is the first
 *   native host and must be wired alongside the Form9 XiButton handlers at
 *   lines 201-209.
 *
 * Original addresses ported:
 * - 0062c380 TForm39_FormCreate: lists every country with club count > 0
 *   (loops 0xca = 202 country slots, columns NxTextColumn1 'País' /
 *   NxTextColumn2 'Times'). Ported as `listChampionshipCountries`.
 *   The same handler enables the format combo only when registered
 *   (00651f8c gate); ported as `formatEnabledForFlag`.
 * - 0062c884 TForm39_bt1Click: reads selected country rows, marks clubs,
 *   clears career flags 0x17f/0x180/0x181/0x170/0x171/0x172, sets 0x10e from
 *   ckcopaper ('Jogar Copa de clubes', checked), sets career+0x168 mode from
 *   formulaper (0 => 4 divisions x10, else 2 divisions x20), sets 0xc4 = 0xca,
 *   then calls 00631634(0, 0xca) to build fixtures. Ported as
 *   `buildCustomChampionship` (mode mapping + 1000-club cap + cup flag).
 * - forms.json TForm39: Panel1 > Label1 'Campeonato personalizado', Label8
 *   country prompt, Label10 '(neste tipo de camp. só é disputado a liga e a
 *   copa nacional)', Label11 'Sistema de disputa:', list1 (countries),
 *   formulaper Items ['4 divisões com 10 times cada',
 *   '2 divisões com 20 times cada'] (language 13/14), ckcopaper checked,
 *   bt1 'Continuar >>' (Enabled false until selection), XiButton1 '<< Voltar',
 *   Label9 1000-club limit note.
 * - Verified controllers reused (not reimplemented):
 *   schedule.mjs assignCompetitionSchedule/originalScheduleSequence
 *   (00653a40/006539b4), knockout-result.mjs resolveTwoLegResult (0061edd0),
 *   competition-result.mjs applyCompetitionResult (0061cdb4), standings
 *   point semantics (3/1/0) shared with standings-data.mjs.
 */
import { record, shortString } from './save-format.mjs';
import { resolveTwoLegResult } from './knockout-result.mjs';
import { OriginalRandom } from './match-core.mjs';

export const CUSTOM_CLUB_LIMIT = 1000;
export const CHAMPIONSHIP_FORMATS = [
  { id: '4x10', comboIndex: 0, divisions: 4, perDivision: 10, mode: 4, languageId: 13 },
  { id: '2x20', comboIndex: 1, divisions: 2, perDivision: 20, mode: 2, languageId: 14 },
];

const viewOf = (bytes) => new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);

function textOf(language, id, fallback = '') {
  const entry = language?.[id];
  if (entry && typeof entry.text === 'string' && entry.text) return entry.text;
  return fallback;
}

export function championshipFormatById(id) {
  const found = CHAMPIONSHIP_FORMATS.find((entry) => entry.id === id);
  if (!found) throw new RangeError(`Unknown championship format ${String(id)}.`);
  return found;
}

export function championshipFormatByCombo(index) {
  const found = CHAMPIONSHIP_FORMATS.find((entry) => entry.comboIndex === Number(index));
  if (!found) throw new RangeError(`Unknown formulaper index ${String(index)}.`);
  return found;
}

/** 00651f8c gate for the format combo (0062c380:71-74). */
export function formatEnabledForFlag(flag) {
  return Number(flag) > 499;
}

/** 0062c380 country list: every country with at least one club. */
export function listChampionshipCountries(save, { language } = {}) {
  const clubs = save.sections.find((section) => section.name === 'clubs');
  if (!clubs) throw new Error('Save has no original club section.');
  const counts = new Map();
  for (let id = 0; id < clubs.count; id += 1) {
    const country = viewOf(record(save, 'clubs', id)).getInt32(0x3c, true);
    counts.set(country, (counts.get(country) ?? 0) + 1);
  }
  return [...counts.entries()]
    .sort((a, b) => a[0] - b[0])
    .map(([country, count]) => ({
      country,
      count,
      name: textOf(language, 786 + country, String(country)),
    }));
}

/** 0062c884 selection: clubs of the chosen countries, capped at 1000. */
export function selectChampionshipClubs(save, countryIds, { limit = CUSTOM_CLUB_LIMIT } = {}) {
  const wanted = new Set((Array.isArray(countryIds) ? countryIds : []).map(Number));
  if (!wanted.size) return [];
  const clubs = save.sections.find((section) => section.name === 'clubs');
  const ids = [];
  for (let id = 0; id < clubs.count && ids.length < limit; id += 1) {
    const country = viewOf(record(save, 'clubs', id)).getInt32(0x3c, true);
    if (wanted.has(country)) ids.push(id);
  }
  return ids;
}

function chunk(ids, size) {
  const out = [];
  for (let at = 0; at < ids.length; at += size) out.push(ids.slice(at, at + size));
  return out;
}

function roundRobinPairs(group) {
  const teams = [...group];
  if (teams.length % 2 === 1) teams.push(-1);
  const rounds = [];
  const fixed = teams[0];
  let ring = teams.slice(1);
  for (let round = 0; round < teams.length - 1; round += 1) {
    const order = [fixed, ...ring];
    const pairs = [];
    for (let i = 0; i < order.length / 2; i += 1) {
      const home = order[i];
      const away = order[order.length - 1 - i];
      if (home >= 0 && away >= 0) pairs.push(round % 2 === 0 ? [home, away] : [away, home]);
    }
    if (pairs.length) rounds.push(pairs);
    ring = [ring[ring.length - 1], ...ring.slice(0, -1)];
  }
  return rounds;
}

/** Deterministic cup pairing from club order + seed (playable bracket). */
export function pairCupBracket(clubIds, { seed = 2015 } = {}) {
  const rng = new OriginalRandom(seed >>> 0);
  const order = [...clubIds];
  for (let i = order.length - 1; i > 0; i -= 1) {
    const j = rng.below(i + 1);
    [order[i], order[j]] = [order[j], order[i]];
  }
  const bracket = [];
  for (let at = 0; at < order.length; at += 2) {
    bracket.push([order[at], at + 1 < order.length ? order[at + 1] : -1]);
  }
  return bracket;
}

function clubStrength(save, clubId) {
  try {
    return viewOf(record(save, 'clubs', clubId)).getInt32(0x98, true);
  } catch {
    return 10;
  }
}

/**
 * 0062c884 port: chunk into divisions per formulaper, optional cup bracket.
 * Does not mutate the save; fixture building (00631634) is represented as
 * plain schedule data so previews/tests stay deterministic.
 */
export function buildCustomChampionship({ clubIds = [], formatId = '4x10', playCup = true, seed = 2015 } = {}) {
  const format = championshipFormatById(formatId);
  const ids = [...clubIds].filter((id) => Number.isInteger(id) && id >= 0).slice(0, CUSTOM_CLUB_LIMIT);
  if (!ids.length) throw new Error('Select at least one club for the custom championship.');
  const divisions = chunk(ids, format.perDivision);
  const leagueSchedule = divisions.map((group) => roundRobinPairs(group));
  const cupBracket = playCup ? pairCupBracket(ids, { seed }) : null;
  return {
    formatId: format.id,
    mode: format.mode,
    divisions: format.divisions,
    perDivision: format.perDivision,
    playCup: Boolean(playCup),
    totalClubs: ids.length,
    truncated: clubIds.length > CUSTOM_CLUB_LIMIT,
    clubIds: ids,
    groups: divisions,
    leagueSchedule,
    cupBracket,
    seed: seed >>> 0,
  };
}

/**
 * Simulate one cup round through the verified two-leg controller (0061edd0).
 * Scores default to a deterministic strength-seeded draw; explicit scores win.
 */
export function simulateCustomCupRound(save, bracket, { seed = 2015, scores = null, competition = 2 } = {}) {
  if (!Array.isArray(bracket) || !bracket.length) throw new Error('A custom cup bracket is required.');
  const rng = new OriginalRandom(seed >>> 0);
  const winners = [];
  const details = [];
  bracket.forEach(([home, away], tie) => {
    if (away < 0) {
      winners.push(home);
      details.push({ tie, home, away, bye: true, winner: home });
      return;
    }
    let firstLeg = scores?.[tie]?.firstLeg;
    let secondLeg = scores?.[tie]?.secondLeg;
    if (!firstLeg || !secondLeg) {
      const homeEdge = clubStrength(save, home) - clubStrength(save, away);
      firstLeg = [Math.max(0, 1 + ((homeEdge + rng.below(3)) | 0)), Math.max(0, rng.below(3))];
      secondLeg = [Math.max(0, rng.below(3)), Math.max(0, 1 + ((rng.below(3) - homeEdge) | 0))];
      firstLeg = [Math.min(5, firstLeg[0]), Math.min(5, firstLeg[1])];
      secondLeg = [Math.min(5, secondLeg[0]), Math.min(5, secondLeg[1])];
    }
    const result = resolveTwoLegResult({ firstLeg, secondLeg, competition });
    let winner;
    if (result === 1) winner = home;
    else if (result === 2) winner = away;
    else winner = (clubStrength(save, home) + rng.below(2)) >= clubStrength(save, away) ? home : away;
    winners.push(winner);
    details.push({ tie, home, away, firstLeg, secondLeg, result, winner });
  });
  return { winners, details };
}

/** Minimal league points simulation sharing applyCompetitionResult semantics. */
export function simulateCustomLeagueRound(group, { seed = 2015 } = {}) {
  if (!Array.isArray(group) || group.length < 2) throw new Error('A league group of two clubs is required.');
  const rng = new OriginalRandom(seed >>> 0);
  const table = new Map(group.map((id) => [id, { clubId: id, points: 0, played: 0, wins: 0, draws: 0, losses: 0, gf: 0, ga: 0 }]));
  for (let a = 0; a < group.length; a += 1) {
    for (let b = a + 1; b < group.length; b += 1) {
      const home = group[a];
      const away = group[b];
      const homeGoals = rng.below(4);
      const awayGoals = rng.below(4);
      const left = table.get(home);
      const right = table.get(away);
      left.played += 1;
      right.played += 1;
      left.gf += homeGoals;
      left.ga += awayGoals;
      right.gf += awayGoals;
      right.ga += homeGoals;
      if (homeGoals === awayGoals) {
        left.points += 1;
        right.points += 1;
        left.draws += 1;
        right.draws += 1;
      } else if (homeGoals > awayGoals) {
        left.points += 3;
        left.wins += 1;
        right.losses += 1;
      } else {
        right.points += 3;
        right.wins += 1;
        left.losses += 1;
      }
    }
  }
  return [...table.values()].sort((a, b) => b.points - a.points || (b.gf - b.ga) - (a.gf - a.ga) || b.gf - a.gf);
}

/** Form39 view model (list1 grid + formulaper + ckcopaper + bt1 gating). */
export function championshipView({ language, countries = [], selectedCountries = [], formatId = '4x10', playCup = true, registered = false, totalClubs = 0 } = {}) {
  const selected = new Set(selectedCountries.map(Number));
  const format = championshipFormatById(formatId);
  return {
    form: 'Form39',
    title: 'Campeonato personalizado',
    countryPrompt: 'Selecione os países que vão participar do campeonato:',
    leagueOnlyNote: '(neste tipo de camp. só é disputado a liga e a copa nacional)',
    disputeLabel: 'Sistema de disputa:',
    limitNote: '(o limite para este campeonato é de 1000 clubes, alguns clubes selecionados não serão incluídos)',
    backLabel: '<< Voltar',
    continueLabel: 'Continuar >>',
    cupLabel: 'Jogar Copa de clubes',
    formats: CHAMPIONSHIP_FORMATS.map((entry) => ({ ...entry, label: textOf(language, entry.languageId, entry.id) })),
    formatId: format.id,
    formatEnabled: registered,
    playCup: Boolean(playCup),
    countries: countries.map((entry) => ({ ...entry, selected: selected.has(entry.country) })),
    selectedCountryCount: selected.size,
    totalClubs,
    limitExceeded: totalClubs > CUSTOM_CLUB_LIMIT,
    continueEnabled: selected.size > 0,
    controls: { grid: 'list1', format: 'formulaper', cup: 'ckcopaper', next: 'bt1', back: 'XiButton1' },
  };
}

function element(document, tag, attributes = {}) {
  const node = document.createElement(tag);
  for (const [key, value] of Object.entries(attributes)) node.setAttribute(key, value);
  return node;
}

/** DOM host for the Form39 setup screen (selection state only). */
export function mountChampionship(container, { save, language, registered = false, seed = 2015 } = {}) {
  if (!container || typeof container.replaceChildren !== 'function') throw new TypeError('A container element is required.');
  if (!save?.sections) throw new TypeError('A real save is required.');
  const document = container.ownerDocument ?? globalThis.document;
  if (!document) throw new TypeError('A document is required.');
  const countries = listChampionshipCountries(save, { language });
  const selected = new Set();
  let formatId = '4x10';
  let playCup = true;
  const root = element(document, 'section', { 'data-championship': 'Form39' });
  root.style.cssText = 'font:13px/1.4 Arial,sans-serif;color:#fff;background:#2f4a2f;border:1px solid #222;padding:12px;max-width:700px';
  const heading = element(document, 'h2');
  const prompt = element(document, 'p');
  const list = element(document, 'div');
  list.style.cssText = 'display:grid;grid-template-columns:repeat(auto-fill,minmax(180px,1fr));gap:4px;max-height:220px;overflow:auto;border:1px solid #555;padding:6px';
  const controls = element(document, 'div');
  controls.style.cssText = 'display:flex;gap:8px;align-items:center;flex-wrap:wrap;margin:8px 0';
  const formatSelect = element(document, 'select', { 'data-championship-control': 'formulaper' });
  const cupLabel = element(document, 'label');
  const cupBox = element(document, 'input', { 'data-championship-control': 'ckcopaper' });
  cupBox.type = 'checkbox';
  cupBox.checked = true;
  const next = element(document, 'button', { 'data-championship-control': 'bt1' });
  next.type = 'button';
  const summary = element(document, 'pre', { 'data-championship-field': 'summary' });
  summary.style.cssText = 'background:#111;color:#8f8;padding:8px;white-space:pre-wrap';
  controls.append(formatSelect, cupLabel, next);
  root.append(heading, prompt, list, controls, summary);
  container.replaceChildren(root);

  function clubName(id) {
    try {
      return shortString(record(save, 'clubs', id), 0, 25);
    } catch {
      return `#${id}`;
    }
  }

  function currentClubs() {
    return selectChampionshipClubs(save, [...selected]);
  }

  function render() {
    const view = championshipView({ language, countries, selectedCountries: [...selected], formatId, playCup, registered, totalClubs: currentClubs().length });
    heading.textContent = view.title;
    prompt.textContent = view.countryPrompt;
    if (formatSelect.dataset.items !== view.formats.map((entry) => entry.label).join('\u0000')) {
      formatSelect.replaceChildren(...view.formats.map((entry) => {
        const option = document.createElement('option');
        option.value = entry.id;
        option.textContent = entry.label;
        return option;
      }));
      formatSelect.dataset.items = view.formats.map((entry) => entry.label).join('\u0000');
    }
    formatSelect.value = view.formatId;
    formatSelect.disabled = !view.formatEnabled;
    cupLabel.replaceChildren(cupBox, document.createTextNode(` ${view.cupLabel}`));
    cupBox.checked = view.playCup;
    next.textContent = view.continueLabel;
    next.disabled = !view.continueEnabled;
    list.replaceChildren(...view.countries.map((entry) => {
      const label = document.createElement('label');
      const box = document.createElement('input');
      box.type = 'checkbox';
      box.checked = entry.selected;
      box.dataset.country = String(entry.country);
      box.addEventListener('change', () => {
        if (box.checked) selected.add(entry.country);
        else selected.delete(entry.country);
        render();
      });
      label.append(box, document.createTextNode(` ${entry.name} (${entry.count})`));
      return label;
    }));
    const clubs = currentClubs();
    let built = null;
    try {
      built = buildCustomChampionship({ clubIds: clubs, formatId, playCup, seed });
    } catch {
      built = null;
    }
    summary.textContent = built
      ? `countries ${view.selectedCountryCount} · clubs ${built.totalClubs} · ${built.formatId} ${built.divisions}x${built.perDivision} · cup ${built.playCup ? `yes (${built.cupBracket.length} ties)` : 'no'}\n${clubs.slice(0, 8).map((id) => `${id}:${clubName(id)}`).join(', ')}${clubs.length > 8 ? '…' : ''}`
      : `countries ${view.selectedCountryCount} · select at least one country`;
    return view;
  }

  formatSelect.addEventListener('change', () => {
    formatId = formatSelect.value;
    render();
  });
  cupBox.addEventListener('change', () => {
    playCup = cupBox.checked;
    render();
  });
  next.addEventListener('click', () => {
    const clubs = currentClubs();
    const built = buildCustomChampionship({ clubIds: clubs, formatId, playCup, seed });
    summary.textContent = `built ${built.totalClubs} clubs · ${built.groups.length} groups · cup ${built.cupBracket ? built.cupBracket.length : 0} ties`;
  });
  render();
  return {
    element: root,
    render,
    toggleCountry: (country) => {
      if (selected.has(Number(country))) selected.delete(Number(country));
      else selected.add(Number(country));
      return render();
    },
    setFormat: (id) => {
      formatId = championshipFormatById(id).id;
      return render();
    },
    setCup: (value) => {
      playCup = Boolean(value);
      return render();
    },
    build: () => buildCustomChampionship({ clubIds: currentClubs(), formatId, playCup, seed }),
    view: () => championshipView({ language, countries, selectedCountries: [...selected], formatId, playCup, registered, totalClubs: currentClubs().length }),
    get selectedCountries() { return [...selected]; },
  };
}
