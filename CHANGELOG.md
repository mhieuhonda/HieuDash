# Changelog

All notable changes to **Hieu Dash** will be documented in this file.

The format is loosely based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

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

### Known limitations
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
