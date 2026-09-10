# TForm23 transfer auction screen

Recovered from `005a2d24` (FormCreate), `005a3014` (screen data), `005a4648`
(Bid click), `005a49c4` (bid edit change), `005a4ac4` (Timer1) and
`005a4550`/`005a3d1c`/`005a2fe4`. Field offsets come from the Delphi published
field table (`cyberfoot-web/native-port/form-fields.json`, class `TForm23`).

## Identity

`TForm23` is the auction screen for a player sale. Captions (language ids):
`0x170` title, `0x31/0x32/0x33/0x35/0x36`/`: ` skill/age/value/matches/
characteristics, `0x84` stamina, `0x133` "Your money:", `0x171` start price,
`0x172` "is selling the player", `0x173` bid hint, `0x176` "Your bid:",
`0x177` Bid button, `0x178` "higher than your available cash", `0x179`
"You don't have enough money."

## Control map (field table)

| Offset | Name | Role |
|---|---|---|
| 0x2f8-0x310 | Shape4,l1,Shape1,Shape2 | panels |
| 0x314 Label8, 0x328 Label14, 0x31c Label1, 0x334 Label9, 0x33c Label11 | captions 0x31/0x32/0x36/0x33/0x35 + ':' |
| 0x304 jlnome, 0x308 jlpos, 0x324 jlage, 0x318 jlforca, 0x338 jlsalario, 0x340 jlj, 0x344 jlstatus, 0x34c jlpasse, 0x364 jlenergia | player detail fields |
| 0x348 Label10 | start price (0x171) |
| 0x32c Label19 | your money (0x84) |
| 0x36c Label3 | 0x133 |
| 0x380 Label2 | 0x173 |
| 0x384 Label4 | 0x176 |
| 0x388 Label7 | 0x178 error |
| 0x390 Label17 | 0x179 error |
| 0x38c Label15 | formatted current bid |
| 0x394 Label18 | formatted typed bid |
| 0x398 Edit1 | bid entry (thousands) |
| 0x39c Label16 | 0x172 |
| 0x3a0 Timer1, 0x3a4 Timer2 | auction timing |
| 0x3a8 Label12 | 0x170 title |
| 0x3ac chbutton1 | Bid (0x177) |
| 0x374/0x378 escudo/escudo2 | club crests |
| 0x37c Notebook1 | detail tabs |
| 0x350/0x358 Image2/Image3, 0x30c Image1 | images |

## Bid semantics (`005a4648`)

- Hide both error labels first.
- Empty/invalid edit -> bid 0; otherwise `bid = parseInt(text) * 1000`.
- Float constants: `0x5a49a0 = 10000.0`, `0x5a49a4 = 0.0`.
- Affordable when `float(bid) * 10000 <= float(cash)` OR `float(cash) <= 0`
  (cash is the Int64 at `club+0x48`, deliberately compared as float); when
  `float(cash) < 0` the bid is forced to 0 and the 0x179 error is shown.
- Highest-bid state: `006d24d0` (amount) / `006d24d4` (club); updated when
  `006d24d0 < bid`.
- Bidder rotation: `006d24e0` walks the career club list at `career+0x13c`
  (count) / `career+0x140` (ids) through index `006d24dc`; reaching the last
  list entry calls `005a3d1c` (auction resolution panel).
- Otherwise the panel updates to the next listed club.

## Screen data (`005a3014`)

- Chooses league `006d24ec` (random when more than one configuration) and a
  target club from the career club list, excluding `006d24f0`.
- Selects an available player (`66ad44`) from that club with role-strength
  gate `club+0x68+role*4 > 2` and available count `club+0xa0 > 15` in the
  fallback random search (limit 250 attempts).
- Fills the seller crest/labels and the player detail fields; `005a2fe4`
  handles the no-player panel.
- `005a49c4` formats the typed bid as `parseInt(text) * 1000` into Label18.

## Remaining to port

- `005a4550` auction tick/window management and `005a3d1c` (175 lines)
  auction resolution.
- Full 428-line `005a3014` panel population (captions/crests/money/tabs) plus
  the `Timer1`/`Timer2` cadence and `005a4ac4`.
- `FormKeyDown` (005a4aa0) and `Edit1Change` display behaviour.
