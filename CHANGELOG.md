# Changelog

All notable changes to **Hieu Dash** will be documented in this file.

The format is loosely based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.5.0] - 2026-08-05

### Fixed — Critical APK branding & installation issues (root-cause fixes)
- **APK shows "godot-project-name-vi" instead of "Hieu Dash"** — root cause identified: Godot 4.7's gradle export only replaces the app-name placeholder in the default `res/values/` directory; localized `res/values-vi/`, `res/values-en/`, etc. retain the literal `godot-project-name-XX` placeholder. When the device locale is Vietnamese, Android picks `values-vi/` and shows the placeholder. Fix: CI now uses `godot --headless --install-android-build-template --export-release "Android"`, which properly installs the gradle build template AND triggers full string-resource generation for ALL supported locales (verbose log confirms: "Creating strings resources for supported locales for project Hieu Dash"). All 42 locale string files now contain "Hieu Dash".
- **APK shows Godot logo instead of game logo** — same root cause as above. Without `--install-android-build-template`, the gradle template was not properly set up, so the launcher-icon processing step (`Processing launcher icon for dimension 192...`) was never reached. With the fix, Godot correctly converts `assets/icons/icon_192.png`, `adaptive_foreground.png`, `adaptive_background.png` to `res/mipmap-*/icon.webp` and the adaptive variants. Android now picks up the custom neon-cube logo.
- **APK reports "package seems corrupted"** — root cause: CI generated a fresh keystore on every build via `keytool`, so each APK was signed with a different cert. Google Play Protect flags this as suspicious and shows the "corrupted" warning. Fix: a stable release keystore is now committed to the repo at `keystore/hieudash.keystore` (password: `hieudash_release_2026`, validity 10000 days). Every CI build and every local build now signs with the SAME certificate, so Play Protect recognizes the consistent signing identity. The `export_presets.cfg` is pre-configured with `keystore/release`, `keystore/release_user`, `keystore/release_password` so no runtime patching is needed.
- **CI no longer swallows export errors** — removed the `|| true` and `tee ... || true` patterns that were hiding export failures. The previous CI silently failed at the export step, found no APK, and reported "No APK built" — but the release was still created without an APK (or with a stale one). Now `set -e` is used throughout and the export step fails the build immediately if the APK is not produced.
- **Added APK signature verification step** — CI now runs `apksigner verify --verbose` on the built APK and fails if the signature is invalid. This catches unsigned or debug-signed APKs before they reach the release.

### Fixed — Godot 4.7 compatibility
- **`project.godot`: `vram_compression/import_etc2_astc` was in the wrong section** — the setting was placed under `[rendering]` as `vram_compression/import_etc2_astc=true`, which maps to `rendering/vram_compression/import_etc2_astc`. Godot 4.7 expects `rendering/textures/vram_compression/import_etc2_astc` (note the extra `textures/` path segment). This caused the error "ETC2/ASTC texture compression is required for Android export" even though the setting appeared to be present. Fix: moved to `textures/vram_compression/import_etc2_astc=true` under `[rendering]`.
- **`Game.gd:180` type-inference parse error** — `var p := clamp(player.global_position.x / level_end_x, 0.0, 1.0) * 100.0` failed with "Cannot infer the type of 'p' variable because the value doesn't have a set type". Godot 4.7's type inference is conservative with `clamp()` because it is a variant function. Fix: changed to `var p: float = clamp(...)` with explicit float type.
- **`class_name Player` on autoload-adjacent script** — kept as `class_name Player` (no conflict since Player is not an autoload). Confirmed all scripts compile cleanly under `godot --headless --import`.

### Changed — CI/CD overhaul
- **CI uses JDK 21** (was 17) — Godot 4.7's gradle template pulls in Android Gradle Plugin 8.x which requires JDK 17+, but JDK 21 is the LTS that matches the modern toolchain. The previous JDK 17 setup was causing `Toolchain installation does not provide the required capabilities: [JAVA_COMPILER]` on some runners.
- **CI installs Android SDK `platform-tools`** in addition to `platforms;android-34` and `build-tools;34.0.0` — needed for `apksigner` and `adb` (used by the verification step).
- **CI default tag fallback** updated to `v0.5.0` (was `v0.4.0`).
- **Removed the keystore generation step** — the committed `keystore/hieudash.keystore` replaces the per-build `keytool` generation. This also removes the fragile `sed`-based patching of `export_presets.cfg` that was inserting keystore config at runtime.

