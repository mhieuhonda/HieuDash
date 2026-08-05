# cocos2d/ - Cocos2d-x 2.2.3 engine sources

This directory must contain the official **Cocos2d-x 2.2.3** engine source
tree, which is required to build the project but is NOT checked into this
repository (it is too large and is upstream-tracked separately).

## How to populate

1. Download Cocos2d-x 2.2.3 from the official archive:
   - https://github.com/niclas/cocos2d-x/archive/refs/tags/cocos2d-x-2.2.3.zip
2. Unzip it.
3. Move/rename the inner `cocos2d-x-2.2.3/` folder so that its contents
   sit directly inside this `cocos2d/` directory.

After this, the layout should look like:

```
HieuDash/
├── Classes/
├── Resources/
├── proj.android/
├── proj.ios_mac/
├── proj.win32/
├── proj.linux/
└── cocos2d/
    ├── cocos2dx/
    ├── CocosDenshion/
    ├── extensions/
    ├── CocosDenshion/
    ├── external/
    ├── template/
    └── ...
```

## Why this is required

Cocos2d-x 2.2.3 is the exact engine version that the original
**Geometry Dash 1.0** Android build (com.robtopx.geometryjump, August 2013)
was compiled against. The `proj.android/jni/Android.mk` references
`$(COCOS2DX_ROOT)/cocos2dx/include` etc., which only resolves after this
directory is populated.

## Alternative: git submodule

You can also add cocos2d-x 2.2.3 as a submodule:

```bash
git submodule add -b cocos2d-x-2.2.3 https://github.com/niclas/cocos2d-x.git cocos2d
git -C cocos2d checkout cocos2d-x-2.2.3
```
