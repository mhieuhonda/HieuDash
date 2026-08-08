# Geometry Dash v2.2.144 — Decompiled Source

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
> - **Điều 150/2005/NĐ-CP** — Xử phạt vi phạm hành chính trong lĩnh vực văn hóa, thông tin

---

## 📋 Tổng quan Dịch ngược

Cuộc dịch ngược này bao gồm **tất cả các thành phần** của file APK Geometry Dash Mod 2.2.144:

| Thành phần | Công cụ | Chi tiết |
|------------|---------|----------|
| **Java/Kotlin Source** | jadx 1.5.1 | Toàn bộ mã nguồn Java từ DEX bytecode |
| **Smali Bytecode** | apktool 2.10.0 | DALVIK bytecode trung gian |
| **Android Resources** | apktool 2.10.0 | XML layouts, drawables, values, mipmap |
| **Assets** | apktool 2.10.0 | Âm thanh, nhạc, sprite sheets, particle effects |
| **AndroidManifest.xml** | apktool 2.10.0 | Manifest đã decode đầy đủ |
| **Native C++ Headers (.h)** | Symbol reconstruction | 1,323 file header từ demangled C++ symbols |
| **Native C++ Source (.cpp)** | Symbol reconstruction | 1,323 file nguồn với method stubs |
| **Native .so Analysis** | readelf/objdump/nm/strings/LIEF | Phân tích sâu ELF, sections, symbols, imports/exports |
| **Raw .so Binaries** | — | File .so nguyên bản (arm64-v8a + armeabi-v7a) |

---

## 📁 Cấu trúc Repository

```
HieuDash/
├── Classes/                        # ⭐ Native C++ source (reconstructed from .so)
│   ├── GJBaseGameLayer.h/.cpp     #   431 methods — base game layer
│   ├── GameLevelManager.h/.cpp    #   311 methods — level management
│   ├── EditorUI.h/.cpp            #   288 methods — level editor UI
│   ├── GameObject.h/.cpp          #   258 methods — game object base
│   ├── PlayerObject.h/.cpp        #   227 methods — player physics
│   ├── GameManager.h/.cpp         #   162 methods — game state manager
│   ├── PlayLayer.h/.cpp           #   129 methods — gameplay layer
│   ├── FMODAudioEngine.h/.cpp     #   113 methods — audio engine wrapper
│   ├── ...                        #   609+ GD-specific classes
│   ├── cocos2d/                   #   291 Cocos2d-x engine classes
│   │   ├── CCNode.h/.cpp          #     147 methods
│   │   ├── CCDirector.h/.cpp      #     88 methods
│   │   ├── CCSprite.h/.cpp        #     75 methods
│   │   └── ...
│   ├── cocos2d/extension/         #   32 extension classes
│   ├── pugi/                      #   17 pugixml classes
│   ├── tinyxml2/                  #   16 TinyXML2 classes
│   ├── fmt/                       #   6 fmt formatting classes
│   ├── FreeFunctions.h/.cpp       #   257 free functions
│   └── ...
├── java_sources/                   # Java/Kotlin decompiled source (jadx)
├── smali/                          # Smali bytecode (apktool baksmali)
├── res/                            # Decoded Android resources
├── assets/                         # Game assets (music, SFX, sprites, levels)
├── lib/                            # Native .so binaries (raw)
│   ├── arm64-v8a/
│   │   ├── libcocos2dcpp.so       #   Cocos2d-x engine (19 MB, 23,543 exports)
│   │   └── libfmod.so             #   FMOD audio (1.2 MB, 1,124 exports)
│   └── armeabi-v7a/
│       ├── libcocos2dcpp.so       #   Cocos2d-x engine (11 MB, 24,092 exports)
│       └── libfmod.so             #   FMOD audio (1 MB, 1,228 exports)
├── native_analysis/                # Deep .so analysis reports
│   ├── arm64-v8a/
│   │   ├── libcocos2dcpp_elf_header.txt
│   │   ├── libcocos2dcpp_sections.txt
│   │   ├── libcocos2dcpp_dynamic.txt
│   │   ├── libcocos2dcpp_symbols.txt
│   │   ├── libcocos2dcpp_nm_demangled.txt
│   │   ├── libcocos2dcpp_lief_analysis.json
│   │   ├── libcocos2dcpp_lief_report.txt
│   │   └── ...
│   └── armeabi-v7a/
│       └── (same structure)
├── AndroidManifest.xml             # Decoded manifest
├── apktool.yml                     # apktool configuration
└── README.md
```

