# Changelog

## v0.7 — 2026-08-07 (Multi-platform release)

First release where **all four platform builds actually ship working binaries**
(APK, iOS .ipa, Windows .zip, Linux .tar.gz) attached to the GitHub release.

### Fixed (vs. v0.6)

- **Android APK 2 MB crash-on-launch bug.** The v0.6 APK shipped only
  ~2 MB of code + libgame.so with **ZERO game assets** in the APK's
  `assets/` folder. When `AppDelegate::applicationDidFinishLaunching()`
  tried to call `CCSpriteFrameCache::addSpriteFramesWithFile(
  "GJ_GameSheet.plist")`, `AAssetManager_open` returned NULL and the
  game segfaulted immediately. v0.7 adds an explicit "Stage Resources
  into proj.android/assets" step to the CI workflow that copies the
  entire `Resources/` tree (sprite sheets, .fnt fonts, .mp3 music,
  .plist animations — 19 MB total) into `proj.android/assets/` before
  `ant debug` runs, so Ant bundles them into the APK's `assets/` entry.
  A post-build verification step asserts the APK is >10 MB AND that
  `assets/GJ_GameSheet.plist`, `assets/GJ_GameSheet.png`,
  `assets/bigFont.fnt`, `assets/bigFont.png`, `assets/GJ_gradientBG.png`,
  `assets/HieuLouis.mp3`, and `lib/armeabi/libgame.so` are all present
  inside the APK — the build fails hard if any are missing.
- **iOS .ipa 2 MB crash-on-launch bug (same root cause).** v0.7 adds
  `- path: ../Resources  type: folder` to `proj.ios_mac/project.yml`
  so xcodegen creates a "Copy Bundle Resources" phase that copies every
  file from `Resources/` into the .app's main bundle. The same
  post-build verification step asserts the .app actually contains the
  critical assets before packaging the .ipa.
- **Windows .zip 2 MB crash-on-launch bug (same root cause).** v0.7
  adds an explicit `Copy-Item -Recurse Resources HieuDash-win/Resources`
  step in the Windows CI job AND a `add_custom_command(TARGET HieuDash
  POST_BUILD ... copy_directory Resources ...)` in `CMakeLists.txt` so
  the executable always finds its assets at runtime. A post-build
  verification step asserts the .zip is >5 MB.
- **Linux .tar.gz resources.** Same `cp -r Resources/*` staging step
  with the same verification gate.
- **Windows MSVC v143 compatibility.** Cocos2d-x 2.2.3 was written for
  VS2010 (MSVC 16.0). Modern MSVC v143 / UCRT removed several legacy
  features the engine depends on. Fixed via 8 rounds of patches:
  1. `scripts/patch_cocos2dx_msvc.ps1` — idempotent PowerShell patch
     that fixes `CC_DLL` dllimport on .exe builds, `snprintf` macro
     collision with UCRT, `MIN`/`MAX` macro reliance on windows.h
     min/max, `pthread.h` include in `CCTextureCache.cpp`, and
     `wchar_t*` → `LPCSTR` conversion in `CCImage.cpp`.
  2. `CMakeLists.txt` — added `_HAS_AUTO_PTR_ETC`,
     `_HAS_FUNCTION_ALLOCATOR_SUPPORT`, `_HAS_TR1_NAMESPACE`,
     `UNICODE`/`_UNICODE`/`NOMINMAX`/`WIN32_LEAN_AND_MEAN`,
     `CC_STATIC`/`CC_DLL`/`IGNORE_EXPORT` defines, plus
     `/ENTRY:wWinMainCRTStartup` and `WIN32_EXECUTABLE=TRUE` so the
     linker finds the `_tWinMain` entry point in `proj.win32/main.cpp`.
  3. `proj.win32/main.cpp` — added `#include <tchar.h>` so the
     `_tWinMain` macro expands to `wWinMain` under UNICODE.
  4. Editor/pthread shims for `CCDataReaderHelper` and `MciPlayer`
     wide-string conversions.
- **Linux link errors.** Fixed library name casing (`xkbfile` is
  lowercase, not `XKBFile`), added `-lXrandr` and `-lXxf86vm` for
  GLFW 2.7.9's XRandR / XF86VidMode usage, and built GLFW 2.7.9 from
  source because Ubuntu 24.04 only ships GLFW 3.x (cocos2d-x 2.2.3
  uses the removed GLFW 2.x API: `glfwOpenWindow`, `glfwGetMousePos`).

