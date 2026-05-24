# Sound

## Repository default

- `RPU_OS_USE_WAV_TRIGGER_1p3` in [RPU_Config.h](../RPU_Config.h)
- `Audio.InitDevices(AUDIO_PLAY_TYPE_WAV_TRIGGER | AUDIO_PLAY_TYPE_ORIGINAL_SOUNDS)` in `setup()`
- Diagnostic and audit WAVs in [Sounds/](../Sounds/) (numbered files)

**Alternatives:** System 11 original sound path (`RPU_OS_USE_W11_SOUND`), or original-only via audit sound selector — see [CONFIGURATION.md](CONFIGURATION.md).

## WAV Trigger preparation

1. Solder **6-pin serial** header; bridge **5V** pad (SJ2) if powering from header.
2. Upgrade firmware to **≥ 1.30** ([Robertsonics downloads](https://robertsonics.com/wav-trigger-downloads/)).
3. Load WAVs onto microSD (class 4+ per Robertsonics guidance).
4. Connect to RPU serial port per board silkscreen (pin 1 = GND).

Details: [pinballindex — Preparing your WAV Trigger](https://pinballindex.com/index.php/Preparing_your_WAV_trigger).

Troubleshooting: [Pinball Refresh — diagnosing sound](https://www.pinballrefresh.com/blog/diagnosing-sound-issues).

## File numbering in `Sounds/`

| Range | Purpose |
|-------|---------|
| 133–166 | Audit / adjustment announcements (`AP_*`) |
| 180–188 | Coin chute option prompts |
| 190 | No sound |
| 191–199 | Sound selector mode descriptions |
| 1900–1914 | Boot diagnostics |

Custom game callouts for Max Rockatansky theme will use additional slots later; keep numbering documented when added.

## Road Kings original audio

Factory uses Williams **D-11298** sound board (YM2151). RPU can coexist with original sounds when configured; theme music may stay on WAV Trigger while background uses original — bench-test volumes to avoid clash.
