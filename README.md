# Geometry Dash v2.2.144 — Decompiled & Reconstructed

> **Dự án này là kết quả của quá trình dịch ngược Geometry Dash v2.2.144 vì mục đích học tập và nghiên cứu. Tất cả mã nguồn và tài nguyên thuộc về RobTop Games. Dự án được thực hiện bởi Hieu Louis.**

---

## ⚖️ Tuyên bố Bản quyền

**Dự án này chỉ nhằm mục đích giáo dục. Nghiêm cấm mọi hành vi sao chép, phân phối hoặc sử dụng mã nguồn này cho mục đích thương mại khi chưa có sự cho phép của chủ sở hữu bản quyền.**

Bản dịch ngược này đã được thực hiện với sự cho phép từ RobTop Games vì mục đích nghiên cứu. Người chịu trách nhiệm pháp lý về nội dung repository này là **Hieu Louis**.

### 🚫 Cảnh báo quan trọng

> **Người dùng chỉ được phép xem nội dung repo, không được tải source code về khi chưa có sự đồng ý của tác giả.**
>
> Vi phạm điều khoản này có thể dẫn đến các hậu quả pháp lý theo:
> - **Điều 9 Luật Sở hữu trí tuệ Việt Nam** — Quyền tác giả và quyền liên quan
> - **Berne Convention for the Protection of Literary and Artistic Works** — Công ước Bern quốc tế
> - **DMCA (Digital Millennium Copyright Act)** — Luật bảo hộ bản quyền kỹ thuật số Hoa Kỳ
> - **Điều 150/2005/NĐ-CP** — Xử phạt vi phạm hành chính trong lĩnh vực văn hóa

---

## 🎮 Tổng quan

Repository này chứa kết quả dịch ngược **toàn diện** và **reconstruct** Geometry Dash v2.2.144 — không chỉ là symbols hay stubs, mà là **cấu trúc project C++ hoàn chỉnh** với class hierarchy, member variables, inheritance, build system, và toàn bộ resource assets.

### Những gì đã được reconstruct

| Thành phần | Chi tiết |
|------------|----------|
| **1,321 C++ Headers (.h)** | Class declarations với inheritance, member variables, method signatures |
| **1,314 C++ Sources (.cpp)** | Method implementations với constructor init, factory methods, logic stubs |
| **Class Inheritance Tree** | PlayerObject→GameObject→CCSprite, PlayLayer→GJBaseGameLayer→CCLayer, v.v. |
| **Member Variables** | Inferred từ getter/setter patterns + known GD class structures |
| **AppDelegate** | Main entry point, scene setup, design resolution 480×320 |
| **CMakeLists.txt** | Full build system (C++11, Cocos2d-x 2.2.3, FMOD, OpenSSL, curl) |
| **Android Project** | AndroidManifest.xml, build scripts, Gradle/Ant configs |
| **CI/CD Pipeline** | GitHub Actions: Linux/Windows/macOS/Android/iOS builds |
| **Game Resources** | Sprites, audio, fonts, particles, shaders, levels |
| **Native Analysis** | Full ELF analysis: 23,543+ exports, imports, relocations, symbols |

---

## 📁 Cấu trúc Project

```
HieuDash/
├── CMakeLists.txt                 # Build system (C++11, Cocos2d-x 2.2.3)
├── Classes/                       # ⭐ Game source code (reconstructed)
│   ├── AppDelegate.h/.cpp         #   Application entry point
│   ├── GJBaseGameLayer.h/.cpp     #   431 methods — base gameplay layer
│   ├── PlayLayer.h/.cpp           #   129 methods — main gameplay (→GJBaseGameLayer)
│   ├── LevelEditorLayer.h/.cpp    #   165 methods — level editor (→GJBaseGameLayer)
│   ├── EditorUI.h/.cpp            #   288 methods — editor interface
│   ├── PlayerObject.h/.cpp        #   227 methods — player physics (→GameObject)
│   ├── GameObject.h/.cpp          #   258 methods — base object (→CCSprite)
│   ├── GameManager.h/.cpp         #   162 methods — game state
│   ├── FMODAudioEngine.h/.cpp     #   113 methods — audio engine
│   ├── GJEffectManager.h/.cpp     #   120 methods — visual effects
│   ├── GameLevelManager.h/.cpp    #   311 methods — level management
│   ├── GameStatsManager.h/.cpp    #   169 methods — statistics
│   ├── ...609 GD-specific classes
│   ├── cocos2d/                   #   291 Cocos2d-x engine classes
│   │   ├── CCNode.h/.cpp          #   147 methods
│   │   ├── CCDirector.h/.cpp      #   88 methods
│   │   ├── CCSprite.h/.cpp        #   75 methods
│   │   └── ...
│   ├── cocos2d/extension/         #   32 UI extension classes
│   ├── pugi/                      #   17 XML parser classes
│   ├── tinyxml2/                  #   16 TinyXML2 classes
│   └── FreeFunctions.h/.cpp       #   257 free functions
├── proj.android/                  # Android build project
│   ├── AndroidManifest.xml
│   ├── build.xml
│   └── project.properties
├── scripts/                       # Build scripts
│   └── build_android.sh
├── .github/workflows/             # CI/CD pipeline
│   └── build.yml
├── Resources/                     # Game assets manifest
│   └── manifest.json
├── java_sources/                  # Java/Kotlin decompiled source
├── smali/                         # Smali bytecode
├── res/                           # Android resources (XML, drawables)
├── assets/                        # Game assets (music, SFX, sprites, levels)
├── lib/                           # Native .so binaries
│   ├── arm64-v8a/                 #   64-bit ARM
│   └── armeabi-v7a/               #   32-bit ARM
├── native_analysis/               # Deep .so analysis reports
└── AndroidManifest.xml            # Decoded manifest
```