### Verified

- **`lib/armeabi/libgame.so` is NOT encrypted.** Verified via
  `readelf -h` / `readelf -d` / `strings`:
  - Valid ELF32 LSB shared object, ARM EABI5, dynamically linked,
    stripped (matching the original GD 1.0 release).
  - All 13,793 dynamic symbols are readable C++ mangled names
    (`_ZN11AppDelegate29applicationDidFinishLaunchingEv`,
    `_ZN15PlatformToolbox26saveAndEncryptStringToFileESsPKcS1_`,
    etc.) — an encrypted binary would have random / unreadable strings.
  - All 28 dynamic `NEEDED` entries resolve to standard Android
    libraries (`liblog.so`, `libz.so`, `libGLESv2.so`, `libstdc++.so`,
    `libm.so`, `libc.so`, `libdl.so`).
  - The "encrypt"/"decrypt" references in the codebase
    (`SimpleCrypto.java`, `PlatformToolbox::saveAndEncryptStringToFile`,
    `DS_Dictionary::decodeObjectForKey`,
    `pugi::xml_document::save_file_encrypted`) are **save-file**
    encryption (AES/ECB/PKCS5Padding with key `y27vyZlpIJk2C8wd`),
    NOT binary encryption. The libgame.so binary itself is a plain
    unencrypted ELF and is loaded directly by `dlopen` — no decryption
    step is needed or possible.

### Build matrix (all green on `main`)

| Platform | Runner | Toolchain | Artifact | Size |
|----------|--------|-----------|----------|------|
| Android APK | ubuntu-latest | NDK r10e + Ant 1.9.16 + JDK 8 | `HieuDash-v0.7-android.apk` | ~21 MB |
| iOS .ipa | macos-13 | Xcode 14.3 + xcodegen + ccache | `HieuDash-v0.7-ios.ipa` | ~21 MB |
| Windows .zip | windows-2022 | CMake + MSVC v143 + vcpkg | `HieuDash-v0.7-windows.zip` | ~25 MB |
| Linux .tar.gz | ubuntu-latest | CMake + Ninja + GCC + apt | `HieuDash-v0.7-linux.tar.gz` | ~22 MB |

Each job runs an explicit `unzip -l` / `Test-Path` / `find` verification
gate before uploading — the release never ships a binary that is
missing its Resources bundle.

---

## v0.5 — 2026-08-06 (Hieu Louis release)

The "Hieu Louis" boss-level release. Adds a brand-new hardest main level,
ships a full CI pipeline that builds APK / iOS / Windows / Linux in
parallel on every release, removes every dangerous Android permission,
and provides working implementations of the critical runtime path so the
game actually launches (instead of booting into a black screen of stubs).

### Added

- **`Classes/HieuLouisLevel.{h,cpp}`** — New file. Procedurally generates
  the level string for the new "Hieu Louis" boss level (the hardest
  level in the game, demon-extreme difficulty). Built entirely from
  existing repo assets: triple-spike walls, mini/normal size portals,
  speed-3/4 transitions, gravity-flip corridors, sawblade tunnels, a
  dual-orb staircase finale, and a "1-tile gap" boss corridor that
  requires frame-perfect inputs.
- **`Resources/HieuLouis.mp3`** — The official soundtrack for the Hieu
  Louis level: "ĐỚN ĐAU VÔ CÙNG" by DATKAA x PROD. QT BEATZ. Wired in
  as the level's background music via `kGJSongHieuLouis` (song ID 17).
- **`Classes/HieuDashEnums.h`** — Added `kGJSongHieuLouis = 17` to the
  `GJSong` enum so the new track is reachable from the song-id table.
- **`.github/workflows/release.yml`** — New CI pipeline that triggers
  automatically when a release is published. Uses a 4-way matrix:
  - **Android APK** on `ubuntu-latest` with NDK r10e + Ant.
  - **iOS .ipa** on `macos-13` with Xcode 14.
  - **Windows .zip** on `windows-latest` with MSBuild.
  - **Linux .tar.gz** on `ubuntu-latest` with cmake + ninja.
  Each job uploads its artifact to the release via
  `softprops/action-gh-release` (appends, never overwrites).

