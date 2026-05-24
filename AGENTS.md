# Agent guide — Road Kings RPU / Max Rockatansky

## Project

- **Community:** Williams **Road Kings** (1986, System 11) RPU codeset — fork of [RetroPinUpgrade/ExampleMachine](https://github.com/RetroPinUpgrade/ExampleMachine).
- **This fork:** *Max Rockatansky* custom rules (optional) — see [docs/RULES_ROADMAP.md](docs/RULES_ROADMAP.md).

## Documentation tiers

| Tier | Doc | Code |
|------|-----|------|
| Machine invariant | [docs/ROAD_KINGS.md](docs/ROAD_KINGS.md) | [RoadKings.h](RoadKings.h) |
| Installer options | [docs/CONFIGURATION.md](docs/CONFIGURATION.md) | [RPU_Config.h](RPU_Config.h), `setup()` |
| Operator settings | [docs/AUDIT_AND_SETTINGS.md](docs/AUDIT_AND_SETTINGS.md) | EEPROM in [RoadKings.ino](RoadKings.ino) |
| One cabinet only | [docs/MY_INSTALL.md](docs/MY_INSTALL.md) | Do not hardcode personal bench results elsewhere |

Index: [docs/README.md](docs/README.md). PDFs: [Road_Kings_Docs/](Road_Kings_Docs/).

## Editing rules

1. **Do not edit** `RPU.cpp` / `RPU.h` unless fixing OS bugs for all RPU games.
2. Game logic: `RoadKings.ino`, mappings: `RoadKings.h`.
3. **Sys 11:** No `SolenoidAssociatedSwitches` / `#if (RPU_MPU_ARCHITECTURE<10)` blocks for Road Kings.
4. `SW_*` / `LAMP_*` / `SOL_*` names must match [docs/ROAD_KINGS.md](docs/ROAD_KINGS.md).
5. Changing a `RPU_Config.h` default → update [docs/CONFIGURATION.md](docs/CONFIGURATION.md).
6. Slings on Road Kings are **not** switch-triggered in software.

## Verify changes

1. Compile Arduino sketch (`RoadKings.ino`; see README if folder name must match).
2. Plan for switch → lamp → solenoid audit on real hardware ([docs/AUDIT_AND_SETTINGS.md](docs/AUDIT_AND_SETTINGS.md)).
3. Confirm solenoid IDs in ROAD_KINGS.md after solenoid test.

## Phase gate

Implement **minimal play** (credits, ball cycle, outhole) before theme rules or full original ruleset.