### Changed — Version bump
- `project.godot`: `config/version="0.5.0"`
- `export_presets.cfg`: Android `version/code=5`, `version/name="0.5.0"`
- CI/CD default tag fallback: `v0.5.0`

### Added — Documentation
- Added `scripts/fix_android_app_name.py` — idempotent utility script that overwrites all 42 `godot_project_name_string.xml` files (default + localized) with "Hieu Dash". Kept as a fallback in case Godot's `--install-android-build-template` string replacement fails in some edge case. The script is NOT run in CI by default (Godot handles it), but is available for manual troubleshooting.
- Added `keystore/hieudash.keystore` to the repo (with `.gitignore` exception `!keystore/hieudash.keystore`). The keystore is intentionally committed so that APK signing is stable across all builds.
- Added this changelog entry documenting all root-cause fixes.

## [0.4.0] - 2026-08-05

### Fixed — Critical APK installation issues
- **APK "package seems corrupted"** — set `package/signed=true` in `export_presets.cfg` (was `false`, causing Android to reject the unsigned APK)
- **CI/CD now generates a release keystore** via `keytool` on every build, then patches `export_presets.cfg` with `keystore/release`, `keystore/release_user`, `keystore/release_password` before exporting. APK is now signed and installable on Android 7.1.1+ devices.
- **App name fix** — verified `package/name="Hieu Dash"` is correctly applied; the previous "godot project..." label was caused by Godot's gradle template falling back to default when signing was disabled. With proper signing + gradle_build/use_gradle_build=true, the AndroidManifest label now resolves to "Hieu Dash".

### Fixed — Godot 4.7 compatibility (script compile errors)
- **`class_name` conflicts with autoload singleton** — removed `class_name PlayerProfile` and `class_name SettingsSingleton` (Godot 4.7 throws "Class X hides an autoload singleton"). The autoloads are now accessible directly via their autoload name as instance.
- **`class_name ColorPalette` hides native class** — renamed to `class_name HDColorPalette extends RefCounted`. All references updated (`PlayerProfile`, `ColoursPalette`, `AdvancedIconSelect`).
- **`PackedVector2Array(x1,y1,x2,y2,...)` constructor no longer valid** in Godot 4.7 — converted all call sites in `Block.gd`, `Laser.gd`, `Pit.gd`, `SpikeStrip.gd`, `Player.gd` to the array form: `PackedVector2Array([Vector2(x1,y1), Vector2(x2,y2), ...])`.
- **`AudioStreamPlayer.global_position` doesn't exist** — removed the 2 lines in `Coin.gd` that tried to read/write `global_position` on an `AudioStreamPlayer` (only `Node2D`/`Control` have positional properties).
- **Variant type inference treated as error** — added explicit types in `Credits.gd` (`var version: String = String(ProjectSettings.get_setting(...))`) and `LevelGenerator.gd` (`var t: float`, `var diff: float`).
- **`var snapped :=` shadowed by built-in function** — renamed local to `snapped_val` with explicit `float` type in `Player.gd`.
- All scripts now compile cleanly under `godot --headless --import` with zero parse/compile errors.

### Changed — Branding & icons
- **New logo** — generated fresh neon-cube logo for `icon.png` (256×256), `icon_192.png`, `icon_144.png`, `icon_72.png`. Replaces the previous default Godot-style icon.
- **New adaptive icons** — regenerated `adaptive_foreground.png` (cube on transparent) and `adaptive_background.png` (gradient) at 432×432.
- **In-game shape icons** — regenerated `icon_cube/circle/triangle/diamond/hexagon.png` with the same neon style.
- All icons use a consistent neon cyan + magenta palette on a dark gradient background.

### Changed — Version bump
- `project.godot`: `config/version="0.4.0"`
- `export_presets.cfg`: Android `version/code=4`, `version/name="0.4.0"`
- CI/CD default tag fallback: `v0.4.0`

## [0.3.0] - 2026-08-05

### Added — Player customization (port from GDPS-Editor-22)
- **Garage scene** — central hub for player customization with live Player preview
- **ColoursPalette popup** — 106-color picker with Color 1 / Color 2 / Glow toggle (port from `ColoursPalette.cpp`)
- **AdvancedIconSelect popup** — 5 icon shapes: Cube, Circle, Triangle, Diamond, Hexagon (port from `AdvancedIconSelect.cpp`)
- **PlayerProfile autoload** — persistent profile (color_1_id, color_2_id, glow_enabled, icon_type, swing_id, jetpack_id) saved to `user://hieudash_profile.cfg`
- **ColorPalette static class** — 106-color palette ported from `GameManager_colorForIdx_hook`
- Player visual: dynamic polygon shape (cube/circle/triangle/diamond/hexagon) + glow effect on outline