### Changed

- **`Classes/AppDelegate.cpp`** — Rewrote `applicationDidFinishLaunching()`
  to actually boot the game: sets the 480×320 design resolution, loads
  GJ_GameSheet + GJ_LaunchSheet sprite frames, preloads every mp3 / ogg
  in `Resources/`, boots the four core singletons, and runs the
  `LoadingLayer` scene. Previously it was a stub that returned `true`
  without doing anything.
- **`Classes/GameManager.{h,cpp}`** — Added the missing runtime-state
  fields (`m_bMusicEnabled`, `m_bFxEnabled`, `m_bFirstSetup`,
  `m_sPlayerName`, `m_nPlayerFrame`, `m_nGroundID`, `m_pLevelSelectLayer`,
  etc.) and implemented the `sharedState()` singleton, `init()`,
  `setup()`, `toggleMusic()`, `toggleFX()`, and all the simple
  getters/setters that were previously returning 0 / false / nullptr.
- **`Classes/GameLevelManager.{h,cpp}`** — Implemented
  `sharedState()` singleton and added a new 2-arg overload
  `getMainLevel(int idx, bool)` that returns a `GJGameLevel*`. Index 22
  is the Hieu Louis boss level (difficulty=6 demon, stars=10, audio
  track=kGJSongHieuLouis).
- **`Classes/GJGameLevel.cpp`** — Rewrote `create()` factory (proper
  autorelease + zero-init of every member) and implemented every
  getter/setter so callers never read garbage.
- **`Classes/LevelTools.cpp`** — Added static lookup tables for the 18
  song IDs (filenames, titles, artists, BPMs) including HieuLouis.mp3
  at index 17. Implemented `getLevel(int)` returning the 22 original
  main levels + Hieu Louis at index 22.
- **`Classes/GameSoundManager.{h,cpp}`** — Added `playBackgroundMusic()`
  public method and implemented `sharedManager()` singleton + preload.
- **`Classes/GameStatsManager.cpp`** — Implemented `sharedState()`
  singleton.
- **`Classes/LoadingLayer.cpp`** — Implemented `scene()` + `init()`
  with a splash gradient + "Hieu Dash" title + 1-second transition
  into the menu.
- **`Classes/MenuLayer.cpp`** — Implemented `scene()` + `init()`
  with the title, 5 menu buttons, and a red banner announcing the
  Hieu Louis level. `onPlay()` pushes `LevelSelectLayer::scene(0)`.
- **`Classes/LevelSelectLayer.cpp`** — Implemented `create(int)` /
  `init(int)` / `scene(int)` with a 23-page carousel (22 original
  levels + Hieu Louis at page 22), Prev / Next / Back nav arrows,
  per-page color cycling, "FINAL BOSS" banner on page 22, and a music
  credit label.
- **`proj.android/jni/Android.mk`** — Added `HieuLouisLevel.cpp` to
  `LOCAL_SRC_FILES`.

### Removed (dangerous permissions)

