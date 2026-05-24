# Williams Road Kings (1986) — machine reference

Model **542**, **Williams System 11** (early Sys 11, no A/B/C suffix). This file is **machine-invariant**: the same switch/lamp/solenoid IDs apply on every Road Kings cabinet (verify lane 3/4 labeling on your playfield).

**Sources:** `Road_Kings_Docs/Road Kings Switch Matrix Chart.pdf`, `Road_Kings_Docs/Williams_1986_Road_Kings_Manual.pdf` (scanned; lamp/solenoid tables on manual pp. 24–26 and end supplement). **RPU index** = matrix chart number minus 1 (chart `01` → `#define` value `0`).

## Factory variants

- **Lane 3 / lane 4 inlane inserts:** Some games label left inlane as 3 and right as 4; others swap them. IPDB notes the manual supplement at the end of the PDF repeats the lamp/switch tables with **#3 and #4 swapped**. Confirm against your playfield silkscreen.
- **Flipper EOS:** Schematics for Road Kings (and High Speed, Grand Lizard) can show EOS on the wrong coil lug; factory wiring is usually correct. See Pin*Bot schematic for correct EOS placement if rewiring.

## Switch matrix (RPU index)

| RPU | Chart | Name |
|-----|-------|------|
| 0 | 01 | PLUMB BOB TILT |
| 1 | 02 | BALL ROLL TILT |
| 2 | 03 | CREDIT BUTTON (credit / start) |
| 3 | 04 | RIGHT COIN CHUTE |
| 4 | 05 | CENTER COIN CHUTE |
| 5 | 06 | LEFT COIN CHUTE |
| 6 | 07 | SLAM TILT |
| 7 | 08 | HIGH-SCORE RESET |
| 9 | 09 | R TARGET |
| 10 | 10 | O TARGET |
| 11 | 11 | A TARGET |
| 12 | 12 | D TARGET |
| 13 | 13 | K TARGET |
| 14 | 14 | I TARGET |
| 15 | 15 | N TARGET |
| 16 | 16 | G TARGET |
| 17 | 17 | S TARGET |
| 18 | 18 | LANE 1 |
| 19 | 19 | LANE 2 |
| 20 | 20 | LANE 4 |
| 21 | 21 | LANE 3 |
| 22 | 22 | RIGHT RAMP — ENTER |
| 23 | 23 | RAMP RAISE (EOS) |
| 24 | 24 | TOP JET BUMPER |
| 25 | 25 | LEFT JET BUMPER |
| 26 | 26 | RIGHT JET BUMPER |
| 27 | 27 | BOTTOM JET BUMPER |
| 28 | 28 | LEFT OUTLANE |
| 29 | 29 | RIGHT OUTLANE |
| 30 | 30 | DROP TARGET (all down) |
| 31 | 31 | CENTER RAMP — ENTER |
| 32 | 32 | CENTER RAMP — RIGHT EXIT |
| 33 | 33 | RIGHT TEN POINT |
| 34 | 34 | UPPER LEFT KICKER |
| 35 | 35 | RIGHT ROLLUNDER |
| 36 | 36 | LEFT ROLLUNDER |
| 37 | 37 | LEFT EJECT |
| 38 | 38 | CENTER EJECT |
| 39 | 39 | BALL SHOOTER |
| 40 | 40 | OUTHOLE |
| 41 | 41 | RIGHT ROUGH |
| 42 | 42 | LEFT TROUGH |
| 43 | 43 | LEFT KICKER |
| 44 | 44 | RIGHT KICKER |
| 45 | 45 | LEFT TEN POINT |
| 46 | 46 | PLAYFIELD TILT |

Chart positions 47–64 are **NOT USED** on Road Kings.

### Notes for RPU code

- **No dedicated sling switches** — slings are fired by the MPU (hardware), not switch-stack rules in `RoadKings.ino`.
- **Coin chutes:** This repo maps `SW_COIN_1` = left (5), `SW_COIN_2` = center (4), `SW_COIN_3` = right (3).
- **Trough / outhole:** Ball-end logic uses `SW_OUTHOLE` (40). `SW_LEFT_TROUGH` (42) can be used for additional trough sensing when bench-tested.

## Lamp matrix (RPU index)

Head/credit lamps **49–63** follow the usual Williams System 11 layout (same numbering family as other RPU Sys 6/7/11 games). Playfield lamps **0–48** are game-specific — transcribe from the manual lamp matrix (pp. 24–26) and verify in **lamp test**.

### Head / backbox (standard Sys 11)

| RPU | Typical name |
|-----|----------------|
| 49 | 1 player |
| 50 | 2 players |
| 51 | 3 players |
| 52 | 4 players |
| 53 | Match |
| 54 | Ball in play |
| 55 | Apron credits |
| 56–59 | Player 1–4 up |
| 60 | Tilt |
| 61 | Game over |
| 62 | Same player shoots again |
| 63 | High score to date |

### Playfield (verify in manual)

Use solenoid/lamp test on the cabinet to confirm IDs before relying on custom rules. Common groups on Road Kings:

- Letter target lamps (R, O, A, D, K, I, N, G, S, …)
- Lane 1–4 inserts (see factory variant above)
- Jet bumpers, ramp, bonus, “Burnin’ up” / rough areas

Until transcribed from the PDF, treat playfield lamp `#define` names in `RoadKings.h` as **placeholders** and update after lamp test.

## Solenoid / driver table (RPU index)

Road Kings uses an **A/C relay** and does **not** follow the later “solenoids 1–8 only” convention. **Always confirm** IDs with **Solenoid Test** in audit mode after upload.

| RPU | Intended function | Verify |
|-----|-------------------|--------|
| 0 | Outhole | Required for minimal play |
| 1 | Ball release / shooter lane | |
| 2 | Left sling | Hardware-fired on Sys 11; ID may still appear in test |
| 3 | Right sling | |
| 4 | Left jet bumper | |
| 5 | Right jet bumper | |
| 6 | Top jet bumper | |
| 7 | Bottom jet bumper | |
| 8 | Drop target reset | |
| 9 | Ramp raise motor | |
| 10 | Left eject | |
| 11 | Center eject | |
| 12 | Right eject | |
| 13 | Knocker | |
| 14 | Left trough / kicker (verify) | |
| 15 | Coin lockout (continuous) | `SOLCONT_COIN_LOCKOUT` |

Update this table from your manual schematic and bench test; record confirmed IDs in [MY_INSTALL.md](MY_INSTALL.md).

## Related files

- Code defines: [RoadKings.h](../RoadKings.h)
- PDF originals: [Road_Kings_Docs/](../Road_Kings_Docs/)
