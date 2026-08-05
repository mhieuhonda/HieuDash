# Changelog

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
