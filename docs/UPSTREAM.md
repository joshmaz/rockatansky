# Upstream tracking

## Fork parent

- Repository: [RetroPinUpgrade/ExampleMachine](https://github.com/RetroPinUpgrade/ExampleMachine)
- Initial clone commit in this repo: `e721c27` (Feb 2025)
- Tailoring: Sys 11 + rev 102 config (`219dcc0`)

## RPU OS version in tree

From [RPU.h](../RPU.h):

- `RPU_OS_MAJOR_VERSION` **5**
- `RPU_OS_MINOR_VERSION` **8**

## When to merge upstream

Consider pulling `RPU.cpp` / `RPU.h` / `AudioHandler.*` from ExampleMachine when:

- Fixing a confirmed OS bug affecting all games
- Dick Hamill publishes a new RPU OS revision you need

**Do not** blindly overwrite `RoadKings.ino` / `RoadKings.h` when merging upstream OS files.

Process:

1. Diff upstream vs local OS files only.
2. Re-apply Road Kings mappings and minimal-play changes.
3. Re-test switch/lamp/solenoid audit on hardware.
4. Update this file with merge commit hash and OS version.

## License

GPL-3.0 — same as upstream ExampleMachine.
