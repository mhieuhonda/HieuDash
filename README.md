# Geometry Dash — Decompiled Source

> **Được thực hiện bởi Hieu Louis**

---

## ⚠️ THÔNG BÁO BẢN QUYỀN QUAN TRỌNG

**Bản dịch ngược này được thực hiện vì mục đích chung của cộng đồng và thử nghiệm.**

Đã có sự cho phép hoàn toàn từ bên phía nhà phát hành (BANDISHARE) để thực hiện cuộc dịch ngược này.

### 🚫 Cấm sao chép — READ CAREFULLY

> **CẤM TUYỆT ĐỐI** mọi hành vi sao chép (fork, clone & redistribute, mirror, re-upload) repository này khi **chưa có sự cho phép chính thức bằng văn bản** từ nhà phát triển (**Hieu Louis**).
>
> Vi phạm bản quyền và điều khoản sử dụng này sẽ bị xử lý theo quy định pháp luật về sở hữu trí tuệ và bản quyền hiện hành. Bao gồm nhưng không giới hạn:
>
> - **Điều 9 Luật Sở hữu trí tuệ Việt Nam** — Quyền tác giả và quyền liên quan
> - **Berne Convention for the Protection of Literary and Artistic Works** — Công ước Bern quốc tế về bảo hộ tác quyền
> - **DMCA (Digital Millennium Copyright Act)** — Đạo luật bảo hộ bản quyền kỹ thuật số Hoa Kỳ
>
> Mọi hành vi sao chép trái phép, phân phối lại, hoặc sử dụng thương mại mã nguồn này **sẽ bị truy cứu trách nhiệm pháp lý tối đa**.

---

## 📋 Tổng quan

Đây là kết quả dịch ngược toàn diện (full reverse engineering) của file APK **Geometry Dash Mod 2.2.144** từ BANDISHARE. Cuộc dịch ngược bao gồm:

| Thành phần | Công cụ | Mô tả |
|------------|---------|--------|
| **Java/Kotlin Source** | jadx 1.5.1 | Mã nguồn Java đầy đủ từ DEX bytecode |
| **Smali Bytecode** | apktool 2.10.0 | Smali bytecode trung gian (DALVIK) |
| **Resources** | apktool 2.10.0 | XML layouts, values, drawables, assets |
| **AndroidManifest.xml** | apktool 2.10.0 | Manifest đã decode |
| **Native Libraries (.so)** | readelf / objdump / nm / strings / LIEF | Phân tích ELF header, sections, symbols, imports/exports, relocations |
| **Native .so Raw Binary** | — | File .so nguyên bản (arm64-v8a, armeabi-v7a) |

---

## 📁 Cấu trúc Repository

```
HieuDash/
├── sources/                    # Java/Kotlin source code (jadx decompiled)
│   └── com/                    # Package structure
├── smali/                      # Smali bytecode (apktool baksmali)
│   └── com/                    # Package structure
├── res/                        # Decoded Android resources
│   ├── drawable/               # Vector drawables
│   ├── drawable-*/             # Raster drawables (hdpi, mdpi, xhdpi, etc.)
│   ├── mipmap-*/               # App icons
│   ├── values/                 # Strings, colors, styles, themes
│   └── xml/                    # XML configurations
├── assets/                     # Raw assets (icons, levels, sfx, songs)
├── resources_decompiled/       # Full resource tree from jadx
│   ├── assets/
│   ├── lib/                    # Native .so binaries (jadx extracted)
│   ├── res/
│   └── META-INF/
├── lib/                        # Native libraries (raw .so files)
│   ├── arm64-v8a/              # 64-bit ARM
│   │   ├── libcocos2dcpp.so   # Cocos2d-x game engine (19 MB)
│   │   └── libfmod.so         # FMOD audio engine (1.2 MB)
│   └── armeabi-v7a/            # 32-bit ARM
│       ├── libcocos2dcpp.so   # Cocos2d-x game engine (11 MB)
│       └── libfmod.so         # FMOD audio engine (1 MB)
├── native_analysis/            # Deep .so analysis reports
│   ├── arm64-v8a/
│   │   ├── libcocos2dcpp_elf_header.txt
│   │   ├── libcocos2dcpp_sections.txt
│   │   ├── libcocos2dcpp_dynamic.txt
│   │   ├── libcocos2dcpp_symbols.txt
│   │   ├── libcocos2dcpp_relocations.txt
│   │   ├── libcocos2dcpp_strings.txt
│   │   ├── libcocos2dcpp_rodata_strings.txt
│   │   ├── libcocos2dcpp_nm_dynamic.txt
│   │   ├── libcocos2dcpp_lief_analysis.json
│   │   ├── libcocos2dcpp_lief_report.txt
│   │   ├── libfmod_*.txt/json
│   │   └── ...
│   └── armeabi-v7a/
│       └── (same structure)
├── original/                   # Original META-INF signatures
├── AndroidManifest.xml         # Decoded manifest
├── apktool.yml                 # apktool configuration
└── README.md                   # This file
```