### Added — Speedrun Timer (port from GDPS-Editor-22 SpeedrunTimerHook)
- **SpeedrunTimer** HUD label at top-left showing `MM:SS.mmm`
- White color = valid run, red color = invalid (practice mode, paused, or died)
- Toggle visibility and opacity via Settings
- Auto-stops on death/win

### Added — Practice Mode (port from GDPS-Editor-22 playtest hooks)
- Toggle with **P key** or Pause overlay page 2
- Auto-checkpoint every 400px when grounded (max 30 checkpoints)
- On death in practice → respawn at last checkpoint (no Game Over)
- Marks speedrun timer as invalid
- Visual "PRACTICE MODE" label in HUD

### Added — Advanced Settings (port from GDPS-Editor-22 advancedOptionsLayer)
- **AdvancedSettings scene** with scrollable list of 20+ toggles in 3 sections:
  - Object Properties: smooth_fix, ignore_damage (debug immortal), draw_trigger_boxes, debug_draw, effect_lines, toggle_editor_grid, toggle_effect_duration, has_color, toggle_editor_bg, hide_grid
  - Gameplay: playtest_enabled, auto_checkpoint, show_level_info, disable_linked_objects, show_editor_shortcut, high_capacity_mode, layer_locking, record_order
  - Display: timer_enabled, hide_pause_button, alt_touch_layout, follow_player
- Opacity sliders: platform_opacity, timer_opacity, speed_multiplier, max_undo
- Reset to defaults button
- **SettingsSingleton autoload** — ConfigFile-based persistence (`user://hieudash_settings.cfg`)

### Added — Pause Overlay Page 2 (port from GDPS-Editor-22 PauseLayerExt)
- **Page navigation** via `<` and `>` arrow buttons
- Page 2 contents: Timer Opacity slider, Platform Opacity slider, Timer toggle, Practice toggle
- All changes save instantly to SettingsSingleton

### Added — Credits scene (offline-only adaptation)
- Credits screen showing project info, gameplay features, asset sources, tooling, acknowledgements
- Replaces online URL buttons with descriptive text (per user request: no login/online)
- Accessible from Main Menu

### Added — Audio variations (bientatsu from originals)
- **jump_alt.wav** — +12% pitch, echo effect (variation of jump.wav)
- **coin_alt.wav** — +8% pitch, tremolo effect (variation of coin.wav)
- **death_alt.wav** — -8% pitch, echo effect (variation of death.wav)
- **land_alt.wav** — +5% pitch, reverb effect (variation of land.wav)
- **bump_alt.wav** — -10% pitch, vibrato effect (variation of bump.wav)
- **bgm_alt.wav** — +8% speed, compressor (variation of bgm.wav)
- Player jump SFX now uses random pitch variation (0.92x or 1.0x) for liveliness

### Added — New icon assets (bientatsu from originals)
- **icon_cube.png, icon_circle.png, icon_triangle.png, icon_diamond.png, icon_hexagon.png** — 5 player icon variants (256x256 each, with glow)
- **icon_192.png, icon_144.png, icon_72.png** — regenerated combined icons (5 shapes arranged in cross pattern)
- **adaptive_foreground.png** — neon cube with glow halo (regenerated)
- **adaptive_background.png** — neon gradient (regenerated)
- All icons use deterministic procedural generation (seed=2026)

### Added — Input
- **practice_toggle** input action (P key) for toggling practice mode during gameplay

### Fixed — Critical bugs (P0)
- **project.godot**: `PoolStringArray("4.7", "Mobile")` → `PackedStringArray(...)` (Godot 3 → Godot 4 syntax)
- **Player.gd**: `PhysicsRayQueryParameters2D.create(from, to, mask, self)` 4th param is `Array[RID]`, not Node. Now uses `q.exclude = [get_rid()]`
- **Game.gd**: HUD/pause overlay now has `process_mode = PROCESS_MODE_ALWAYS` so pause UI works when `get_tree().paused = true`
- **MovingPlatform.gd + .tscn**: `StaticBody2D` → `AnimatableBody2D` with `sync_to_physics = true` so player rides the platform
- **Block.gd**: Now actually reads `stack_height` metadata and resizes body/top/outline/collision/side_hazard shapes. Previously h=2 blocks rendered as h=1 with floating collision gap