---

## 🔬 Native C++ Source Reconstruction

Phần quan trọng nhất của cuộc dịch ngược này là **trích xuất và tổ chức toàn bộ native C++ code** từ file `libcocos2dcpp.so` thành các file `.h` và `.cpp` tương ứng.

### Phương pháp

1. **Trích xuất C++ symbols** — Sử dụng `nm -D --demangle` để lấy toàn bộ exported/imported symbols
2. **Demangle C++ names** — Chuyển đổi mangled names (_ZN...) thành tên có thể đọc được
3. **Phân loại symbols** — Xác định class methods, constructors, destructors, operators, free functions
4. **Group theo class** — Nhóm methods theo class name và namespace
5. **Generate .h headers** — Tạo header files với class declarations, method signatures
6. **Generate .cpp stubs** — Tạo source files với method stubs (bodies cần Ghidra/IDA Pro để phục hồi)

### Thống kê

| Metric | Giá trị |
|--------|---------|
| Tổng C++ symbols | 17,755 |
| Tổng classes | 1,322 |
| GD-specific classes | 609 |
| cocos2d-x classes | 291 |
| Free functions | 257 |
| Generated .h files | 1,323 |
| Generated .cpp files | 1,323 |

### Top Geometry Dash Classes

| Class | Methods | Vai trò |
|-------|---------|---------|
| GJBaseGameLayer | 431 | Base game layer — core gameplay logic |
| GameLevelManager | 311 | Level loading, saving, and management |
| EditorUI | 288 | Level editor user interface |
| GameObject | 258 | Base game object — position, collision, triggers |
| PlayerObject | 227 | Player physics, movement, death, respawn |
| GameStatsManager | 169 | Statistics tracking, achievements |
| LevelEditorLayer | 165 | Level editor core layer |
| GameManager | 162 | Game state, settings, scene management |
| PlayLayer | 129 | Gameplay rendering and update loop |
| GJEffectManager | 120 | Visual effects and particle management |
| FMODAudioEngine | 113 | FMOD audio engine wrapper |
| SetupTriggerPopup | 115 | Trigger configuration UI |

### Top Cocos2d-x Classes

| Class | Methods | Vai trò |
|-------|---------|---------|
| CCNode | 147 | Base scene graph node |
| CCParticleSystem | 124 | Particle system |
| CCDirector | 88 | Scene director / main loop |
| CCSprite | 75 | 2D sprite rendering |

---

## 🛠️ Công cụ sử dụng

| Công cụ | Phiên bản | Chức năng |
|---------|-----------|-----------|
| **jadx** | 1.5.1 | Dịch ngược DEX → Java source code |
| **apktool** | 2.10.0 | Decode resources, smali, AndroidManifest |
| **nm** | GNU Binutils 2.44 | Trích xuất dynamic symbols + demangle |
| **readelf** | GNU Binutils 2.44 | Phân tích ELF headers, sections, relocations |
| **objdump** | GNU Binutils 2.44 | Section headers, all headers |
| **strings** | GNU Binutils 2.44 | Trích xuất readable strings |
| **c++filt** | GNU Binutils 2.44 | C++ name demangling |
| **LIEF** | 1.0.0 | Phân tích sâu: imports/exports/relocations/dependencies |
| **Python 3** | 3.12 | Symbol reconstruction → .h/.cpp generation |

---

## 📜 Điều khoản Sử dụng

1. **Mục đích duy nhất** của repository này là nghiên cứu, học tập, và thử nghiệm phi thương mại.
2. **Tất cả mã nguồn và tài nguyên thuộc về RobTop Games** — người nắm bản quyền gốc.
3. **Nghiêm cấm** mọi hành vi sao chép, phân phối hoặc sử dụng mã nguồn này cho mục đích thương mại khi chưa có sự cho phép của chủ sở hữu bản quyền.
4. **Người dùng chỉ được phép xem nội dung repo, không được tải source code về** khi chưa có sự đồng ý của tác giả (Hieu Louis).
5. **Không** được sử dụng để tạo ra các bản mod, crack, hoặc phá vỡ bảo mật của ứng dụng gốc.
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
