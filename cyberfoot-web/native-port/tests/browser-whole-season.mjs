import { chromium } from '/Users/talip/.codex/skills/develop-web-game/node_modules/playwright/index.mjs';
import assert from 'node:assert/strict';

const baseUrl = process.env.CYBERFOOT_BASE_URL ?? 'http://127.0.0.1:8766';
const browser = await chromium.launch({ headless: true });

async function runSeason(mode) {
  const label = mode === 4 ? '4x10' : '2x20';
  const context = await browser.newContext({
      viewport: { width: 1024, height: 768 },
    }),
    page = await context.newPage(),
    errors = [],
    visited = new Set(),
    played = [];
  page.on('pageerror', (error) => errors.push(String(error)));
  page.on('console', (message) => {
    if (message.type() === 'error') errors.push('console: ' + message.text());
  });
  const text = async () =>
    JSON.parse(await page.evaluate(() => window.render_game_to_text()));
  const waitForm = async (expected) => {
    try {
      await page.waitForFunction(
        (expected) =>
          window.gameShell?.form === expected ||
          window.gameShell?.status?.matchFailure,
        expected,
        { timeout: 60000 },
      );
      const failure = await page.evaluate(
        (expected) =>
          window.gameShell?.form === expected
            ? null
            : window.gameShell?.status?.matchFailure,
        expected,
      );
      if (failure) throw Error(failure);
    } catch (error) {
      const debug = await page.evaluate(() => ({
        form: window.gameShell?.form,
        stack: window.gameShell?.forms,
        status: window.gameShell?.status,
        frame: window.gameShell?.renderer?.frame?.form,
        roster: window.gameShell?.renderer?.frame?.roster?.map((row) => ({
          id: row.playerId,
          status: row.status,
          condition: row.cells?.energia,
        })),
        targets: window.gameShell?.renderer?.hitTargets
          ?.filter((target) => target.operation)
          .map((target) => target.name + ':' + target.operation),
        state: JSON.parse(window.render_game_to_text()),
      }));
      throw Error(`Expected ${expected}, got ${JSON.stringify(debug)}`, {
        cause: error,
      });
    }
  };
  const clickControl = async (name) => {
    const point = await page.evaluate((name) => {
      const renderer = window.gameShell.renderer,
        target = renderer.hitTargets.find(
          (entry) => entry.name === name && entry.operation,
        );
      if (!target) return null;
      const candidates = [
        { x: target.x + target.width / 2, y: target.y + target.height / 2 },
        { x: target.x + 2, y: target.y + 2 },
        { x: target.x + target.width - 2, y: target.y + 2 },
        { x: target.x + 2, y: target.y + target.height - 2 },
        { x: target.x + target.width - 2, y: target.y + target.height - 2 },
      ];
      const local = candidates.find((candidate) => {
        const hit = renderer.hitAt(candidate);
        return hit?.name === target.name && hit?.operation === target.operation;
      });
      if (!local) return null;
      const rect = renderer.canvas.getBoundingClientRect();
      return {
        x: rect.left + (local.x * rect.width) / renderer.canvas.width,
        y: rect.top + (local.y * rect.height) / renderer.canvas.height,
      };
    }, name);
    if (point) await page.mouse.click(point.x, point.y);
    else await page.evaluate((name) => window.gameShell.click(name), name);
  };
  const check = async () => {
    const state = await text();
    visited.add(state.form);
    assert.deepEqual(state.unhandled, [], `${label} ${state.form} unhandled`);
    assert.equal(state.matchFailure, null, `${label} match failure`);
    assert.deepEqual(errors, [], `${label} browser errors`);
    return state;
  };
  const renewExpiredContracts = async () => {
    const ids = await page.evaluate(() =>
      window.gameShell.renderer.frame.roster
        .filter((row) => row.status === 4)
        .map((row) => row.playerId),
    );
    for (const id of ids) {
      await page.evaluate((id) => window.gameShell.openContract(id), id);
      await waitForm('Form24');
      await page
        .locator('[data-original-control="Form24.Edit1"]')
        .fill('100000');
      await page
        .locator('[data-original-control="Form24.combom"]')
        .selectOption({ index: 3 });
      await clickControl('CHButton1');
      await page.waitForFunction(
        () => ['Form24', 'Form25'].includes(window.gameShell.form),
        null,
        { timeout: 15000 },
      );
      if (await page.evaluate(() => window.gameShell.form === 'Form25')) {
        await clickControl('button1');
        await waitForm('Form24');
      }
      await clickControl('bt3');
      await waitForm('Form13');
      await page.waitForTimeout(120);
    }
  };
  await page.goto(`${baseUrl}/game.html?manualClock=1&automaticInteractions=1`);
  await waitForm('Form1');
  await page.locator('#registered-toggle').click();
  assert.equal(await page.evaluate(() => window.gameShell.registered), true);
  await clickControl('Shape1');
  await waitForm('Form9');
  if (mode === 2)
    await page
      .locator('[data-original-control="Form9.ComboBox1"]')
      .selectOption({ index: 1 });
  await clickControl('xibutton2');
  await waitForm('Form11');
  await page
    .locator('[data-original-control="Form11.Edit1"]')
    .fill(`Season ${mode}`);
  await clickControl('button1');
  await waitForm('Form13');
  const initial = await check(),
    initialSeason = initial.season;
  let inspectedHub = false,
    inspectedStandings = false;
  for (let guard = 0; guard < 240; guard++) {
    const state = await check();
    if (state.season > initialSeason && state.form === 'Form87') break;
    if (state.form === 'Form13') {
      if (!inspectedHub) {
        await clickControl('label32');
        await waitForm('Form62');
        visited.add('Form62');
        await clickControl('bt1');
        await waitForm('Form13');
        inspectedHub = true;
        continue;
      }
      await renewExpiredContracts();
      await page.evaluate(() => window.gameShell.click('btjogar'));
      await page.waitForFunction(
        () =>
          window.gameShell.form === 'Form87' ||
          !window.gameShell.status.routePending,
        null,
        { timeout: 15000 },
      );
      if (await page.evaluate(() => window.gameShell.form === 'Form13'))
        await page.evaluate(() => window.gameShell.click('btjogar'));
      await waitForm('Form87');
      continue;
    }
    if (state.form === 'Form87') {
      played.push({ day: state.day, competition: state.roundDay });
      await clickControl('bt_irprojogo');
      await waitForm('Form46');
      continue;
    }
    if (state.form === 'Form46') {
      const result = await page.evaluate(() =>
        window.gameShell.playMatchToResults(),
      );
      assert.ok(['Form26', 'Form67'].includes(result));
      continue;
    }
    if (state.form === 'Form67') {
      if (!inspectedStandings) {
        await clickControl('bt2');
        await page.waitForFunction(
          () => ['Form36', 'Form70'].includes(window.gameShell.form),
          null,
          { timeout: 60000 },
        );
        visited.add(await page.evaluate(() => window.gameShell.form));
        if (await page.evaluate(() => window.gameShell.form === 'Form36')) {
          await clickControl('Image8');
          await waitForm('Form67');
        }
        inspectedStandings = true;
        continue;
      }
      await clickControl('bt3');
      await page.waitForFunction(
        () =>
          ['Form13', 'Form26', 'Form75', 'Form77', 'Form85', 'Form87'].includes(
            window.gameShell.form,
          ),
        null,
        { timeout: 60000 },
      );
      continue;
    }
    if (state.form === 'Form26') {
      await clickControl('bt3');
      await page.waitForFunction(
        () => ['Form13', 'Form85', 'Form87'].includes(window.gameShell.form),
        null,
        { timeout: 60000 },
      );
      continue;
    }
    if (state.form === 'Form75') {
      await clickControl('btjogar');
      await page.waitForFunction(
        () => ['Form13', 'Form77', 'Form87'].includes(window.gameShell.form),
        null,
        { timeout: 60000 },
      );
      continue;
    }
    if (state.form === 'Form77') {
      await clickControl('bt2');
      await page.waitForFunction(
        () => ['Form13', 'Form87'].includes(window.gameShell.form),
        null,
        { timeout: 60000 },
      );
      continue;
    }
    if (state.form === 'Form85') {
      await clickControl('xibutton1');
      await page.waitForFunction(
        () => ['Form13', 'Form87'].includes(window.gameShell.form),
        null,
        { timeout: 240000 },
      );
      continue;
    }
    throw Error(`${label} unexpected season form ${state.form}`);
  }
  const after = await check();
  assert.equal(after.season, initialSeason + 1, `${label} season boundary`);
  assert.equal(after.form, 'Form87');
  assert.ok(after.seasonTransitions.length >= 1);
  assert.ok(after.agenda?.fixtureId >= 0);
  assert.ok(played.length >= 18, `${label} played ${played.length} fixtures`);
  assert.ok(visited.has('Form36'), `${label} opened standings`);
  assert.ok(visited.has('Form62'), `${label} opened career calendar`);
  await page.screenshot({
    path: `/Users/talip/Documents/ChatGPT/misc/output/whole-season-${label}.png`,
  });
  await context.close();
  return {
    mode,
    initialSeason,
    finalSeason: after.season,
    played: played.length,
    visited: [...visited],
    finalDay: after.day,
    seasonTransitions: after.seasonTransitions,
    errors,
  };
}

const results = [];
for (const mode of [4, 2]) results.push(await runSeason(mode));
await browser.close();
console.log(
  `Whole season: mode 4x10 and mode 2x20 careers crossed the season boundary through clicked shell forms; ${JSON.stringify(results)}`,
);
