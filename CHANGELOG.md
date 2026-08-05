# Changelog

All notable changes to **Hieu Dash** will be documented in this file.

The format is loosely based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.2.0] - 2026-08-05

### Added — New obstacle types (7 new)
- **Saw** — rotating circular blade, deadly on contact
- **Pit** — gap in the floor, falling in = death (variable width)
- **SpikeStrip** — wide row of 3-6 spikes in a single entity (more efficient than spawning N separate spikes)
- **Bouncer** — jump pad that launches the player higher than a normal jump (boost velocity -1050 px/s)
- **Crusher** — block that slams down from above on a periodic cycle; deadly only when smashing down
- **Laser** — horizontal beam that toggles on/off on a cycle; deadly only when on
- **MovingPlatform** — platform that oscillates horizontally or vertically; player can ride on top

### Added — Scoring system
- **Distance-based score**: +1 score per 10 px traveled forward
- **Coin score**: +50 per coin (in addition to coin counter)
- **Completion bonus**: +1000 on level complete
- **Score HUD label** added next to coins counter
- **Score displayed** on Game Over and Level Complete screens
- `total_completions` tracked in save file

### Added — Audio assets
- Generated procedural WAV audio for: jump, coin, death, land, bump (bouncer), bgm (looping melody)
- All `AudioStreamPlayer` nodes now load their streams at runtime via `ResourceLoader.exists()` guard
- Added `LandSfx` node to Player (plays on landing)
- Added `BounceSfx` node to Bouncer

### Added — CI/CD (GitHub Actions)
- `.github/workflows/release.yml` — triggers on release published
- **3 parallel jobs**: Android APK, Linux (x86_64), Windows (x86_64)
- Each job downloads Godot 4.7-stable + export templates, imports project, exports, zips, and uploads to the release
- Artifacts named with tag: `HieuDash-<tag>-android.apk`, `HieuDash-<tag>-linux-x86_64.zip`, `HieuDash-<tag>-windows-x86_64.zip`
- Uses `softprops/action-gh-release@v2` to attach files to the release

### Added — Export presets
- Added **Linux** export preset (x86_64)
- Added **Windows Desktop** export preset (x86_64)
- Bumped Android version code to 2, version name to 0.2.0
- Set `package/signed=false` for CI compatibility (debug-signed APK, still installable)

### Fixed — Bug fixes
- **Block.gd**: SideHazard no longer kills the player when landing on top of the block. Now checks player Y position relative to block top before triggering death. (Previously: blocks were unlandable — instant death on top contact.)
- **GameManager.gd**: `selected_level` is now saved/loaded with the save file. Previously, level progress was lost on game restart.
- **GameManager.gd**: `total_completions` now tracked and persisted.
- **Game.gd**: Level seed is now computed from `GameManager.get_level_seed()` instead of a local export var that got reset on scene reload. "Next Level" now actually advances to a different level.
- **Game.gd**: `_on_score_changed` now updates the HUD score label (was a no-op `pass`).
- **Game.gd**: Game Over and Level Complete screens now show score and coins.
- **export_presets.cfg**: Replaced `PoolStringArray()` with `PackedStringArray()` (Godot 4 syntax; the old Godot 3 syntax caused export failures).
- **Player.gd**: Added coyote time (100ms grace period after leaving ground) — jump still registers shortly after walking off an edge.
- **Player.gd**: Rotation snap on landing is now faster (0.55 lerp factor) and fully snaps when within 0.02 rad.
- **Settings.gd**: Reset Progress now navigates to Main Menu (was reloading Settings, which felt broken). Also resets `total_completions`.
- **MainMenu.gd**: BGM now actually plays (loads `bgm.wav` stream).
- **Game.gd**: BGM now actually plays (loads `bgm.wav` stream).

### Changed
- Version bumped to 0.2.0
- Save file version field updated to 0.2.0
- README updated with new features list

## [0.1.0] - 2026-08-05

### Added — Core gameplay
- Auto-running cube with constant horizontal speed (360 px/s)
- Gravity + jump physics (1800 px/s² gravity, -680 px/s jump)
- **Jump buffer** (120 ms window) — pressing jump just before landing still works
- Ground detection via collision normals + downward ray
- Air rotation (snaps to nearest 90° on landing, GD-style)
- Player death on hazard contact → screen shake-like particle explosion
- Auto-restart option from Game Over screen

### Added — Level system
- `LevelGenerator` — deterministic procedural level from seed
- Difficulty ramps up along the level length
- 3 entity types: spikes (clusters of 1–3), blocks (1–2 tall), coins (single or above blocks)
- Goal flag at the end → **Level Complete** screen with +1000 bonus

### Added — UI / UX
- **Main Menu**: animated title, best score, total coins, level indicator, PLAY / Settings / Quit
- **Settings screen**: music / SFX / reduced motion toggles, reset progress
- **HUD**: progress bar (0–100%), attempt counter, coin counter, pause button
- **Pause overlay**: resume / restart / main menu
- **Game Over** overlay with retry / main menu
- **Level Complete** overlay with next level / replay / main menu
- GD-inspired neon UI style (custom `StyleBoxFlat`, dark panels with cyan borders)
- 3-layer parallax background (stars, mountains, hills)
- Particle trail behind player
- Landing dust particles
- Death explosion particles
- Android **adaptive icons** (foreground cube + gradient background)

### Added — Persistence
- `user://hieu_dash.save` JSON save file
- Stores: best score, total coins, total attempts, total jumps, total deaths,
  selected level, music/sfx/reduced-motion preferences

### Added — Android export
- `export_presets.cfg` configured for Android
- min SDK = **24 (Android 7.1.1)**, target SDK = **34 (Android 14)**
- Architectures: `armeabi-v7a`, `arm64-v8a`
- Renderer: `gl_compatibility` (best for older devices)
- Immersive mode enabled
- Package: `com.hieuhonda.hieudash`
- App category: Game

### Known limitations (v0.1)
- No audio assets yet (SFX nodes are wired up but have no streams)
- Single procedural level layout (seed changes per "next level")
- No cube color customization yet (cyan is hardcoded)
- No localization (English UI labels)
- No level editor
- No achievements / leaderboards

### Technical
- Engine: Godot 4.7
- Language: GDScript
- Renderer: `gl_compatibility`
- Orientation: landscape