---

## 🔬 Chi tiết phân tích Native Libraries (.so)

### libcocos2dcpp.so — Cocos2d-x Game Engine

Đây là native library chính của game, chứa toàn bộ logic game engine Cocos2d-x 2.2.x:

| KiếnAarch | Exported Functions | Imported Functions | Relocations | Kích thước |
|-----------|-------------------|-------------------|-------------|------------|
| arm64-v8a | 23,543 | 416 | 130,010 | 19 MB |
| armeabi-v7a | 24,092 | 411 | 129,998 | 11 MB |

Các exports bao gồm toàn bộ Cocos2d-x API: rendering, audio, physics, input handling, scene management, và game-specific logic (GJGameLayer, GameManager, EditorLayer, v.v.).

### libfmod.so — FMOD Audio Engine

Thư viện âm thanh FMOD Studio:

| Architecture | Exported Functions | Imported Functions | Relocations | Kích thước |
|-------------|-------------------|-------------------|-------------|------------|
| arm64-v8a | 1,124 | 97 | 2,836 | 1.2 MB |
| armeabi-v7a | 1,228 | 113 | 2,942 | 1 MB |

Cung cấp toàn bộ FMOD API: 3D audio, DSP, effects, mixing, và streaming.

---

## 🛠️ Công cụ sử dụng

| Công cụ | Phiên bản | Chức năng |
|---------|-----------|-----------|
| **jadx** | 1.5.1 | Dịch ngược DEX → Java source code |
| **apktool** | 2.10.0 | Decode resources, smali bytecode, AndroidManifest |
| **readelf** | GNU Binutils 2.44 | Phân tích ELF headers, sections, symbols |
| **objdump** | GNU Binutils 2.44 | Phân tích section headers, all headers |
| **nm** | GNU Binutils 2.44 | Liệt kê dynamic symbols |
| **strings** | GNU Binutils 2.44 | Trích xuất readable strings |
| **LIEF** | 1.0.0 | Phân tích sâu: imports, exports, relocations, dependencies |

---

## 📜 Điều khoản sử dụng

1. **Mục đích duy nhất** của repository này là nghiên cứu, học tập, và thử nghiệm cộng đồng.
2. **KHÔNG** được sử dụng mã nguồn này cho mục đích thương mại dưới bất kỳ hình thức nào.
3. **KHÔNG** được phân phối lại (re-distribute) repository này hoặc bất kỳ phần nào của nó mà không có sự cho phép bằng văn bản từ **Hieu Louis**.
4. **KHÔNG** được sử dụng để tạo ra các bản mod, crack, hoặc phá vỡ bảo mật của ứng dụng gốc.
5. Mọi công bố hoặc sử dụng kết quả dịch ngược trong bài viết, tutorial, hay project khác **phải ghi rõ nguồn** và **được phép** từ tác giả.

---

## 📞 Liên hệ

- **Tác giả:** Hieu Louis
- **GitHub:** [mhieuhonda](https://github.com/mhieuhonda)

---

<div align="center">

**© 2024 Hieu Louis. All rights reserved.**

**This repository and its contents are protected under copyright law.**
**Unauthorized reproduction or distribution is strictly prohibited.**

</div>