### Fixed — High-priority bugs (P1)
- **Coin.gd**: `collect_sfx` is now reparented to current_scene before `queue_free`, preventing audio cut-off
- **Player.gd**: Rotation now applied only to `visual_root` (Body Polygon2D), not the CharacterBody2D itself. Previously collision shape rotated causing edge-clipping and raycast drift
- **Laser.gd**: When laser turns ON while player is inside the beam, `_check_overlapping_players()` catches it (body_entered alone misses existing overlaps)
- **Bouncer.gd**: Bounce only triggers when player lands from above (`player_y < bouncer_top_y`). Previously any contact direction triggered bounce

### Fixed — Medium-priority bugs (P2)
- **Crusher.gd**: Rest-phase lerp is now delta-corrected (`1.0 - exp(-delta * 12.0)`) instead of framerate-dependent `0.2`
- **Player.gd**: Snap lerp is now delta-corrected (`1.0 - exp(-delta * 18.0)`)
- **SpikeStrip.gd**: Collision width now matches visual: `(count-1)*spike_width + spike_width*0.8` (was `count*spike_width` causing 44px over-shoot)
- **Pit.gd**: Visual fill polygon now spans `y = -60` to `y = 800` (full screen height). Previously was `0` to `400`, leaving bottom of screen unfilled
- **Pit.gd, Laser.gd, SpikeStrip.gd**: `RectangleShape2D` is now reused via cached `_rect_shape` field instead of being recreated each rebuild (resource leak fix)

### Fixed — Low-priority bugs (P3)
- **MainMenu.gd**: `quit_button.visible = false` now properly null-checked (was inconsistent with other buttons)
- **MainMenu.gd**: Removed redundant `GameManager.load_progress()` call (autoload already loads in `_ready()`)
- **export_presets.cfg**: Android version code bumped to 3, version name to 0.3.0

### Changed
- Version bumped to **0.3.0**
- Project autoloads now include `SettingsSingleton` and `PlayerProfile` alongside `GameManager`
- Main Menu: added **Garage** and **Credits** buttons (panel resized 580→660 height)
- Settings screen: added **Advanced Settings** button (panel resized 540→620 height)
- HUD: added **SpeedrunTimer** label (top-left under TopBar) and **PracticeLabel**
- Player scene: `Body` Polygon2D now has `InnerHighlight` child for new icon shapes
- Block scene: `Outline` is now directly accessible to script (`$Outline` instead of `$Body/Outline`)
- Block scene: `SideHazard/Shape` CollisionShape2D now properly referenced for resizing
- Game pause overlay: now has 2 pages with `<`/`>` navigation buttons

### Removed
- Removed deprecated `window/stretch/scale=1.0` from project.godot (not used in Godot 4)
- Removed redundant `camera.position_smoothing_*` setup in Game.gd (already configured in .tscn)

### Port summary (from GDPS-Editor-22)
The following features from the GDPS-Editor-22 mod (C++/NDK) have been ported to GDScript for Godot 4.7:
- ✅ ColoursPalette (offline portion) — 106-color picker + glow toggle
- ✅ AdvancedIconSelect (offline portion) — 5 icon shapes (replaces swing/jetpack memory patches)
- ✅ ObjectOptionsLayer → AdvancedSettings (10 object property toggles)
- ✅ advancedOptionsLayer → AdvancedSettings (8 advanced toggles)
- ✅ SpeedrunTimerHook → SpeedrunTimer (white/red invalid logic)
- ✅ PauseLayerExt → Pause Overlay Page 2 (sliders + toggles)
- ✅ GDPSManager settings → SettingsSingleton (ConfigFile-based, offline-only)
- ✅ GameManager_colorForIdx_hook → ColorPalette static class
- ✅ CreditsLayer → Credits scene (offline-only, no URL buttons)
- ✅ onPlaytestExt → Practice Mode with auto-checkpoint
- ✅ GJGarageLayer hooks → Garage scene (live player preview)
- ❌ AccountLayerExt, AccountRegisterLayerExt, MultiplayerLayerExt — skipped (online/login)
- ❌ ToolsLayer (6 URL buttons), CreditsLayer URL buttons — skipped (online)
- ❌ Memory patches (F15) — N/A in Godot (no artificial limits)

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
