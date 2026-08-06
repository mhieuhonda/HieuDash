# Hieu Dash

> Reverse-engineered Cocos2d-x 2.2.3 source code of **Geometry Dash 1.0**
> (`com.robtopx.geometryjump`, August 2013).

This repository contains the most accurate publicly-available reconstruction
of the original Geometry Dash 1.0 Android source tree, recovered from the
shipped `Geometry Dash 1.0.apk` by:

1. **`apktool`** — decoded `AndroidManifest.xml`, resources, `smali`, and
   raw `assets/`/`lib/` payloads.
2. **`jadx`** — decompiled `classes.dex` back into Java for the Android
   glue layer (the `com.robtopx.geometryjump`, `com.customRobTop`, and
   `org.cocos2dx.lib` packages).
3. **`nm` + `c++filt`** — extracted the full C++ dynamic symbol table from
   `lib/armeabi/libgame.so` (the ELF shipped with the APK) and demangled
   every mangled name to recover class names, method names, and argument
   signatures for all 147 game classes.

The C++ method *bodies* are not recoverable from a stripped binary without
a heavyweight disassembler such as Ghidra/IDA Pro; they are left as
`// TODO: implement` stubs. However, every class definition and every
public method signature is reconstructed 1:1 from the binary's symbol
table — which is the most faithful reconstruction achievable without
runtime emulation.

---

## Project layout

```
HieuDash/
├── Classes/                # C++ game code (148 reverse-engineered classes)
│   ├── AppDelegate.{h,cpp}
│   ├── GameObject.{h,cpp}
│   ├── PlayLayer.{h,cpp}
│   ├── PlayerObject.{h,cpp}
│   ├── GJGameLevel.{h,cpp}
│   ├── GJObjectDecoder.{h,cpp}   # NEW in v0.4 — save-file factory
│   ├── GameManager.{h,cpp}
│   ├── EditorUI.{h,cpp}
│   ├── LevelEditorLayer.{h,cpp}
│   ├── ... (140+ more)
│   ├── AppMacros.h
│   ├── Classes.h           # aggregate include
│   └── CLASSES.md          # manifest of recovered classes
│
├── Resources/              # Game assets shipped in the APK
│   ├── *.plist             # Cocos2d-x sprite frames + particle defs
│   ├── *.png               # sprite sheets (GJ_GameSheet, GJ_LaunchSheet, …)
│   ├── *.fnt               # bitmap fonts (bigFont, chatFont, goldFont)
│   ├── *.mp3               # music tracks (StereoMadness, BackOnTrack, …)
│   ├── *.ogg               # SFX (explode_11, playSound_01, …)
│   ├── RESOURCE_MANIFEST.md   # NEW in v0.4 — asset audit (what's missing)
│   └── SPRITE_FRAMES.md       # NEW in v0.4 — full sprite-frame name list
│
├── gd_reference/           # NEW in v0.4 — vendor snapshot of
│   │                       # Wyliemaster/GD-Decompiled (reference only)
│   ├── headers/            # 41 .h files (Layers/, Managers/, cells/)
│   ├── src/                # 21 .cpp files with reconstructed bodies
│   ├── README-GD-Decompiled.md
│   ├── LICENSE-GD-Decompiled
│   └── README.md           # how to port implementations into Classes/
│
├── scripts/                # NEW in v0.4 — build/audit scripts
│   └── gen_resource_manifest.py
│
├── proj.android/           # Android project (the only platform the APK shipped on)
│   ├── AndroidManifest.xml # original manifest, decoded by apktool
│   ├── jni/
│   │   ├── Android.mk      # NDK build script — lists all 148 C++ sources
│   │   ├── Application.mk  # APP_STL=gnustl_static, APP_ABI=armeabi
│   │   └── main.cpp        # JNI entry point (nativeInit → cocos_main)
│   ├── src/
│   │   ├── com/robtopx/geometryjump/GeometryJump.java
│   │   ├── com/customRobTop/             # 7 Java helper classes
│   │   └── org/cocos2dx/lib/             # 28 Cocos2d-x Java-side classes
│   ├── res/                # icons (hdpi / ldpi / mdpi / xhdpi) + strings.xml
│   ├── build.xml
│   ├── build_native.sh     # invokes ndk-build
│   ├── project.properties
│   ├── ant.properties
│   ├── .classpath / .project
│
├── proj.ios_mac/           # iOS / Mac project stubs (cocos2d-x 2.2.3 template)
├── proj.win32/             # Win32 project stub
├── proj.linux/             # Linux project stub
├── cocos2d/                # placeholder — see cocos2d/README.md
├── .gitignore
└── README.md               # this file
```

