# Software architecture

## File map

| File | Role |
|------|------|
| `RoadKings.ino` | Sketch entry, `setup()` / `loop()`, game state machine, scoring, attract |
| `RoadKings.h` | **Road Kings** switch / lamp / solenoid `#define`s |
| `RPU_Config.h` | Hardware rev, MPU architecture, sound compile flags |
| `RPU.cpp` / `RPU.h` | MPU OS: switches, lamps, solenoids, displays, boot |
| `AudioHandler.cpp` | WAV Trigger + original sound routing |
| `SelfTestAndAudit.cpp` | Diagnostics and adjustment UI |
| `DropTargets.h` | Drop-target bank helper (optional rules) |
| `LampAnimations.h` | Generated lamp effect tables |
| `LampAnimationGenerator/` | Tool to build `LampAnimations.h` from playfield coordinates |

## Game state machine (`MachineState`)

| State | Meaning |
|-------|---------|
| `0` | Attract |
| `1` | Init gameplay |
| `2` | Init new ball |
| `4` | Normal gameplay |
| `99` | Countdown bonus |
| `100` | Ball over |
| `110` | Match mode |
| `120` | Diagnostics |
| Negative | Self-test submodes |

Minimal-play milestone focuses on attract → credits → init gameplay → ball cycle → outhole → ball over.

## Sys 11 differences (vs Bally/Stern RPU template)

- No `SolenoidAssociatedSwitches[]` — pop slings/jets fire in hardware.
- `RPU_MPU_ARCHITECTURE >= 10` code paths in `.ino` (LED strip, test boot).
- Seven-digit scores optional (`RPU_MPU_ARCHITECTURE >= 13`); Road Kings uses six digits in default config.

## Build and upload

1. Install Arduino IDE + board support for **Mega 2560**.
2. Open `RoadKings.ino` (Arduino prefers a parent folder named `RoadKings` — see README).
3. Set `RPU_Config.h` per [CONFIGURATION.md](CONFIGURATION.md).
4. Upload with a **data** USB cable.

## Lamp animations (optional)

See [LampAnimationGenerator/README.md](../LampAnimationGenerator/README.md). Requires playfield image coordinates; not required for minimal play.

## Documentation index

[docs/README.md](README.md)