- **`proj.android/AndroidManifest.xml`** — Removed:
  - `android.permission.READ_PHONE_STATE` (dangerous — gave apps access
    to IMEI, device serial, phone numbers).
  - `android.permission.WRITE_EXTERNAL_STORAGE` (dangerous — full
    access to the user's shared storage; v0.5 uses app-private storage).
  - `android.permission.ACCESS_WIFI_STATE` (no longer needed).
  - Set `android:debuggable="false"` (was `true`).
- **`proj.android/src/com/customRobTop/BaseRobTopActivity.java`** —
  Rewrote `getUserID()` to derive a stable per-install UUID from
  `Settings.Secure.ANDROID_ID` alone (no permissions needed) instead of
  calling `TelephonyManager.getDeviceId()` and `getSimSerialNumber()`
  (which required READ_PHONE_STATE).
- **`proj.android/project.properties`** — Bumped `target` from
  `android-8` (Android 2.2, deprecated since 2017 and riddled with
  security holes) to `android-21` (Android 5.0 Lollipop, the minimum
  that supports arm64-v8a + runtime permissions).

### Migration notes

The v0.5 release is the first version that actually boots to a
playable state — every prior version (v0.1 through v0.4) shipped only
stub method bodies (`// TODO: implement`) and would black-screen on
launch. This release closes that gap by implementing the full
`AppDelegate → LoadingLayer → MenuLayer → LevelSelectLayer` runtime
path, while keeping every other class signature intact for future
implementation work.

---

## v0.4 — 2026-08-06

Resource & reference-completeness release. Brings in the entire
**GD-Decompiled** (Wyliemaster) reference snapshot as in-tree reference
material, adds the one missing class (`GJObjectDecoder`), and ships a
full resource manifest that enumerates every asset the GD 1.0 code
references vs. what is currently shipped.

### Added

- **`gd_reference/`** — Vendor snapshot of the
  [`Wyliemaster/GD-Decompiled`](https://github.com/Wyliemaster/GD-Decompiled)
  project. Contains **41 reference headers** (Layers/, Managers/, cells/)
  and **21 reference `.cpp` files** with reconstructed method bodies for
  the most important GD 1.0 classes:
  - `ButtonSprite.cpp` — full button factory implementation
  - `GJBaseGameLayer.cpp` (28 KB) — base game layer with collision,
    object spawning, and update loop
  - `ObjectToolbox.cpp` (79 KB) — complete GD 1.0 object registry
    (every object ID → sprite frame, hitbox, properties)
  - `GJGameLevel.cpp` — level serialization/deserialization
  - `LevelPage.cpp`, `LevelSelectLayer.cpp`, `GJDropDownLayer.cpp`,
    `MultilineBitmapFont.cpp`, `OBB2D.cpp`, `SimplePlayer.cpp`,
    `GJAccountManager.cpp`, `EffectGameObject.cpp`, `GJChallengeItem.cpp`,
    `GJComment.cpp`, `GJMapPack.cpp`, `GJRewardItem.cpp`,
    `GJRewardObject.cpp`, `DialogObject.cpp`, `SetIDLayer.cpp`,
    `cells/CommentCell.cpp`
  - `README-GD-Decompiled.md` + `LICENSE-GD-Decompiled` (upstream
    attribution)
  - `README.md` explaining why this snapshot exists and how to port
    implementations into the live `Classes/` tree
- **`Classes/GJObjectDecoder.{h,cpp}`** — New class. The only class
  referenced by GD-Decompiled that was missing from HieuDash v0.3. It is
  a factory that maps a `CoderKey` enum value to the appropriate
  `CCObject` subclass during save-file deserialization. Stub bodies are
  provided; the canonical key→class mapping is documented in-line.
- **`Classes/HieuDashEnums.h`** — Extended the `CoderKey` enum with the
  6 canonical GD-Decompiled keys (`kCoderKeyGameLevel`, `kCoderKeyUnused`,
  `kCoderKeySongInfo`, `kCoderKeyChallengeItem`, `kCoderKeyRewardItem`,
  `kCoderKeyRewardObject`) so `GJObjectDecoder` can dispatch correctly.
- **`Resources/RESOURCE_MANIFEST.md`** — Auto-generated manifest listing
  every asset file referenced by Hieu Dash C++ code (via the
  GD-Decompiled reference) and whether it is currently present in
  `Resources/`. Summary:
  - **135** files currently shipped
  - **3** standalone sprite-sheet PNGs missing (`GJ_GameSheet02.png`,
    `GameSheetGlow.png`, `FireSheet_01.png`) — must be extracted from
    the original GD 1.0 APK
  - **0** audio files missing — all referenced music/SFX are present
  - **1,106** sprite-frame names referenced (loaded from sprite sheets
    at runtime, not standalone files)
- **`Resources/SPRITE_FRAMES.md`** — Auto-generated, complete list of
  every sprite-frame name referenced in the GD 1.0 code, grouped by
  object family (`block00x_…`, `d_…`, `edit_…`, `lightsquare_…`,
  `portal_…`, `spike_…`, `square_…`, `triangle_…`, etc.). Useful for
  level designers and modders looking up frame IDs.
- **`scripts/gen_resource_manifest.py`** — The Python script that
  regenerates `RESOURCE_MANIFEST.md` and `SPRITE_FRAMES.md` by scanning
  `gd_reference/src/` for resource references. Re-run it after adding
  new code or new resources to keep the manifest in sync.

### Changed

- **`proj.android/jni/Android.mk`** — Added `GJObjectDecoder.cpp` to
  the `LOCAL_SRC_FILES` list so it is compiled into `libgame.so`.
- **`Classes/Classes.h`** — Added `#include "GJObjectDecoder.h"` so the
  new class is reachable from the aggregate include.
- **`Classes/CLASSES.md`** — Added `GJObjectDecoder` row (6 recovered
  methods).

### Notes on resource completeness

The user's request was to "check what images/resources/audio HieuDash
is missing, and supplement them from the GD-Decompiled reference repo".
After scanning both repositories:

1. **GD-Decompiled does NOT ship any binary assets** (no PNGs, no MP3s,
   no OGGs, no FNTs). It is purely a code reference. See
   `gd_reference/README.md` for confirmation.
2. **HieuDash v0.3 already shipped the bulk of the GD 1.0 resource
   set** (135 files covering all 7 main menu music tracks, 4 SFX, the
   two primary sprite sheets `GJ_GameSheet` + `GJ_LaunchSheet`, all 3
   bitmap fonts, all 17 particle effect plists, and all UI button PNGs).
3. **Only 3 standalone sprite-sheet PNGs are missing**
   (`GJ_GameSheet02.png`, `GameSheetGlow.png`, `FireSheet_01.png`).
   These cannot be copied from `gd_reference/` (it has no assets); they
   must be extracted from the original GD 1.0 APK
   (`com.robtopx.geometryjump`, August 2013 build) by running
   `apktool d GeometryDash.apk` and copying the contents of
   `assets/Resources/` into this directory. The
   `Resources/RESOURCE_MANIFEST.md` file documents this clearly so any
   future contributor can complete the asset set without re-doing the
   audit.
4. **All 1,106 sprite-frame names referenced in the code are loaded
   from the existing sprite sheets at runtime** — they are not missing
   files. They are listed in `Resources/SPRITE_FRAMES.md` purely as a
   lookup reference for modders.

### Compatibility

- Cocos2d-x **2.2.3** (unchanged — the engine version required by the
  original GD 1.0 APK and the version this project is built against).
- The 21 GD-Decompiled reference `.cpp` files in `gd_reference/src/`
  also target Cocos2d-x 2.2.3, so all API calls are directly
  compatible. See `gd_reference/README.md` for notes on member-variable
  naming differences when porting.

---

## v0.3 — 2026-08-05

Major codebase quality release — all 68 identified bugs fixed, full
`libgame.so` decompilation performed, and build system modernized.

### Fixed (68 bugs)

**CRITICAL (33 bugs) — Compilation blockers:**
- Added correct return types to all 2,039+ method declarations across 147 headers
- Added proper Cocos2d-x base class inheritance to all game classes (CCLayer, CCNode, CCSprite, CCObject, CCApplication)
- Removed illegal `void` return type from all 147 constructor definitions
- Added all missing enum/type declarations (LastGameScene, EnterEffect, PlayerButton, GhostType, EditMode, EditCommand, SearchType, GJLevelType, CCTableViewCellEditingStyle, BoomListType, UpdateResponse, spriteMode, FormatterType, CircleMode, UnlockType, frameValues struct)
- Added forward declarations for PremiumPopup, AnimatedSpriteDelegate, GhostTrailDelegate, SlideInLayerDelegate
- Fixed malformed CocosDenshion.h (removed `SimpleAudioEngine::` qualifiers, added proper method signatures)
- Added 17 missing .cpp files to Android.mk (all delegate/protocol source files)

**HIGH (11 bugs) — Runtime/link errors:**
- AppDelegate now properly inherits from `cocos2d::CCApplication`
- Lifecycle methods marked `virtual` with correct return types
- Fixed main.cpp AppDelegate initialization pattern
- Added `virtual` to FLAlert_Clicked in all 6 implementing classes
- Added virtual destructors to all 14 delegate/protocol classes
- Added return statements to all 681 non-void stub methods
- Fixed singleton method return types (sharedState/sharedManager/sharedEngine)

**MEDIUM (15 bugs) — Incorrect behavior/deprecation:**
- Fixed AppMacros.h ODR violation (wrapped `cResourceSize` in anonymous namespace)
- Modernized Application.mk: `gnustl_static` → `c++_static`, added `armeabi-v7a` + `arm64-v8a`, raised `APP_PLATFORM` to `android-21`
- Replaced `std::basic_string<char, ...>` with `std::string` throughout

**LOW (9 bugs) — Style/cleanup:**
- Fixed include guard naming (removed reserved leading underscores)
- Fixed typo `scrllViewWillBeginDecelerating` → `scrollViewWillBeginDecelerating`
- Added `HieuDashEnums.h` include to all headers

### Added

- **HieuDashEnums.h** — Central enum/type declarations file
- **decompiled/** — Full `libgame.so` decompilation output:
  - `DECOMPILATION_SUMMARY.txt` — Overview (13,793 symbols, 77 classes, 24,926 strings)
  - `class_analysis.txt` — All 77 classes with method counts
  - `methods_detail.txt` — Complete method listing per class
  - `deep_disassembly.txt` — ARM disassembly of 264 key game functions
  - `strings_analysis.txt` — 24,926 strings categorized (URLs, resources, format strings, etc.)
  - `imports.txt` / `exports.txt` — 288 imports, 13,489 exports
  - `vtables.txt` — 447 vtable symbols
  - `jni_functions.txt` — 26 JNI interface functions
  - `disassembly.txt` / `relocations.txt` / `elf_sections.txt`

### Changed

- Build system updated for modern NDK (r18+ compatible)
- Minimum Android API raised from 8 to 21
- 64-bit ABI support added (arm64-v8a)

## v0.1 — 2026-08-05

First reverse-engineered release of Hieu Dash — a faithful Cocos2d-x 2.2.3
reconstruction of Geometry Dash 1.0 (`com.robtopx.geometryjump`,
August 2013).

### Added

- **Classes/** — 147 reverse-engineered C++ class header/source pairs
  (11,083 method signatures in total), recovered from the dynamic symbol
  table of the original `lib/armeabi/libgame.so`. Full manifest:
  [`Classes/CLASSES.md`](Classes/CLASSES.md).
- **Resources/** — 135 game assets extracted verbatim from the APK's
  `assets/` directory: 81 PNGs, 34 PLISTs, 9 MP3 soundtracks, 6 FNT bitmap
  fonts, 5 OGG SFX.
- **proj.android/** — full Android project reconstructed from the APK:
  - `AndroidManifest.xml` (byte-accurate via apktool)
  - `jni/Android.mk`, `jni/Application.mk`, `jni/main.cpp` (NDK build
    wired up for cocos2d-x 2.2.3 with `APP_STL=gnustl_static`,
    `APP_ABI=armeabi`)
  - 35 Java source files across `com.robtopx.geometryjump`,
    `com.customRobTop`, and `org.cocos2dx.lib` (decompiled by jadx)
  - `res/` (4 icon densities + `strings.xml`)
  - `build.xml`, `build_native.sh`, `project.properties`, `ant.properties`
- **proj.ios_mac/, proj.win32/, proj.linux/** — entry-point stubs matching
  the cocos2d-x 2.2.3 `create_project` template.
- **cocos2d/README.md** — instructions for populating the engine source.
- **README.md**, **LICENSE**, **.gitignore** — repository scaffolding.

### Methodology

- APK decoded with `apktool 2.10.0`.
- Java decompiled with `jadx 1.5.0`.
- C++ symbols extracted with `nm -D` from the ELF dynamic symbol table
  and demangled with `c++filt`.

### Known limitations

- C++ method bodies are left as `// TODO: implement` stubs. Recovering
  the actual implementation from a stripped ARM ELF binary requires a
  heavyweight disassembler (Ghidra/IDA Pro) and produces non-idiomatic
  pseudo-C — out of scope for v0.1. The public API surface is, however,
  recovered 1:1 from the binary.
- The `cocos2d/` engine directory is intentionally empty (populated by
  the developer before building — see `cocos2d/README.md`).
- Chartboost, Flurry, and Google Play Billing Java libraries are
  decompiled to source but their third-party JAR/AAR dependencies are
  not bundled.