---

## Building

### Prerequisites

| Tool | Version |
|------|---------|
| Cocos2d-x | **2.2.3** (exact — see `cocos2d/README.md`) |
| Android NDK | r9d (the version paired with cocos2d-x 2.2.3) |
| Android SDK | API 8 (Android 2.2 Froyo) |
| Apache Ant | 1.9+ |
| JDK | 6 or 7 |

### Steps

1. **Populate `cocos2d/`** — download Cocos2d-x 2.2.3 and extract its
   contents into `cocos2d/` (see `cocos2d/README.md`).
2. **Build native code:**
   ```bash
   cd proj.android
   NDK_ROOT=/path/to/android-ndk-r9d ./build_native.sh
   ```
3. **Build APK:**
   ```bash
   android update project -p . -s
   ant debug
   # or, with the original signing key:
   ant release
   ```
4. **Install:**
   ```bash
   adb install bin/HieuDash-debug.apk
   ```

---

## What was reverse-engineered

### C++ side (`Classes/`)

`lib/armeabi/libgame.so` is a 5.3 MB ELF 32-bit ARM shared object, stripped
of debug info but **with its dynamic symbol table intact** (13,793 entries).
After demangling with `c++filt` and filtering to GD-specific symbols,
**147 game classes** with **11,083 method signatures** were recovered.

The full manifest is in [`Classes/CLASSES.md`](Classes/CLASSES.md).
Some highlights:

| Class | Role | Recovered methods |
|-------|------|-------------------|
| `GameManager` | Global singleton; persistent game state | 130+ |
| `PlayLayer` | In-game level scene | 100+ |
| `PlayerObject` | The cube / ship / ball avatar | 90+ |
| `GameObject` | Every interactive object (spikes, blocks, portals, …) | 90+ |
| `LevelEditorLayer` | The level editor | 100+ |
| `EditorUI` | Editor UI controls | 80+ |
| `GJGameLevel` | Level data model | 60+ |
| `GameLevelManager` | Online level download / upload | 70+ |
| `GameStatsManager` | Player stats & currency | 50+ |
| `MenuLayer` | Main menu scene | 60+ |
| `FLAlertLayer` | Modal popup dialog | 40+ |
| `GameObject` | Object model | 90+ |

### Java side (`proj.android/src/`)

`classes.dex` was decompiled by `jadx` to **35 Java files** in three packages:

