# Josh's Road Kings install log

Personal notes for **this cabinet only**. Other owners should copy [MY_INSTALL.example.md](MY_INSTALL.example.md) and fill in their machine.

**Status:** RPU board **not built/installed** yet (planning phase).

## Planned build (see [CONFIGURATION.md](CONFIGURATION.md) for alternatives)

| Item | Choice |
|------|--------|
| RPU board | Rev **102** |
| Target game | Williams Road Kings (542) |
| Sound | WAV Trigger **1.3** + diagnostic WAVs in [Sounds/](../Sounds/) |
| CPU build flag | `RPU_MPU_BUILD_FOR_6800` = 1 |
| Boot | New code default; hold credit/reset at power-on for original |

## Machine identity

| Field | Value |
|-------|-------|
| Serial | _TBD_ |
| Lane 3/4 labeling | _Verify playfield vs manual supplement_ |

## Bench verification checklist

Mark dates when confirmed on the real machine:

- [ ] RPU powers; MPU test passes
- [ ] Boot to new code / boot to original (credit/reset)
- [ ] Switch test — all switches in [ROAD_KINGS.md](ROAD_KINGS.md) close correctly
- [ ] Lamp test — head lamps 49–63; playfield lamps transcribed from manual
- [ ] Solenoid test — update solenoid table in ROAD_KINGS.md with confirmed IDs
- [ ] Outhole eject + ball cycle (minimal play)
- [ ] WAV Trigger audio (if installed)

## Notes

_Add photos, wiring quirks, and corrections here after first power-on._
