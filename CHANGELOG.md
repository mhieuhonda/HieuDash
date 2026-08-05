# Changelog

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
