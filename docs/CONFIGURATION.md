# Configuration options

This codeset targets **Williams Road Kings (System 11)** on **Retro Pin Upgrade (RPU)**. Settings below are grouped by whether they are fixed for the game, chosen per installation, or adjusted on the machine in audit mode.

## Machine invariant (do not change per cabinet)

| Setting | Value | File |
|---------|-------|------|
| Game | Road Kings, model 542 | [RoadKings.h](../RoadKings.h) |
| MPU architecture | `RPU_MPU_ARCHITECTURE` **15** (System 11) | [RPU_Config.h](../RPU_Config.h) |

## Platform choices (installer configures)

| Setting | **Repo default** | Other valid options | File / location |
|---------|------------------|---------------------|-----------------|
| `RPU_OS_HARDWARE_REV` | **102** (CPU interposer, OLED/WiFi socket) | **101** (CPU interposer, no OLED socket); rev **4** and below use **J5** diagnostic port (Bally/Stern style, not typical for Sys 11 CPU-socket install) | [RPU_Config.h](../RPU_Config.h) |
| `RPU_MPU_BUILD_FOR_6800` | **1** (6800) | **0** (6802 / 6808); rev 102 can auto-detect at runtime | [RPU_Config.h](../RPU_Config.h) |
| Sound backend | `RPU_OS_USE_WAV_TRIGGER_1p3` enabled | Comment out WAV defines and enable `RPU_OS_USE_W11_SOUND` for System 11 original sound board path; or original-only via audit **Sound Selector** | [RPU_Config.h](../RPU_Config.h), [SOUND.md](SOUND.md) |
| Boot to original ROM | Credit/reset **held** at power-on boots original; not held boots new code | Hardware switch on RPU; other `RPU_CMD_*` flags in `RPU_InitializeMPU()` | [RoadKings.ino](../RoadKings.ino) `setup()` |
| Arduino board | Mega 2560 **Pro** (required for rev 101/102) | Standard Mega 2560 pinout differs — do not substitute without rewiring | Build docs in [RPU_PLATFORM.md](RPU_PLATFORM.md) |

## Operator / house settings (audit menu, EEPROM)

Adjusted in-game via credit/start and up/down in audit — not compile-time. See [AUDIT_AND_SETTINGS.md](AUDIT_AND_SETTINGS.md).

Examples: free play, ball save seconds, sound selector, music/SFX/callout volumes, balls per game, tournament scoring, award scores.

## This install only

Bench verification, serial number, photos, and confirmed solenoid/lamp IDs after test: [MY_INSTALL.md](MY_INSTALL.md).

## Changing defaults safely

1. Edit [RPU_Config.h](../RPU_Config.h) for hardware/sound defines.
2. Update the matching row in **this file** so other Road Kings owners know the default and alternatives.
3. Rebuild and upload the sketch (folder name must match `.ino` filename).
4. Run switch → lamp → solenoid tests before enabling new rules.
