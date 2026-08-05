#ifndef HIEUDASH_BITMAPFONTCACHE_H_
#define HIEUDASH_BITMAPFONTCACHE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class BitmapFontCache : public cocos2d::CCObject {
public:
    BitmapFontCache();
    void fontWithConfigFile(char const*, float);
    bool init();
    void purgeSharedFontCache();
    void sharedFontCache();
    ~BitmapFontCache();
};

#endif // HIEUDASH_BITMAPFONTCACHE_H_
