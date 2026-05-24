# Hardware — Road Kings + RPU

Generic guidance for **any** Williams Road Kings on RPU. Install-specific verification lives in [MY_INSTALL.md](MY_INSTALL.md).

## Recommended default (this repository)

| Component | Default |
|-----------|---------|
| Game MPU | Williams **System 11** (Road Kings 542) |
| RPU board | **Rev 102** — plugs into **CPU socket** |
| Arduino | **Mega 2560 Pro** |
| Sound (optional) | Robertsonics **WAV Trigger** firmware ≥ 1.30 |

See [CONFIGURATION.md](CONFIGURATION.md) for rev 101, sound-only-original, and CPU options.

## RPU board revisions (summary)

| Rev | Install | Notes |
|-----|---------|-------|
| 4 | J5 diagnostic connector | Older; IRQ jumper may be required on original MPUs |
| 101 | CPU socket | First interposer; 3× serial + I2C |
| **102** | CPU socket | Auto 6800/6802/8; OLED + WiFi **socket**; right-angle diag header near USB |

Full detail: [Schematics/README.md](../Schematics/README.md), [pinballindex RPU Hardware Revisions](https://pinballindex.com/index.php/RPU_Hardware_Revisions).

### Rev 102 OLED power jumpers

Some 1.3" OLED modules swap VCC/GND on pins 1–2. Jumper **1–2** and **1–2** under the display for pin1=VCC; jumper **2–3** and **2–3** for pin1=GND. See schematic README.

## System 11 on Road Kings

- Early System 11 MPU (7-segment diagnostic display on CPU board).
- Sound board **D-11298** (YM2151) — first Sys 11 game with this board generation.
- **A/C relay** for some solenoids/flashers; solenoid numbering is **not** the same as later Sys 11B/C games.
- No dedicated **sling switch** entries in the switch matrix (slings fire from MPU).

Repair background: `Road_Kings_Docs/` Pinrepair System 11 PDFs; [PinWiki System 9–11](https://www.pinwiki.com/wiki/index.php/Williams_System_9_-_11).

## Build / order Rev 102 SMT board

1. [JLCPCB](https://jlcpcb.com) → PCB Assembly  
2. Upload `Schematics/RPU V102 Gerber`  
3. BOM: `Schematics/RPU V102 BOM`  
4. CPL: `Schematics/RPU V102 Pick and Place`  
5. Enable C1–C5, R1–R8, U5–U8 per [Schematics/README.md](../Schematics/README.md)

Parts sourcing: [pinballindex Part Sources](https://pinballindex.com/index.php/Part_Sources).

## Third-party kits

Pre-built RPU boards are sometimes sold on Pinside and other community shops; Gerbers in this repo are the open-source reference.

## Upload / cable

- **Data-capable** Micro USB (charge-only cables fail upload).
- Board: **Arduino/Genuino Mega or Mega 2560**; port = USB serial.
- Sketch file is `RoadKings.ino`; Arduino prefers the parent folder to also be named `RoadKings`.

Walkthrough: [Pinball Refresh — upload code](https://www.pinballrefresh.com/blog/how-to-upload-code-to-rpu).
