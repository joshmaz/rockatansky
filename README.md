# Road Kings RPU codeset — Max Rockatansky

Open-source **Retro Pin Upgrade** rules for Williams **Road Kings** (1986, System 11, model 542). Fork of [RetroPinUpgrade/ExampleMachine](https://github.com/RetroPinUpgrade/ExampleMachine) (GPL-3.0).

**Max Rockatansky** is the custom *Road Warrior* / *Furiosa* themed rules layer on this base — work in progress. See [docs/RULES_ROADMAP.md](docs/RULES_ROADMAP.md).

## Quick start (any Road Kings owner)

1. Build or buy an RPU board (rev **101** or **102** recommended) — [docs/HARDWARE.md](docs/HARDWARE.md).
2. Edit [RPU_Config.h](RPU_Config.h) for your install — [docs/CONFIGURATION.md](docs/CONFIGURATION.md).
3. Open `RoadKings.ino` in Arduino IDE (Mega 2560 **Pro**), upload with a data-capable USB cable. If the IDE requires the folder name to match the sketch, clone this repo into a directory named `RoadKings`.
4. Run switch / lamp / solenoid tests — [docs/AUDIT_AND_SETTINGS.md](docs/AUDIT_AND_SETTINGS.md).
5. Confirm mappings in [docs/ROAD_KINGS.md](docs/ROAD_KINGS.md) on your cabinet.

## Documentation

| | |
|--|--|
| Index | [docs/README.md](docs/README.md) |
| Agents | [AGENTS.md](AGENTS.md) |
| Machine matrix | [docs/ROAD_KINGS.md](docs/ROAD_KINGS.md) |
| This install | [docs/MY_INSTALL.md](docs/MY_INSTALL.md) |
| PDF manuals | [Road_Kings_Docs/](Road_Kings_Docs/) |

## Status

| Milestone | State |
|-----------|--------|
| Agent/docs foundation | Done |
| Road Kings switch map in code | Done |
| Minimal playable ball cycle | In progress |
| Original factory rules | Planned |
| Max Rockatansky theme | Planned |

RPU hardware for this project: **planned, not installed** — see [docs/MY_INSTALL.md](docs/MY_INSTALL.md).

## Design notes

- Recreate original ruleset first, then Road Warrior–style modes ([issue tracker / roadmap](docs/RULES_ROADMAP.md)).
- Backglass art inspired *Furiosa* / Dementus gang — theme only, not hardware-specific.
