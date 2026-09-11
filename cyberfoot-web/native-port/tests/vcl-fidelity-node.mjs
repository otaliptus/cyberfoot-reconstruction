/** VCL fidelity audit for every wired game screen.
 * Lays out each wired DFM form with representative dynamic values and asserts:
 * zero `placeholder` primitives, zero image-fallback fills (image with no path
 * that would paint a control-colored fill), every referenced asset path exists
 * in assets/, and every visible control produces a primitive.
 * NOT registered in run-all.mjs (standalone audit).
 *
 * Visible VCL classes enumerated from the wired DFM trees (Form1/9/11/13/21/
 * 87/46/67/23/24/25/26/30/75/77/85/2/42 + modals Form53/34/54/88):
 * TShape/TBevel/TGradient/TPanel/TScrollBox/TNotebook+TPage/TPageControl+
 * TTabSheet/TAdvSmoothPanel, TTntLabel/TLabel/TDBText/THTMLabel/TUniHTMLabel/
 * TAdvSmoothLabel, TImage/TTntImage, TNextGrid/TStringGrid/TListView,
 * TBitBtn/TTntBitBtn/TTntButton/TButton/TAdvGlowButton/TXiButton, TEdit/
 * TMaskEdit/TMemo/TTntRichEdit/TTntMemo, TUniHTMLCombobox/TComboBox/
 * TComboBoxEx, TUpDown, TCheckBox/THTMLCheckBox/TTntCheckBox, TRadioButton/
 * THTMLRadioButton/TTntRadioButton, TGauge/TProgressBar/TAdvSmoothProgressBar/
 * TTrackBar/TScrollBar. Never visible in wired screens (stay skipped):
 * TGroupBox/TRadioGroup/TSpeedButton/TStaticText/TDBImage/TDateTimePicker/
 * TColorBox and other data-aware mirrors. Invisible infrastructure skipped:
 * TImageList/TTimer/menus/dialogs/columns/containers.
 */
