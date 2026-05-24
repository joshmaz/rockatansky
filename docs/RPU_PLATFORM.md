# RPU platform primer

**Retro Pin Upgrade (RPU)** — formerly BSOS on [pinballindex.com](https://pinballindex.com/) — lets an Arduino control lamps, solenoids, switches, and displays on early solid-state pinballs via an adapter board.

This Road Kings codeset uses the **CPU-socket interposer** path (rev **101/102**), not the older J5-only daughtercard.

## How it maps to this repo

| Layer | Files |
|-------|--------|
| OS / MPU driver | `RPU.cpp`, `RPU.h` |
| Hardware + architecture | `RPU_Config.h` |
| Game rules | `RoadKings.ino`, `RoadKings.h` |
| Audio | `AudioHandler.cpp` |
| Audit / adjustments | `SelfTestAndAudit.cpp` |

**Per-install options** (board rev, sound, CPU): [CONFIGURATION.md](CONFIGURATION.md) — not duplicated here.

## Architecture numbers (`RPU_MPU_ARCHITECTURE`)

| Value | Platform |
|-------|----------|
| 1 | Bally -17 / -35, Stern 100/200 |
| 11 | Williams System 4 |
| 12 | Williams System 6 |
| 13 | Williams System 7 |
| **15** | **Williams System 11** ← Road Kings |

## Boot behavior

`RPU_InitializeMPU()` in `setup()` can return `RPU_RET_ORIGINAL_CODE_REQUESTED` and halt the Arduino while the original ROM runs. Default in this repo: hold **credit/reset** at power-on → original; otherwise new code.

## Official references

- [What is RPU?](https://pinballindex.com/index.php/Introduction_-_What_is_BSOS%3F)
- [Build and install](https://pinballindex.com/index.php/How_to_Build_and_Install_on_Your_Machine)
- [WAV Trigger prep](https://pinballindex.com/index.php/Preparing_your_WAV_trigger)
- [Pinball Refresh RPU hub](https://www.pinballrefresh.com/retro-pin-upgrade-rpu)

## Upstream code

Fork parent: [RetroPinUpgrade/ExampleMachine](https://github.com/RetroPinUpgrade/ExampleMachine). Track versions in [UPSTREAM.md](UPSTREAM.md).