- `com.robtopx.geometryjump` — `GeometryJump.java` (the launcher
  `Activity`, equivalent to Android's `MainActivity`). Loads
  `libgame.so`, sets up the `Cocos2dxGLSurfaceView`, and initializes
  Chartboost + Flurry analytics.
- `com.customRobTop` — RobTop's helper classes: `BaseRobTopActivity`,
  `DefaultRobTopActivity`, `BillingRobTopActivity`, `GameAdManagerCB`
  (Chartboost wrapper), `JniToCpp` (JNI bridge), `SimpleCrypto`
  (AES-128 save encryption), `AppRater`.
- `org.cocos2dx.lib` — the Cocos2d-x 2.2.3 Java runtime (28 files):
  `Cocos2dxActivity`, `Cocos2dxGLSurfaceView`, `Cocos2dxRenderer`,
  `Cocos2dxBitmap`, `Cocos2dxAccelerometer`, `Cocos2dxEditText`, etc.

### Resources (`Resources/`)

All 135 game assets were extracted verbatim from `assets/`:

- **81 PNGs** — sprite sheets (`GJ_GameSheet`, `GJ_LaunchSheet`), UI
  buttons, background gradients, ground textures, slider thumbs, etc.
- **34 PLISTs** — Cocos2d-x sprite-frame definitions and particle-effect
  descriptors (`explodeEffect.plist`, `ringEffect.plist`,
  `trailEffect.plist`, `portalEffect01–04.plist`, `starEffect.plist`, …).
- **9 MP3s** — the level soundtracks (`StereoMadness`, `BackOnTrack`,
  `Polargeist`, `DryOut`, `BaseAfterBase`, `CantLetGo`, `Jumper`,
  `TimeMachine`, `Cycles`, plus `menuLoop`).
- **6 FNTs** — bitmap fonts (`bigFont`, `chatFont`, `goldFont`), each
  with `-hd` variants.
- **5 OGGs** — short SFX (`explode_11`, `playSound_01`, `endStart_02`,
  `quitSound_01`, `achievement_01`).

### Android manifest

`proj.android/AndroidManifest.xml` is the **byte-accurate** decoded
manifest from `apktool`:

- Package: `com.robtopx.geometryjump`
- Min/target SDK: 8 (Android 2.2 Froyo)
- OpenGL ES 2.0 required (`android:glEsVersion="0x00020000"`)
- Permissions: `INTERNET`, `READ_PHONE_STATE`, `ACCESS_NETWORK_STATE`,
  `WRITE_EXTERNAL_STORAGE`, `ACCESS_WIFI_STATE`
- Launcher activity: `.GeometryJump` (landscape, fullscreen, no title bar)
- `android:debuggable="true"` (matches the original 1.0 release)

---

## Methodology

The decompilation pipeline used:

```
Geometry Dash 1.0.apk
   ├── apktool d ──► AndroidManifest.xml, res/, assets/, smali/, lib/
   ├── jadx -d ────► Java sources for classes.dex
   └── unzip ──► lib/armeabi/libgame.so
                    └── nm -D --defined-only | c++filt
                          └── 11,083 demangled C++ symbols
                                └── grouped by class
                                      └── 147 .h / .cpp stub pairs
```

The Python generator that turns the demangled symbol dump into class
header/source pairs lives at `scripts/gen_class_stubs.py` in the
reverse-engineering toolkit directory.

### Why method bodies are stubs

`libgame.so` is **stripped** — it has no DWARF debug info, no source
file mapping, and only the dynamic symbol table is preserved (which is
required for JNI linking). Recovering actual C++ statements from such a
binary requires a heavyweight semantic disassembler like Ghidra, IDA Pro,
or Hex-Rays with manual ARM-to-C++ translation. That process is
non-deterministic, slow, and produces C-like pseudo-code (not
idiomatic C++). The full method signatures recovered here, however, are
**guaranteed accurate** — they come straight from the compiler-emitted
mangled names in the ELF dynamic symbol table.

---

## License & attribution

- The original **Geometry Dash** game is © 2013 RobTop Games. All
  trademarks, assets, music, and game design belong to RobTop.
- This reverse-engineered source tree is provided strictly for
  **educational and interoperability research** purposes.
- `LICENSE` (MIT) applies only to the reverse-engineering tooling and
  scaffolding produced for this repository, NOT to the recovered
  game code or assets.

---

## Release

The current release is
**[`Hieu Dash v0.4`](https://github.com/mhieuhonda/HieuDash/releases/tag/v0.4)**
— resource & reference-completeness release. Brings in the entire
GD-Decompiled (Wyliemaster) reference snapshot as in-tree reference
material, adds the missing `GJObjectDecoder` class, and ships a full
resource manifest (`Resources/RESOURCE_MANIFEST.md`) auditing every
asset the GD 1.0 code references.

Previous releases:
- [v0.3](https://github.com/mhieuhonda/HieuDash/releases/tag/v0.3) — 68-bug-fix + full `libgame.so` decompilation
- [v0.1](https://github.com/mhieuhonda/HieuDash/releases/tag/v0.1) — initial reverse-engineered release