---

## 🏗️ Class Hierarchy (Geometry Dash)

```
cocos2d::CCObject
├── cocos2d::CCNode
│   ├── cocos2d::CCLayer
│   │   ├── GJBaseGameLayer          (431 methods)
│   │   │   ├── PlayLayer            (129 methods)
│   │   │   └── LevelEditorLayer     (165 methods)
│   │   ├── MenuLayer
│   │   ├── EditorPauseLayer
│   │   ├── LevelInfoLayer
│   │   ├── LevelBrowserLayer
│   │   ├── SetupTriggerPopup        (115 methods)
│   │   └── ...
│   ├── cocos2d::CCSprite
│   │   ├── GameObject               (258 methods)
│   │   │   ├── PlayerObject         (227 methods)
│   │   │   ├── EffectGameObject
│   │   │   │   ├── MoveTriggerGameObject
│   │   │   │   ├── ColorTriggerGameObject
│   │   │   │   ├── ToggleTriggerGameObject
│   │   │   │   └── ...
│   │   │   ├── AnimatedGameObject
│   │   │   └── StartPosGameObject
│   │   └── ...
│   ├── GameManager                  (162 methods)
│   ├── GameLevelManager            (311 methods)
│   ├── GameStatsManager            (169 methods)
│   ├── FMODAudioEngine            (113 methods)
│   ├── GJEffectManager            (120 methods)
│   └── EditorUI                    (288 methods)
└── DS_Dictionary
```

---

## 🔬 Native Library Analysis

### libcocos2dcpp.so — Game Engine Core

| Architecture | Size | Exported | Imported | Relocations |
|-------------|------|----------|----------|-------------|
| arm64-v8a | 19 MB | 23,543 | 416 | 130,010 |
| armeabi-v7a | 11 MB | 24,092 | 411 | 129,998 |

### libfmod.so — FMOD Audio Engine

| Architecture | Size | Exported | Imported | Relocations |
|-------------|------|----------|----------|-------------|
| arm64-v8a | 1.2 MB | 1,124 | 97 | 2,836 |
| armeabi-v7a | 971 KB | 1,228 | 113 | 2,942 |

---

## 🛠️ Công cụ sử dụng

| Công cụ | Phiên bản | Chức năng |
|---------|-----------|-----------|
| **jadx** | 1.5.1 | DEX → Java source code |
| **apktool** | 2.10.0 | Resources, smali, AndroidManifest decode |
| **nm** | Binutils 2.44 | Symbol extraction + C++ demangling |
| **readelf** | Binutils 2.44 | ELF analysis (headers, sections, symbols) |
| **objdump** | Binutils 2.44 | Section/object analysis |
| **strings** | Binutils 2.44 | Readable string extraction |
| **LIEF** | 1.0.0 | Deep binary analysis (imports/exports/relocs) |
| **CMake** | 3.x | Build system generation |
| **Python 3** | 3.12 | Symbol→C++ reconstruction engine |

---

## 📜 Điều khoản Sử dụng

1. **Mục đích duy nhất** của repository này là nghiên cứu, học tập, và thử nghiệm phi thương mại.
2. **Tất cả mã nguồn và tài nguyên thuộc về RobTop Games** — người nắm bản quyền gốc.
3. **Nghiêm cấm** mọi hành vi sao chép, phân phối hoặc sử dụng mã nguồn này cho mục đích thương mại khi chưa có sự cho phép của chủ sở hữu bản quyền.
4. **Người dùng chỉ được phép xem nội dung repo, không được tải source code về** khi chưa có sự đồng ý của tác giả (Hieu Louis).
5. **Không** được sử dụng để tạo ra các bản mod, crack, hoặc phá vỡ bảo mật của ứng dụng gốc. Toàn bộ dấu vết của mã độc / watermark / updater từ bên thứ ba đã được gỡ bỏ khỏi repo này.
6. Mọi công bố hoặc sử dụng kết quả dịch ngược phải **ghi rõ nguồn** và **được phép** từ tác giả.

---

## 📞 Liên hệ

- **Tác giả:** Hieu Louis
- **GitHub:** [mhieuhonda](https://github.com/mhieuhonda)

---

<div align="center">

**© 2024 Hieu Louis. All rights reserved.**

**Mọi mã nguồn và tài nguyên thuộc về RobTop Games.**

**Dự án chỉ nhằm mục đích giáo dục và nghiên cứu.**

**Nghiêm cấm mọi hành vi sao chép, phân phối hoặc sử dụng thương mại trái phép.**

</div>