import assert from 'node:assert/strict';
import { readFileSync, existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { dirname, join } from 'node:path';
import { layoutForm } from '../vcl-renderer.mjs';

const here = dirname(fileURLToPath(import.meta.url));
const nativePort = join(here, '..');
const forms = JSON.parse(readFileSync(new URL('../forms.json', import.meta.url), 'utf8'));
const byName = Object.fromEntries(forms.map((form) => [form.name, form]));

const WIRED = ['Form1', 'Form9', 'Form11', 'Form13', 'Form21', 'Form87', 'Form46', 'Form67', 'Form23', 'Form24', 'Form25', 'Form26', 'Form30', 'Form75', 'Form77', 'Form85', 'Form2', 'Form42', 'Form53', 'Form34', 'Form54', 'Form88'];

const INVISIBLE = new Set(['TImageList', 'TTimer', 'TMenuItem', 'TTntMenuItem', 'TTntPopupMenu', 'TPopupMenu', 'TMainMenu', 'TColorDialog', 'TOpenDialog', 'TSaveDialog', 'TFontDialog', 'TAdvSmoothMessageDialog', 'TGDIPPictureContainer', 'TPictureContainer', 'TProgressCyl', 'TSplitter', 'TFontDialog', 'TPrinterSetupDialog', 'TFindDialog', 'TReplaceDialog', 'TNxTextColumn', 'TNxNumberColumn', 'TNxImageColumn', 'TNxGraphicColumn', 'TNxProgressColumn', 'TNxComboBoxColumn', 'TNxDateColumn', 'TNxTreeColumn', 'TNxIncrementColumn']);
const CONTAINERS = new Set(['TPanel', 'TScrollBox', 'TGroupBox', 'TNotebook', 'TPage', 'TTabSheet', 'TPageControl', 'TTabControl', 'TAdvSmoothPanel']);

const CREST = 'assets/crests/escudos/aab_din.png';
const KIT = 'assets/kits/camisas/abcrn_bra.png';
const SHIRT = 'assets/original-shirt-1.png';
const SMALL = 'assets/Form23-Image2-Picture-Data.png';

// Minimal representative fixtures inline (same patterns as vcl-renderer-node.mjs).
const FIXTURES = {
  Form1: { properties: { comboi2: { Items: ['English', 'Português'], ItemIndex: 0 } } },
  Form9: {
    headers: { NxTextColumn1: 'Country', nxtimes: 'Teams' },
    grids: { list1: [{ cells: { nxpais: '', NxImageColumn2: '', NxTextColumn1: 'Spain', nxtimes: '20', NxTextColumn3: '' }, value: 97 }] },
    countries: [{ text: 'Spain', value: 97 }],
    properties: { ComboBox1: { ItemIndex: 0 } },
  },
  Form11: {
    properties: {
      Edit1: { Text: 'Tester' },
      combo1: { Items: ['Club A · div 4'], ItemIndex: 0 },
      combonac: { Items: ['Brazil'], ItemIndex: 0 },
      button1: { Caption: 'Start', Enabled: true },
    },
  },
  Form13: {
    grids: { gridview1: [{ playerId: 1, cells: { posicaojog: 'GOL', nome: 'Player One', forca: 80, energia: 90, idade: 24 } }] },
    headers: { nome: 'Name' },
    roster: [{ playerId: 1, cells: { posicaojog: 'GOL', nome: 'Player One', forca: 80, energia: 90, idade: 24 } }],
    imagePaths: { escudo: CREST, f13esc1: CREST },
  },
  Form21: {
    grids: { grid1: [{ cells: { nxarquivo: 'Tester — Club (2015-01-01)' }, historyId: 0 }] },
    properties: { BitBtn1: { Caption: 'Load' }, BitBtn2: { Caption: '<<' }, BitBtn3: { Caption: 'X' } },
  },
  Form87: {
    roster: [{ playerId: 7, cells: { posicaojog: 'Z', nome: 'Player Seven', forca: 80, energia: 90, idade: 24 }, status: '0' }],
    slots: Array.from({ length: 18 }, (_, i) => ({ playerId: i === 0 ? 7 : -1, position: i < 11 ? 1 : 0, status: 0 })),
    players: { 7: { name: 'Player Seven', role: 1 } },
    roleLabels: ['GOL', 'LD'],
    positionLabels: ['GOL'],
    headers: { nome: 'Name' },
    shirtImage: SHIRT,
    kitImagePaths: { Image13: KIT, Image2: SHIRT, Image4: KIT, Image5: KIT },
  },
  Form46: {
    fixtures: [{ id: 1, home: 'A', away: 'B', homeScore: 0, awayScore: 0, homeColor: 16777215, awayColor: 16777215, homeBackground: 255, awayBackground: 255, stadium: 'X', attendance: '| 1', homeCrest: null, awayCrest: null }],
    divisionLabels: ['1ª', '2ª', '3ª', '4ª'],
  },
  Form67: {
    lineups: [[{ name: 'Player One', rating: 7, substitutions: [] }], [{ name: 'Player Two', rating: 6, substitutions: [] }]],
    panels: { card1: [{ text: 'Player 10m', align: 'left' }], card2: [], l_gols: [{ text: '1x0 Player 10m', align: 'left' }] },
    resultGrid: [{ header: '1ª divisão' }, { historyId: 1, names: ['A', 'B'], score: [1, 0], crests: [CREST, CREST], clubs: [0, 1] }],
    selectedHistoryId: 1,
    imagePaths: { escudo: CREST, escudo2: CREST },
    crestPaths: { 0: CREST, 1: CREST },
  },
  Form23: {
    properties: { Edit1: { Text: '500' }, chbutton1: { Caption: 'Bid' } },
    imagePaths: { escudo: CREST, escudo2: CREST, Image1: SMALL },
    activePage: 0,
  },
  Form24: { properties: { Edit1: { Text: '1000' }, combom: { Items: ['12 months', '24 months'], ItemIndex: 0 } } },
  Form25: { properties: { label1: { Caption: 'Counter' }, Label2: { Caption: '$1000' }, button1: { Caption: 'Accept' }, button2: { Caption: 'Refuse' } } },
  Form26: {
    grids: { gridc: [{ cells: { nximg1: '', nximg2: '', nxinfo1: 'A 1x0 B' }, historyId: 0 }], gridi: [] },
    headers: { nxinfo1: 'Info' },
    properties: { label32: { Caption: 'Table' } },
  },
  Form30: {
    properties: { r1: { Visible: true, Checked: true, Caption: 'Club A (Brazil) - 1ª divisão' } },
    imagePaths: { image0: CREST, Image1: CREST, Image2: CREST, Image3: CREST },
    listItems: { ljog: [{ cells: { col0: 'Player' } }] },
  },
  Form75: {
    roster: [{ playerId: 1, cells: { posicaojog: 'GOL', nome: 'Player One', forca: 80, energia: 90, idade: 24 } }],
    grids: { gridview1: [{ playerId: 1, cells: { posicaojog: 'GOL', nome: 'Player One', forca: 80, energia: 90, idade: 24 } }] },
    headers: { nome: 'Name' },
    imagePaths: { escudo: CREST, Image2: SMALL },
  },
  Form77: {
    grids: { gfind: [{ playerId: 1, cells: { nximg: '', nxnome: 'Player', nxposicao: 'GOL', nxclube: 'Club', nxforca: 80, nxidade: 24 } }], gsel: [] },
    headers: { nxnome: 'Name' },
    imagePaths: { escudo: CREST },
  },
  Form85: { properties: { TntLabel1: { Caption: 'Title' }, label7: { Caption: 'Message' } } },
  Form2: { properties: { Label3: { Caption: '100' }, barra: { Position: 50, Max: 100 } } },
  Form42: { properties: { Edit1: { Text: 'Name' }, Edit2: { Text: 'Code' } } },
  Form53: {
    rows: [{ playerId: 1, cells: { posicaojog: 'GOL', nome: 'Player', forca: 80, energia: 90 } }],
    headers: { nome: 'Name' },
    properties: { label32: { HTMLText: '<p>Title</p>' } },
  },
  Form34: {
    rows: [{ playerId: 1, cells: { posicaojog: 'GOL', nome: 'Player', forca: 80, energia: 90 } }],
    headers: { nome: 'Name' },
    crest: CREST,
    properties: { label32: { HTMLText: '<p>Title</p>' } },
  },
  Form54: { crest: CREST, properties: { label32: { HTMLText: '<p>Title</p>' }, Label2: { Caption: 'Player' } } },
  Form88: {
    lineup: { players: [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], bench: [0, 0, 0, 0, 0, 0, 0], positions: [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] },
    players: { 1: { name: 'Player One', role: 0 } },
    benchOrdinals: [0, 0, 0, 0, 0, 0, 0],
    shirtPath: SHIRT,
    roleLabels: ['GOL'],
    positionLabels: ['GOL'],
    eventLog: { rows: [{ icon: 'i_gol', text: 'Goal 10m', align: 'left' }], truncated: false },
    statistics: [{ label: 'Possession', labelIndent: 10, values: ['50%', '50%'], valueIndent: 100 }],
    crests: [CREST, CREST],
  },
};

function collectExpected(form, frame) {
  const out = [];
  function rec(node, parentProps, ox, oy) {
    if (typeof node.class_name === 'string' && node.class_name.endsWith('Column')) return;
    if (INVISIBLE.has(node.class_name) && !(node.name === 'dlg_st' && frame.statistics)) return;
    const override = frame.properties?.[node.name];
    const p = override ? { ...node.properties, ...override } : { ...node.properties };
    if (p.Visible === false) return;
    const x = ox + Number(p.Left ?? 0);
    const y = oy + Number(p.Top ?? 0);
    const w = Number(p.Width ?? 0);
    const h = Number(p.Height ?? 0);
    if (node.class_name === 'TNotebook') {
      const pages = (node.children ?? []).filter((c) => c.class_name === 'TPage' && c.properties.Visible !== false);
      const active = Math.min(Math.max(Number(frame.activePage ?? 0), 0), Math.max(pages.length - 1, 0));
      pages.forEach((page, index) => {
        if (index === active) for (const child of page.children ?? []) rec(child, p, x, y);
      });
      return;
    }
    if (node.class_name === 'TPage' || node.class_name === 'TTabSheet') {
      for (const child of node.children ?? []) rec(child, p, x, y);
      return;
    }
    if (node.class_name === 'TPageControl' || node.class_name === 'TTabControl') {
      out.push({ name: node.name, class_name: node.class_name, x, y, w, h });
      const pages = (node.children ?? []).filter((c) => c.class_name === 'TTabSheet' && c.properties.Visible !== false);
      let req = 0;
      if (frame.activePage !== undefined && frame.activePage !== null) {
        req = typeof frame.activePage === 'object' ? (frame.activePage[node.name] ?? 0) : frame.activePage;
      }
      const active = Math.min(Math.max(Number(req) || 0, 0), Math.max(pages.length - 1, 0));
      const page = pages[active];
      if (page) for (const child of page.children ?? []) rec(child, p, x, y);
      return;
    }
    if (CONTAINERS.has(node.class_name)) {
      for (const child of node.children ?? []) rec(child, p, x, y);
      return;
    }
    out.push({ name: node.name, class_name: node.class_name, x, y, w, h });
    for (const child of node.children ?? []) rec(child, p, x, y);
  }
  for (const child of form.children ?? []) rec(child, form.properties, 0, 0);
  return out;
}

function hasPrimitiveFor(control, primitives) {
  if (control.name === 'dlg_st') return primitives.some((p) => p.kind === 'statistics-dialog');
  return primitives.some((p) => p.name === control.name || p.nodeName === control.name || (p.x === control.x && p.y === control.y && p.w === control.w && p.h === control.h));
}

function collectAssetPaths(layout) {
  const found = [];
  const walk = (value) => {
    if (typeof value === 'string' && value.startsWith('assets/')) found.push(value);
    else if (Array.isArray(value)) value.forEach(walk);
    else if (value && typeof value === 'object') Object.values(value).forEach(walk);
  };
  // Event icons are stored short (i_gol) and expanded at paint time.
  for (const primitive of layout.primitives) {
    walk(primitive);
    if (primitive.kind === 'match-fixtures') for (const fixture of primitive.fixtures ?? []) if (fixture.event?.icon) found.push('assets/' + fixture.event.icon + '.png');
    if (primitive.kind === 'panel-rows') for (const row of primitive.rows ?? []) if (row.icon) found.push('assets/' + row.icon + '.png');
    if (primitive.kind === 'event-log') for (const row of primitive.rows ?? []) if (row.icon) found.push('assets/' + row.icon + '.png');
  }
  if (layout.primitives.some((p) => p.kind === 'fill' && p.image)) walk(layout.primitives.filter((p) => p.kind === 'fill').map((p) => p.image));
  return [...new Set(found)];
}

const failures = [];
for (const name of WIRED) {
  const form = byName[name];
  assert.ok(form, `wired form ${name} exists in forms.json`);
  const frame = { ...FIXTURES[name] };
  const layout = layoutForm(form, frame);
  const placeholders = layout.primitives.filter((p) => p.kind === 'placeholder');
  const fallbackFills = layout.primitives.filter((p) => p.kind === 'image' && !p.path && p.fallback?.color);
  const nullImages = layout.primitives.filter((p) => p.kind === 'image' && !p.path);
  const assets = collectAssetPaths(layout);
  const missingAssets = assets.filter((path) => !existsSync(join(nativePort, path)));
  const expected = collectExpected(form, { form: name, ...frame });
  const missingControls = expected.filter((control) => !hasPrimitiveFor(control, layout.primitives));
  console.log(`${name}: placeholders=${placeholders.length} fallbackFills=${fallbackFills.length} nullImages=${nullImages.length} assets=${assets.length} expected=${expected.length} missing=${missingControls.length}`);
  if (placeholders.length > 0) {
    console.log(`  remaining placeholders: ${placeholders.map((p) => `${p.className}:${p.name}@${p.x},${p.y}`).join(', ')}`);
  }
  if (fallbackFills.length > 0) {
    console.log(`  remaining fallback fills: ${fallbackFills.map((p) => `@${p.x},${p.y} ${p.w}x${p.h} color=${p.fallback.color}`).join(', ')}`);
  }
  if (nullImages.length > 0) {
    console.log(`  remaining null images: ${nullImages.map((p) => `@${p.x},${p.y} ${p.w}x${p.h}`).join(', ')}`);
  }
  if (missingAssets.length > 0) {
    console.log(`  missing assets: ${missingAssets.join(', ')}`);
  }
  if (missingControls.length > 0) {
    console.log(`  missing controls: ${missingControls.map((c) => `${c.class_name}:${c.name}`).join(', ')}`);
  }
  try {
    assert.equal(placeholders.length, 0, `${name} must have zero placeholder primitives (got ${placeholders.map((p) => `${p.className}:${p.name}`).join(', ')})`);
    assert.equal(fallbackFills.length, 0, `${name} must have zero image-fallback fills`);
    assert.deepEqual(missingAssets, [], `${name} references missing assets`);
    assert.equal(missingControls.length, 0, `${name} has visible controls without primitives (${missingControls.map((c) => `${c.class_name}:${c.name}`).join(', ')})`);
  } catch (error) {
    failures.push(`${name}: ${error.message}`);
  }
}

// Form23 notebook second page must also stay fallback-free when active.
{
  const form = byName.Form23;
  const layout = layoutForm(form, { ...FIXTURES.Form23, activePage: 1 });
  const placeholders = layout.primitives.filter((p) => p.kind === 'placeholder');
  const fallbackFills = layout.primitives.filter((p) => p.kind === 'image' && !p.path && p.fallback?.color);
  console.log(`Form23(page2): placeholders=${placeholders.length} fallbackFills=${fallbackFills.length}`);
  assert.equal(placeholders.length, 0, 'Form23 page2 must have zero placeholders');
  assert.equal(fallbackFills.length, 0, 'Form23 page2 must have zero image-fallback fills');
}

if (failures.length > 0) {
  console.error(`VCL fidelity FAILED:\n${failures.join('\n')}`);
  process.exit(1);
}
console.log('VCL fidelity: all 22 wired forms render with zero placeholders, zero image-fallback fills, all assets present and all visible controls painted.');
