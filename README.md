# Hieu Dash

<p align="center">
  <img src="assets/icons/icon.png" alt="Hieu Dash logo" width="128" height="128">
</p>

A rhythm-based platformer for Android, inspired by the cube-jumping genre.
Tap to jump, dodge the spikes, collect coins, reach the goal flag.

> Built with **Godot 4.7** • Targets **Android 7.1.1 (API 24)+** • v0.1.0

This is the **v0.1** release. It focuses on the **core gameplay loop** and the
**game UI**. It is intentionally minimal: one procedurally generated endless
level, single cube mode, simple scoring.

---

## Features (v0.1)

- **Auto-running cube** with gravity + jump (tap / space / click)
- **Procedural level generation** driven by seed (deterministic)
- **Three obstacle types**: spikes (instant death), blocks (jump on top, side = death), coins (collect for score)
- **Goal flag** at the end of the level → level complete + bonus
- **HUD**: progress bar, attempt counter, coin counter, pause button
- **Pause menu**: resume / restart / main menu
- **Game Over** & **Level Complete** screens
- **Main Menu** with logo, best score, total coins, level selector
- **Settings**: music / SFX / reduced motion toggles, reset progress
- **Persistent save** (`user://hieu_dash.save`) — best score, total coins, attempts
- **Visual polish**: parallax background (3 layers), particle trail, landing particles, death explosion
- **Neon GD-inspired UI** (custom StyleBoxFlat, color palette, glow)
- **Android adaptive icons** (foreground + background)
- **Reduced motion mode** for accessibility

---

## Minimum requirements

| Spec            | Value                              |
|-----------------|------------------------------------|
| Engine          | Godot 4.7+                         |
| Android min SDK | API 24 (Android 7.1.1)             |
| Android target  | API 34 (Android 14)                |
| Architectures   | `armeabi-v7a`, `arm64-v8a`         |
| Renderer        | `gl_compatibility` (GLES2 mobile)  |

---

## How to play

1. **Tap anywhere / Space / Left-click** → jump
2. Hold to buffer a jump on landing (jump buffer window ≈ 120 ms)
3. **Spikes (red triangles)** → instant death → restart
4. **Blocks (purple squares)** → land on top to ride, hit the side → death
5. **Coins (yellow diamonds)** → +1 coin (saved to total)
6. **Goal flag (green)** at the end → level complete (+1000 bonus)
7. **Pause button** (top-right) or **Esc / Back** to pause

---

## Building

### Prerequisites
- [Godot 4.7](https://godotengine.org/) (Standard or .NET — this project uses GDScript, so Standard is enough)
- Android SDK + NDK configured in Godot's Editor Settings → Export → Android
- Java JDK 17+

### Steps
1. Clone this repo: `git clone https://github.com/mhieuhonda/HieuDash.git`
2. Open the project in Godot 4.7 (Project → Import → select `project.godot`)
3. Wait for the asset import to finish
4. Project → Export → **Android** preset is already configured (`export_presets.cfg`)
5. Edit the keystore signing if you want a release build (Project Settings → Android)
6. Click **Export Project…** → choose release or debug → produces `HieuDash-v0.1.0.apk`
7. Install on device: `adb install HieuDash-v0.1.0.apk`

> **Note**: The first build will be slow because Godot generates the Gradle
> build template under `android/build/`. This directory is git-ignored.

---

## Project structure

```
HieuDash/
├── project.godot              # Godot 4.7 config (Android export, autoloads, input map)
├── export_presets.cfg         # Android APK preset (min SDK 24)
├── assets/
│   ├── icons/                 # App icons (PNG, adaptive)
│   ├── audio/                 # (placeholders for future SFX/music)
│   └── textures/              # (placeholders for future sprites)
├── scenes/
│   ├── MainMenu.tscn          # Title screen
│   ├── Settings.tscn          # Settings (music/SFX/motion/reset)
│   ├── Game.tscn              # Main gameplay scene (HUD, parallax, etc.)
│   ├── Player.tscn            # Cube with trail + land + death particles
│   ├── Spike.tscn             # Hazard
│   ├── Block.tscn             # Static block (jump on top)
│   ├── Coin.tscn              # Collectible
│   └── GoalArea.tscn          # End-of-level flag
└── scripts/
    ├── GameManager.gd         # Autoload singleton (save/load, runtime state)
    ├── LevelGenerator.gd      # Procedural level data
    ├── Player.gd              # Cube physics: gravity, jump, ground check
    ├── Spike.gd, Block.gd, Coin.gd, GoalArea.gd
    ├── Game.gd                # Main game loop, spawning, HUD, pause
    ├── MainMenu.gd
    └── Settings.gd
```

---

## Roadmap (post-v0.1)

- [ ] Multiple level layouts (level select screen)
- [ ] Sound effects + background music
- [ ] Cube color customizer (garage)
- [ ] Multiple game modes: ship, ball, UFO
- [ ] Practice mode with checkpoints
- [ ] Level editor
- [ ] Achievements / leaderboards
- [ ] Haptic feedback on death / land

---

## Credits & license

- **Concept & code**: Hieu Dash Project (2026)
- **UI inspiration**: classic cube-jumping genre
- **Engine**: [Godot Engine](https://godotengine.org/) (MIT license)
- **Font**: built-in Godot default

This project is released under the **MIT License** — see [LICENSE](LICENSE).

"Hieu Dash" is an original name. The game is **inspired by** the cube-jumping
genre but is a separate, original work and is **not affiliated with** any
existing commercial product.
