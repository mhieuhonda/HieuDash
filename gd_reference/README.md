# GD-Decompiled Reference (v0.4)

This directory contains a **vendor snapshot** of the
[`Wyliemaster/GD-Decompiled`](https://github.com/Wyliemaster/GD-Decompiled)
project, included here as **reference material** for Hieu Dash v0.4.

## Why this exists

Hieu Dash ships with reverse-engineered C++ class skeletons (headers +
stub `.cpp` files) recovered from the original `libgame.so` shipped with
Geometry Dash 1.0. The method **bodies** in those stubs are intentionally
left as `// TODO: implement` placeholders, because they cannot be
recovered from a stripped binary without heavyweight disassembly.

The GD-Decompiled project — authored by independent reverse engineers —
contains **partially reconstructed method bodies** for 21 of the most
important game classes (ButtonSprite, GJBaseGameLayer, ObjectToolbox,
GJGameLevel, LevelPage, LevelSelectLayer, GJDropDownLayer,
EffectGameObject, GJAccountManager, MultilineBitmapFont, OBB2D, …).
Including this snapshot in-tree lets Hieu Dash developers:

* Compare the Hieu Dash stub signatures against the GD-Decompiled
  reconstructed bodies side-by-side.
* Lift implementations into the live `Classes/` tree class-by-class,
  adapting member names, includes, and Cocos2d-x 2.2.3 API calls.
* Audit feature parity between Hieu Dash and the GD 1.0 reference.

## Layout

```
gd_reference/
├── headers/                     # 41 .h files (root + Layers/ + Managers/ + cells/)
│   ├── includes.h               # GD project-wide include aggregator
│   ├── enums.h                  # GD enum definitions
│   ├── delegates.h              # GD delegate/protocol interfaces
│   ├── custom.h                 # GD custom hooks
│   ├── Layers/                  # 21 layer headers (PlayLayer, EditorUI, …)
│   ├── Managers/                # 5 manager headers (GameManager, …)
│   └── cells/                   # 16 cell headers (CommentCell, LevelCell, …)
├── src/                         # 21 .cpp files with reconstructed bodies
│   ├── ButtonSprite.cpp
│   ├── DialogObject.cpp
│   ├── EffectGameObject.cpp
│   ├── GJAccountManager.cpp
│   ├── GJBaseGameLayer.cpp         (28 KB — largest reconstructed source)
│   ├── GJChallengeItem.cpp
│   ├── GJComment.cpp
│   ├── GJDropDownLayer.cpp
│   ├── GJGameLevel.cpp
│   ├── GJMapPack.cpp
│   ├── GJRewardItem.cpp
│   ├── GJRewardObject.cpp
│   ├── LevelPage.cpp
│   ├── LevelSelectLayer.cpp
│   ├── MultilineBitmapFont.cpp
│   ├── OBB2D.cpp
│   ├── ObjectToolbox.cpp           (79 KB — complete object registry)
│   ├── SetIDLayer.cpp
│   ├── SimplePlayer.cpp
│   ├── cells/CommentCell.cpp
│   └── custom.cpp
├── README-GD-Decompiled.md      # upstream README
└── LICENSE-GD-Decompiled        # upstream LICENSE
```

## Attribution

All code in `gd_reference/` is © the GD-Decompiled contributors and is
licensed under the same terms as the upstream repository. See
`LICENSE-GD-Decompiled` for details.

## Notes on compatibility

The GD-Decompiled code targets **Cocos2d-x 2.2.3**, the same engine
version Hieu Dash is built on, so all API calls (`CCSprite::create`,
`CCLabelBMFont`, `CCScale9Sprite`, `CCSpriteFrameCache`, etc.) are
directly compatible.

However, the GD-Decompiled code uses **different member variable names**
than Hieu Dash (e.g. `m_pPlayerSpriteLayer1` vs Hieu Dash's
`m_pMainSprite`). When porting, you must either:

1. Rename the GD members to match Hieu Dash's existing header layout
   (recommended — preserves ABI), or
2. Update the Hieu Dash header to match GD's naming and rebuild any
   dependent code.

The GD code also references a small number of **global helper variables**
(`g_UnkRect`, `g_obUnknownGlobal`, `g_pGameManager`-style singletons)
that are not yet defined in Hieu Dash. These need to be declared in a
shared header (suggested: `Classes/GDReferenceGlobals.h`) before the GD
bodies will link cleanly.

## What is NOT included

The GD-Decompiled repository **does not ship game assets** (PNG sprite
sheets, MP3 music, OGG sound effects, FNT bitmap fonts). It is purely a
**code reference**. For asset completeness, see
[`Resources/RESOURCE_MANIFEST.md`](../Resources/RESOURCE_MANIFEST.md) in
the Hieu Dash tree, which enumerates every asset file referenced by the
game code and whether it is currently present in `Resources/`.
