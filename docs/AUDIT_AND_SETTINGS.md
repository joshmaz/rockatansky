# Audit, self-test, and adjustments

Display convention during audit: **credits / ball-in-play display** shows `page:subpage` (e.g. `00:05` = sound test).

## Test menu (from ExampleMachine / SpaceBattle2022 pattern)

| Display | Test / function |
|---------|----------------|
| 00:05 | Sound test |
| 00:04 | Switch test |
| 00:03 | Solenoid test |
| 00:02 | Lamp test |
| 00:01 | Display test |
| 00:00 | Reboot (first press enters tests vs audits) |

Use these modes to **verify** [ROAD_KINGS.md](ROAD_KINGS.md) mappings after every upload.

## Audit / adjustment pages (EEPROM-backed)

| Display | Setting |
|---------|---------|
| 01:00 | High score |
| 02:00 | Award score 1 |
| 03:00 | Award score 2 |
| 04:00 | Award score 3 |
| 05:00 | Credits |
| 06:00 | Total plays |
| 07:00 | Total replays |
| 08:00 | Times high score beaten |
| 09:00 | Chute 2 coins |
| 10:00 | Chute 1 coins |
| 11:00 | Chute 3 coins |
| 12:00 | Chute 1 coins per credit |
| 13:00 | Chute 2 coins per credit |
| 14:00 | Chute 3 coins per credit |
| 15:00 | Free play |
| 16:00 | Ball save (seconds) |
| 17:00 | Sound selector |
| 18:00 | Music volume |
| 19:00 | SFX volume |
| 20:00 | Callouts volume |
| 21:00 | Tournament scoring |
| 22:00 | Award score awards |
| 23:00 | Number of balls |
| 24:00 | Scrolling scores |
| 25:00 | Extra ball award |
| 26:00 | Special award |
| 27:00+ | Game-specific (if added later) |

EEPROM byte locations for game-specific settings are defined at the top of [RoadKings.ino](../RoadKings.ino) (`EEPROM_*_BYTE`).

## Operator entry

Typically: enter audit from attract via coin-door / diagnostic controls (same family as other RPU ExampleMachine titles). Credit/start advances values; up/down toggles per machine wiring on Sys 11.

## Road Kings-specific testing order

1. **Solenoid test** — confirm table in ROAD_KINGS.md; update MY_INSTALL log.
2. **Switch test** — walk matrix 1–46 active switches.
3. **Lamp test** — confirm head 49–63; transcribe playfield lamps from manual.
4. **Minimal play** — outhole, ball in play, credit/start.
