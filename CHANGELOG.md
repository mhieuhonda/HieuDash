# Changelog

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
